/*
 * XREFs of MiCopyProtoPtes @ 0x1402A9430
 * Callers:
 *     <none>
 * Callees:
 *     RtlClearBitsEx @ 0x140250900 (RtlClearBitsEx.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x1402A96FC (MiLockSpecialPurposeMemoryCachedPage.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall MiCopyProtoPtes(__int64 *a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // r13
  __int64 v5; // rbx
  unsigned __int64 v6; // rdi
  __int64 v7; // rsi
  unsigned __int64 *v9; // r12
  __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rsi
  unsigned int v16; // ebp
  unsigned int v17; // r15d
  unsigned __int64 v18; // rax
  char v19; // cl
  volatile signed __int32 *v20; // rax
  unsigned __int64 v21; // rdi
  unsigned __int64 *v23; // r10
  unsigned int i; // [rsp+60h] [rbp+8h]
  int v25; // [rsp+68h] [rbp+10h] BYREF
  unsigned __int64 *v26; // [rsp+70h] [rbp+18h]

  v3 = a1[14];
  v4 = a3;
  v5 = *a1;
  v6 = a2;
  v7 = a1[1];
  if ( a2 != v3 )
    RtlCopyVolatileMemory((void *)(v7 + 8 * v3), (const void *)(v5 + 8 * v3), 8 * (a2 - v3));
  a1[14] = v6 + v4;
  v9 = (unsigned __int64 *)(v5 + 8 * v6);
  v26 = (unsigned __int64 *)(v7 + 8 * v6);
  while ( 2 )
  {
    if ( !v4 )
      return 0LL;
    v10 = *((unsigned int *)a1 + 30);
    for ( i = *((_DWORD *)a1 + 30); ; v10 = i )
    {
      while ( 1 )
      {
        v11 = *v9;
        v12 = *v9;
        if ( (*v9 & 1) != 0 )
          goto LABEL_13;
        if ( (*v9 & 0xC00) != 0x800 )
        {
          v18 = *v9;
LABEL_29:
          a3 = a1[5];
          *(_BYTE *)((v6 >> 3) + a3) &= ~(1 << (v6 & 7));
          goto LABEL_30;
        }
        if ( !v11 || !qword_140E2D8C0 || (qword_140E2D8C0 & v11) != 0 )
        {
          v12 = *v9;
          if ( qword_140E2D8C0 )
          {
            if ( (v11 & 0x10) != 0 )
              v12 = v11 & 0xFFFFFFFFFFFFFFEFuLL;
            else
              v12 = v11 & qword_140E2D8C8;
          }
LABEL_13:
          v13 = (v12 >> 12) & 0xFFFFFFFFFFLL;
          v14 = 6 * v13;
          if ( v13 <= qword_140E2D920 && ((*(_QWORD *)(48 * v13 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
            break;
        }
      }
      v15 = 48 * v13 - 0x220000000000LL;
      v16 = v10 & 1;
      if ( (v10 & 1) != 0 )
      {
        v25 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v25);
          while ( *(__int64 *)(v15 + 24) < 0 );
        }
      }
      else
      {
        v17 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v17 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v14, v10, a3) )
            {
              HvlNotifyLongSpinWait(v17);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(__int64 *)(v15 + 24) < 0 );
        }
      }
      if ( *v9 == v11 )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    if ( (*(_DWORD *)(*(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v15 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x20) != 0 )
    {
      if ( (i & 2) != 0 )
        v16 |= 2u;
      v15 = MiLockSpecialPurposeMemoryCachedPage(v15, v16, a3);
    }
    v18 = *v9;
    if ( !v15 )
      goto LABEL_29;
    ++*((_DWORD *)a1 + 31);
    *((_DWORD *)a1 + 30) |= 1u;
    v19 = *(_BYTE *)(v15 + 34);
    if ( (v19 & 8) == 0 )
    {
      if ( (v18 & 1) == 0 && (v19 & 0x20) != 0 )
      {
        v20 = (volatile signed __int32 *)&unk_140EF908C;
        goto LABEL_25;
      }
LABEL_30:
      v23 = v26;
      ++v9;
      ++v6;
      *v26 = v18;
      v26 = v23 + 1;
      --v4;
      continue;
    }
    break;
  }
  v20 = (volatile signed __int32 *)&unk_140EF9090;
LABEL_25:
  _InterlockedIncrement(v20);
  v21 = v6 + 1;
  if ( v21 != 512 )
    RtlClearBitsEx((__int64)(a1 + 4), v21, 512 - v21);
  return 3221225473LL;
}
