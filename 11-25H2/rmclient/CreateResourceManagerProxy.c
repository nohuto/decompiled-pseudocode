/*
 * XREFs of CreateResourceManagerProxy @ 0x18001365C
 * Callers:
 *     RmAccessCheck @ 0x18000EDA0 (RmAccessCheck.c)
 *     ?GetResourceManagerProxy@@YAJPEAPEAVResourceManagerProxy@@@Z @ 0x18000FC70 (-GetResourceManagerProxy@@YAJPEAPEAVResourceManagerProxy@@@Z.c)
 * Callees:
 *     CempRpcBindToServer @ 0x180004080 (CempRpcBindToServer.c)
 *     ??2@YAPEAX_K@Z @ 0x1800149A0 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18001D010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 CreateResourceManagerProxy()
{
  _QWORD *v0; // rax
  __int64 v1; // rcx
  int v2; // ebx
  int v3; // eax

  v0 = operator new(0x10uLL);
  v1 = (__int64)v0;
  if ( v0 )
  {
    v0[1] = 0LL;
    *v0 = &ResourceManagerProxy::`vftable';
  }
  else
  {
    v1 = 0LL;
  }
  qword_18002FD90 = v1;
  if ( v1 )
  {
    v3 = CempRpcBindToServer(&unk_18001E760, (RPC_BINDING_HANDLE *)(v1 + 8)) | 0x10000000;
    v2 = 0;
    if ( v3 < 0 )
      v2 = v3;
    if ( v2 >= 0 )
      return 0;
    v1 = qword_18002FD90;
  }
  else
  {
    v2 = -2147024882;
  }
  if ( v1 )
  {
    (**(void (__fastcall ***)(__int64, __int64))v1)(v1, 1LL);
    qword_18002FD90 = 0LL;
  }
  return (unsigned int)v2;
}
