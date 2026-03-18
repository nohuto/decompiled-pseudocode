/*
 * XREFs of CmQuerySingleFeatureConfiguration @ 0x140AEFD08
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B145DC (ExpQuerySystemInformation.c)
 * Callees:
 *     RtlQueryFeatureConfiguration @ 0x1404CC190 (RtlQueryFeatureConfiguration.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 */

__int64 __fastcall CmQuerySingleFeatureConfiguration(void *Src, int a2, void *a3, int a4, _DWORD *a5, char a6)
{
  __int64 ULong64FromUser; // rax
  int FeatureConfiguration; // eax
  unsigned int v10; // ebx
  __int64 v12; // [rsp+20h] [rbp-58h] BYREF
  __int128 Srca; // [rsp+38h] [rbp-40h] BYREF
  __int64 v14; // [rsp+48h] [rbp-30h]

  v12 = 0LL;
  Srca = 0LL;
  v14 = 0LL;
  if ( a2 != 8 )
    return (unsigned int)-1073741820;
  if ( a6 )
  {
    ULong64FromUser = RtlReadULong64FromUser(Src);
    v12 = ULong64FromUser;
  }
  else
  {
    RtlCopyVolatileMemory(&v12, Src, 8uLL);
    LODWORD(ULong64FromUser) = v12;
  }
  if ( a4 != 24 )
  {
    v10 = -1073741820;
LABEL_11:
    *a5 = 24;
    return v10;
  }
  FeatureConfiguration = RtlQueryFeatureConfiguration(
                           HIDWORD(v12),
                           ULong64FromUser,
                           (__int64 *)&Srca,
                           (__int64)&Srca + 8);
  v10 = FeatureConfiguration;
  if ( FeatureConfiguration >= 0 )
  {
    if ( a6 )
      RtlCopyToUser(a3, &Srca, 0x18uLL);
    else
      RtlCopyVolatileMemory(a3, &Srca, 0x18uLL);
    *a5 = 24;
    return 0;
  }
  else if ( FeatureConfiguration == -1073741275 || FeatureConfiguration == -2147483614 )
  {
    *((_QWORD *)&Srca + 1) = 0LL;
    LODWORD(v14) = 0;
    if ( a6 )
      RtlCopyToUser(a3, &Srca, 0x18uLL);
    else
      RtlCopyVolatileMemory(a3, &Srca, 0x18uLL);
    goto LABEL_11;
  }
  return v10;
}
