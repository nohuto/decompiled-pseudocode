/*
 * XREFs of ndisWnfPdcCallback @ 0x140066C10
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisNicAutoPowerSaverControlIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400063A0 (-ndisNicAutoPowerSaverControlIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140015DA0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400177D0 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_d @ 0x140023030 (WPP_RECORDER_SF_d.c)
 *     McTemplateK0x_EtwWriteTransfer @ 0x1400710B0 (McTemplateK0x_EtwWriteTransfer.c)
 *     ?ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K@Z @ 0x140079CC0 (-ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K@Z.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x14008EE50 (McTemplateK0_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     memcmp @ 0x1400EA9E0 (memcmp.c)
 */

__int64 __fastcall ndisWnfPdcCallback(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int8 v4; // bl
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  KIRQL v8; // al
  struct _NDIS_MINIPORT_BLOCK *v9; // rbx
  KIRQL i; // di
  unsigned __int8 v12; // dl
  unsigned __int64 v13; // r8
  int v14; // [rsp+30h] [rbp-48h] BYREF
  int v15; // [rsp+38h] [rbp-40h] BYREF
  _QWORD Buf1[3]; // [rsp+40h] [rbp-38h] BYREF
  __int128 v17; // [rsp+58h] [rbp-20h] BYREF

  v15 = a4;
  memset(Buf1, 0, sizeof(Buf1));
  v14 = 24;
  v4 = 0;
  v5 = ExQueryWnfStateData(a1, &v15, Buf1, &v14);
  if ( v5 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xDu,
        0xAu,
        (struct _GUID *)&WPP_64b491f4d22c35747c5821aad1f382d9_Traceguids,
        v5);
  }
  else
  {
    if ( !memcmp(Buf1, &GUID_SPM_LOW_POWER_CS, 0x10uLL) )
    {
      v4 = 1;
      ndisLastCsScenarioInstanceId = Buf1[2];
    }
    if ( ndisConnectedStandby != v4 )
    {
      ndisConnectedStandby = v4;
      v17 = 0LL;
      if ( v4 )
      {
        ndisLastCsEntryTime = MEMORY[0xFFFFF78000000008];
        if ( (byte_14011D043 & 4) != 0 )
          McTemplateK0_EtwWriteTransfer(v7, v6, &v17);
      }
      else if ( (byte_14011D043 & 4) != 0 )
      {
        McTemplateK0x_EtwWriteTransfer(
          MEMORY[0xFFFFF78000000008] - ndisLastCsEntryTime,
          &ExitingConnectedStandby,
          &v17,
          (MEMORY[0xFFFFF78000000008] - ndisLastCsEntryTime) / 0x989680);
      }
      v8 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
      v9 = ndisMiniportList;
      for ( i = v8; v9; v9 = v9->NextGlobalMiniport )
      {
        if ( v9->AoAc && (unsigned __int8)ndisReferenceMiniport(v9, 7u) )
        {
          KeReleaseSpinLock(&ndisMiniportListLock, i);
          ndisNicAutoPowerSaverControlIdleTimer(v9);
          if ( v9->AoAc )
            ndisCsStateChange(v9, v12, v13);
          i = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
          ndisDereferenceMiniport(v9, 7u);
        }
      }
      KeReleaseSpinLock(&ndisMiniportListLock, i);
    }
  }
  return 0LL;
}
