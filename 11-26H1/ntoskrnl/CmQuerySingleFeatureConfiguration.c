/*
 * XREFs of CmQuerySingleFeatureConfiguration @ 0x140AF28CC
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 * Callees:
 *     RtlQueryFeatureConfiguration @ 0x1404C5BC0 (RtlQueryFeatureConfiguration.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 */

__int64 __fastcall CmQuerySingleFeatureConfiguration(void *Src, int a2, void *a3, int a4, _DWORD *a5, char a6)
{
  __int64 ULong64FromUser; // rax
  NTSTATUS FeatureConfiguration; // eax
  unsigned int v10; // ebx
  RTL_FEATURE_ID FeatureId[6]; // [rsp+20h] [rbp-58h] BYREF
  ULONGLONG ChangeStamp[2]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v14; // [rsp+48h] [rbp-30h]

  *(_QWORD *)FeatureId = 0LL;
  *(_OWORD *)ChangeStamp = 0LL;
  v14 = 0LL;
  if ( a2 != 8 )
    return (unsigned int)-1073741820;
  if ( a6 )
  {
    ULong64FromUser = RtlReadULong64FromUser(Src);
    *(_QWORD *)FeatureId = ULong64FromUser;
  }
  else
  {
    RtlCopyVolatileMemory(FeatureId, Src, 8uLL);
    LODWORD(ULong64FromUser) = FeatureId[0];
  }
  if ( a4 != 24 )
  {
    v10 = -1073741820;
LABEL_11:
    *a5 = 24;
    return v10;
  }
  FeatureConfiguration = RtlQueryFeatureConfiguration(
                           FeatureId[1],
                           (RTL_FEATURE_CONFIGURATION_TYPE)ULong64FromUser,
                           ChangeStamp,
                           (PRTL_FEATURE_CONFIGURATION)&ChangeStamp[1]);
  v10 = FeatureConfiguration;
  if ( FeatureConfiguration >= 0 )
  {
    if ( a6 )
      RtlCopyToUser(a3, ChangeStamp, 0x18uLL);
    else
      RtlCopyVolatileMemory(a3, ChangeStamp, 0x18uLL);
    *a5 = 24;
    return 0;
  }
  else if ( FeatureConfiguration == -1073741275 || FeatureConfiguration == -2147483614 )
  {
    ChangeStamp[1] = 0LL;
    LODWORD(v14) = 0;
    if ( a6 )
      RtlCopyToUser(a3, ChangeStamp, 0x18uLL);
    else
      RtlCopyVolatileMemory(a3, ChangeStamp, 0x18uLL);
    goto LABEL_11;
  }
  return v10;
}
