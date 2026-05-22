/*
 * XREFs of ?SetMatrix4x4Value@BamoDataSourceStubImpl@BamoImpl@@QEAAJIAEBU_D3DMATRIX@@@Z @ 0x180106890
 * Callers:
 *     ?CallSetMatrix4x4ValueOnStub@BamoDataSourcePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@IAEBU_D3DMATRIX@@@Z @ 0x180103DA8 (-CallSetMatrix4x4ValueOnStub@BamoDataSourcePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsof.c)
 *     ?SetMatrix4x4Value@BamoDataSourceStub@@UEAAJIAEBU_D3DMATRIX@@@Z @ 0x180106830 (-SetMatrix4x4Value@BamoDataSourceStub@@UEAAJIAEBU_D3DMATRIX@@@Z.c)
 * Callees:
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18003D940 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180050C5C (-PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall BamoImpl::BamoDataSourceStubImpl::SetMatrix4x4Value(
        BamoImpl::BamoDataSourceStubImpl *this,
        __int64 a2,
        const struct _D3DMATRIX *a3,
        const char *a4)
{
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // rdx
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  struct IMessageCallSendHost *v13; // [rsp+40h] [rbp-19h] BYREF
  _QWORD v14[3]; // [rsp+48h] [rbp-11h] BYREF
  __int128 v15; // [rsp+60h] [rbp+7h]
  __int128 v16; // [rsp+70h] [rbp+17h]
  __int128 v17; // [rsp+80h] [rbp+27h]
  __int128 v18; // [rsp+90h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]
  unsigned int v20; // [rsp+C0h] [rbp+67h] BYREF
  unsigned int v21; // [rsp+D8h] [rbp+7Fh] BYREF

  if ( *(_DWORD *)(*((_QWORD *)this + 4) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x3562,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      a4);
  if ( !*((_BYTE *)this + 56) )
  {
    v5 = *((_QWORD *)this + 3);
    v6 = -2018375660;
    if ( v5 )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
        *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v5 + 16) + 32LL),
        0x87B20814,
        0);
    v7 = 13675LL;
    goto LABEL_7;
  }
  v13 = 0LL;
  v20 = 0;
  v21 = 0;
  v6 = Microsoft::BamoImpl::BamoStubImpl::PrepareForRemoteCall(this, &v13, &v20, &v21);
  if ( v6 < 0 )
  {
    v7 = 13682LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v9 = *(_OWORD *)&a3->_11;
  v10 = *(_OWORD *)&a3->_21;
  v14[0] = v20;
  v14[1] = v21;
  v15 = v9;
  v11 = *(_OWORD *)&a3->_31;
  v16 = v10;
  v12 = *(_OWORD *)&a3->_41;
  v17 = v11;
  v18 = v12;
  return CoreUICallSend(v13, v14, 2LL);
}
