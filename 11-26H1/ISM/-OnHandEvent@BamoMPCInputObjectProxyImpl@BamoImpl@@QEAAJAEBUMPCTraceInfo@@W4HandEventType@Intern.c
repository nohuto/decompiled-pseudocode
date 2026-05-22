/*
 * XREFs of ?OnHandEvent@BamoMPCInputObjectProxyImpl@BamoImpl@@QEAAJAEBUMPCTraceInfo@@W4HandEventType@Internal@Spatial@Input@UI@Windows@@AEBUHandStateMsg@56789@AEBUHitObjectMsg@56789@@Z @ 0x180122188
 * Callers:
 *     ?OnHandEvent@BamoMPCInputObjectProxy@@UEAAJAEBUMPCTraceInfo@@W4HandEventType@Internal@Spatial@Input@UI@Windows@@AEBUHandStateMsg@45678@AEBUHitObjectMsg@45678@@Z @ 0x180122110 (-OnHandEvent@BamoMPCInputObjectProxy@@UEAAJAEBUMPCTraceInfo@@W4HandEventType@Internal@Spatial@In.c)
 * Callees:
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180035E08 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180036954 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18003D940 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogSendOnHandEvent@BamoMPCInputObjectProxyImpl@BamoImpl@@AEAAXAEBUMPCTraceInfo@@W4HandEventType@Internal@Spatial@Input@UI@Windows@@AEBUHandStateMsg@56789@AEBUHitObjectMsg@56789@@Z @ 0x18011DCCC (-LogSendOnHandEvent@BamoMPCInputObjectProxyImpl@BamoImpl@@AEAAXAEBUMPCTraceInfo@@W4HandEventType.c)
 */

__int64 __fastcall BamoImpl::BamoMPCInputObjectProxyImpl::OnHandEvent(
        __int64 a1,
        _DWORD *a2,
        unsigned int a3,
        _OWORD *a4,
        __int128 *a5)
{
  __int64 v6; // r9
  __int64 v10; // r9
  int v12; // eax
  unsigned int v13; // esi
  struct IMessageCallSendHost *v14; // rsi
  char *v15; // rax
  char *v16; // rcx
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int64 v19; // rax
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int64 v27; // rax
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  unsigned int v33; // [rsp+50h] [rbp-B0h] BYREF
  struct IMessageCallSendHost *v34; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v35[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v36; // [rsp+70h] [rbp-90h]
  __int128 v37; // [rsp+80h] [rbp-80h]
  __int128 v38; // [rsp+90h] [rbp-70h]
  char v39; // [rsp+A0h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+5B8h] [rbp+4B8h]
  unsigned int v41; // [rsp+5C0h] [rbp+4C0h] BYREF

  v6 = *(_QWORD *)(a1 + 16);
  if ( *(_DWORD *)(v6 + 44) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x4DD5,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)v6);
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected((Microsoft::BamoImpl::BamoProxyImpl *)a1) )
  {
    if ( v10 )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
        *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v10 + 24) + 32LL),
        0x87B20814,
        0);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4DDE,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
  else
  {
    v34 = 0LL;
    v41 = 0;
    v33 = 0;
    v12 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
            (Microsoft::BamoImpl::BamoProxyImpl *)a1,
            &v34,
            &v41,
            &v33);
    v13 = v12;
    if ( v12 >= 0 )
    {
      v14 = v34;
      if ( *(_BYTE *)(a1 + 31) )
      {
        v15 = (char *)v34 - 16;
        if ( !v34 )
          v15 = 0LL;
        v15[72] = 1;
      }
      BamoImpl::BamoMPCInputObjectProxyImpl::LogSendOnHandEvent(a1, (__int64)a2, a3);
      v16 = &v39;
      v17 = a5[1];
      v36 = *a5;
      v18 = a5[2];
      v19 = 9LL;
      v37 = v17;
      v38 = v18;
      do
      {
        v20 = a4[1];
        *(_OWORD *)v16 = *a4;
        v21 = a4[2];
        *((_OWORD *)v16 + 1) = v20;
        v22 = a4[3];
        *((_OWORD *)v16 + 2) = v21;
        v23 = a4[4];
        *((_OWORD *)v16 + 3) = v22;
        v24 = a4[5];
        *((_OWORD *)v16 + 4) = v23;
        v25 = a4[6];
        *((_OWORD *)v16 + 5) = v24;
        v26 = a4[7];
        a4 += 8;
        *((_OWORD *)v16 + 6) = v25;
        v16 += 128;
        *((_OWORD *)v16 - 1) = v26;
        --v19;
      }
      while ( v19 );
      v27 = *((_QWORD *)a4 + 12);
      v28 = a4[1];
      *(_OWORD *)v16 = *a4;
      v29 = a4[2];
      *((_OWORD *)v16 + 1) = v28;
      v30 = a4[3];
      *((_OWORD *)v16 + 2) = v29;
      v31 = a4[4];
      *((_OWORD *)v16 + 3) = v30;
      v32 = a4[5];
      *((_OWORD *)v16 + 4) = v31;
      *((_OWORD *)v16 + 5) = v32;
      *((_QWORD *)v16 + 12) = v27;
      LODWORD(v34) = *a2;
      v35[0] = v41;
      v35[1] = v33;
      return CoreUICallSend(v14, v35, 2LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4DE5,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v12);
      return v13;
    }
  }
}
