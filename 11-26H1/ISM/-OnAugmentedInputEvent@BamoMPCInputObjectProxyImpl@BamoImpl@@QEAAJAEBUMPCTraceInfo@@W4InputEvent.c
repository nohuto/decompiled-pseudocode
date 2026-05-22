/*
 * XREFs of ?OnAugmentedInputEvent@BamoMPCInputObjectProxyImpl@BamoImpl@@QEAAJAEBUMPCTraceInfo@@W4InputEventType@Internal@Spatial@Input@UI@Windows@@AEBUAugmentedInputDataMsg@56789@_JAEBUHitObjectMsg@56789@@Z @ 0x180075ED4
 * Callers:
 *     ?OnAugmentedInputEvent@BamoMPCInputObjectProxy@@UEAAJAEBUMPCTraceInfo@@W4InputEventType@Internal@Spatial@Input@UI@Windows@@AEBUAugmentedInputDataMsg@45678@_JAEBUHitObjectMsg@45678@@Z @ 0x180075E50 (-OnAugmentedInputEvent@BamoMPCInputObjectProxy@@UEAAJAEBUMPCTraceInfo@@W4InputEventType@Internal.c)
 * Callees:
 *     ?GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ @ 0x1800366D4 (-GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180036954 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18003D940 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogSendOnAugmentedInputEvent@BamoMPCInputObjectProxyImpl@BamoImpl@@AEAAXAEBUMPCTraceInfo@@W4InputEventType@Internal@Spatial@Input@UI@Windows@@AEBUAugmentedInputDataMsg@56789@_JAEBUHitObjectMsg@56789@@Z @ 0x18011DBC4 (-LogSendOnAugmentedInputEvent@BamoMPCInputObjectProxyImpl@BamoImpl@@AEAAXAEBUMPCTraceInfo@@W4Inp.c)
 */

__int64 __fastcall BamoImpl::BamoMPCInputObjectProxyImpl::OnAugmentedInputEvent(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int128 *a4,
        __int64 a5,
        __int128 *a6)
{
  __int64 v8; // r10
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v12; // r10
  _BYTE *v13; // rsi
  int v14; // eax
  unsigned int v15; // r12d
  struct IMessageCallSendHost *SendHost; // rax
  struct IMessageCallSendHost *v17; // r14
  __int64 v18; // r13
  __int64 v19; // rcx
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm0
  __int128 *v29; // r15
  __int64 v30; // rax
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  int v37; // [rsp+28h] [rbp-E0h]
  _QWORD v38[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v39; // [rsp+78h] [rbp-90h]
  __int128 v40; // [rsp+88h] [rbp-80h]
  __int128 v41; // [rsp+98h] [rbp-70h]
  __int128 v42; // [rsp+A8h] [rbp-60h]
  __int128 v43; // [rsp+B8h] [rbp-50h]
  __int128 v44; // [rsp+C8h] [rbp-40h]
  __int128 v45; // [rsp+D8h] [rbp-30h]
  __int128 v46; // [rsp+E8h] [rbp-20h]
  __int128 v47; // [rsp+F8h] [rbp-10h]
  __int128 v48; // [rsp+108h] [rbp+0h]
  __int128 v49; // [rsp+118h] [rbp+10h]
  __int128 v50; // [rsp+128h] [rbp+20h]
  __int128 v51; // [rsp+138h] [rbp+30h]
  __int128 v52; // [rsp+148h] [rbp+40h]
  __int128 v53; // [rsp+158h] [rbp+50h]
  __int128 v54; // [rsp+168h] [rbp+60h]
  __int128 v55; // [rsp+178h] [rbp+70h]
  __int128 v56; // [rsp+188h] [rbp+80h]
  __int64 v57; // [rsp+198h] [rbp+90h]
  wil::details::in1diag3 *retaddr; // [rsp+1E0h] [rbp+D8h]

  if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x4E40,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)a4);
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected((Microsoft::BamoImpl::BamoProxyImpl *)a1) )
  {
    v9 = -2018375660;
    if ( v8 )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
        *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v8 + 24) + 32LL),
        0x87B20814,
        0);
    v10 = 20041LL;
    goto LABEL_7;
  }
  v13 = (_BYTE *)(a1 + 31);
  if ( !Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected((Microsoft::BamoImpl::BamoProxyImpl *)a1) || *v13 )
  {
    v15 = *(_DWORD *)(a1 + 24);
  }
  else
  {
    v14 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
            *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v12 + 24) + 32LL),
            0x87B20805,
            0);
    v9 = v14;
    if ( v14 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x18B,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoProxy.inl",
        (const char *)(unsigned int)v14,
        v37);
    v15 = 0;
    if ( (v9 & 0x80000000) != 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x171,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoProxy.inl",
        (const char *)v9,
        v37);
      v10 = 20048LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)v9,
        v37);
      return v9;
    }
  }
  SendHost = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost(*(Microsoft::BamoImpl::BaseBamoPeerImpl **)(a1 + 16));
  v17 = SendHost;
  v18 = *(unsigned int *)(*(_QWORD *)(a1 + 16) + 36LL);
  if ( *v13 )
  {
    v19 = (__int64)SendHost + 56;
    if ( !SendHost )
      v19 = 72LL;
    *(_BYTE *)v19 = 1;
  }
  BamoImpl::BamoMPCInputObjectProxyImpl::LogSendOnAugmentedInputEvent(a1, a2, a3);
  v38[0] = v18;
  v20 = a6[1];
  v39 = *a6;
  v21 = a6[2];
  v40 = v20;
  v22 = a4[1];
  v41 = v21;
  v42 = *a4;
  v23 = a4[2];
  v43 = v22;
  v24 = a4[3];
  v44 = v23;
  v25 = a4[4];
  v45 = v24;
  v26 = a4[5];
  v46 = v25;
  v27 = a4[6];
  v47 = v26;
  v48 = v27;
  v28 = a4[7];
  v29 = a4 + 8;
  v49 = v28;
  v30 = *((_QWORD *)v29 + 14);
  v31 = v29[1];
  v50 = *v29;
  v32 = v29[2];
  v51 = v31;
  v33 = v29[3];
  v52 = v32;
  v34 = v29[4];
  v53 = v33;
  v35 = v29[5];
  v54 = v34;
  v36 = v29[6];
  v55 = v35;
  v56 = v36;
  v57 = v30;
  v38[1] = v15;
  return CoreUICallSend(v17, v38, 2LL);
}
