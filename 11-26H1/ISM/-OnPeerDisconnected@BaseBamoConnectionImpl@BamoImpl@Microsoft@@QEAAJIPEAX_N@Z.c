/*
 * XREFs of ?OnPeerDisconnected@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIPEAX_N@Z @ 0x180029D6C
 * Callers:
 *     ?OnPeerDisconnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIPEBX_N@Z @ 0x180029D10 (-OnPeerDisconnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIPEBX_N@Z.c)
 * Callees:
 *     ?OnDisconnected@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180037280 (-OnDisconnected@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::OnPeerDisconnected(
        Microsoft::BamoImpl::BaseBamoPeerImpl **this,
        __int64 a2,
        Microsoft::BamoImpl::BaseBamoPeerImpl *a3,
        char a4)
{
  __int64 v7; // r8
  int v8; // eax
  const char *v9; // r9
  Microsoft::BamoImpl::BaseBamoPeerImpl *v10; // rax
  Microsoft::BamoImpl::BaseBamoPeerImpl *v11; // rcx
  Microsoft::BamoImpl::BaseBamoPeerImpl *v12; // rax
  __int64 v13; // rax
  int v15; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( this[8] )
  {
    Microsoft::BamoImpl::BaseBamoPeerImpl::OnDisconnected(a3);
    LOBYTE(v7) = a4;
    v8 = (*((__int64 (__fastcall **)(Microsoft::BamoImpl::BaseBamoPeerImpl **, Microsoft::BamoImpl::BaseBamoPeerImpl *, __int64))*this
          + 7))(
           this,
           a3,
           v7);
    if ( v8 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x824,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)(unsigned int)v8,
        v15);
    if ( this[8] )
    {
      v10 = this[14];
      v11 = 0LL;
      while ( 1 )
      {
        if ( !v10 )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x8FB,
            (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
            v9);
        if ( v10 == a3 )
          break;
        v11 = v10;
        v10 = (Microsoft::BamoImpl::BaseBamoPeerImpl *)*((_QWORD *)v10 + 8);
      }
      v12 = (Microsoft::BamoImpl::BaseBamoPeerImpl *)*((_QWORD *)a3 + 8);
      if ( v11 )
        *((_QWORD *)v11 + 8) = v12;
      else
        this[14] = v12;
      v13 = *(_QWORD *)a3;
      *((_QWORD *)a3 + 8) = 0LL;
      (*(void (__fastcall **)(Microsoft::BamoImpl::BaseBamoPeerImpl *))(v13 + 8))(a3);
    }
  }
  return 0LL;
}
