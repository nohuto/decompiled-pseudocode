/*
 * XREFs of CreateResourceManagerProxy @ 0x1800124D8
 * Callers:
 *     RmAccessCheck @ 0x18000E070 (RmAccessCheck.c)
 *     ?GetResourceManagerProxy@@YAJPEAPEAVResourceManagerProxy@@@Z @ 0x18000F090 (-GetResourceManagerProxy@@YAJPEAPEAVResourceManagerProxy@@@Z.c)
 * Callees:
 *     CempRpcBindToServer @ 0x1800034E0 (CempRpcBindToServer.c)
 *     ??2@YAPEAX_K@Z @ 0x180013910 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18001C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 CreateResourceManagerProxy()
{
  void *v0; // rax
  int v1; // eax
  int v2; // ebx
  void (__fastcall ***v3)(_QWORD, __int64); // rcx

  v0 = operator new(0x10uLL);
  if ( v0 )
  {
    *((_QWORD *)v0 + 1) = 0LL;
    *(_QWORD *)v0 = &ResourceManagerProxy::`vftable';
    qword_18002DCC8 = (__int64)v0;
    v1 = CempRpcBindToServer(&unk_18001D170, (RPC_BINDING_HANDLE *)v0 + 1) | 0x10000000;
    v2 = 0;
    if ( v1 < 0 )
      v2 = v1;
    if ( v2 >= 0 )
      return 0;
    v3 = (void (__fastcall ***)(_QWORD, __int64))qword_18002DCC8;
  }
  else
  {
    v3 = 0LL;
    v2 = -2147024882;
    qword_18002DCC8 = 0LL;
  }
  if ( v3 )
  {
    (**v3)(v3, 1LL);
    qword_18002DCC8 = 0LL;
  }
  return (unsigned int)v2;
}
