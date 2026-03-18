/*
 * XREFs of ?Create@CPointerHashTable@NSInstrumentation@@SAPEAV12@_N@Z @ 0x14026D794
 * Callers:
 *     ?UmfdSessionInitialize@@YAJXZ @ 0x14010B620 (-UmfdSessionInitialize@@YAJXZ.c)
 *     ?AllocateSessionGlobalsArea@Full@Gre@@YA_NXZ @ 0x1401EA8F0 (-AllocateSessionGlobalsArea@Full@Gre@@YA_NXZ.c)
 * Callees:
 *     ?Destroy@CPointerHashTable@NSInstrumentation@@SAXPEAV12@@Z @ 0x140340E74 (-Destroy@CPointerHashTable@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
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
  *(_QWORD *)(Pool2 + 32) = 0LL;
  *(_DWORD *)(Pool2 + 40) = 0;
  *(_DWORD *)(Pool2 + 44) = 0;
  *(_DWORD *)(Pool2 + 48) = 0;
  *(_BYTE *)(Pool2 + 52) &= ~1u;
  *(_DWORD *)(Pool2 + 24) = 0;
  *(_DWORD *)(Pool2 + 28) = 0;
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
  *(_DWORD *)(v1 + 48) = 0;
  result = (struct NSInstrumentation::CPointerHashTable *)v1;
  *(_BYTE *)(v1 + 52) &= ~1u;
  *(_DWORD *)(v1 + 40) = 256;
  *(_DWORD *)(v1 + 44) = 8;
  return result;
}
