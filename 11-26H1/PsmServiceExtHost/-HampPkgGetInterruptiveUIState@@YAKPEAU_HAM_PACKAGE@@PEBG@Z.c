/*
 * XREFs of ?HampPkgGetInterruptiveUIState@@YAKPEAU_HAM_PACKAGE@@PEBG@Z @ 0x180017F74
 * Callers:
 *     ?HamSrvGetInterruptiveUIStateForAumid@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z @ 0x1800188B8 (-HamSrvGetInterruptiveUIStateForAumid@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z.c)
 *     ?HamSrvGetPackageInterruptiveUIState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z @ 0x18007A3C0 (-HamSrvGetPackageInterruptiveUIState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z.c)
 * Callees:
 *     ?HampAppGetInterruptiveUIState@@YAKPEAU_HAM_APPLICATION@@@Z @ 0x1800170CC (-HampAppGetInterruptiveUIState@@YAKPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampPkgGetFirstApplication@@YAPEAU_HAM_APPLICATION@@PEAU_HAM_PACKAGE@@@Z @ 0x180036A4C (-HampPkgGetFirstApplication@@YAPEAU_HAM_APPLICATION@@PEAU_HAM_PACKAGE@@@Z.c)
 *     CemRcObjectDereference @ 0x180038DE0 (CemRcObjectDereference.c)
 *     ?HampPkgGetNextApplication@@YAPEAU_HAM_APPLICATION@@PEAU_HAM_PACKAGE@@PEAU1@@Z @ 0x18003C024 (-HampPkgGetNextApplication@@YAPEAU_HAM_APPLICATION@@PEAU_HAM_PACKAGE@@PEAU1@@Z.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall HampPkgGetInterruptiveUIState(struct _HAM_PACKAGE *a1, wchar_t *String2)
{
  unsigned int InterruptiveUIState; // edi
  struct _HAM_APPLICATION *FirstApplication; // rbx
  int v7[4]; // [rsp+20h] [rbp-C8h] BYREF
  wchar_t String1[72]; // [rsp+30h] [rbp-B8h] BYREF

  memset_0(String1, 0, 0x82uLL);
  InterruptiveUIState = 0;
  FirstApplication = HampPkgGetFirstApplication(a1);
  if ( FirstApplication )
  {
    do
    {
      if ( !String2
        || (v7[0] = 130,
            PsmGetApplicationNameFromKey((char *)FirstApplication + 96, String1, v7),
            !_wcsicmp(String1, String2)) )
      {
        InterruptiveUIState = HampAppGetInterruptiveUIState(FirstApplication);
        if ( InterruptiveUIState )
          break;
      }
      FirstApplication = HampPkgGetNextApplication(a1, FirstApplication);
    }
    while ( FirstApplication );
    if ( FirstApplication )
      CemRcObjectDereference(FirstApplication);
  }
  return InterruptiveUIState;
}
