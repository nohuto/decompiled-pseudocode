/*
 * XREFs of MiConvertLockedSmallPageToLarge @ 0x1403CFBF0
 * Callers:
 *     MiConvertSmallPageRangeToLarge @ 0x1403CF990 (MiConvertSmallPageRangeToLarge.c)
 *     MiDeleteClusterPage @ 0x1403D0168 (MiDeleteClusterPage.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiCanPfnOriginalPteBeLost @ 0x140401770 (MiCanPfnOriginalPteBeLost.c)
 */

char __fastcall MiConvertLockedSmallPageToLarge(__int64 a1, __int64 a2, char a3, int a4)
{
  signed __int64 v6; // rdx
  signed __int64 v7; // rax
  signed __int64 v8; // rdx
  unsigned int v9; // esi
  __int64 v10; // rcx
  signed __int64 v11; // rdx
  signed __int64 v12; // rcx
  int v13; // eax
  unsigned __int64 v14; // rax
  int v15; // r10d
  __int64 v16; // rax
  _QWORD *v17; // r11

  if ( a4 )
  {
    *(_QWORD *)(a1 + 24) &= 0xC7FFFFFFFFFFFFFFuLL;
    *(_QWORD *)(a1 + 24) &= 0xF80000FFFFFFFFFFuLL;
    *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 24) & 0xC000000000000000uLL | 1;
    *(_DWORD *)(a1 + 32) = *(_DWORD *)(a1 + 32) & 0xFFFF0000 | 2;
    if ( a1 != a2 )
      *(_DWORD *)(a1 + 32) = *(_DWORD *)(a1 + 32) & 0xFFF8FFFF | 0x60000;
  }
  if ( *(__int64 *)(a1 + 40) < 0 )
    *(_QWORD *)(a1 + 40) &= ~0x8000000000000000uLL;
  if ( (*(_QWORD *)(a1 + 40) & 0x20000000000000LL) == 0 )
    *(_DWORD *)(a1 + 32) &= 0xF8FFFFFF;
  v6 = *(_QWORD *)(a1 + 40);
  v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 40), v6 & 0x8FFFFFFFFFFFFFFFuLL, v6);
  if ( v6 != v7 )
  {
    do
    {
      v8 = v7;
      v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 40), v7 & 0x8FFFFFFFFFFFFFFFuLL, v7);
    }
    while ( v8 != v7 );
  }
  v9 = 0;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  v10 = *(_QWORD *)(a1 + 40);
  v11 = _InterlockedCompareExchange64(
          (volatile signed __int64 *)(a1 + 40),
          v10 & 0xFFFFFF0000000000uLL,
          *(_QWORD *)(a1 + 40));
  if ( v10 != v11 )
  {
    do
    {
      v12 = v11;
      v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 40), v11 & 0xFFFFFF0000000000uLL, v11);
    }
    while ( v12 != v11 );
  }
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 24) &= ~0x4000000000000000uLL;
  *(_QWORD *)(a1 + 40) |= 0x10000000000uLL;
  v13 = *(_DWORD *)(a1 + 36);
  if ( a1 == a2 )
  {
    *(_DWORD *)(a1 + 36) = ((unsigned __int8)~a3 << 27) ^ (v13 ^ ((unsigned __int8)~a3 << 27)) & 0xE7FFFFFF;
    v16 = *(_QWORD *)(a2 + 40);
    if ( (*(_DWORD *)(a1 + 32) & 0x40000000) != 0 )
      v14 = v16 | 0x20000000000LL;
    else
      v14 = v16 & 0xFFFFFDFFFFFFFFFFuLL;
    *(_QWORD *)(a2 + 40) = v14;
  }
  else
  {
    *(_DWORD *)(a1 + 36) = v13 & 0xE7FFFFFF;
    LODWORD(v14) = *(_DWORD *)(a1 + 32) >> 30;
    if ( (*(_DWORD *)(a1 + 32) & 0x40000000) != 0 )
    {
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v9 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v9);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(a2 + 24) < 0 );
      }
      v14 = *(_QWORD *)(a2 + 40) | 0x20000000000LL;
      *(_QWORD *)(a2 + 40) = v14;
      _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
  }
  v15 = *(_DWORD *)(a1 + 32);
  if ( (v15 & 0x80000) != 0 )
  {
    LODWORD(v14) = MiCanPfnOriginalPteBeLost(a1);
    if ( (_DWORD)v14 )
    {
      LOBYTE(v14) = (v15 & 0x100000) == 0;
      if ( (((*v17 & 8LL) != 0) & (unsigned __int8)v14) != 0 )
      {
        v14 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF7uLL;
        *(_QWORD *)(a1 + 16) = v14;
      }
    }
  }
  *(_DWORD *)(a1 + 32) = v15 & 0xFFEFFFFF;
  return v14;
}
