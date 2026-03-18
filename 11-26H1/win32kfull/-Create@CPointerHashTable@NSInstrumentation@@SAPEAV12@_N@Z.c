/*
 * XREFs of ?Create@CPointerHashTable@NSInstrumentation@@SAPEAV12@_N@Z @ 0x140294FA4
 * Callers:
 *     ?UmfdSessionInitialize@@YAJXZ @ 0x1401C1238 (-UmfdSessionInitialize@@YAJXZ.c)
 *     ?AllocateSessionGlobalsArea@Full@Gre@@YA_NXZ @ 0x1402234C8 (-AllocateSessionGlobalsArea@Full@Gre@@YA_NXZ.c)
 * Callees:
 *     ?Destroy@CPointerHashTable@NSInstrumentation@@SAXPEAV12@@Z @ 0x14034E42C (-Destroy@CPointerHashTable@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

struct NSInstrumentation::CPointerHashTable *__fastcall NSInstrumentation::CPointerHashTable::Create()
{
  __int64 Pool2; // rax
  __int64 v1; // rbx
  struct NSInstrumentation::CPointerHashTable *result; // rax
  void *v3; // rax

  Pool2 = ExAllocatePool2(258LL, 56LL, 944337749LL);
  v1 = Pool2;
  if ( !Pool2 )
    return 0LL;
  *(_BYTE *)(Pool2 + 52) &= ~1u;
  *(_QWORD *)(Pool2 + 32) = 0LL;
  *(_QWORD *)(Pool2 + 40) = 0LL;
  *(_DWORD *)(Pool2 + 48) = 0;
  *(_QWORD *)(Pool2 + 24) = 0LL;
  *(_QWORD *)Pool2 = 0LL;
  *(_DWORD *)(Pool2 + 16) = 0;
  v3 = (void *)ExAllocatePool2(258LL, 4096LL, 944337749LL);
  *(_QWORD *)(v1 + 32) = v3;
  if ( !v3 )
  {
    NSInstrumentation::CPointerHashTable::Destroy((PVOID)v1);
    return 0LL;
  }
  memset_0(v3, 0, 0x1000uLL);
  *(_BYTE *)(v1 + 52) &= ~1u;
  result = (struct NSInstrumentation::CPointerHashTable *)v1;
  *(_DWORD *)(v1 + 40) = 256;
  *(_QWORD *)(v1 + 44) = 8LL;
  return result;
}
