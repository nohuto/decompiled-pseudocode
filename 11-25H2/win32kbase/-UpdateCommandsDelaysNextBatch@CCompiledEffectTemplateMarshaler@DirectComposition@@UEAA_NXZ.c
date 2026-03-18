/*
 * XREFs of ?UpdateCommandsDelaysNextBatch@CCompiledEffectTemplateMarshaler@DirectComposition@@UEAA_NXZ @ 0x140145260
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CCompiledEffectTemplateMarshaler::UpdateCommandsDelaysNextBatch(
        DirectComposition::CCompiledEffectTemplateMarshaler *this)
{
  char v1; // dl

  v1 = 0;
  if ( *((_QWORD *)this + 8) )
    return (*((_DWORD *)this + 4) & 0x40) == 0;
  return v1;
}
