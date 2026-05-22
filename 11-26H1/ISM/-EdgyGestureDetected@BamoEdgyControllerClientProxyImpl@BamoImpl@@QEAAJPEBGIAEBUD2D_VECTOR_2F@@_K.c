/*
 * XREFs of ?EdgyGestureDetected@BamoEdgyControllerClientProxyImpl@BamoImpl@@QEAAJPEBGIAEBUD2D_VECTOR_2F@@_K12II@Z @ 0x1801598AC
 * Callers:
 *     ?EdgyGestureDetected@BamoEdgyControllerClientProxy@@UEAAJPEBGIAEBUD2D_VECTOR_2F@@_K12II@Z @ 0x180159800 (-EdgyGestureDetected@BamoEdgyControllerClientProxy@@UEAAJPEBGIAEBUD2D_VECTOR_2F@@_K12II@Z.c)
 * Callees:
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180035E08 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180036954 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18003D940 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogSendEdgyGestureDetected@BamoEdgyControllerClientProxyImpl@BamoImpl@@AEAAXPEBGIAEBUD2D_VECTOR_2F@@_K12II@Z @ 0x180159F24 (-LogSendEdgyGestureDetected@BamoEdgyControllerClientProxyImpl@BamoImpl@@AEAAXPEBGIAEBUD2D_VECTOR.c)
 */

__int64 __fastcall BamoImpl::BamoEdgyControllerClientProxyImpl::EdgyGestureDetected(
        BamoImpl::BamoEdgyControllerClientProxyImpl *this,
        unsigned __int16 *a2,
        unsigned int a3,
        struct D2D_VECTOR_2F *a4,
        unsigned __int64 a5,
        const struct D2D_VECTOR_2F *a6,
        unsigned __int64 a7,
        unsigned int a8,
        unsigned int a9)
{
  __int64 v11; // r10
  int v12; // ebx
  __int64 v13; // rdx
  const struct D2D_VECTOR_2F *v15; // r9
  struct IMessageCallSendHost *v16; // r13
  char *v17; // rax
  struct IMessageCallSendHost *v18; // xmm1_8
  const struct D2D_VECTOR_2F *v19; // [rsp+30h] [rbp-71h]
  unsigned int v20; // [rsp+78h] [rbp-29h] BYREF
  struct IMessageCallSendHost *v21[2]; // [rsp+80h] [rbp-21h] BYREF
  _QWORD v22[9]; // [rsp+90h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+3Fh]
  unsigned int v24; // [rsp+E8h] [rbp+47h] BYREF
  unsigned __int16 *v25; // [rsp+F0h] [rbp+4Fh]
  struct IMessageCallSendHost **v26; // [rsp+100h] [rbp+5Fh]

  v26 = (struct IMessageCallSendHost **)a4;
  v25 = a2;
  if ( *(_DWORD *)(*((_QWORD *)this + 2) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xD3B6,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)a4);
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected(this) )
  {
    v12 = -2018375660;
    if ( v11 )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
        *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v11 + 24) + 32LL),
        0x87B20814,
        0);
    v13 = 54207LL;
    goto LABEL_7;
  }
  v21[0] = 0LL;
  v24 = 0;
  v20 = 0;
  v12 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, v21, &v24, &v20);
  if ( v12 < 0 )
  {
    v13 = 54214LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v12);
    return (unsigned int)v12;
  }
  v16 = v21[0];
  if ( *((_BYTE *)this + 31) )
  {
    v17 = (char *)v21[0] - 16;
    if ( !v21[0] )
      v17 = 0LL;
    v17[72] = 1;
  }
  BamoImpl::BamoEdgyControllerClientProxyImpl::LogSendEdgyGestureDetected(this, v25, a3, v15, a5, v19, a7, a8, a9);
  v21[0] = (struct IMessageCallSendHost *)*a6;
  v18 = *v26;
  v22[0] = v24;
  v22[1] = v20;
  v21[1] = v18;
  return CoreUICallSend(v16, v22, 2LL);
}
