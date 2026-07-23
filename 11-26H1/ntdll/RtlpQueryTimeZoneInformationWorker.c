/*
 * XREFs of RtlpQueryTimeZoneInformationWorker @ 0x1800FBDC0
 * Callers:
 *     EtwpGetTimeZoneInformation @ 0x1800410CC (EtwpGetTimeZoneInformation.c)
 *     RtlQueryTimeZoneInformation @ 0x1800FBDB0 (RtlQueryTimeZoneInformation.c)
 *     RtlQueryDynamicTimeZoneInformation @ 0x180141C10 (RtlQueryDynamicTimeZoneInformation.c)
 * Callees:
 *     RtlpQueryRegistryValues @ 0x1800440A0 (RtlpQueryRegistryValues.c)
 *     RtlpGetTimeZoneInfoHandle @ 0x1800FC048 (RtlpGetTimeZoneInfoHandle.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpQueryTimeZoneInformationWorker(char *a1, size_t Size)
{
  unsigned int v2; // esi
  __int64 result; // rax
  int RegistryValues; // edi
  int v6; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD v8[2]; // [rsp+40h] [rbp-C0h] BYREF
  char *v9; // [rsp+48h] [rbp-B8h]
  _DWORD v10[2]; // [rsp+50h] [rbp-B0h] BYREF
  char *v11; // [rsp+58h] [rbp-A8h]
  __int128 v12; // [rsp+60h] [rbp-A0h] BYREF
  char v13[8]; // [rsp+70h] [rbp-90h] BYREF
  int v14; // [rsp+78h] [rbp-88h]
  const WCHAR *v15; // [rsp+80h] [rbp-80h]
  char *v16; // [rsp+88h] [rbp-78h]
  int v17; // [rsp+90h] [rbp-70h]
  int v18; // [rsp+B0h] [rbp-50h]
  const WCHAR *v19; // [rsp+B8h] [rbp-48h]
  _DWORD *v20; // [rsp+C0h] [rbp-40h]
  int v21; // [rsp+C8h] [rbp-38h]
  int v22; // [rsp+E8h] [rbp-18h]
  const WCHAR *v23; // [rsp+F0h] [rbp-10h]
  char *v24; // [rsp+F8h] [rbp-8h]
  int v25; // [rsp+100h] [rbp+0h]
  int v26; // [rsp+120h] [rbp+20h]
  const WCHAR *v27; // [rsp+128h] [rbp+28h]
  char *v28; // [rsp+130h] [rbp+30h]
  int v29; // [rsp+138h] [rbp+38h]
  int v30; // [rsp+158h] [rbp+58h]
  const WCHAR *v31; // [rsp+160h] [rbp+60h]
  _DWORD *v32; // [rsp+168h] [rbp+68h]
  int v33; // [rsp+170h] [rbp+70h]
  int v34; // [rsp+190h] [rbp+90h]
  const WCHAR *v35; // [rsp+198h] [rbp+98h]
  char *v36; // [rsp+1A0h] [rbp+A0h]
  int v37; // [rsp+1A8h] [rbp+A8h]
  int v38; // [rsp+1C8h] [rbp+C8h]
  const WCHAR *v39; // [rsp+1D0h] [rbp+D0h]
  char *v40; // [rsp+1D8h] [rbp+D8h]
  int v41; // [rsp+1E0h] [rbp+E0h]
  void *v42; // [rsp+1F8h] [rbp+F8h]
  const WCHAR *v43; // [rsp+208h] [rbp+108h]
  __int128 *v44; // [rsp+210h] [rbp+110h]
  int v45; // [rsp+218h] [rbp+118h]
  int v46; // [rsp+238h] [rbp+138h]
  const WCHAR *v47; // [rsp+240h] [rbp+140h]
  int *v48; // [rsp+248h] [rbp+148h]
  int v49; // [rsp+250h] [rbp+150h]

  v2 = Size;
  Handle = 0LL;
  v8[1] = 0;
  v10[1] = 0;
  v6 = 0;
  v12 = 0LL;
  result = RtlpGetTimeZoneInfoHandle(0LL, &Handle);
  if ( (int)result >= 0 )
  {
    memset_thunk_772440563353939046(a1, 0, v2);
    memset_thunk_772440563353939046(v13, 0, 0x230uLL);
    v8[0] = 0x400000;
    v14 = 288;
    v15 = L"Bias";
    v9 = a1 + 4;
    v19 = L"StandardName";
    v20 = v8;
    v16 = a1;
    v23 = L"StandardBias";
    v24 = a1 + 84;
    v27 = L"StandardStart";
    v28 = a1 + 68;
    *((_DWORD *)a1 + 17) = -16;
    v11 = a1 + 88;
    v31 = L"DaylightName";
    v32 = v10;
    v35 = L"DaylightBias";
    v36 = a1 + 168;
    v39 = L"DaylightStart";
    v10[0] = 0x400000;
    v40 = a1 + 152;
    *((_DWORD *)a1 + 38) = -16;
    v17 = 0x4000000;
    v18 = 288;
    v21 = 0x1000000;
    v22 = 288;
    v25 = 0x4000000;
    v26 = 288;
    v29 = 50331648;
    v30 = 288;
    v33 = 0x1000000;
    v34 = 288;
    v37 = 0x4000000;
    v38 = 288;
    v41 = 50331648;
    if ( v2 >= 0x1B0 )
    {
      LODWORD(v12) = 0x1000000;
      *((_QWORD *)&v12 + 1) = a1 + 172;
      v42 = &RtlpQueryTimeZoneKeyNameRoutine;
      v43 = L"TimeZoneKeyName";
      v44 = &v12;
      v47 = L"DynamicDaylightTimeDisabled";
      v48 = &v6;
      v45 = 0;
      v46 = 288;
      v49 = 0x4000000;
    }
    RegistryValues = RtlpQueryRegistryValues(0x40000000LL, (const wchar_t *)Handle, (__int64)v13, 0LL, 0LL, 1);
    if ( RegistryValues >= 0 && v2 >= 0x1B0 )
      a1[428] = v6 != 0;
    NtClose(Handle);
    return (unsigned int)RegistryValues;
  }
  return result;
}
