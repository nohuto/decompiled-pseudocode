/*
 * XREFs of SepDeleteAccessState @ 0x14040CC90
 * Callers:
 *     SeDeleteAccessState @ 0x1408F7CA0 (SeDeleteAccessState.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1408F9CF0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     ObOpenObjectByPointer @ 0x140906B20 (ObOpenObjectByPointer.c)
 *     ObInsertObjectEx @ 0x140906FA0 (ObInsertObjectEx.c)
 *     ObOpenObjectByNameEx @ 0x14092CD80 (ObOpenObjectByNameEx.c)
 *     SeSubProcessToken @ 0x140B84D74 (SeSubProcessToken.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     SeDeassignSecurity @ 0x140AAC280 (SeDeassignSecurity.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall SepDeleteAccessState(__int64 a1)
{
  __int64 v2; // rdi
  void *v3; // rcx
  void *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rdx

  v2 = *(_QWORD *)(a1 + 72);
  if ( *(_BYTE *)(a1 + 11) )
    ExFreePoolWithTag(*(PVOID *)v2, 0);
  v3 = *(void **)(a1 + 136);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  v4 = *(void **)(a1 + 152);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( v2 )
  {
    if ( *(_QWORD *)(v2 + 48) && (*(_DWORD *)(a1 + 12) & 0x4000000) == 0 )
      SeDeassignSecurity((PSECURITY_DESCRIPTOR *)(v2 + 48));
    if ( *(_QWORD *)(v2 + 72) )
    {
      v5 = *(_QWORD *)(v2 + 80);
      if ( v5 )
      {
        v6 = *(_QWORD *)(v2 + 56);
        if ( v6 )
          guard_dispatch_icall_no_overrides(v5, v6);
        v7 = *(_QWORD *)(v2 + 64);
        if ( v7 )
          guard_dispatch_icall_no_overrides(*(_QWORD *)(v2 + 80), v7);
      }
    }
  }
}
