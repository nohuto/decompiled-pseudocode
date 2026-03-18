/*
 * XREFs of ?ProxyDisposed@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAVBaseBamoPeerImpl@23@I@Z @ 0x1802406B0
 * Callers:
 *     ?Thunk_ProxyDisposed_5@?$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180241100 (-Thunk_ProxyDisposed_5@-$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerImpl@dataprovider_Aut.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x180161C14 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?TryGetPrincipal@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoPrincipalImpl@23@I@Z @ 0x180162124 (-TryGetPrincipal@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoPrincipalImpl@23@I@Z.c)
 *     ?TryDisposeAndNotifyRemoteProxies@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAA_NXZ @ 0x1802411B8 (-TryDisposeAndNotifyRemoteProxies@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::ProxyDisposed(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this,
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a2,
        unsigned int a3)
{
  struct Microsoft::BamoImpl::BamoPrincipalImpl *Principal; // rax
  struct Microsoft::BamoImpl::BamoPrincipalImpl *v6; // rbx
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v11; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Principal = Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetPrincipal(this, a3);
  v6 = Principal;
  if ( !Principal )
  {
    v7 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
           (struct Microsoft::BamoImpl::ConnectionIndirector **)this,
           0x87B2080C,
           0);
    if ( v7 < 0 )
    {
      v8 = 1757LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)(unsigned int)v7);
      return (unsigned int)v7;
    }
    return (unsigned int)v7;
  }
  v9 = *((_QWORD *)Principal + 4);
  if ( !v9 )
  {
LABEL_7:
    v7 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
           (struct Microsoft::BamoImpl::ConnectionIndirector **)this,
           0x87B2080C,
           0);
    if ( v7 < 0 )
    {
      v8 = 1766LL;
      goto LABEL_9;
    }
    return (unsigned int)v7;
  }
  while ( *(_DWORD *)(*(_QWORD *)(v9 + 32) + 36LL) != *((_DWORD *)a2 + 9) )
  {
    v9 = *(_QWORD *)(v9 + 40);
    if ( !v9 )
      goto LABEL_7;
  }
  *(_BYTE *)(v9 + 58) = 0;
  if ( *((int *)Principal + 2) <= 0
    && Microsoft::BamoImpl::BamoPrincipalImpl::TryDisposeAndNotifyRemoteProxies(Principal) )
  {
    v11 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoPrincipalImpl *))(*(_QWORD *)v6 + 56LL))(v6);
    if ( v11 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 24LL))(v11, 1LL);
  }
  return 0LL;
}
