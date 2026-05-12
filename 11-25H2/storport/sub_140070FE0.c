/*
 * XREFs of sub_140070FE0 @ 0x140070FE0
 * Callers:
 *     sub_140062314 @ 0x140062314 (sub_140062314.c)
 *     DllInitialize @ 0x1400A3DE0 (DllInitialize.c)
 *     sub_1400D6FE0 @ 0x1400D6FE0 (sub_1400D6FE0.c)
 *     sub_1401B1AF4 @ 0x1401B1AF4 (sub_1401B1AF4.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

void __fastcall sub_140070FE0(__int64 a1)
{
  void *v2; // rcx
  __int16 v3; // bx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF

  IoStatusBlock = 0LL;
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 24), 1u);
  v2 = *(void **)(a1 + 16);
  if ( v2 )
  {
    if ( ZwNotifyChangeKey(v2, 0LL, (PIO_APC_ROUTINE)(a1 + 128), (PVOID)1, &IoStatusBlock, 5u, 1u, 0LL, 0, 1u) >= 0 )
      ++*(_WORD *)(a1 + 184);
    (*(void (__fastcall **)(_QWORD))(a1 + 8))(*(_QWORD *)a1);
  }
  v3 = --*(_WORD *)(a1 + 184);
  ExReleaseResourceLite((PERESOURCE)(a1 + 24));
  KeLeaveCriticalRegion();
  if ( !v3 )
    KeSetEvent((PRKEVENT)(a1 + 160), 0, 0);
}
