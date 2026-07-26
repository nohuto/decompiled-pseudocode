/*
 * XREFs of NdisRegisterProtocol @ 0x1400BBFE0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14000BC50 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1400513F0 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x140051420 (-ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_Z @ 0x140056EF0 (WPP_RECORDER_SF_Z.c)
 *     WPP_RECORDER_SF_qZL @ 0x14005BBC0 (WPP_RECORDER_SF_qZL.c)
 *     ?ndisWriteDriverNDISVersionToServiceKey@@YAXKKEKKPEAU_UNICODE_STRING@@@Z @ 0x140075F50 (-ndisWriteDriverNDISVersionToServiceKey@@YAXKKEKKPEAU_UNICODE_STRING@@@Z.c)
 *     ??1_NDIS_PROTOCOL_BLOCK@@QEAA@XZ @ 0x14008F650 (--1_NDIS_PROTOCOL_BLOCK@@QEAA@XZ.c)
 *     Feature_NdisTriageData__private_IsEnabledDeviceUsageNoInline @ 0x140094C44 (Feature_NdisTriageData__private_IsEnabledDeviceUsageNoInline.c)
 *     ndisRegisterProtocolTriageData @ 0x1400BB718 (ndisRegisterProtocolTriageData.c)
 *     ?ndisValidateLegacyProtocols@@YAEPEAU_NDIS50_PROTOCOL_CHARACTERISTICS@@@Z @ 0x1400BB958 (-ndisValidateLegacyProtocols@@YAEPEAU_NDIS50_PROTOCOL_CHARACTERISTICS@@@Z.c)
 *     ??4?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAAEAV0@$$QEAV0@@Z @ 0x140138A70 (--4-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?reset@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXPEAVKRefHolder@1@@Z @ 0x140161830 (-reset@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXPEAVKRefHolder@1@@Z.c)
 *     ?unref@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ @ 0x1401618B0 (-unref@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ.c)
 *     ?ndisBindGetProtocolDriver@@YA?AV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N1@Z @ 0x140161DD0 (-ndisBindGetProtocolDriver@@YA-AV-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N1@Z.c)
 *     ?ndisIfEnsureNsiInitialized@@YAJXZ @ 0x14016A550 (-ndisIfEnsureNsiInitialized@@YAJXZ.c)
 *     ?ndisInitializeRef@@YAXPEAU_REFERENCE_EX@@E@Z @ 0x14016A810 (-ndisInitializeRef@@YAXPEAU_REFERENCE_EX@@E@Z.c)
 */

