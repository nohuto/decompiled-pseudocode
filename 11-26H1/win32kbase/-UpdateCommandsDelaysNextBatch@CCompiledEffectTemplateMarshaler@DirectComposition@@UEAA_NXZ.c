/*
 * XREFs of ?UpdateCommandsDelaysNextBatch@CCompiledEffectTemplateMarshaler@DirectComposition@@UEAA_NXZ @ 0x140167860
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
    return (*((_DWORD *)this + 4) & 0x80u) == 0;
  return v1;
}
