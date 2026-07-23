/*
 * XREFs of RtlpComputeEpilogueOffset @ 0x140555648
 * Callers:
 *     IopTimerDispatch @ 0x1404CD7F0 (IopTimerDispatch.c)
 *     CmpLazyFlushDpcRoutine @ 0x1404D7B50 (CmpLazyFlushDpcRoutine.c)
 *     ExpTimeRefreshDpcRoutine @ 0x1404E8D60 (ExpTimeRefreshDpcRoutine.c)
 *     FsRtlTruncateSmallMcb @ 0x140527050 (FsRtlTruncateSmallMcb.c)
 *     PopThermalZoneDpc @ 0x14060A8D0 (PopThermalZoneDpc.c)
 *     ExpTimerDpcRoutine @ 0x1406D35D0 (ExpTimerDpcRoutine.c)
 * Callees:
 *     KeExitRetpoline @ 0x14048727C (KeExitRetpoline.c)
 *     sub_140C7FA90 @ 0x140C7FA90 (sub_140C7FA90.c)
 *     KeGuardDispatchICall @ 0x140C816F0 (KeGuardDispatchICall.c)
 */

__int64 __fastcall RtlpComputeEpilogueOffset(__int64 a1, _QWORD *a2, signed __int64 a3)
{
  _QWORD *v3; // rbx
  unsigned int i; // eax
  __int64 v6; // rcx
  _QWORD *v7; // r9
  signed __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  for ( i = 0; i < 0x19; ++i )
    *a2++ ^= a3;
  *(_DWORD *)v3 ^= a3;
  v6 = *((int *)v3 + 49);
  if ( a3 && (_DWORD)v6 )
  {
    v7 = &a2[v6 - 1];
    while ( 1 )
    {
      *v7-- ^= a3;
      v9 = __ROR8__(a3, v6);
      _bittestandcomplement64(&v9, v9 & 0x3F);
      v6 = (unsigned int)(v6 - 1);
      if ( !(_DWORD)v6 )
        break;
      a3 = v9;
    }
  }
  if ( (*((_DWORD *)v3 + 631) & 0x100000) != 0 )
    KeExitRetpoline(v6, a2);
  else
    _mm_lfence();
  sub_140C7FA90(a1, v3, 0LL, 0LL);
  return ((__int64 (__fastcall *)(_QWORD *, __int64))v3[36])(v3 + 247, 1LL);
}
