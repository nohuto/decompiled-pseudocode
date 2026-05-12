/*
 * XREFs of RaUnitSetUnresponsiveAttribute @ 0x1400A13C0
 * Callers:
 *     RaUnitUnresponsiveAttributeMgmt @ 0x1400A66AC (RaUnitUnresponsiveAttributeMgmt.c)
 * Callees:
 *     RaidIsUnitControlSupported @ 0x14001A534 (RaidIsUnitControlSupported.c)
 *     RaidAdapterResetBus @ 0x1400349BC (RaidAdapterResetBus.c)
 *     RaCallMiniportUnitControl @ 0x14004528C (RaCallMiniportUnitControl.c)
 *     WPP_SF_q @ 0x14005C1C0 (WPP_SF_q.c)
 *     RiIsDeviceQueueBusy @ 0x14005C9A4 (RiIsDeviceQueueBusy.c)
 *     Feature_Servicing_perLunLockingEnable__private_IsEnabledDeviceUsageNoInline @ 0x140097F6C (Feature_Servicing_perLunLockingEnable__private_IsEnabledDeviceUsageNoInline.c)
 *     McTemplateK0zqjujssstq_EtwWriteTransfer @ 0x1400980E4 (McTemplateK0zqjujssstq_EtwWriteTransfer.c)
 *     McTemplateK0zqjuuujsssq_EtwWriteTransfer @ 0x140098274 (McTemplateK0zqjuuujsssq_EtwWriteTransfer.c)
 *     RaidUnitQueueHierarchicalResetWorkItem @ 0x1400A8ADC (RaidUnitQueueHierarchicalResetWorkItem.c)
 *     StorpTelemetryMarkUnitUnresponsive @ 0x1400BD510 (StorpTelemetryMarkUnitUnresponsive.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaUnitSetUnresponsiveAttribute(__int64 a1)
{
  int v2; // ebx
  int **v3; // r14
  int *v4; // rax
  int *v5; // rcx
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rdx

  if ( (*(_BYTE *)(a1 + 506) & 2) == 0 )
  {
    v2 = *(_DWORD *)(a1 + 104);
    v3 = (int **)(a1 + 24);
    if ( (byte_140173444 & 2) != 0 )
      McTemplateK0zqjuuujsssq_EtwWriteTransfer(
        (__int64)(*v3 + 1282),
        &EventUnitUnresponsive,
        a1 + 177,
        *((const wchar_t **)*v3 + 598),
        (*v3)[14],
        (__int64)(*v3 + 1282),
        v2,
        SBYTE1(v2),
        SBYTE2(v2),
        a1 + 2104,
        (const char *)(a1 + 168),
        (const char *)(a1 + 177),
        (const char *)(a1 + 242),
        5);
    v4 = *v3;
    *(_BYTE *)(a1 + 506) |= 2u;
    if ( (v4[28] & 2) != 0 && RaidIsUnitControlSupported(a1, 31) )
    {
      Feature_Servicing_perLunLockingEnable__private_IsEnabledDeviceUsageNoInline();
      v5 = *v3;
      v6 = **v3;
      if ( v6 == 1094997074 )
      {
        v7 = (__int64)(v5 + 94);
      }
      else if ( v6 == 1314275652 )
      {
        v7 = (__int64)(v5 + 42);
      }
      else
      {
        v7 = 0LL;
      }
      RaCallMiniportUnitControl(v7);
    }
    StorpTelemetryMarkUnitUnresponsive(a1, 0LL);
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_q(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x33u,
        (__int64)&WPP_25fa594137633db1985de5dda85c818b_Traceguids,
        a1);
    }
    RiIsDeviceQueueBusy(a1 + 720);
    if ( (((__int64)*(unsigned int *)(v8 + 88) >> 2) & 0x3FFFFFFF) != 0
      && !(unsigned __int8)RaidUnitQueueHierarchicalResetWorkItem(a1) )
    {
      if ( (byte_140173444 & 1) != 0 )
        McTemplateK0zqjujssstq_EtwWriteTransfer(
          *(_BYTE *)(a1 + 506) & 1,
          v9,
          a1 + 177,
          *(const wchar_t **)(*(_QWORD *)(a1 + 24) + 4784LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
          *(_QWORD *)(a1 + 24) + 5128LL,
          *(_BYTE *)(a1 + 104),
          a1 + 2104,
          (const char *)(a1 + 168),
          (const char *)(a1 + 177),
          (const char *)(a1 + 242),
          *(_BYTE *)(a1 + 506) & 1,
          2);
      RaidAdapterResetBus(*(_QWORD *)(a1 + 24), v2);
    }
  }
  return 0LL;
}
