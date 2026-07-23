/*
 * XREFs of LdrpVerifyAlternateResourceModuleEx @ 0x14061B748
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x1403DFDC0 (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     LdrpGetRcConfig @ 0x1403DF8BC (LdrpGetRcConfig.c)
 *     _wcsicmp @ 0x1405389F0 (_wcsicmp.c)
 *     LdrResGetRCConfig @ 0x140B05364 (LdrResGetRCConfig.c)
 */

char __fastcall LdrpVerifyAlternateResourceModuleEx(void *a1, void *a2, __int64 a3, const wchar_t *a4, int a5)
{
  int RCConfig; // eax
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // [rsp+30h] [rbp-18h] BYREF
  __int64 v14; // [rsp+60h] [rbp+18h] BYREF

  v14 = 0LL;
  v13 = 0LL;
  if ( (a5 & 0x1000) != 0 )
  {
    RCConfig = LdrResGetRCConfig((_DWORD)a1, 0, (unsigned int)&v14, 4096, 1);
    if ( RCConfig < 0 )
    {
      if ( RCConfig != -1073741686 )
        return 0;
      return (a5 & 0x1000000) != 0;
    }
    if ( (int)LdrResGetRCConfig((_DWORD)a2, 0, (unsigned int)&v13, 4096, 0) < 0 )
      return 0;
    v9 = v14;
    v10 = v13;
  }
  else
  {
    v9 = LdrpGetRcConfig(a1, (__int64)a2, 0, 1);
    if ( !v9 )
      return (a5 & 0x1000000) != 0;
    v10 = LdrpGetRcConfig(a2, v11, 0, 0);
    if ( !v10 )
      return 0;
  }
  v12 = *(_QWORD *)(v9 + 44) - *(_QWORD *)(v10 + 44);
  if ( !v12 )
    v12 = *(_QWORD *)(v9 + 52) - *(_QWORD *)(v10 + 52);
  if ( v12 )
    return 0;
  if ( (a5 & 0x1000000) != 0 )
    return 1;
  if ( !a4 )
    return 0;
  return wcsicmp(a4, (const wchar_t *)(v10 + *(unsigned int *)(v10 + 116))) == 0;
}