__int64 __fastcall NdisRegisterProtocol(
        int *a1,
        _NDIS_PROTOCOL_BLOCK **a2,
        struct _NDIS50_PROTOCOL_CHARACTERISTICS *a3,
        unsigned int a4)
{
  _NDIS_PROTOCOL_BLOCK *v5; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned int v15; // eax
  __int64 v16; // r8
  _UNICODE_STRING *p_Name; // r14
  __int64 ProtocolDriver; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rbx
  USHORT v22; // bp
  __int64 Pool2; // rax
  _QWORD *v24; // rcx
  __int64 v25; // rax
  unsigned int Reserved; // eax
  unsigned __int8 MajorNdisVersion; // cl
  __int64 v28; // rdx
  TriageData *v29; // r8
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // r8
  _QWORD v33[2]; // [rsp+40h] [rbp-38h] BYREF
  char v34; // [rsp+80h] [rbp+8h] BYREF

  LOBYTE(v5) = 0;
  v33[0] = 0LL;
  ndisIfEnsureNsiInitialized();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Z(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      5u,
      0xFu,
      (struct _GUID *)&WPP_1e356a0c3ca735481fb26761a46e734e_Traceguids,
      &a3->Ndis40Chars.Name.Length);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  if ( a3->Ndis40Chars.MajorNdisVersion < 4u )
  {
    DbgPrint("Ndis: NdisRegisterProtocol Ndis 3.0 protocols are not supported.\n");
LABEL_5:
    v11 = -1073676284;
    goto LABEL_6;
  }
  if ( a3->Ndis40Chars.MajorNdisVersion == 4 )
  {
    if ( a3->Ndis40Chars.MinorNdisVersion )
      goto LABEL_5;
    v15 = 144;
  }
  else
  {
    if ( a3->Ndis40Chars.MajorNdisVersion != 5 || a3->Ndis40Chars.MinorNdisVersion > 1u )
      goto LABEL_5;
    v15 = 208;
  }
  if ( a4 >= v15 && ndisValidateLegacyProtocols(a3, v9, v10) )
  {
    p_Name = &a3->Ndis40Chars.Name;
    LOBYTE(v16) = 1;
    ProtocolDriver = ndisBindGetProtocolDriver(&v34, (char *)&a3->2 + 88, v16);
    KRef<NDIS_BIND_PROTOCOL_DRIVER>::operator=(v33, ProtocolDriver);
    KRef<NDIS_BIND_PROTOCOL_DRIVER>::unref(&v34, v19, v20);
    v21 = v33[0];
    if ( v33[0]
      && (v22 = p_Name->Length + 898,
          Pool2 = ExAllocatePool2(64LL, v22, 1651524686LL),
          (v5 = (_NDIS_PROTOCOL_BLOCK *)Pool2) != 0LL) )
    {
      v24 = (_QWORD *)(Pool2 + 824);
      *(_QWORD *)(Pool2 + 888) = 0LL;
      v25 = Pool2 + 832;
      *v24 = 0LL;
      *(_QWORD *)(v25 + 40) = _NDIS_PROTOCOL_BLOCK::NotifyBindComplete;
      *(_QWORD *)(v25 + 16) = KWorkItemBase<MINIPORT_HOOK_DRIVER,KCoalescingWorkItem<MINIPORT_HOOK_DRIVER>>::CallbackThunk;
      *(_QWORD *)(v25 + 32) = v5;
      *(_QWORD *)(v25 + 24) = v25;
      *(_QWORD *)v25 = 0LL;
      *(_DWORD *)(v25 + 48) = 0;
      if ( v24 != v33 )
        KRef<NDIS_BIND_PROTOCOL_DRIVER>::reset(v24, v21);
      KeInitializeMutex(&v5->Mutex, 0xFFFFu);
      v5->MajorNdisVersion = a3->Ndis40Chars.MajorNdisVersion;
      v5->MinorNdisVersion = a3->Ndis40Chars.MinorNdisVersion;
      *(_WORD *)&v5->Header.Type = 259;
      v5->Name.Buffer = (wchar_t *)&v5[1].Header.Type;
      Reserved = a3->Ndis40Chars.Reserved;
      v5->Reserved = Reserved;
      v5->Flags = Reserved & 0xF0000000;
      LOWORD(Reserved) = p_Name->Length;
      v5->Name.Length = p_Name->Length;
      v5->Name.MaximumLength = Reserved;
      v5->Header.Size = v22;
      RtlUpcaseUnicodeString(&v5->Name, &a3->Ndis40Chars.Name, 0);
      MajorNdisVersion = a3->Ndis40Chars.MajorNdisVersion;
      v5->OpenAdapterCompleteHandler = a3->Ndis40Chars.OpenAdapterCompleteHandler;
      v5->CloseAdapterCompleteHandler = a3->Ndis40Chars.CloseAdapterCompleteHandler;
      v5->SendCompleteHandler = a3->Ndis40Chars.SendCompleteHandler;
      v5->TransferDataCompleteHandler = a3->Ndis40Chars.TransferDataCompleteHandler;
      v5->ResetCompleteHandler = a3->Ndis40Chars.ResetCompleteHandler;
      v5->RequestCompleteHandler = a3->Ndis40Chars.RequestCompleteHandler;
      v5->ReceiveHandler = a3->Ndis40Chars.ReceiveHandler;
      v5->ReceiveCompleteHandler = a3->Ndis40Chars.ReceiveCompleteHandler;
      v5->StatusHandlerEx = (void (__fastcall *)(void *, _NDIS_STATUS_INDICATION *))a3->Ndis40Chars.StatusHandler;
      v5->StatusCompleteHandler = a3->Ndis40Chars.StatusCompleteHandler;
      if ( MajorNdisVersion >= 4u )
      {
        v5->ReceivePacketHandler = a3->Ndis40Chars.ReceivePacketHandler;
        v5->BindAdapterHandler = a3->Ndis40Chars.BindAdapterHandler;
        v5->UnbindAdapterHandler = a3->Ndis40Chars.UnbindAdapterHandler;
        v5->PnPEventHandler = a3->Ndis40Chars.PnPEventHandler;
        v5->UnloadHandler = a3->Ndis40Chars.UnloadHandler;
      }
      if ( MajorNdisVersion == 5 )
      {
        v5->CoSendCompleteHandler = a3->CoSendCompleteHandler;
        v5->CoStatusHandlerEx = (void (__fastcall *)(void *, void *, _NDIS_STATUS_INDICATION *))a3->CoStatusHandler;
        v5->CoReceivePacketHandler = a3->CoReceivePacketHandler;
        v5->CoAfRegisterNotifyHandler = a3->CoAfRegisterNotifyHandler;
      }
      if ( (unsigned int)Feature_NdisTriageData__private_IsEnabledDeviceUsageNoInline()
        && (v30 = ndisRegisterProtocolTriageData((__int64)v5, v28, v29), (v11 = v30) != 0) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            0xDu,
            0x10u,
            (struct _GUID *)&WPP_1e356a0c3ca735481fb26761a46e734e_Traceguids,
            (char)v5,
            v30);
        _NDIS_PROTOCOL_BLOCK::~_NDIS_PROTOCOL_BLOCK(v5, v31, v32);
        ExFreePoolWithTag(v5, 0);
      }
      else
      {
        *a2 = v5;
        ndisInitializeRef(&v5->Ref, 0x10u);
        ndisRegisterProtocolDriverCommon(v5);
        ndisWriteDriverNDISVersionToServiceKey(v5->MajorNdisVersion, v5->MinorNdisVersion, 0, 0, 0, &v5->Name);
        v11 = 0;
      }
    }
    else
    {
      v11 = -1073741670;
    }
  }
  else
  {
    v11 = -1073676283;
  }
LABEL_6:
  *a1 = v11;
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v12,
      5u,
      0x11u,
      (struct _GUID *)&WPP_1e356a0c3ca735481fb26761a46e734e_Traceguids,
      (char)v5,
      &a3->Ndis40Chars.Name.Length,
      v11);
  return KRef<NDIS_BIND_PROTOCOL_DRIVER>::unref(v33, v12, v13);
}
