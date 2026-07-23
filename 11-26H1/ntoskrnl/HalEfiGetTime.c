/*
 * XREFs of HalEfiGetTime @ 0x1405359D4
 * Callers:
 *     HalQueryRealTimeClock @ 0x1404495B0 (HalQueryRealTimeClock.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     RtlpTimeFieldsToTime @ 0x14044A428 (RtlpTimeFieldsToTime.c)
 *     HalpEfiStartRuntimeCode @ 0x14046BA80 (HalpEfiStartRuntimeCode.c)
 *     HalpConvertEfiToNtStatus @ 0x14046BAD8 (HalpConvertEfiToNtStatus.c)
 *     HalpEfiIncrementEfiCall @ 0x140488E18 (HalpEfiIncrementEfiCall.c)
 *     HalpEfiDecrementEfiCall @ 0x1404A5D24 (HalpEfiDecrementEfiCall.c)
 *     HalpCallEfiGetTime @ 0x1405893AC (HalpCallEfiGetTime.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall HalEfiGetTime(_QWORD *a1)
{
  __int64 v3; // r8
  int v4; // edi
  _WORD v5[8]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v6; // [rsp+30h] [rbp-20h] BYREF
  __int128 v7; // [rsp+38h] [rbp-18h] BYREF

  v6 = 0LL;
  v7 = 0LL;
  if ( !HalEfiRuntimeServicesTable || !*HalEfiRuntimeServicesTable )
    return 3221225474LL;
  if ( !a1 )
    return 3221225485LL;
  HalpEfiIncrementEfiCall((volatile signed __int32 *)&HalpDeviceBlockUnblockPushLock.ReadOperationCount + 1);
  HalpEfiStartRuntimeCode(1u);
  HalpCallEfiGetTime(&v7);
  _InterlockedAnd((volatile signed __int32 *)&KeGetPcr()->HalReserved[8], 0xFFFFFFFE);
  HalpEfiDecrementEfiCall((volatile signed __int32 *)&HalpDeviceBlockUnblockPushLock.ReadOperationCount + 1);
  v4 = HalpConvertEfiToNtStatus(v3);
  if ( v4 >= 0 )
  {
    v5[0] = v7;
    v5[1] = BYTE2(v7);
    v5[2] = BYTE3(v7);
    v5[3] = BYTE4(v7);
    v5[4] = BYTE5(v7);
    v5[5] = BYTE6(v7);
    v5[6] = DWORD2(v7) / 0xF4240;
    v5[7] = 7;
    if ( RtlpTimeFieldsToTime((__int64)v5, &v6) )
    {
      if ( (unsigned int)(SWORD6(v7) + 1440) > 0xB40 )
        *a1 = (char *)PsGetCurrentServerSiloGlobals()[76].Blink[27].Blink + v6;
      else
        *a1 = v6 + 600000000LL * SWORD6(v7);
    }
    else
    {
      return (unsigned int)-1073741823;
    }
  }
  return (unsigned int)v4;
}
