/*
 * XREFs of ?HampSystemQueryDWordValue@@YAJPEAUHKEY__@@PEBGPEAK@Z @ 0x18008BBB0
 * Callers:
 *     ?HampUtilQueryTerminateTimeouts@@YAXPEAK00@Z @ 0x180017D5C (-HampUtilQueryTerminateTimeouts@@YAXPEAK00@Z.c)
 *     ?HampHostUpdateQuiesceState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z @ 0x1800272D4 (-HampHostUpdateQuiesceState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z.c)
 *     ?HampUtilQueryQuiesceTimeouts@@YAXPEAK0@Z @ 0x1800625B0 (-HampUtilQueryQuiesceTimeouts@@YAXPEAK0@Z.c)
 *     ?HampUtilQueryDesktopWindowCloseTimeout@@YAXPEAK@Z @ 0x18006DAE0 (-HampUtilQueryDesktopWindowCloseTimeout@@YAXPEAK@Z.c)
 *     ?RmpGetResourceManagerRegistryOverrides@@YAJPEAU_RM_RUNTIME_CONFIGURATION@@0@Z @ 0x180080968 (-RmpGetResourceManagerRegistryOverrides@@YAJPEAU_RM_RUNTIME_CONFIGURATION@@0@Z.c)
 * Callees:
 *     ?HampSystemQueryValue@@YAJPEAUHKEY__@@PEBGPEAXPEAK@Z @ 0x180061190 (-HampSystemQueryValue@@YAJPEAUHKEY__@@PEBGPEAXPEAK@Z.c)
 */

LSTATUS __fastcall HampSystemQueryDWordValue(HKEY a1, const unsigned __int16 *a2, unsigned int *a3)
{
  LSTATUS result; // eax
  unsigned int v5[6]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v6; // [rsp+58h] [rbp+20h] BYREF

  v5[0] = 0;
  v6 = 4;
  result = HampSystemQueryValue(a1, a2, (BYTE *)v5, &v6);
  if ( result >= 0 )
  {
    if ( v6 == 4 )
    {
      *a3 = v5[0];
      return 0;
    }
    else
    {
      return -1073739509;
    }
  }
  return result;
}
