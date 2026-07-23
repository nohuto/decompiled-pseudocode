/*
 * XREFs of KiRemoveEntryTimer @ 0x1403E8730
 * Callers:
 *     KiInsertTimerTable @ 0x1403B6998 (KiInsertTimerTable.c)
 *     KiAdjustTimerDueTimes @ 0x1403E84DC (KiAdjustTimerDueTimes.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

signed __int64 __fastcall KiRemoveEntryTimer(__int64 a1, __int64 a2, unsigned int a3, volatile signed __int64 **a4)
{
  unsigned int v4; // r10d
  __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned __int64 v8; // rbp
  unsigned __int64 v10; // r15
  __int64 v11; // r12
  volatile signed __int64 result; // rax
  volatile signed __int64 *v13; // rbx
  unsigned int v14; // esi
  unsigned int v15; // r8d
  __int64 v16; // rbp
  unsigned int v17; // esi
  unsigned int v18; // edi
  volatile signed __int32 *v19; // rdi
  char v20; // [rsp+60h] [rbp+18h]

  v20 = a3;
  v4 = *(unsigned __int8 *)(a2 + 58);
  v6 = *(_QWORD *)(a2 + 32);
  v7 = a2 + 32;
  v8 = a3;
  v10 = 32 * (((unsigned __int64)v4 << 8) + a3 + 16LL);
  v11 = 32 * (((v4 ^ 1LL) << 8) + a3 + 16LL);
  if ( *(_QWORD *)(v6 + 8) != v7 || (result = *(_QWORD *)(v7 + 8), *(_QWORD *)result != v7) )
    __fastfail(3u);
  *(_QWORD *)result = v6;
  *(_QWORD *)(v6 + 8) = result;
  if ( result == v6 )
  {
    *(_DWORD *)(v10 + a1 + 28) = -1;
    if ( (_BYTE)v4 )
    {
      v13 = (volatile signed __int64 *)(a1 + 32 * (a3 + 16LL));
      if ( _interlockedbittestandset64((volatile signed __int32 *)v13, 0LL) )
      {
        _mm_pause();
      }
      else if ( v13 )
      {
LABEL_15:
        if ( *(_DWORD *)(v10 + a1 + 28) == -1 && *(_DWORD *)(v11 + a1 + 28) == -1 )
        {
          if ( KiSerializeTimerExpiration )
          {
            v15 = a3 & 0x3F;
            v16 = 8 * (v8 >> 6);
          }
          else
          {
            v15 = *(unsigned __int8 *)(a1 - 16431);
            v16 = v8 << 6;
          }
          result = v15;
          _interlockedbittestandreset64(
            (volatile signed __int32 *)(qword_140FC2698[2 * *(unsigned __int8 *)(a1 - 16432)] + v16),
            v15);
        }
        _InterlockedAnd64(v13, 0LL);
        return result;
      }
      result = (volatile signed __int64)*a4;
      _InterlockedAnd64(*a4, 0LL);
      v13 = (volatile signed __int64 *)(a1 + 32 * (a3 + 16LL));
      v17 = 0;
      v18 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)v13, 0LL) )
      {
        do
        {
          if ( (++v18 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v18);
          }
          else
          {
            _mm_pause();
          }
          result = *v13;
        }
        while ( *v13 );
      }
      v19 = (volatile signed __int32 *)(a1 + 32 * (v8 + 272));
      while ( _interlockedbittestandset64(v19, 0LL) )
      {
        do
        {
          if ( (++v17 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v17);
          }
          else
          {
            _mm_pause();
          }
          result = *(_QWORD *)v19;
        }
        while ( *(_QWORD *)v19 );
      }
      *a4 = (volatile signed __int64 *)v19;
    }
    else
    {
      v13 = (volatile signed __int64 *)(a1 + 32 * (a3 + 272LL));
      v14 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)v13, 0LL) )
      {
        do
        {
          if ( (++v14 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v14);
          }
          else
          {
            _mm_pause();
          }
          result = *v13;
        }
        while ( *v13 );
      }
    }
    LOBYTE(a3) = v20;
    goto LABEL_15;
  }
  return result;
}
