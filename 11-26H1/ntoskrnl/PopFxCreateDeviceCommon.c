/*
 * XREFs of PopFxCreateDeviceCommon @ 0x1405077F0
 * Callers:
 *     PopFxAcpiRegisterDevice @ 0x140615144 (PopFxAcpiRegisterDevice.c)
 *     PopFxRegisterDeviceWorker @ 0x140B1DC50 (PopFxRegisterDeviceWorker.c)
 * Callees:
 *     PopFxDuplicateUniqueId @ 0x14052EE3C (PopFxDuplicateUniqueId.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopFxCreateDeviceCommon(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 *a5)
{
  int v6; // ebx
  __int64 Pool2; // rax
  __int64 v8; // rdx
  _QWORD *v10; // rax
  __int128 v11; // [rsp+20h] [rbp-18h] BYREF

  v11 = 0LL;
  v6 = PopFxDuplicateUniqueId(a1, &v11);
  if ( v6 < 0 )
  {
LABEL_4:
    if ( *((_QWORD *)&v11 + 1) )
      ExFreePoolWithTag(*((PVOID *)&v11 + 1), 0x4D584650u);
    return (unsigned int)v6;
  }
  Pool2 = ExAllocatePool2(0x40uLL);
  v8 = Pool2;
  if ( !Pool2 )
  {
    v6 = -1073741670;
    goto LABEL_4;
  }
  *(_OWORD *)(Pool2 + 216) = v11;
  *(_QWORD *)(Pool2 + 8) = Pool2;
  *(_QWORD *)Pool2 = Pool2;
  v10 = (_QWORD *)(Pool2 + 200);
  v10[1] = v10;
  *v10 = v10;
  *(_WORD *)(v8 + 608) = 0;
  *(_BYTE *)(v8 + 610) = 6;
  *(_DWORD *)(v8 + 612) = 1;
  *(_QWORD *)(v8 + 624) = v8 + 616;
  *(_QWORD *)(v8 + 616) = v8 + 616;
  *(_QWORD *)(v8 + 400) = 0LL;
  *(_QWORD *)(v8 + 408) = 0LL;
  *(_BYTE *)(v8 + 408) = 9;
  *(_QWORD *)(v8 + 424) = v8 + 416;
  *(_QWORD *)(v8 + 416) = v8 + 416;
  *(_QWORD *)(v8 + 432) = 0LL;
  *(_DWORD *)(v8 + 468) = 0;
  *(_WORD *)(v8 + 464) = 0;
  *(_BYTE *)(v8 + 467) = 0;
  *(_QWORD *)(v8 + 496) = PopFxIdleTimeoutDpcRoutine;
  *(_DWORD *)(v8 + 472) = 275;
  *(_QWORD *)(v8 + 504) = v8;
  *(_QWORD *)(v8 + 528) = 0LL;
  *(_QWORD *)(v8 + 488) = 0LL;
  *(_QWORD *)(v8 + 360) = PopFxDeviceWork;
  *(_QWORD *)(v8 + 368) = v8;
  *(_QWORD *)(v8 + 344) = 0LL;
  *(_QWORD *)(v8 + 1264) = PopFxHandleReportDevicePoweredOn;
  *(_QWORD *)(v8 + 1272) = v8;
  *(_QWORD *)(v8 + 1248) = 0LL;
  *(_QWORD *)(v8 + 1192) = 0LL;
  *(_QWORD *)(v8 + 976) = PopFxDirectedPowerTransitionWorker;
  *(_QWORD *)(v8 + 984) = v8;
  *(_QWORD *)(v8 + 960) = 0LL;
  *(_QWORD *)(v8 + 1032) = 0LL;
  *(_BYTE *)(v8 + 1032) = 8;
  *(_QWORD *)(v8 + 1048) = v8 + 1040;
  *(_QWORD *)(v8 + 1040) = v8 + 1040;
  *(_QWORD *)(v8 + 1056) = 0LL;
  *(_DWORD *)(v8 + 1092) = 0;
  *(_WORD *)(v8 + 1088) = 0;
  *(_BYTE *)(v8 + 1091) = 0;
  *(_QWORD *)(v8 + 1120) = PopFxDirectedWorkOrderWatchdog;
  *(_QWORD *)(v8 + 1128) = v8 + 1016;
  *(_DWORD *)(v8 + 1096) = 275;
  *(_QWORD *)(v8 + 1152) = 0LL;
  *(_QWORD *)(v8 + 1112) = 0LL;
  *(_QWORD *)(v8 + 1008) = v8 + 1016;
  *(_QWORD *)(v8 + 1160) = v8 + 960;
  if ( v8 != -312 )
  {
    *(_BYTE *)(v8 + 312) = 0;
    *(_DWORD *)(v8 + 316) = 1;
    *(_WORD *)(v8 + 320) = 1;
    *(_BYTE *)(v8 + 322) = 6;
    *(_DWORD *)(v8 + 324) = 0;
    *(_QWORD *)(v8 + 336) = v8 + 328;
    *(_QWORD *)(v8 + 328) = v8 + 328;
  }
  *(_DWORD *)(v8 + 232) = ((a4 & 4) != 0) + 1;
  *(_DWORD *)(v8 + 864) = a4;
  *a5 = v8;
  return (unsigned int)v6;
}
