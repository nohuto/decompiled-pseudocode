/*
 * XREFs of LdrEnumerateLoadedModules @ 0x1800DF4B0
 * Callers:
 *     RtlLockModuleSection @ 0x1800DF340 (RtlLockModuleSection.c)
 * Callees:
 *     LdrpAcquireLoaderLock @ 0x18007B430 (LdrpAcquireLoaderLock.c)
 *     LdrpReleaseLoaderLock @ 0x18007C860 (LdrpReleaseLoaderLock.c)
 *     LdrpDrainWorkQueue @ 0x18007E4F0 (LdrpDrainWorkQueue.c)
 *     LdrpDropLastInProgressCount @ 0x1800DF57C (LdrpDropLastInProgressCount.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

NTSTATUS __cdecl LdrEnumerateLoadedModules(BOOLEAN ReservedFlag, PLDR_ENUM_CALLBACK EnumProc, PVOID Context)
{
  __int16 v5; // di
  __int64 v6; // rcx
  __int64 *i; // rbx
  char v9; // [rsp+40h] [rbp+8h] BYREF
  bool v10; // [rsp+58h] [rbp+20h]

  if ( ReservedFlag || !EnumProc )
    return -1073741811;
  v9 = 0;
  v5 = NtCurrentTeb()->SameTebFlags & 0x1000;
  v10 = v5 != 0;
  if ( !v5 )
    LdrpDrainWorkQueue(0);
  LdrpAcquireLoaderLock();
  for ( i = (__int64 *)qword_1801CA8D0; i != &qword_1801CA8D0; i = (__int64 *)*i )
  {
    ((void (__fastcall *)(__int64 *, PVOID, char *))EnumProc)(i, Context, &v9);
    if ( v9 )
      break;
  }
  LdrpReleaseLoaderLock(v6, 15, 0);
  if ( !v5 )
    LdrpDropLastInProgressCount();
  return 0;
}
