/*
 * XREFs of ?OnRegisterError@BamoDataProviderRegistrarStubImpl@BamoImpl@@QEAAJI@Z @ 0x18024193C
 * Callers:
 *     ?CallOnRegisterErrorOnStub@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@I@Z @ 0x180241684 (-CallOnRegisterErrorOnStub@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@.c)
 *     ?OnRegisterError@BamoDataProviderRegistrarStub@@UEAAJI@Z @ 0x1802418F0 (-OnRegisterError@BamoDataProviderRegistrarStub@@UEAAJI@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x180161C14 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180241BE4 (-PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z.c)
 */

__int64 __fastcall BamoImpl::BamoDataProviderRegistrarStubImpl::OnRegisterError(
        BamoImpl::BamoDataProviderRegistrarStubImpl *this,
        int a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v9; // [rsp+38h] [rbp-18h]
  _QWORD v10[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  unsigned int v12; // [rsp+70h] [rbp+20h] BYREF
  unsigned int v13; // [rsp+80h] [rbp+30h] BYREF
  struct IMessageCallSendHost *v14; // [rsp+88h] [rbp+38h] BYREF

  if ( *(_DWORD *)(*((_QWORD *)this + 4) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x2EC1,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
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
    v7 = 11978LL;
    goto LABEL_7;
  }
  v14 = 0LL;
  v12 = 0;
  v13 = 0;
  v6 = Microsoft::BamoImpl::BamoStubImpl::PrepareForRemoteCall(this, &v14, &v12, &v13);
  if ( v6 < 0 )
  {
    v7 = 11985LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v10[1] = v13;
  return CoreUICallSend(v14, v10, 2LL, 3LL, 0, &unk_180373365, a2, v9, v12);
}
