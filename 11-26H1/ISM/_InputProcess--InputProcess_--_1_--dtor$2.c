/*
 * XREFs of _InputProcess::InputProcess_::_1_::dtor$2 @ 0x1801D949A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall InputProcess::InputProcess_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<InputSystemInternalServerConnection>::~ComPtr<InputSystemInternalServerConnection>((Microsoft::Bamo::BaseBamoConnection **)(*(_QWORD *)(a2 + 144) + 32LL));
}
