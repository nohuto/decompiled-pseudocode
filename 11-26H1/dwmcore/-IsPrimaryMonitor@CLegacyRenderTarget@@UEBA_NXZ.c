/*
 * XREFs of ?IsPrimaryMonitor@CLegacyRenderTarget@@UEBA_NXZ @ 0x18018C0E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CLegacyRenderTarget::IsPrimaryMonitor(CLegacyRenderTarget *this)
{
  return *((float *)this + 7442) == 0.0 && *((float *)this + 7443) == 0.0 && *((_BYTE *)this + 32354);
}
