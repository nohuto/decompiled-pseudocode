/*
 * XREFs of ?ndisEnableWppTracingCallback@@YAXPEBU_GUID@@_JEKE@Z @ 0x1400C839C
 * Callers:
 *     WppClassicProviderCallback @ 0x1400C8CD0 (WppClassicProviderCallback.c)
 *     WppTraceCallback @ 0x140144B90 (WppTraceCallback.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140015DA0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400177D0 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x140022960 (WPP_RECORDER_SF_.c)
 *     ndisMEmitTraceRundown @ 0x1400C8574 (ndisMEmitTraceRundown.c)
 *     ndisWppExtendedCallback @ 0x1400C88B0 (ndisWppExtendedCallback.c)
 */

void __fastcall ndisEnableWppTracingCallback(const struct _GUID *a1, __int64 a2, __int64 a3, unsigned int a4, char a5)
{
  char v5; // bl
  char v6; // di
  int v7; // esi
  int v8; // edx
  char v9; // r8
  KIRQL v10; // al
  int v11; // edx
  struct _NDIS_MINIPORT_BLOCK *v12; // rbx
  KIRQL v13; // di
  int v14; // edx

  v5 = a3;
  LOBYTE(a3) = a5;
  LOBYTE(a1) = v5;
  v6 = a4;
  v7 = 0;
  ndisWppExtendedCallback(a1, a4, a3);
  if ( v5 && (v6 & 2) != 0 && v9 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 1;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v8,
        2,
        23,
        (struct _GUID *)&WPP_2b999a71c1833f297665e6fbb09ed696_Traceguids);
    }
    v10 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
    v12 = ndisMiniportList;
    v13 = v10;
    while ( v12 )
    {
      if ( (unsigned int)++v7 > 1 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v11) = 1;
        WPP_RECORDER_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v11,
          2,
          24,
          (struct _GUID *)&WPP_2b999a71c1833f297665e6fbb09ed696_Traceguids);
      }
      if ( v12->PnPDeviceState == NdisPnPDeviceStarted && (unsigned __int8)ndisReferenceMiniport(v12, 0x54u) )
      {
        KeReleaseSpinLock(&ndisMiniportListLock, v13);
        ndisMEmitTraceRundown(v12);
        v13 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
        ndisDereferenceMiniport(v12, 0x54u);
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_qq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          1u,
          2u,
          0x19u,
          (struct _GUID *)&WPP_2b999a71c1833f297665e6fbb09ed696_Traceguids,
          (char)v12,
          v12->DriverHandle);
      }
      v12 = v12->NextGlobalMiniport;
    }
    KeReleaseSpinLock(&ndisMiniportListLock, v13);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = 1;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v14,
        2,
        26,
        (struct _GUID *)&WPP_2b999a71c1833f297665e6fbb09ed696_Traceguids);
    }
  }
}
