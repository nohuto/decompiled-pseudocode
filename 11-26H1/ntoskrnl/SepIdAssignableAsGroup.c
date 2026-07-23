/*
 * XREFs of SepIdAssignableAsGroup @ 0x1408199E8
 * Callers:
 *     NtSetInformationToken @ 0x140816660 (NtSetInformationToken.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     RtlEqualSid @ 0x140406680 (RtlEqualSid.c)
 */

BOOLEAN __fastcall SepIdAssignableAsGroup(__int64 a1, void *a2)
{
  BOOLEAN v2; // si
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v7; // edi
  unsigned int v8; // r14d
  __int64 v9; // r15

  v2 = 0;
  if ( !a2 )
    return 0;
  CurrentThread = KeGetCurrentThread();
  v7 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
  v8 = *(_DWORD *)(a1 + 124);
  if ( v8 )
  {
    v9 = *(_QWORD *)(a1 + 152);
    do
    {
      v2 = RtlEqualSid(a2, *(PSID *)(v9 + 16LL * v7));
      if ( v2 )
        break;
      ++v7;
    }
    while ( v7 < v8 );
  }
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegion();
  return v2;
}
