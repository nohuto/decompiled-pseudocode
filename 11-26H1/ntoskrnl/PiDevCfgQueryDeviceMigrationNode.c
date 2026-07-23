/*
 * XREFs of PiDevCfgQueryDeviceMigrationNode @ 0x140A47478
 * Callers:
 *     PiDevCfgMigrateDevice @ 0x140A45858 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x140A46B84 (PiDevCfgFindDeviceMigrationNode.c)
 * Callees:
 *     PnpValidateMultiSzData @ 0x1404EE954 (PnpValidateMultiSzData.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     _RegRtlOpenKeyTransacted @ 0x1409583B0 (_RegRtlOpenKeyTransacted.c)
 *     RtlGUIDFromString @ 0x1409622E0 (RtlGUIDFromString.c)
 *     RtlpQueryRegistryValues @ 0x140A10184 (RtlpQueryRegistryValues.c)
 *     PiDevCfgFreeDeviceMigrationNode @ 0x140A1510C (PiDevCfgFreeDeviceMigrationNode.c)
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 *     RtlCreateUnicodeString @ 0x140A478B0 (RtlCreateUnicodeString.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
 */

__int64 __fastcall PiDevCfgQueryDeviceMigrationNode(__int64 a1, const WCHAR *a2, __int64 *a3)
{
  unsigned int v3; // r14d
  char *v4; // r10
  __int64 v6; // rax
  __int64 v7; // rcx
  int RegistryValues; // edi
  __int64 Pool2; // rax
  __int64 v10; // rbx
  __m128i v11; // xmm6
  __m128i v12; // xmm0
  __m128i si128; // xmm1
  __m128i v14; // xmm2
  __m128i v15; // xmm1
  const WCHAR *v16; // rdx
  _QWORD *v17; // rsi
  _WORD *v18; // rcx
  UNICODE_STRING *v20; // r9
  ULONG v21; // [rsp+28h] [rbp-E0h]
  HANDLE Handle; // [rsp+38h] [rbp-D0h] BYREF
  UNICODE_STRING GuidString; // [rsp+40h] [rbp-C8h] BYREF
  __int64 *v24; // [rsp+50h] [rbp-B8h]
  int v25[4]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+68h] [rbp-A0h]
  __int64 v27; // [rsp+70h] [rbp-98h]
  int v28; // [rsp+78h] [rbp-90h]
  int v29; // [rsp+98h] [rbp-70h]
  unsigned __int64 v30; // [rsp+A0h] [rbp-68h]
  unsigned __int64 v31; // [rsp+A8h] [rbp-60h]
  int v32; // [rsp+B0h] [rbp-58h]
  int v33; // [rsp+D0h] [rbp-38h]
  const wchar_t *v34; // [rsp+D8h] [rbp-30h]
  UNICODE_STRING *p_GuidString; // [rsp+E0h] [rbp-28h]
  int v36; // [rsp+E8h] [rbp-20h]
  int v37; // [rsp+108h] [rbp+0h]
  const wchar_t *v38; // [rsp+110h] [rbp+8h]
  __int64 v39; // [rsp+118h] [rbp+10h]
  int v40; // [rsp+120h] [rbp+18h]
  int v41; // [rsp+140h] [rbp+38h]
  const wchar_t *v42; // [rsp+148h] [rbp+40h]
  __int64 v43; // [rsp+150h] [rbp+48h]
  int v44; // [rsp+158h] [rbp+50h]
  int v45; // [rsp+178h] [rbp+70h]
  const wchar_t *v46; // [rsp+180h] [rbp+78h]
  __int64 v47; // [rsp+188h] [rbp+80h]
  int v48; // [rsp+190h] [rbp+88h]
  int v49; // [rsp+1B0h] [rbp+A8h]
  const wchar_t *v50; // [rsp+1B8h] [rbp+B0h]
  __int64 v51; // [rsp+1C0h] [rbp+B8h]
  int v52; // [rsp+1C8h] [rbp+C0h]
  int v53; // [rsp+1E8h] [rbp+E0h]
  const wchar_t *v54; // [rsp+1F0h] [rbp+E8h]
  __int64 v55; // [rsp+1F8h] [rbp+F0h]
  int v56; // [rsp+200h] [rbp+F8h]
  int v57; // [rsp+220h] [rbp+118h]
  const wchar_t *v58; // [rsp+228h] [rbp+120h]
  __int64 v59; // [rsp+230h] [rbp+128h]
  int v60; // [rsp+238h] [rbp+130h]

  v3 = 0;
  v4 = *(char **)(a1 + 8);
  v24 = a3;
  Handle = 0LL;
  *(_QWORD *)&GuidString.Length = 0LL;
  GuidString.Buffer = 0LL;
  if ( *(_QWORD *)&PiPnpRtlCtx && (v6 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL)) != 0 )
    v7 = *(_QWORD *)(v6 + 8);
  else
    v7 = 0LL;
  RegistryValues = RegRtlOpenKeyTransacted(v4, a2, 0, 0x20019u, &Handle, v7);
  if ( RegistryValues < 0 )
    goto LABEL_22;
  Pool2 = ExAllocatePool2(0x100uLL);
  v10 = Pool2;
  v11 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)Pool2, (__m128i)(unsigned __int64)Pool2);
  if ( !Pool2 )
  {
    RegistryValues = -1073741670;
    goto LABEL_22;
  }
  *(_QWORD *)(Pool2 + 184) = -1LL;
  if ( !RtlCreateUnicodeString((PUNICODE_STRING)(Pool2 + 24), a2) )
  {
    RegistryValues = -1073741670;
    goto LABEL_21;
  }
  *(_QWORD *)(v10 + 40) = Handle;
  Handle = 0LL;
  memset_0(v25, 0, 0x230uLL);
  v12 = _mm_loadu_si128((const __m128i *)off_140BE02E0);
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v14 = _mm_load_si128((const __m128i *)&_xmm);
  v34 = L"ClassGuid";
  v28 = _mm_cvtsi128_si32(si128);
  p_GuidString = &GuidString;
  v38 = L"Capabilities";
  v32 = _mm_cvtsi128_si32(_mm_srli_si128(si128, 4));
  v39 = v10 + 96;
  v42 = L"BusDeviceDesc";
  v46 = L"LocationInfo";
  v50 = L"LocationPaths";
  v51 = v10 + 136;
  v26 = v12.m128i_i64[0];
  v54 = L"DriverInfName";
  v30 = _mm_srli_si128(v12, 8).m128i_u64[0];
  v15 = _mm_add_epi64(
          _mm_slli_epi64(
            _mm_add_epi64(_mm_unpacklo_epi32(_mm_loadl_epi64((const __m128i *)&_xmm), (__m128i)0LL), (__m128i)_xmm),
            4u),
          v11);
  v58 = L"Present";
  v27 = v15.m128i_i64[0];
  v25[2] = _mm_cvtsi128_si32(v14);
  v36 = 0x1000000;
  v33 = 288;
  v40 = 0x4000000;
  v37 = 288;
  v44 = 0x1000000;
  v41 = 288;
  v48 = 0x1000000;
  v45 = 288;
  v56 = 0x1000000;
  v53 = 288;
  v60 = 0x4000000;
  v16 = *(const WCHAR **)(v10 + 40);
  v57 = 288;
  v59 = v10 + 176;
  v31 = _mm_srli_si128(v15, 8).m128i_u64[0];
  v29 = _mm_cvtsi128_si32(_mm_srli_si128(v14, 4));
  v43 = v10 + 104;
  v47 = v10 + 120;
  v52 = 117440512;
  v49 = 304;
  v55 = v10 + 160;
  RegistryValues = RtlpQueryRegistryValues(3221225472LL, v16, (__int64)v25, 0LL, v21, 1);
  if ( RegistryValues < 0 )
  {
LABEL_21:
    PiDevCfgFreeDeviceMigrationNode((char *)v10);
    goto LABEL_22;
  }
  if ( !GuidString.Buffer || RtlGUIDFromString(&GuidString, (GUID *)(v10 + 80)) < 0 )
  {
    RegistryValues = -1073741772;
    goto LABEL_21;
  }
  v17 = (_QWORD *)(v10 + 56);
  do
  {
    if ( *((_WORD *)v17 - 4) <= 2u && *v17 )
      RtlFreeAnsiString((PUNICODE_STRING)(v10 + 16 * (v3 + 3LL)));
    ++v3;
    v17 += 2;
  }
  while ( v3 < 2 );
  if ( !*(_WORD *)(v10 + 104) && *(_QWORD *)(v10 + 112) )
    RtlFreeAnsiString((PUNICODE_STRING)(v10 + 104));
  if ( !*(_WORD *)(v10 + 120) && *(_QWORD *)(v10 + 128) )
    RtlFreeAnsiString((PUNICODE_STRING)(v10 + 120));
  v18 = *(_WORD **)(v10 + 144);
  if ( v18 && !PnpValidateMultiSzData(v18, *(unsigned __int16 *)(v10 + 136)) )
    RtlFreeAnsiString(v20);
  if ( !*(_WORD *)(v10 + 160) && *(_QWORD *)(v10 + 168) )
    RtlFreeAnsiString((PUNICODE_STRING)(v10 + 160));
  *v24 = v10;
LABEL_22:
  if ( Handle )
    ZwClose(Handle);
  if ( GuidString.Buffer )
    ExFreePool(GuidString.Buffer);
  return (unsigned int)RegistryValues;
}
