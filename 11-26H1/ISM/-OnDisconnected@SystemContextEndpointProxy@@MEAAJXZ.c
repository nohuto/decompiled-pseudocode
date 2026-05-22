/*
 * XREFs of ?OnDisconnected@SystemContextEndpointProxy@@MEAAJXZ @ 0x180143A20
 * Callers:
 *     <none>
 * Callees:
 *     ?UnregisterSystemContextEndpoint@SystemContextManager@@QEAAJPEAVBamoSystemContextEndpointProxy@@@Z @ 0x180143670 (-UnregisterSystemContextEndpoint@SystemContextManager@@QEAAJPEAVBamoSystemContextEndpointProxy@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SystemContextEndpointProxy::OnDisconnected(
        SystemContextManager **this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  SystemContextManager *v5; // rcx

  SystemContextManager::UnregisterSystemContextEndpoint(this[8], (struct BamoSystemContextEndpointProxy *)this, a3, a4);
  v5 = this[8];
  this[8] = 0LL;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*((_QWORD *)v5 + 2) + 8LL))((__int64)v5 + 16);
  return 0LL;
}
