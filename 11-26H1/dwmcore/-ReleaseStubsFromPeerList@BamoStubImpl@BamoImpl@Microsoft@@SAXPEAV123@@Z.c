/*
 * XREFs of ?ReleaseStubsFromPeerList@BamoStubImpl@BamoImpl@Microsoft@@SAXPEAV123@@Z @ 0x1802407F0
 * Callers:
 *     ?Leave@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJXZ @ 0x18023FBA4 (-Leave@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJXZ.c)
 *     ?OnDisconnected@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180240030 (-OnDisconnected@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall Microsoft::BamoImpl::BamoStubImpl::ReleaseStubsFromPeerList(
        struct Microsoft::BamoImpl::BamoStubImpl *a1)
{
  __int64 v1; // rax
  struct Microsoft::BamoImpl::BamoStubImpl *v2; // rbx

  if ( a1 )
  {
    do
    {
      v1 = *(_QWORD *)a1;
      v2 = (struct Microsoft::BamoImpl::BamoStubImpl *)*((_QWORD *)a1 + 6);
      *((_QWORD *)a1 + 6) = 0LL;
      (*(void (**)(void))(v1 + 8))();
      a1 = v2;
    }
    while ( v2 );
  }
}
