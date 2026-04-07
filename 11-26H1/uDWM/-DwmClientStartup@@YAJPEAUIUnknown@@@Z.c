/*
 * XREFs of ?DwmClientStartup@@YAJPEAUIUnknown@@@Z @ 0x180071E50
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CDesktopManager@@SAJPEAUIUnknown@@PEAPEAV1@@Z @ 0x180071E9C (-Create@CDesktopManager@@SAJPEAUIUnknown@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall DwmClientStartup(struct IUnknown *a1, struct CDesktopManager **a2)
{
  int v2; // eax
  unsigned int v3; // ebx

  v2 = CDesktopManager::Create(a1, a2);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F91D8, 2LL, v2, 0x65u, 0LL);
  return v3;
}
