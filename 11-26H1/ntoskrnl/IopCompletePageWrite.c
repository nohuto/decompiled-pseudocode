/*
 * XREFs of IopCompletePageWrite @ 0x1404A0A70
 * Callers:
 *     <none>
 * Callees:
 *     IoFreeIrp @ 0x140268860 (IoFreeIrp.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall IopCompletePageWrite(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rdi
  __int64 v3; // rbx

  v1 = a1 - 120;
  if ( *(_BYTE *)(v1 + 65) || (*(_DWORD *)(v1 + 48) & 0xC0000000) != 0xC0000000 )
  {
    *(_OWORD *)*(_QWORD *)(v1 + 72) = *(_OWORD *)(v1 + 48);
    v2 = *(_QWORD *)(v1 + 96);
    v3 = *(_QWORD *)(v1 + 72);
    IoFreeIrp((PIRP)v1);
    guard_dispatch_icall_no_overrides(v2, v3);
  }
  else
  {
    IoFreeIrp((PIRP)v1);
  }
}
