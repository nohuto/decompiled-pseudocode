/*
 * XREFs of ?EnsureVBlankEvent@CCompClockInfo@DirectComposition@@AEBA_NXZ @ 0x1400A963C
 * Callers:
 *     NtDCompositionWaitForCompositorClock @ 0x1400A9220 (NtDCompositionWaitForCompositorClock.c)
 *     ?Initialize@CCompClockInfo@DirectComposition@@AEAAJXZ @ 0x1401BF394 (-Initialize@CCompClockInfo@DirectComposition@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CCompClockInfo::EnsureVBlankEvent(
        DirectComposition::CCompClockInfo *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  HANDLE Handle; // [rsp+40h] [rbp+8h] BYREF

  if ( !*((_QWORD *)this + 3) )
  {
    v6 = *((unsigned int *)this + 3);
    v7 = *((unsigned int *)this + 4);
    LOBYTE(a4) = 1;
    Handle = 0LL;
    if ( (int)DxgkOpenVerticalBlankEventInternal(v7, v6, 0x100000LL, a4, &Handle) >= 0 )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)this + 3, (signed __int64)Handle, 0LL) )
        NtClose(Handle);
    }
  }
  return *((_QWORD *)this + 3) != 0LL;
}
