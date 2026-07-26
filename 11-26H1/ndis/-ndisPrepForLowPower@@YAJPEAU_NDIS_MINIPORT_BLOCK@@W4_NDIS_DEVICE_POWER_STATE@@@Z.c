/*
 * XREFs of ?ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x14004C030
 * Callers:
 *     ?ndisSetDevicePower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@W4_DEVICE_POWER_STATE@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14004C550 (-ndisSetDevicePower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@W4_DEVICE_POWER_STATE@@PEAU_NDIS_MINIP.c)
 *     ?ndisSetSystemPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140082980 (-ndisSetSystemPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     ?ndisPrepForLowPowerCommon@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x140057E90 (-ndisPrepForLowPowerCommon@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ?ndisRequestWaitWake@@YAJPEAU_NDIS_MINIPORT_BLOCK@@P6AXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z@Z @ 0x1400826E0 (-ndisRequestWaitWake@@YAJPEAU_NDIS_MINIPORT_BLOCK@@P6AXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXP.c)
 */

__int64 __fastcall ndisPrepForLowPower(struct _NDIS_MINIPORT_BLOCK *a1, enum _NDIS_DEVICE_POWER_STATE a2)
{
  int v3; // edx
  unsigned int PnPFlags; // eax
  __int64 result; // rax
  unsigned int v6; // edi

  if ( (a1->Flags & 0x80u) != 0 )
    NT_ASSERT("(!(MINIPORT_TEST_FLAG(Miniport, 0x00000080)))");
  ndisPrepForLowPowerCommon(a1, a2);
  PnPFlags = a1->PnPFlags;
  if ( (PnPFlags & 0x400) == 0 )
    return 0LL;
  a1->PnPFlags = PnPFlags & 0xFFFFFBFF;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v3,
      14,
      93,
      (struct _GUID *)&WPP_03f6276072d53ed3c04a8bf70663e8f8_Traceguids,
      (char)a1);
  }
  result = ndisRequestWaitWake(a1, ndisGenericWaitWakeCallback);
  v6 = result;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x5Eu,
      (struct _GUID *)&WPP_03f6276072d53ed3c04a8bf70663e8f8_Traceguids,
      (char)a1,
      a1->WaitWakeIrp);
    return v6;
  }
  return result;
}
