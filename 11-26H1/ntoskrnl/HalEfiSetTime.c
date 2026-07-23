/*
 * XREFs of HalEfiSetTime @ 0x1405890C8
 * Callers:
 *     HalSetRealTimeClock @ 0x14057A830 (HalSetRealTimeClock.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     RtlpTimeToTimeFields @ 0x140449E70 (RtlpTimeToTimeFields.c)
 *     HalpEfiStartRuntimeCode @ 0x14046BA80 (HalpEfiStartRuntimeCode.c)
 *     HalpConvertEfiToNtStatus @ 0x14046BAD8 (HalpConvertEfiToNtStatus.c)
 *     HalpEfiIncrementEfiCall @ 0x140488E18 (HalpEfiIncrementEfiCall.c)
 *     HalpEfiDecrementEfiCall @ 0x1404A5D24 (HalpEfiDecrementEfiCall.c)
 *     HalpCallEfiGetTime @ 0x1405893AC (HalpCallEfiGetTime.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall HalEfiSetTime(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // r8
  __int64 v4; // r8
  __int128 v5; // [rsp+20h] [rbp-30h] BYREF
  __int64 v6; // [rsp+30h] [rbp-20h] BYREF
  __int128 v7; // [rsp+38h] [rbp-18h] BYREF

  v7 = 0LL;
  v5 = 0LL;
  if ( !HalEfiRuntimeServicesTable || !*HalEfiRuntimeServicesTable || !HalEfiRuntimeServicesTable[1] )
    return 3221225474LL;
  if ( !a1 )
    return 3221225485LL;
  HalpEfiIncrementEfiCall((volatile signed __int32 *)&HalpDeviceBlockUnblockPushLock.ReadOperationCount + 1);
  HalpEfiStartRuntimeCode(1u);
  HalpCallEfiGetTime(&v7);
  _InterlockedAnd((volatile signed __int32 *)&KeGetPcr()->HalReserved[8], 0xFFFFFFFE);
  HalpEfiDecrementEfiCall((volatile signed __int32 *)&HalpDeviceBlockUnblockPushLock.ReadOperationCount + 1);
  result = HalpConvertEfiToNtStatus(v3);
  if ( (int)result >= 0 )
  {
    if ( (unsigned __int64)(SWORD6(v7) + 1440LL) > 0xB40 )
    {
      if ( ExpRealTimeIsUniversal )
      {
        v6 = *a1;
        WORD6(v7) = 0;
      }
      else
      {
        WORD6(v7) = MEMORY[0xFFFFF78000000020] / 0x23C34600uLL;
        v6 = *a1 - (unsigned __int64)PsGetCurrentServerSiloGlobals()[76].Blink[27].Blink;
        if ( MEMORY[0xFFFFF78000000240] )
        {
          if ( MEMORY[0xFFFFF78000000240] == 1 )
          {
            BYTE14(v7) = 1;
          }
          else if ( MEMORY[0xFFFFF78000000240] == 2 )
          {
            BYTE14(v7) = 3;
          }
          goto LABEL_12;
        }
      }
      BYTE14(v7) = 0;
    }
    else
    {
      v6 = *a1 - 600000000LL * SWORD6(v7);
    }
LABEL_12:
    RtlpTimeToTimeFields(&v6, &v5);
    LOWORD(v7) = v5;
    BYTE2(v7) = BYTE2(v5);
    BYTE3(v7) = BYTE4(v5);
    BYTE4(v7) = BYTE6(v5);
    BYTE5(v7) = BYTE8(v5);
    BYTE6(v7) = BYTE10(v5);
    DWORD2(v7) = 1000000 * SWORD6(v5);
    HalpEfiIncrementEfiCall((volatile signed __int32 *)&HalpDeviceBlockUnblockPushLock.ReadOperationCount + 1);
    HalpEfiIncrementEfiCall((volatile signed __int32 *)&HalpDeviceBlockUnblockPushLock.ReadTransferCount + 1);
    HalpEfiStartRuntimeCode(2u);
    ((void (__fastcall *)(__int128 *))HalEfiRuntimeServicesTable[1])(&v7);
    _InterlockedAnd((volatile signed __int32 *)&KeGetPcr()->HalReserved[8], 0xFFFFFFFD);
    HalpEfiDecrementEfiCall((volatile signed __int32 *)&HalpDeviceBlockUnblockPushLock.ReadTransferCount + 1);
    HalpEfiDecrementEfiCall((volatile signed __int32 *)&HalpDeviceBlockUnblockPushLock.ReadOperationCount + 1);
    return HalpConvertEfiToNtStatus(v4);
  }
  return result;
}
