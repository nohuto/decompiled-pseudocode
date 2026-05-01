/*
 * XREFs of ?ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x180189A70
 * Callers:
 *     ?OnErrorReported@TraceLoggingProvider@wil@@MEAAX_NAEBUFailureInfo@2@@Z @ 0x180189A40 (-OnErrorReported@TraceLoggingProvider@wil@@MEAAX_NAEBUFailureInfo@2@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

void __fastcall wil::TraceLoggingProvider::ReportTelemetryFailure(
        wil::TraceLoggingProvider *this,
        const struct wil::FailureInfo *a2)
{
  __int64 v2; // rdi
  const WCHAR *v3; // r8
  const wchar_t *v4; // r9
  const WCHAR *v5; // r10
  const wchar_t *v6; // r11
  const wchar_t *v7; // rbx
  const WCHAR *v8; // rsi
  const wchar_t *v9; // r14
  const wchar_t *v10; // r15
  __int64 v11; // rax
  __int64 v12; // rcx
  int v13; // ecx
  __int64 v14; // rcx
  int v15; // ecx
  __int64 v16; // rcx
  int v17; // ecx
  __int64 v18; // rcx
  int v19; // ecx
  __int64 v20; // rcx
  int v21; // ecx
  __int64 v22; // rcx
  int v23; // ecx
  __int64 v24; // rcx
  int v25; // ecx
  int v26; // eax
  int v27; // [rsp+38h] [rbp-D0h] BYREF
  int v28; // [rsp+3Ch] [rbp-CCh] BYREF
  int v29; // [rsp+40h] [rbp-C8h] BYREF
  int v30; // [rsp+44h] [rbp-C4h] BYREF
  int v31; // [rsp+48h] [rbp-C0h] BYREF
  _DWORD v32[3]; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v33; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v34; // [rsp+60h] [rbp-A8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+68h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+78h] [rbp-90h] BYREF
  void *v37; // [rsp+88h] [rbp-80h]
  int v38; // [rsp+90h] [rbp-78h]
  int v39; // [rsp+94h] [rbp-74h]
  __int64 *v40; // [rsp+98h] [rbp-70h]
  __int64 v41; // [rsp+A0h] [rbp-68h]
  __int64 *v42; // [rsp+A8h] [rbp-60h]
  __int64 v43; // [rsp+B0h] [rbp-58h]
  _DWORD *v44; // [rsp+B8h] [rbp-50h]
  __int64 v45; // [rsp+C0h] [rbp-48h]
  const wchar_t *v46; // [rsp+C8h] [rbp-40h]
  int v47; // [rsp+D0h] [rbp-38h]
  int v48; // [rsp+D4h] [rbp-34h]
  int *v49; // [rsp+D8h] [rbp-30h]
  __int64 v50; // [rsp+E0h] [rbp-28h]
  const wchar_t *v51; // [rsp+E8h] [rbp-20h]
  int v52; // [rsp+F0h] [rbp-18h]
  int v53; // [rsp+F4h] [rbp-14h]
  int *v54; // [rsp+F8h] [rbp-10h]
  __int64 v55; // [rsp+100h] [rbp-8h]
  const WCHAR *v56; // [rsp+108h] [rbp+0h]
  int v57; // [rsp+110h] [rbp+8h]
  int v58; // [rsp+114h] [rbp+Ch]
  int *v59; // [rsp+118h] [rbp+10h]
  __int64 v60; // [rsp+120h] [rbp+18h]
  const wchar_t *v61; // [rsp+128h] [rbp+20h]
  int v62; // [rsp+130h] [rbp+28h]
  int v63; // [rsp+134h] [rbp+2Ch]
  int *v64; // [rsp+138h] [rbp+30h]
  __int64 v65; // [rsp+140h] [rbp+38h]
  const wchar_t *v66; // [rsp+148h] [rbp+40h]
  int v67; // [rsp+150h] [rbp+48h]
  int v68; // [rsp+154h] [rbp+4Ch]
  const WCHAR *v69; // [rsp+158h] [rbp+50h]
  int v70; // [rsp+160h] [rbp+58h]
  int v71; // [rsp+164h] [rbp+5Ch]
  int *v72; // [rsp+168h] [rbp+60h]
  __int64 v73; // [rsp+170h] [rbp+68h]
  const wchar_t *v74; // [rsp+178h] [rbp+70h]
  int v75; // [rsp+180h] [rbp+78h]
  int v76; // [rsp+184h] [rbp+7Ch]
  const WCHAR *v77; // [rsp+188h] [rbp+80h]
  int v78; // [rsp+190h] [rbp+88h]
  int v79; // [rsp+194h] [rbp+8Ch]

  v2 = *((_QWORD *)this + 1);
  if ( *(_DWORD *)v2 > 2u
    && (*(_QWORD *)(v2 + 16) & 0x200000000000LL) != 0
    && (*(_QWORD *)(v2 + 24) & 0x200000000000LL) == *(_QWORD *)(v2 + 24) )
  {
    v3 = (const WCHAR *)*((_QWORD *)a2 + 15);
    v4 = (const wchar_t *)*((_QWORD *)a2 + 14);
    v5 = (const WCHAR *)*((_QWORD *)a2 + 12);
    v6 = (const wchar_t *)*((_QWORD *)a2 + 11);
    v7 = (const wchar_t *)*((_QWORD *)a2 + 9);
    v8 = (const WCHAR *)*((_QWORD *)a2 + 3);
    v9 = (const wchar_t *)*((_QWORD *)a2 + 16);
    v10 = (const wchar_t *)*((_QWORD *)a2 + 7);
    v27 = *((_DWORD *)a2 + 26);
    v28 = *((_DWORD *)a2 + 20);
    v29 = *((_DWORD *)a2 + 8);
    v30 = *(_DWORD *)a2;
    v31 = *((_DWORD *)a2 + 16);
    v32[0] = *((_DWORD *)a2 + 2);
    v33 = 0x1000000LL;
    v34 = 0x1000000LL;
    v11 = -1LL;
    if ( v3 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( v3[v12] );
      v13 = 2 * v12 + 2;
    }
    else
    {
      v3 = &pvData;
      v13 = 2;
    }
    v77 = v3;
    v78 = v13;
    v79 = 0;
    if ( v4 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( *((_BYTE *)v4 + v14) );
      v15 = v14 + 1;
    }
    else
    {
      v4 = &word_180785B70;
      v15 = 1;
    }
    v75 = v15;
    v72 = &v27;
    v74 = v4;
    v76 = 0;
    v73 = 4LL;
    if ( v5 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( v5[v16] );
      v17 = 2 * v16 + 2;
    }
    else
    {
      v5 = &pvData;
      v17 = 2;
    }
    v69 = v5;
    v70 = v17;
    v71 = 0;
    if ( v6 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( *((_BYTE *)v6 + v18) );
      v19 = v18 + 1;
    }
    else
    {
      v6 = &word_180785B70;
      v19 = 1;
    }
    v67 = v19;
    v64 = &v28;
    v66 = v6;
    v68 = 0;
    v65 = 4LL;
    if ( v7 )
    {
      v20 = -1LL;
      do
        ++v20;
      while ( *((_BYTE *)v7 + v20) );
      v21 = v20 + 1;
    }
    else
    {
      v7 = &word_180785B70;
      v21 = 1;
    }
    v62 = v21;
    v59 = &v29;
    v61 = v7;
    v63 = 0;
    v60 = 4LL;
    if ( v8 )
    {
      v22 = -1LL;
      do
        ++v22;
      while ( v8[v22] );
      v23 = 2 * v22 + 2;
    }
    else
    {
      v8 = &pvData;
      v23 = 2;
    }
    v57 = v23;
    v54 = &v30;
    v56 = v8;
    v58 = 0;
    v55 = 4LL;
    if ( v9 )
    {
      v24 = -1LL;
      do
        ++v24;
      while ( *((_BYTE *)v9 + v24) );
      v25 = v24 + 1;
    }
    else
    {
      v9 = &word_180785B70;
      v25 = 1;
    }
    v52 = v25;
    v49 = &v31;
    v51 = v9;
    v53 = 0;
    v50 = 4LL;
    if ( v10 )
    {
      do
        ++v11;
      while ( *((_BYTE *)v10 + v11) );
      v26 = v11 + 1;
    }
    else
    {
      v10 = &word_180785B70;
      v26 = 1;
    }
    v47 = v26;
    v48 = 0;
    v44 = v32;
    v46 = v10;
    v42 = &v33;
    v45 = 4LL;
    v40 = &v34;
    *(_DWORD *)&EventDescriptor.Level = 2;
    EventDescriptor.Keyword = 0x200000000000LL;
    UserData.Ptr = *(_QWORD *)(v2 + 8);
    v43 = 8LL;
    v41 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v37 = &unk_1807E2640;
    UserData.Reserved = 2;
    v38 = 279;
    v39 = 1;
    v32[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(*(_QWORD *)(v2 + 32), &EventDescriptor, 0LL, 0LL, 0x12u, &UserData);
  }
}
