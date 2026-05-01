/*
 * XREFs of ?RmpActivityHostIsPple@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180033A1C
 * Callers:
 *     ?ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180033478 (-ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceMan.c)
 *     ?ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180033840 (-ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamHostIsPple@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180033F44 (-RmHamHostIsPple@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPLICATION@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18008383C (-RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPLI.c)
 * Callees:
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

bool __fastcall RmpActivityHostIsPple(struct _RM_ACTIVITY_HOST *a1)
{
  char v1; // bl
  char *v2; // rdi
  int v4[4]; // [rsp+30h] [rbp-B8h] BYREF
  WCHAR String1[72]; // [rsp+40h] [rbp-A8h] BYREF

  v1 = 0;
  v2 = (char *)a1 + 80;
  if ( *((_DWORD *)a1 + 154) == 2 )
  {
    memset_0(String1, 0, 0x82uLL);
    v4[0] = 130;
    v1 = 0;
    if ( (int)PsmGetApplicationNameFromKey(v2, String1, v4) >= 0 )
      return CompareStringOrdinal(String1, -1, L"ppleae38af2e007f4358a809ac99a64a67c1", -1, 1) == 2;
  }
  return v1;
}
