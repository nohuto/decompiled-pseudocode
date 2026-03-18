/*
 * XREFs of ?IsVRRMaxDuration@CLegacyRenderTarget@@UEBA_NXZ @ 0x1801CFDA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CLegacyRenderTarget::IsVRRMaxDuration(CLegacyRenderTarget *this)
{
  return *((_QWORD *)this + 4010) == 0xFFFFFFFFLL;
}
