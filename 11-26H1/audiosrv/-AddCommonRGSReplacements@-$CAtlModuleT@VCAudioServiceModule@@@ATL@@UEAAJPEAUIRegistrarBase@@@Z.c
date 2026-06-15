/*
 * XREFs of ?AddCommonRGSReplacements@?$CAtlModuleT@VCAudioServiceModule@@@ATL@@UEAAJPEAUIRegistrarBase@@@Z @ 0x1800D7B80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ATL::CAtlModuleT<CAudioServiceModule>::AddCommonRGSReplacements(__int64 a1, __int64 a2)
{
  return (*(__int64 (__fastcall **)(__int64, const wchar_t *, const wchar_t *))(*(_QWORD *)a2 + 24LL))(
           a2,
           L"APPID",
           &LocaleName);
}
