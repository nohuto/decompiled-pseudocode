/*
 * XREFs of ?PopulateMouseProperties@@YAXPEAURIMDEV@@PEAX1@Z @ 0x140130438
 * Callers:
 *     RIMPopulateExtendedMouseDeviceProperties @ 0x1401EC394 (RIMPopulateExtendedMouseDeviceProperties.c)
 * Callees:
 *     ?ReadDevicePropertyFromRegistry@@YA_NPEBGPEAX1JPEAJ@Z @ 0x140130494 (-ReadDevicePropertyFromRegistry@@YA_NPEBGPEAX1JPEAJ@Z.c)
 */

void __fastcall PopulateMouseProperties(struct RIMDEV *a1, void *a2, void *a3)
{
  int v4; // ebx
  int v5; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0;
  v5 = 0;
  if ( ReadDevicePropertyFromRegistry(L"ForceVirtualDesktop", a2, a3, 0, &v5) )
  {
    LOBYTE(v4) = v5 != 0;
    *((_DWORD *)a1 + 222) = v4 | *((_DWORD *)a1 + 222) & 0xFFFFFFFE;
  }
}
