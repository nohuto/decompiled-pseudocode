/*
 * XREFs of HalpInterruptSetRemappedDestinationHv @ 0x140425F5C
 * Callers:
 *     HalpInterruptSetDestination @ 0x140425E10 (HalpInterruptSetDestination.c)
 * Callees:
 *     HalpReleaseHighLevelLock @ 0x1402C4DEC (HalpReleaseHighLevelLock.c)
 *     HalpInterruptSetLineStateInternal @ 0x14032DC5C (HalpInterruptSetLineStateInternal.c)
 *     HalpHvRetargetIoApicDeviceInterrupt @ 0x140425D3C (HalpHvRetargetIoApicDeviceInterrupt.c)
 *     HalpHvRetargetDeviceMsiInterrupt @ 0x1404260C0 (HalpHvRetargetDeviceMsiInterrupt.c)
 *     HalpInterruptFindControllerAndLineState @ 0x140426644 (HalpInterruptFindControllerAndLineState.c)
 *     HalpInterruptFindLinesForGsiRange @ 0x140426C08 (HalpInterruptFindLinesForGsiRange.c)
 *     HalpAcquireHighLevelLock @ 0x140426EEC (HalpAcquireHighLevelLock.c)
 *     HalpInterruptSetProblemEx @ 0x14042A15C (HalpInterruptSetProblemEx.c)
 */

__int64 __fastcall HalpInterruptSetRemappedDestinationHv(unsigned int *a1, int *a2, __int64 a3)
{
  int v3; // eax
  int v6; // eax
  unsigned int v7; // edi
  int ControllerAndLineState; // eax
  __int64 v10; // rsi
  int v11; // eax
  unsigned int v12; // ebx
  _DWORD *LinesForGsiRange; // rax
  unsigned __int8 v14; // bl
  __int64 v15; // [rsp+30h] [rbp-10h] BYREF
  _DWORD v16[2]; // [rsp+38h] [rbp-8h] BYREF
  char v17; // [rsp+68h] [rbp+28h] BYREF
  __int64 v18; // [rsp+78h] [rbp+38h] BYREF

  v3 = *a2;
  v18 = 0LL;
  v17 = 0;
  v15 = 0LL;
  if ( v3 )
  {
    if ( v3 == 3 )
    {
      v6 = HalpHvRetargetDeviceMsiInterrupt(a2, a3);
      v7 = v6;
      if ( v6 < 0 )
        HalpInterruptSetProblemEx(0, 37, v6, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 723);
      return v7;
    }
    return (unsigned int)-1073741811;
  }
  if ( !a1 )
    return (unsigned int)-1073741811;
  ControllerAndLineState = HalpInterruptFindControllerAndLineState(*a1, &v18, &v15, a2);
  if ( ControllerAndLineState < 0 )
  {
    HalpInterruptSetProblemEx(
      v18,
      18,
      ControllerAndLineState,
      (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c",
      741);
    return (unsigned int)-1073741811;
  }
  v10 = v18;
  v11 = HalpHvRetargetIoApicDeviceInterrupt(*(_DWORD *)(v18 + 256), v15, a3, &v17);
  v7 = v11;
  if ( v11 < 0 )
  {
    HalpInterruptSetProblemEx(v10, 37, v11, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 755);
    return v7;
  }
  if ( v17 )
  {
    v12 = *a1;
    LinesForGsiRange = (_DWORD *)HalpInterruptFindLinesForGsiRange(v12, v12 + 1);
    if ( LinesForGsiRange )
    {
      v16[0] = LinesForGsiRange[4];
      v16[1] = v12 + LinesForGsiRange[5] - LinesForGsiRange[7];
      v14 = HalpAcquireHighLevelLock(&HalpDeviceBlockUnblockPushLock.Timer.DueTime.QuadPart);
      v7 = HalpInterruptSetLineStateInternal(v10, (__int64)v16, v15);
      HalpReleaseHighLevelLock(&HalpDeviceBlockUnblockPushLock.Timer.DueTime.QuadPart, v14);
      return v7;
    }
    HalpInterruptSetProblemEx(
      v10,
      18,
      -1073741275,
      (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c",
      769);
    return (unsigned int)-1073741811;
  }
  return v7;
}
