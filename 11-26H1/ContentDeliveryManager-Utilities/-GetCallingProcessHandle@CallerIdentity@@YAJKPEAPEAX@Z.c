/*
 * XREFs of ?GetCallingProcessHandle@CallerIdentity@@YAJKPEAPEAX@Z @ 0x180073124
 * Callers:
 *     ?CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z @ 0x180072B04 (-CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z.c)
 *     ?GetCallingProcessPackageFullName@CallerIdentity@@YAJPEAPEAG@Z @ 0x180072C9C (-GetCallingProcessPackageFullName@CallerIdentity@@YAJPEAPEAG@Z.c)
 *     ?GetCallingProcessPackageSidString@CallerIdentity@@YAJPEAPEAG@Z @ 0x180072D10 (-GetCallingProcessPackageSidString@CallerIdentity@@YAJPEAPEAG@Z.c)
 * Callees:
 *     ?GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z @ 0x180073148 (-GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z.c)
 */

__int64 __fastcall CallerIdentity::GetCallingProcessHandle(CallerIdentity *this, __int64 a2, void **a3)
{
  int CallingProcessHandle; // eax
  unsigned int v4; // ecx

  CallingProcessHandle = CallerIdentity::GetCallingProcessHandle(this, a2, a2);
  v4 = 0;
  if ( CallingProcessHandle < 0 )
    return (unsigned int)CallingProcessHandle;
  return v4;
}
