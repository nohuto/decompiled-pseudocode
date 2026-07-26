/*
 * XREFs of ?ndisInvokeMiniportSysPowerNotify@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1@Z @ 0x14006EDD0
 * Callers:
 *     ?ndisSetSystemPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140082980 (-ndisSetSystemPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __fastcall ndisInvokeMiniportSysPowerNotify(struct _NDIS_MINIPORT_BLOCK *a1, int a2, enum _SYSTEM_POWER_STATE a3)
{
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rdi
  int v5; // edx
  _DWORD v6[4]; // [rsp+30h] [rbp-48h] BYREF

  DriverHandle = a1->DriverHandle;
  if ( DriverHandle->SysPowerNotifyHandler && (a1->PnPFlags & 0x4000) == 0 )
  {
    v6[0] = 786816;
    v6[1] = a2;
    v6[2] = a3;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        a2,
        14,
        11,
        (struct _GUID *)&WPP_03f6276072d53ed3c04a8bf70663e8f8_Traceguids,
        (char)a1);
    }
    DriverHandle->SysPowerNotifyHandler(a1->MiniportAdapterContext, (const _NDIS_MINIPORT_SYSPOWER_NOTIFY *)v6);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v5,
        14,
        12,
        (struct _GUID *)&WPP_03f6276072d53ed3c04a8bf70663e8f8_Traceguids,
        (char)a1);
    }
  }
}
