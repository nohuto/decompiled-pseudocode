/*
 * XREFs of ??4?$ComPtr@VCManipulation@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180246398
 * Callers:
 *     ??$_Insert_counted_range@PEAPEAVCManipulation@@@?$vector@V?$ComPtr@VCManipulation@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCManipulation@@@WRL@Microsoft@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@VCManipulation@@@WRL@Microsoft@@@std@@@std@@@1@PEAPEAVCManipulation@@_K@Z @ 0x1801E7744 (--$_Insert_counted_range@PEAPEAVCManipulation@@@-$vector@V-$ComPtr@VCManipulation@@@WRL@Microsof.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<CManipulation>::operator=(__int64 *a1, char *a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  char v6; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0LL;
  if ( &v6 != a2 )
  {
    v3 = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0LL;
  }
  v4 = *a1;
  *a1 = v3;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return a1;
}
