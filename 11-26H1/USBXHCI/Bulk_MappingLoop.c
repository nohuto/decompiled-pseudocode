/*
 * XREFs of Bulk_MappingLoop @ 0x14003ADD0
 * Callers:
 *     Bulk_MapTransfers @ 0x14000FBB0 (Bulk_MapTransfers.c)
 * Callees:
 *     Bulk_PrepareStage @ 0x140017060 (Bulk_PrepareStage.c)
 *     Bulk_MapStage @ 0x140019DB0 (Bulk_MapStage.c)
 *     ESM_RunStateMachine @ 0x140020FDC (ESM_RunStateMachine.c)
 *     WPP_RECORDER_SF_ddL @ 0x1400274BC (WPP_RECORDER_SF_ddL.c)
 *     Bulk_RetrieveNextStage @ 0x14003B040 (Bulk_RetrieveNextStage.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

void __fastcall Bulk_MappingLoop(__int64 a1)
{
  int i; // edi
  __int64 v3; // rcx
  int v4; // eax
  int v5; // eax
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rbx
  KIRQL v9; // al
  __int64 v10; // rcx
  KIRQL v11; // dl
  bool v12; // zf
  char v13; // al
  __int64 v14; // rax
  __int64 v15; // [rsp+28h] [rbp-30h]
  __int64 v16; // [rsp+30h] [rbp-28h]
  __int64 v17; // [rsp+38h] [rbp-20h]
  KIRQL v18; // [rsp+60h] [rbp+8h] BYREF

  for ( i = 0; ; ++i )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v3 = *(_QWORD *)(a1 + 56);
      LODWORD(v17) = i;
      LODWORD(v16) = *(_DWORD *)(v3 + 152);
      LODWORD(v15) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL);
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(v3 + 80),
        5u,
        0xEu,
        0x25u,
        (__int64)&WPP_b35432f3067b3bf93fefc5589952cfde_Traceguids,
        v15,
        v16,
        v17);
    }
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 40) + 1004LL) == 1 )
      _InterlockedExchange((volatile __int32 *)(a1 + 348), 0);
    else
      *(_DWORD *)(a1 + 348) = 0;
    if ( !(unsigned __int8)Bulk_RetrieveNextStage(a1) )
      break;
    v4 = Bulk_PrepareStage(a1);
    if ( v4 != 1 )
    {
      if ( v4 == 3 )
        return;
      if ( v4 == 4 )
        break;
      v5 = Bulk_MapStage(a1);
      if ( v5 != 3 )
      {
        if ( v5 == 2 )
          return;
        if ( v5 == 1 )
          break;
        if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 108), 3, 3) != 3 )
          goto LABEL_18;
      }
    }
  }
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 108), 2, 3) == 3 )
    return;
LABEL_18:
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 108), 0, 1) == 1 )
  {
    v6 = *(_QWORD *)(a1 + 56);
    if ( !*(_BYTE *)(v6 + 37)
      || (v7 = *(_QWORD *)(v6 + 144), _InterlockedIncrement((volatile signed __int32 *)(v7 + 20)) == *(_DWORD *)(v7 + 8)) )
    {
      v8 = v6 + 304;
      v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v8 + 840));
      v10 = *(unsigned __int8 *)(v8 + 833);
      v11 = v9;
      v18 = v9;
      *(_DWORD *)(v8 + 4 * v10 + 768) = 20;
      *(_BYTE *)(v8 + 833) = (*(_BYTE *)(v8 + 833) + 1) & 0xF;
      v12 = *(_BYTE *)(v8 + 1016) == 0;
      *(_DWORD *)(v8 + 4LL * *(unsigned __int8 *)(v8 + 949) + 884) = 20;
      v13 = *(_BYTE *)(v8 + 949);
      if ( v12 )
      {
        *(_BYTE *)(v8 + 949) = (v13 + 1) & 0xF;
        if ( !*(_BYTE *)(v8 + 848) )
        {
          *(_BYTE *)(v8 + 848) = 1;
          v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 1632))(
                  WdfDriverGlobals,
                  *(_QWORD *)(v8 + 960));
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01033 + 1640))(
            WdfDriverGlobals,
            v14,
            "State Machine Tag",
            1021LL,
            "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\smengine.c");
          ESM_RunStateMachine((char *)v8, 1000, &v18);
          v11 = v18;
        }
      }
      else
      {
        *(_BYTE *)(v8 + 949) = (v13 + 1) & 0xF;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(v8 + 840), v11);
    }
  }
}
