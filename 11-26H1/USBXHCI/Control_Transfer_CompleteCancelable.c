/*
 * XREFs of Control_Transfer_CompleteCancelable @ 0x140020920
 * Callers:
 *     Control_WdfEvtIoDefault @ 0x14000E0E0 (Control_WdfEvtIoDefault.c)
 *     Control_MapTransfer @ 0x14000E500 (Control_MapTransfer.c)
 *     Control_ProcessTransferCompletion @ 0x14001ED58 (Control_ProcessTransferCompletion.c)
 *     Control_ProcessTransferEventWithED1 @ 0x140020330 (Control_ProcessTransferEventWithED1.c)
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x140006A74 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_ddL @ 0x1400274BC (WPP_RECORDER_SF_ddL.c)
 *     TR_SendCompleteStageRequest @ 0x1400292EC (TR_SendCompleteStageRequest.c)
 *     SecureDmaEnabler_ReleaseResourcesAfterDma @ 0x140029364 (SecureDmaEnabler_ReleaseResourcesAfterDma.c)
 *     WPP_RECORDER_SF_DDqdDD @ 0x140029A30 (WPP_RECORDER_SF_DDqdDD.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Control_Transfer_CompleteCancelable(__int64 a1)
{
  __int64 v1; // rbx
  int v3; // eax
  unsigned int v4; // edi
  KIRQL v5; // dl
  unsigned __int64 v6; // r8
  int v7; // r9d
  int v8; // eax
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // r14
  int v12; // r15d
  __int64 v13; // r13
  _QWORD *v14; // rdi
  _QWORD *v15; // rcx
  __int64 v16; // rdx
  char v17; // r8
  KIRQL v18; // di
  KIRQL v19; // al
  __int64 v21; // rdi
  KIRQL v22; // si
  struct _MDL *v23; // rcx
  int v24; // eax
  unsigned int v25; // eax
  int v26; // eax

  v1 = *(_QWORD *)(a1 + 360);
  if ( *(_DWORD *)(v1 + 112) == 1 )
  {
    v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 2048))(
           WdfDriverGlobals,
           *(_QWORD *)(v1 + 24));
    v4 = v3;
    if ( v3 < 0 )
    {
      *(_DWORD *)(v1 + 112) = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v16 = *(_QWORD *)(a1 + 48);
        v17 = *(_BYTE *)(v16 + 143);
        LOBYTE(v16) = 4;
        WPP_RECORDER_SF_ddL(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          v16,
          14,
          44,
          (__int64)&WPP_c4903a4407353a45c75e6304bdbc5226_Traceguids,
          v17,
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL),
          v3);
      }
      return v4;
    }
    *(_DWORD *)(v1 + 112) = 0;
  }
  if ( *(_DWORD *)(v1 + 116) != 1 )
  {
LABEL_5:
    v5 = *(_BYTE *)(a1 + 104);
    *(_QWORD *)(a1 + 360) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v5);
    v8 = *(_DWORD *)(v1 + 124);
    v9 = *(_QWORD *)(v1 + 48);
    if ( v8 )
    {
      if ( v8 == 28 )
      {
LABEL_7:
        *(_DWORD *)(v9 + 4) = 0;
        v10 = 0;
      }
      else
      {
        v6 = 0x140000000uLL;
        switch ( v8 )
        {
          case 0:
            *(_DWORD *)(v9 + 4) = -1;
            goto LABEL_33;
          case 1:
          case 13:
          case 26:
            goto LABEL_7;
          case 2:
            *(_DWORD *)(v9 + 4) = -1073741805;
            goto LABEL_33;
          case 3:
          case 31:
            *(_DWORD *)(v9 + 4) = -1073741806;
            v10 = -1073741823;
            break;
          case 6:
            *(_DWORD *)(v9 + 4) = -1073741820;
            v10 = -1073741823;
            break;
          case 10:
            *(_DWORD *)(v9 + 4) = -1073741803;
            goto LABEL_33;
          case 20:
            *(_DWORD *)(v9 + 4) = -1073741804;
            v10 = -1073741823;
            break;
          case 23:
            *(_DWORD *)(v9 + 4) = -1073545216;
            v10 = -1073741823;
            break;
          case 27:
            *(_DWORD *)(v9 + 4) = -1073610752;
            goto LABEL_33;
          case 34:
            *(_DWORD *)(v9 + 4) = -1073741802;
            goto LABEL_33;
          case 199:
            v26 = -1073741807;
            if ( _bittest64((const signed __int64 *)(*(_QWORD *)(a1 + 40) + 736LL), 0x3Eu) )
              v26 = -1073709056;
            *(_DWORD *)(v9 + 4) = v26;
            goto LABEL_33;
          default:
            *(_DWORD *)(v9 + 4) = -1073741807;
LABEL_33:
            v10 = -1073741823;
            break;
        }
      }
      *(_DWORD *)(v1 + 120) = v10;
    }
    else
    {
      if ( *(_DWORD *)(v1 + 112) == 3 || *(_DWORD *)(v1 + 116) == 3 )
        *(_DWORD *)(v1 + 120) = -1073741536;
      v24 = *(_DWORD *)(v1 + 120);
      switch ( v24 )
      {
        case -1073741810:
          v25 = -1073713152;
          break;
        case -1073741670:
          v25 = -1073737728;
          break;
        case -1073741637:
          v25 = -1073738240;
          break;
        case -1073741536:
          v25 = -1073676288;
          break;
        default:
          v25 = v24 != 0 ? 0x80000300 : 0;
          break;
      }
      *(_DWORD *)(v9 + 4) = v25;
    }
    v11 = *(unsigned int *)(v1 + 108);
    v12 = *(_DWORD *)(v1 + 120);
    *(_DWORD *)(v9 + 36) = v11;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDqdDD(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL),
        v6,
        v7);
    v13 = *(_QWORD *)(v1 + 48);
    if ( *(_DWORD *)(v1 + 64) == 2 )
    {
      v14 = *(_QWORD **)(v1 + 88);
      *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
      v15 = *(_QWORD **)(a1 + 232);
      if ( *v15 != a1 + 224 )
        __fastfail(3u);
      v14[1] = v15;
      *v14 = a1 + 224;
      *v15 = v14;
      *(_QWORD *)(a1 + 232) = v14;
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
      *(_QWORD *)(v1 + 88) = 0LL;
    }
    else if ( *(_DWORD *)(v1 + 64) == 3 )
    {
      if ( *(_BYTE *)(a1 + 288) )
      {
        if ( *(_DWORD *)(v1 + 200) )
        {
          TR_SendCompleteStageRequest(a1);
          SecureDmaEnabler_ReleaseResourcesAfterDma(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 104LL), v1 + 168);
        }
      }
      else if ( *(_QWORD *)(v1 + 96) )
      {
        v21 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 96LL) + 24LL);
        v22 = KfRaiseIrql(2u);
        (*(void (__fastcall **)(__int64, _QWORD, bool))(*(_QWORD *)(v21 + 8) + 96LL))(
          v21,
          *(_QWORD *)(v1 + 96),
          (*(_BYTE *)(v13 + 32) & 1) == 0);
        KeLowerIrql(v22);
        *(_QWORD *)(v1 + 96) = 0LL;
      }
      v23 = *(struct _MDL **)(v1 + 72);
      if ( v23 && v23 != *(struct _MDL **)(v13 + 48) && v23 != *(struct _MDL **)(a1 + 120) )
      {
        IoFreeMdl(v23);
        *(_QWORD *)(v1 + 72) = 0LL;
      }
    }
    *(_BYTE *)(v1 + 16) = 0;
    v18 = KfRaiseIrql(2u);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01033 + 2104))(
      WdfDriverGlobals,
      *(_QWORD *)(v1 + 24),
      (unsigned int)v12);
    KeLowerIrql(v18);
    v19 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    ++*(_DWORD *)(a1 + 248);
    *(_QWORD *)(a1 + 256) += v11;
    *(_BYTE *)(a1 + 104) = v19;
    if ( v12 < 0 )
      ++*(_DWORD *)(a1 + 252);
    return 0;
  }
  if ( (*(unsigned __int8 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01033 + 2560))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 352),
         0LL) )
  {
    *(_DWORD *)(v1 + 116) = 0;
    goto LABEL_5;
  }
  v4 = -1073741536;
  *(_DWORD *)(v1 + 116) = 2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DD(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      4u,
      0xEu,
      0x2Du,
      (__int64)&WPP_c4903a4407353a45c75e6304bdbc5226_Traceguids,
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL));
  return v4;
}
