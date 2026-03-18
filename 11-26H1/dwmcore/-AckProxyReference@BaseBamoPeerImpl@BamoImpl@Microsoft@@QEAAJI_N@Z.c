/*
 * XREFs of ?AckProxyReference@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAJI_N@Z @ 0x180162008
 * Callers:
 *     ?Thunk_AckProxyReference_17@?$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180161FF0 (-Thunk_AckProxyReference_17@-$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerImpl@dataprovide.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x180161C14 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?AckProxyReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA_NPEAVBaseBamoPeerImpl@23@_N@Z @ 0x1801620B0 (-AckProxyReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA_NPEAVBaseBamoPeerImpl@23@_N@Z.c)
 *     ?TryGetPrincipal@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoPrincipalImpl@23@I@Z @ 0x180162124 (-TryGetPrincipal@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoPrincipalImpl@23@I@Z.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BaseBamoPeerImpl::AckProxyReference(
        Microsoft::BamoImpl::BaseBamoPeerImpl *this,
        unsigned int a2,
        bool a3)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v5; // rbx
  Microsoft::BamoImpl::BamoPrincipalImpl *Principal; // rax
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*((_QWORD *)this + 3) + 32LL);
  Principal = Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetPrincipal(v5, a2);
  if ( Principal )
  {
    if ( Microsoft::BamoImpl::BamoPrincipalImpl::AckProxyReference(Principal, this, a3) )
      return 0;
    v7 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
           (struct Microsoft::BamoImpl::ConnectionIndirector **)v5,
           0x87B2080C,
           0);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 1621LL;
      goto LABEL_4;
    }
  }
  else
  {
    v7 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
           (struct Microsoft::BamoImpl::ConnectionIndirector **)v5,
           0x87B2080C,
           0);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 1612LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)(unsigned int)v7);
    }
  }
  return v8;
}
