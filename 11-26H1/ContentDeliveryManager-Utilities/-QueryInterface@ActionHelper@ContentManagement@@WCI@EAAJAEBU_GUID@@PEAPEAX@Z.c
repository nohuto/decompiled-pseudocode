/*
 * XREFs of ?QueryInterface@ActionHelper@ContentManagement@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180036AA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::ActionHelper::QueryInterface(__int64 a1, const struct _GUID *a2, _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IActionHelper>::QueryInterface(
           a1 - 40,
           a2,
           a3);
}
