/*
 * XREFs of ?RegisterShellHandwritingHostClient@ShellHandwritingHostServer@@UEAAJPEAVBamoShellHandwritingHostServerStub@@PEAVBamoShellHandwritingHostClientProxy@@@Z @ 0x18015F350
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ShellHandwritingHostServer::RegisterShellHandwritingHostClient(
        ShellHandwritingHostServer *this,
        struct BamoShellHandwritingHostServerStub *a2,
        struct BamoShellHandwritingHostClientProxy *a3)
{
  __int64 v3; // rcx

  v3 = *((_QWORD *)this + 7);
  if ( v3 )
    (*(void (__fastcall **)(__int64, struct BamoShellHandwritingHostClientProxy *))(*(_QWORD *)v3 + 24LL))(v3, a3);
  return 0LL;
}
