/*
 * XREFs of HalpSetSystemInformation @ 0x140B10D50
 * Callers:
 *     <none>
 * Callees:
 *     HalpGetCpuInfo @ 0x1404C55D0 (HalpGetCpuInfo.c)
 *     HalpRegisterProfileSourceInterruptHandler @ 0x14052E258 (HalpRegisterProfileSourceInterruptHandler.c)
 *     HalpSetProfileSourceInterval @ 0x140530C2C (HalpSetProfileSourceInterval.c)
 *     HalpRegisterProcessorTraceInterruptHandler @ 0x14059A9EC (HalpRegisterProcessorTraceInterruptHandler.c)
 *     HalpRegisterTimerInterruptHandler @ 0x14059AA8C (HalpRegisterTimerInterruptHandler.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     HaliSetSystemInformation @ 0x1407767B4 (HaliSetSystemInformation.c)
 *     HalpRegisterPmuNotification @ 0x140B10EBC (HalpRegisterPmuNotification.c)
 *     HalpUnregisterPmuNotification @ 0x140B113CC (HalpUnregisterPmuNotification.c)
 */

__int64 __fastcall HalpSetSystemInformation(int a1, __int64 a2, __int64 *a3)
{
  int v4; // ebx
  unsigned __int8 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0;
  v4 = a2;
  switch ( a1 )
  {
    case 0:
      if ( (_DWORD)a2 == 8 )
        return HalpSetProfileSourceInterval(*(unsigned int *)a3, (__int64)a3 + 4);
      return 3221225476LL;
    case 1:
      if ( (_DWORD)a2 != 8 )
        return 3221225476LL;
      if ( (HalpFeatureBits & 1) != 0 )
        return HalpRegisterProfileSourceInterruptHandler(*a3);
      else
        return 3221225473LL;
    case 10:
      if ( (_DWORD)a2 != 8 )
        return 3221225476LL;
      return HalpRegisterTimerInterruptHandler(*a3);
    case 19:
      if ( !HalpGetCpuInfo(0LL, 0LL, 0LL, &v6) || v6 != 2 )
        return 3221225659LL;
      if ( v4 != 8 )
        return 3221225476LL;
      if ( (HalpFeatureBits & 0x41) == 0x41 )
        return HalpRegisterProcessorTraceInterruptHandler(*a3);
      else
        return 3221225659LL;
    case 20:
      if ( (unsigned int)(a2 - 288) > 0x1F6 )
        return 3221225476LL;
      return guard_dispatch_icall_no_overrides((__int64)a3, 0LL);
    case 21:
      if ( (_DWORD)a2 != 272 )
        return 3221225476LL;
      return guard_dispatch_icall_no_overrides((__int64)a3, a2);
    case 24:
      if ( (unsigned int)a2 >= 0x18 )
        return HalpRegisterPmuNotification(a3);
      return 3221225476LL;
    case 25:
      if ( (unsigned int)a2 < 8 )
        return 3221225476LL;
      return HalpUnregisterPmuNotification(a3);
    default:
      return HaliSetSystemInformation(a1, a2, (int *)a3);
  }
}
