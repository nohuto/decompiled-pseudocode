/*
 * XREFs of StorFreeAnsiString @ 0x14004B85C
 * Callers:
 *     StorDeleteScsiIdentity @ 0x140011C04 (StorDeleteScsiIdentity.c)
 *     StorDeleteNVMeIdentity @ 0x1400C7268 (StorDeleteNVMeIdentity.c)
 * Callees:
 *     <none>
 */

void __fastcall StorFreeAnsiString(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 8);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x53446152u);
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)a1 = 0;
}
