/*
 * XREFs of ?PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAIPEAVBaseBamoPeerImpl@23@@Z @ 0x180034DB8
 * Callers:
 *     ?OnPeerConnected@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIIIPEAPEAX@Z @ 0x180029EB4 (-OnPeerConnected@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIIIPEAPEAX@Z.c)
 *     ?PrepareForRemoteReference@BamoStubImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z @ 0x180034D40 (-PrepareForRemoteReference@BamoStubImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z.c)
 *     ?PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@SAIPEAVBamoPrincipal@Bamo@3@PEAVBaseBamoPeer@53@@Z @ 0x180034D70 (-PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@SAIPEAVBamoPrincipal@Bamo@3@PEA.c)
 *     ?RemoteInsert@BamoList_ActivatableEntityPrincipal_StubImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@QEAAJIPEAVBamoActivatableEntityPrincipal@@@Z @ 0x180034F6C (-RemoteInsert@BamoList_ActivatableEntityPrincipal_StubImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@.c)
 *     ?PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z @ 0x180074F58 (-PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetBufferingMessageCallHost@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBufferingMessageCallHost@23@XZ @ 0x1800AC014 (-GetBufferingMessageCallHost@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBufferingMessage.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::BamoImpl::BamoPrincipalImpl::PrepareForRemoteReference(
        Microsoft::BamoImpl::BamoPrincipalImpl *this,
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a2)
{
  __int64 v4; // rbx
  int v5; // eax
  __int64 v6; // r14
  void (__fastcall *v7)(Microsoft::BamoImpl::BamoPrincipalImpl *, __int64, __int64); // rsi
  __int64 v8; // rax
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v9; // rcx
  __int64 v10; // rdx
  int v11; // eax
  struct Microsoft::BamoImpl::BufferingMessageCallHost *v13; // rax
  int v14; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v16; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_QWORD *)a2 + 3) != *((_QWORD *)this + 2) )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1A4,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
      (const char *)0x87B20819LL,
      v14);
  v4 = *((_QWORD *)this + 4);
  if ( !v4 )
    goto LABEL_6;
  do
  {
    if ( *(_DWORD *)(*(_QWORD *)(v4 + 32) + 36LL) == *((_DWORD *)a2 + 9) )
      break;
    v4 = *(_QWORD *)(v4 + 40);
  }
  while ( v4 );
  if ( !v4 )
  {
LABEL_6:
    v16 = 0LL;
    v5 = (*(__int64 (__fastcall **)(Microsoft::BamoImpl::BamoPrincipalImpl *, struct Microsoft::BamoImpl::BaseBamoPeerImpl *, __int64 *))(*(_QWORD *)this + 72LL))(
           this,
           a2,
           &v16);
    if ( v5 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2A6,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
        (const char *)(unsigned int)v5,
        v14);
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 32LL))(v16);
    *(_QWORD *)(v4 + 24) = this;
    v6 = *(_QWORD *)(v4 + 32);
    *(_QWORD *)(v4 + 32) = a2;
    (**(void (__fastcall ***)(struct Microsoft::BamoImpl::BaseBamoPeerImpl *))a2)(a2);
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    *(_QWORD *)(v4 + 40) = *((_QWORD *)this + 4);
    *((_QWORD *)this + 4) = v4;
    *(_QWORD *)(v4 + 48) = *((_QWORD *)a2 + 7);
    *((_QWORD *)a2 + 7) = v4;
  }
  if ( !*(_BYTE *)(v4 + 56) )
  {
    *(_BYTE *)(v4 + 56) = 1;
    *(_BYTE *)(v4 + 59) = 1;
    v7 = *(void (__fastcall **)(Microsoft::BamoImpl::BamoPrincipalImpl *, __int64, __int64))(*(_QWORD *)this + 64LL);
    v8 = *(_QWORD *)(v4 + 32);
    v9 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v8 + 24) + 32LL);
    if ( *(_BYTE *)(v8 + 48) )
    {
      v13 = Microsoft::BamoImpl::BaseBamoConnectionImpl::GetBufferingMessageCallHost(v9);
      v10 = ((unsigned __int64)v13 + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)v13 >> 64);
    }
    else
    {
      v10 = *((_QWORD *)v9 + 9);
    }
    v7(this, v10, v4);
    v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 48LL))(v4);
    if ( v11 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1C3,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
        (const char *)(unsigned int)v11,
        v14);
  }
  ++*(_DWORD *)(v4 + 16);
  *(_BYTE *)(v4 + 60) = 1;
  return *((unsigned int *)this + 6);
}
