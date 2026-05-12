/*
 * XREFs of RaidUnitRequestTimeout @ 0x1400346C8
 * Callers:
 *     RaidUnitPendingDpcRoutine @ 0x140034050 (RaidUnitPendingDpcRoutine.c)
 * Callees:
 *     RaidAdapterResetBus @ 0x1400349BC (RaidAdapterResetBus.c)
 *     WPP_SF_ @ 0x14005BCE8 (WPP_SF_.c)
 *     WPP_SF_q @ 0x14005C1C0 (WPP_SF_q.c)
 *     WPP_SF_DDD @ 0x14006F394 (WPP_SF_DDD.c)
 *     McTemplateK0zqjujssstq_EtwWriteTransfer @ 0x1400980E4 (McTemplateK0zqjujssstq_EtwWriteTransfer.c)
 *     McTemplateK0zqjuuujsssq_EtwWriteTransfer @ 0x140098274 (McTemplateK0zqjuuujsssq_EtwWriteTransfer.c)
 *     RaidUnitQueueHierarchicalResetWorkItem @ 0x1400A8ADC (RaidUnitQueueHierarchicalResetWorkItem.c)
 *     RaidUnitUnresponsiveDeviceMarkingNeeded @ 0x1400AA420 (RaidUnitUnresponsiveDeviceMarkingNeeded.c)
 *     StorpTelemetryMarkUnitUnresponsive @ 0x1400BD510 (StorpTelemetryMarkUnitUnresponsive.c)
 */

__int64 __fastcall RaidUnitRequestTimeout(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v4; // rax
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 104);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
  {
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
      WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 63LL, &WPP_25fa594137633db1985de5dda85c818b_Traceguids);
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    {
      WPP_SF_DDD(
        WPP_GLOBAL_Control->AttachedDevice,
        64LL,
        &WPP_25fa594137633db1985de5dda85c818b_Traceguids,
        (unsigned __int8)v2,
        BYTE1(v2));
    }
  }
  v4 = *(_QWORD *)(a1 + 24);
  if ( v4 && (*(_BYTE *)(v4 + 108) & 1) != 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 2184));
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 24) + 5360LL));
  }
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 2264));
  if ( *(_DWORD *)(a1 + 1396) )
  {
    if ( (byte_140173444 & 1) != 0 )
      McTemplateK0zqjujssstq_EtwWriteTransfer(
        a1 + 177,
        a1 + 168,
        a1 + 2104,
        *(_QWORD *)(*(_QWORD *)(a1 + 24) + 4784LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        *(_QWORD *)(a1 + 24) + 5128LL,
        *(_BYTE *)(a1 + 104),
        a1 + 2104,
        a1 + 168,
        a1 + 177,
        a1 + 242,
        *(_BYTE *)(a1 + 506) & 1,
        3);
LABEL_25:
    LOBYTE(a2) = *(_BYTE *)(a1 + 104);
    return RaidAdapterResetBus(*(_QWORD *)(a1 + 24), a2);
  }
  if ( (unsigned __int8)RaidUnitUnresponsiveDeviceMarkingNeeded(a1) )
  {
    StorpTelemetryMarkUnitUnresponsive(a1, 0LL);
    *(_BYTE *)(a1 + 506) |= 2u;
    if ( (byte_140173444 & 2) != 0 )
      McTemplateK0zqjuuujsssq_EtwWriteTransfer(
        a1 + 177,
        (unsigned int)&EventUnitUnresponsive,
        a1 + 2104,
        *(_QWORD *)(*(_QWORD *)(a1 + 24) + 4784LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        *(_QWORD *)(a1 + 24) + 5128LL,
        v2,
        SBYTE1(v2),
        SBYTE2(v2),
        a1 + 2104,
        a1 + 168,
        a1 + 177,
        a1 + 242,
        2);
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_q(WPP_GLOBAL_Control->AttachedDevice, 65LL, &WPP_25fa594137633db1985de5dda85c818b_Traceguids, a1);
    }
  }
  result = RaidUnitQueueHierarchicalResetWorkItem(a1);
  if ( !(_BYTE)result )
  {
    if ( (byte_140173444 & 1) != 0 )
      McTemplateK0zqjujssstq_EtwWriteTransfer(
        a1 + 177,
        a1 + 168,
        a1 + 2104,
        *(_QWORD *)(*(_QWORD *)(a1 + 24) + 4784LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        *(_QWORD *)(a1 + 24) + 5128LL,
        *(_BYTE *)(a1 + 104),
        a1 + 2104,
        a1 + 168,
        a1 + 177,
        a1 + 242,
        *(_BYTE *)(a1 + 506) & 1,
        2);
    goto LABEL_25;
  }
  return result;
}
