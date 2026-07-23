/*
 * XREFs of LdrpVerifyAlternateResourceModuleEx @ 0x1800A601C
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x18001B390 (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     LdrpGetRcConfig @ 0x180018F20 (LdrpGetRcConfig.c)
 *     LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure @ 0x180090C10 (LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure.c)
 *     LdrResGetRCConfig @ 0x1800A68D0 (LdrResGetRCConfig.c)
 *     _wcsicmp @ 0x180128CB0 (_wcsicmp.c)
 */

char __fastcall LdrpVerifyAlternateResourceModuleEx(
        void *a1,
        void *a2,
        unsigned __int16 *a3,
        const wchar_t *a4,
        int a5,
        int a6)
{
  __int64 v9; // rdx
  _DWORD *v10; // rbx
  _DWORD *v11; // rcx
  __int64 v12; // rax
  __int64 v14; // rax
  bool v15; // al
  int RCConfig; // eax

  if ( !a6 )
    return 1;
  if ( (a5 & 0x1000) != 0 )
  {
    RCConfig = LdrResGetRCConfig(a1, 1);
    if ( RCConfig >= 0 )
    {
      if ( (int)LdrResGetRCConfig(a2, 0) < 0 )
        return 0;
      v10 = 0LL;
      v11 = 0LL;
      goto LABEL_5;
    }
    if ( RCConfig != -1073741686 )
      return 0;
    return (a5 & 0x1000000) != 0;
  }
  v10 = LdrpGetRcConfig(a1, (__int64)a2, 0, 1);
  if ( !v10 )
    return (a5 & 0x1000000) != 0;
  v11 = LdrpGetRcConfig(a2, v9, 0, 0);
  if ( !v11 )
    return 0;
LABEL_5:
  if ( a6 == 2 )
  {
    v14 = *(_QWORD *)(v10 + 7) - *(_QWORD *)(v11 + 7);
    if ( !v14 )
      v14 = *(_QWORD *)(v10 + 9) - *(_QWORD *)(v11 + 9);
    v15 = v14 == 0;
    if ( a3 )
    {
      if ( !v15 )
      {
        LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure(a3, (__int64)(v10 + 7), (__int64)(v11 + 7));
        return 0;
      }
    }
    else if ( !v15 )
    {
      return 0;
    }
  }
  else
  {
    v12 = *(_QWORD *)(v10 + 11) - *(_QWORD *)(v11 + 11);
    if ( !v12 )
      v12 = *(_QWORD *)(v10 + 13) - *(_QWORD *)(v11 + 13);
    if ( v12 )
      return 0;
  }
  if ( (a5 & 0x1000000) == 0 )
  {
    if ( a4 )
      return wcsicmp(a4, (const wchar_t *)((char *)v11 + (unsigned int)v11[29])) == 0;
    return 0;
  }
  return 1;
}
