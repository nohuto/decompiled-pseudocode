/*
 * XREFs of CmQueryFeatureConfigurationSections @ 0x140AAB714
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 * Callees:
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 *     CmFcManagerQueryFeatureConfigurationSectionInformation @ 0x140AAB8A4 (CmFcManagerQueryFeatureConfigurationSectionInformation.c)
 */

__int64 __fastcall CmQueryFeatureConfigurationSections(
        void *Src,
        int a2,
        void *a3,
        unsigned int a4,
        _DWORD *a5,
        KPROCESSOR_MODE PreviousMode)
{
  size_t v6; // rsi
  size_t v10; // r8
  bool v11; // zf
  KPROCESSOR_MODE v12; // di
  __int64 v13; // rcx
  __int64 v14; // r9
  int FeatureConfigurationSectionInformation; // ebx
  size_t v16; // r8
  HANDLE *v17; // rsi
  __int64 v18; // r14
  _OWORD v20[2]; // [rsp+28h] [rbp-D0h] BYREF
  _BYTE Srca[16]; // [rsp+50h] [rbp-A8h] BYREF
  char v22; // [rsp+60h] [rbp-98h] BYREF

  v6 = a4;
  memset(v20, 0, sizeof(v20));
  memset_0(Srca, 0, 0x68uLL);
  if ( ((a2 - 24) & 0xFFFFFFF7) != 0 )
  {
    FeatureConfigurationSectionInformation = -1073741820;
    v12 = PreviousMode;
  }
  else
  {
    v10 = 32LL;
    v11 = a2 == 32;
    v12 = PreviousMode;
    if ( !v11 )
      v10 = 24LL;
    if ( PreviousMode )
      RtlCopyFromUser(v20, Src, v10);
    else
      RtlCopyVolatileMemory(v20, Src, v10);
    if ( (_DWORD)v6 == 104 || (_DWORD)v6 == 80 )
    {
      LOBYTE(v14) = PreviousMode;
      FeatureConfigurationSectionInformation = CmFcManagerQueryFeatureConfigurationSectionInformation(
                                                 v13,
                                                 v20,
                                                 Srca,
                                                 v14);
      if ( FeatureConfigurationSectionInformation >= 0 )
      {
        v16 = 104LL;
        if ( (_DWORD)v6 != 104 )
          v16 = 80LL;
        if ( PreviousMode )
          RtlCopyToUser(a3, Srca, v16);
        else
          RtlCopyVolatileMemory(a3, Srca, v16);
        *a5 = v6;
        memset_0(Srca, 0, v6);
        FeatureConfigurationSectionInformation = 0;
      }
    }
    else
    {
      FeatureConfigurationSectionInformation = -1073741820;
      *a5 = 104;
    }
  }
  v17 = (HANDLE *)&v22;
  v18 = 4LL;
  do
  {
    if ( *v17 )
      ObCloseHandle(*v17, v12);
    v17 += 3;
    --v18;
  }
  while ( v18 );
  return (unsigned int)FeatureConfigurationSectionInformation;
}
