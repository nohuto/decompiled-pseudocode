/*
 * XREFs of ?Uninitialize@UmfdAllocation@@SAXXZ @ 0x14026DCC0
 * Callers:
 *     UmfdSessionUninitialize @ 0x14010B400 (UmfdSessionUninitialize.c)
 *     ?UmfdSessionInitialize@@YAJXZ @ 0x14010B620 (-UmfdSessionInitialize@@YAJXZ.c)
 * Callees:
 *     ?Destroy@CPointerHashTable@NSInstrumentation@@SAXPEAV12@@Z @ 0x140340E74 (-Destroy@CPointerHashTable@NSInstrumentation@@SAXPEAV12@@Z.c)
 */

void __fastcall UmfdAllocation::Uninitialize(int a1, __int64 a2)
{
  __int64 v2; // rbx
  void *v3; // rcx

  v2 = *(_QWORD *)(W32GetSessionState(a1, a2) + 104);
  if ( *(_QWORD *)v2 )
  {
    NSInstrumentation::CPointerHashTable::Destroy(*(PVOID *)v2);
    *(_QWORD *)v2 = 0LL;
  }
  v3 = *(void **)(v2 + 8);
  if ( v3 )
    EngFreeMem(v3);
}
