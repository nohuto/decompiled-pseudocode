/*
 * XREFs of wil_details_PopulateInitialConfiguredFeatureStates @ 0x1400967CC
 * Callers:
 *     wil_InitializeFeatureStaging @ 0x1400966B8 (wil_InitializeFeatureStaging.c)
 * Callees:
 *     __security_check_cookie @ 0x1400467B0 (__security_check_cookie.c)
 */

void wil_details_PopulateInitialConfiguredFeatureStates()
{
  _UNKNOWN **i; // rbx
  char v1; // al
  _BOOL8 v2; // rdx
  int v3; // eax
  __int64 *v4; // rcx
  _QWORD *v5; // rcx
  __int64 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+28h] [rbp-20h] BYREF
  int v8; // [rsp+30h] [rbp-18h]

  for ( i = &wil_details_featureDescriptors_a; ; ++i )
  {
    if ( i >= (_UNKNOWN **)&wil_details_featureDescriptors_z )
      return;
    if ( *i )
      break;
  }
LABEL_24:
  if ( !i )
    return;
  v7 = 0LL;
  v8 = 0;
  v6 = 0LL;
  if ( *((_BYTE *)i + 29) || *((_BYTE *)i + 30) )
    goto LABEL_18;
  v1 = *((_BYTE *)i + 28);
  v2 = v1 != 3 && v1 != 2;
  v3 = ((__int64 (__fastcall *)(_QWORD, _BOOL8, __int64 *, __int64 *))RtlQueryFeatureConfiguration)(
         *((unsigned int *)i + 6),
         v2,
         &v6,
         &v7);
  if ( v3 != -2147483614 )
  {
    if ( v3 != -1073741275 )
    {
      if ( !v3 )
      {
        v6 = (8 * (BYTE4(v7) & 0xB0 | (4 * (BYTE4(v7) & 0x40u)))) | 0x206LL;
        goto LABEL_19;
      }
      if ( v3 == 279 )
      {
        v6 = (8 * (BYTE4(v7) & 0x80u)) | 0x206LL;
        goto LABEL_19;
      }
    }
LABEL_18:
    v6 = 518LL;
LABEL_19:
    v4 = (__int64 *)*i;
    i += 7;
    *v4 = v6;
    while ( i < (_UNKNOWN **)&wil_details_featureDescriptors_z )
    {
      if ( *i )
        goto LABEL_24;
      ++i;
    }
    return;
  }
  v6 = 518LL;
LABEL_27:
  v5 = *i;
  i += 7;
  *v5 = 518LL;
  while ( i < (_UNKNOWN **)&wil_details_featureDescriptors_z )
  {
    if ( *i )
    {
      if ( i )
        goto LABEL_27;
      return;
    }
    ++i;
  }
}
