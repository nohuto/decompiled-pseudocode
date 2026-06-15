/*
 * XREFs of GetSupportedFormat @ 0x180147CC8
 * Callers:
 *     ?IsTechnologySupported@CSpatialAudioTechHRTF@@UEBA_NPEAUIAudioEndpointInfo@@PEBUtWAVEFORMATEX@@1KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1801487C0 (-IsTechnologySupported@CSpatialAudioTechHRTF@@UEBA_NPEAUIAudioEndpointInfo@@PEBUtWAVEFORMATEX@@1.c)
 * Callees:
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     FillHrtfDesiredFormat @ 0x180147B14 (FillHrtfDesiredFormat.c)
 *     IsBitsPerSampleIncluded @ 0x180148014 (IsBitsPerSampleIncluded.c)
 *     IsSampleRateIncluded @ 0x18014804C (IsSampleRateIncluded.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall GetSupportedFormat(
        __int64 (__fastcall ***a1)(_QWORD, __int128 *),
        __int16 *a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        int a7,
        int a8,
        __int64 a9)
{
  __int16 v10; // cx
  char v11; // si
  __int64 v13; // rax
  char v14; // dl
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned __int16 v17; // di
  __int64 v18; // r10
  __int64 v19; // r10
  __int16 v20; // r11
  __int64 (__fastcall **v21)(_QWORD, __int128 *); // rax
  __int128 v22; // xmm1
  char result; // al
  unsigned __int16 v24; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int16 v25; // [rsp+32h] [rbp-3Eh]
  __int128 v26; // [rsp+38h] [rbp-38h] BYREF
  __int128 v27; // [rsp+48h] [rbp-28h]
  __int64 v28; // [rsp+58h] [rbp-18h]

  v28 = 0LL;
  v10 = *a2;
  v11 = 0;
  v26 = 0LL;
  v27 = 0LL;
  if ( v10 == -2 )
  {
    v13 = *((_QWORD *)a2 + 3);
    v14 = 1;
    v15 = v13 - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
    if ( !v15 )
      v15 = *((_QWORD *)a2 + 4) - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
    if ( !v15 )
      goto LABEL_11;
    v16 = *((_QWORD *)a2 + 3) - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
    if ( !v16 )
      v16 = *((_QWORD *)a2 + 4) - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
    if ( !v16 )
      goto LABEL_11;
  }
  else
  {
    v14 = 0;
  }
  if ( ((v10 - 1) & 0xFFFD) != 0 )
  {
LABEL_21:
    *(_OWORD *)a9 = 0LL;
    v28 = 0LL;
    *(_OWORD *)(a9 + 16) = 0LL;
    goto LABEL_22;
  }
LABEL_11:
  v17 = a2[7];
  v24 = v17;
  if ( v14 )
    v25 = a2[9];
  else
    v25 = v17;
  if ( !(unsigned __int8)IsSampleRateIncluded(*((unsigned int *)a2 + 5), a3, a4) )
    goto LABEL_21;
  if ( !(unsigned __int8)IsSampleRateIncluded(*(unsigned int *)(v18 + 4), a5, a6) )
    goto LABEL_21;
  if ( !(unsigned __int8)IsBitsPerSampleIncluded(&v24) )
    goto LABEL_21;
  FillHrtfDesiredFormat(*(_DWORD *)(v19 + 20), v17, v20, *(_DWORD *)(v19 + 4), (__int64)&v26);
  v11 = (**a1)(a1, &v26);
  if ( !v11 )
  {
    if ( DWORD1(v27) != 1599 )
      goto LABEL_21;
    v21 = *a1;
    DWORD1(v27) = 255;
    v11 = (*v21)(a1, &v26);
    if ( !v11 )
      goto LABEL_21;
  }
  v22 = v27;
  *(_OWORD *)a9 = v26;
  *(_OWORD *)(a9 + 16) = v22;
LABEL_22:
  result = v11;
  *(_QWORD *)(a9 + 32) = v28;
  return result;
}
