/*
 * XREFs of ?Startup@@YAJXZ @ 0x18020A678
 * Callers:
 *     DllMain @ 0x1801BC54C (DllMain.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InitializeFromRegistry@CCommonRegistryData@@SAJXZ @ 0x1801C24F8 (-InitializeFromRegistry@CCommonRegistryData@@SAJXZ.c)
 *     ?Initialize@OSInfo@@SAXXZ @ 0x1801DBE28 (-Initialize@OSInfo@@SAXXZ.c)
 *     ?EnsureD2DFactory@CD2DFactory@@QEAAJXZ @ 0x18020A6D8 (-EnsureD2DFactory@CD2DFactory@@QEAAJXZ.c)
 */

__int64 Startup(void)
{
  CD2DFactory *v0; // rcx
  int v1; // eax
  unsigned int v2; // ebx

  OSInfo::Initialize();
  QueryPerformanceFrequency(&g_qpcFrequency);
  CCommonRegistryData::InitializeFromRegistry();
  v1 = CD2DFactory::EnsureD2DFactory(v0);
  v2 = v1;
  if ( v1 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v1, 0xFBu, 0LL);
  return v2;
}
