/*
 * XREFs of ??$CopyTo@UIAppLayout@@@?$ComPtr@UIAppLayoutBuilder@@@WRL@Microsoft@@QEBAJPEAPEAUIAppLayout@@@Z @ 0x180231520
 * Callers:
 *     ?BuildSingleViewLayout@AppLayoutHelpers@@YAJPEAUIApplicationView@@PEAPEAUIAppLayout@@@Z @ 0x18052881C (-BuildSingleViewLayout@AppLayoutHelpers@@YAJPEAUIApplicationView@@PEAPEAUIAppLayout@@@Z.c)
 *     ?GetNewAppLayout@CAppLayoutOperation@@UEAAJPEAPEAUIAppLayout@@@Z @ 0x1806C3660 (-GetNewAppLayout@CAppLayoutOperation@@UEAAJPEAPEAUIAppLayout@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IAppLayoutBuilder>::CopyTo<IAppLayout>(_QWORD *a1, __int64 a2)
{
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64))*a1)(*a1, &GUID_7baad876_2fc5_4561_93e1_17e868a174ed, a2);
}
