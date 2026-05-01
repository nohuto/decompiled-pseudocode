/*
 * XREFs of ?HampSrvTraceActivityCreateStop@@YAXJ_KPEAU_HAM_CLIENT_CONTEXT@@PEBGKPEAT_RM_SID@@0PEAU_HAM_ACTIVITY_PROPERTIES@@KKE@Z @ 0x180039924
 * Callers:
 *     ?HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K@Z @ 0x180011730 (-HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@P.c)
 *     ?HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEAXPEA_K@Z @ 0x180038EE0 (-HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PE.c)
 *     ?HamSrvCreateExtendedExecution@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_EXTENDED_EXECUTION_REASON@@PEBGPEA_K@Z @ 0x180041E8C (-HamSrvCreateExtendedExecution@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_EXTENDED_EXECUTION_REASON@@PE.c)
 *     ?HamSrvCreateActivityInternal@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K@Z @ 0x180046760 (-HamSrvCreateActivityInternal@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

void __fastcall HampSrvTraceActivityCreateStop(
        int a1,
        __int64 a2,
        struct _HAM_CLIENT_CONTEXT *a3,
        const unsigned __int16 *a4,
        unsigned int a5,
        union _RM_SID *a6,
        unsigned __int64 a7,
        struct _HAM_ACTIVITY_PROPERTIES *a8,
        unsigned int a9,
        unsigned int a10,
        char a11)
{
  union _RM_SID *v11; // r10
  __int64 v12; // rax
  const wchar_t *v13; // r8
  const wchar_t *v14; // rdx
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // ecx
  __int64 v19; // rcx
  int v20; // ecx
  int v21; // eax
  char v22; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v23; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v24; // [rsp+38h] [rbp-C8h] BYREF
  int v25; // [rsp+3Ch] [rbp-C4h] BYREF
  unsigned int v26; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v27[3]; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v28; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v29; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v30; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+68h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-80h] BYREF
  void *v33; // [rsp+90h] [rbp-70h]
  int v34; // [rsp+98h] [rbp-68h]
  int v35; // [rsp+9Ch] [rbp-64h]
  _DWORD *v36; // [rsp+A0h] [rbp-60h]
  __int64 v37; // [rsp+A8h] [rbp-58h]
  __int64 *v38; // [rsp+B0h] [rbp-50h]
  __int64 v39; // [rsp+B8h] [rbp-48h]
  const unsigned __int16 *v40; // [rsp+C0h] [rbp-40h]
  int v41; // [rsp+C8h] [rbp-38h]
  int v42; // [rsp+CCh] [rbp-34h]
  unsigned int *v43; // [rsp+D0h] [rbp-30h]
  __int64 v44; // [rsp+D8h] [rbp-28h]
  unsigned __int64 *v45; // [rsp+E0h] [rbp-20h]
  __int64 v46; // [rsp+E8h] [rbp-18h]
  const wchar_t *v47; // [rsp+F0h] [rbp-10h]
  int v48; // [rsp+F8h] [rbp-8h]
  int v49; // [rsp+FCh] [rbp-4h]
  const wchar_t *v50; // [rsp+100h] [rbp+0h]
  int v51; // [rsp+108h] [rbp+8h]
  int v52; // [rsp+10Ch] [rbp+Ch]
  int *v53; // [rsp+110h] [rbp+10h]
  __int64 v54; // [rsp+118h] [rbp+18h]
  __int64 *v55; // [rsp+120h] [rbp+20h]
  __int64 v56; // [rsp+128h] [rbp+28h]
  unsigned int *v57; // [rsp+130h] [rbp+30h]
  __int64 v58; // [rsp+138h] [rbp+38h]
  unsigned int *v59; // [rsp+140h] [rbp+40h]
  __int64 v60; // [rsp+148h] [rbp+48h]
  char *v61; // [rsp+150h] [rbp+50h]
  __int64 v62; // [rsp+158h] [rbp+58h]
  union _RM_SID *v63; // [rsp+160h] [rbp+60h]
  int v64; // [rsp+168h] [rbp+68h]
  int v65; // [rsp+16Ch] [rbp+6Ch]

  v11 = a6;
  if ( !a6 )
    v11 = (struct _RM_SERVICE_GLOBALS *)((char *)RmSvcGlobals + 3468);
  if ( (unsigned int)dword_1800E12B0 > 4 && (qword_1800E12C0 & 8) != 0 && (qword_1800E12C8 & 8) == qword_1800E12C8 )
  {
    v22 = a11;
    v23 = a10;
    v24 = a9;
    if ( a3 )
      v12 = *((_QWORD *)a3 + 19);
    else
      v12 = 0LL;
    v28 = v12;
    v30 = a2;
    v27[0] = a1;
    v13 = (const wchar_t *)((char *)a8 + 140);
    v25 = *(_DWORD *)a8;
    v14 = (const wchar_t *)((char *)a8 + 12);
    v29 = a7;
    v26 = a5;
    v15 = *((unsigned __int8 *)v11 + 1);
    v63 = v11;
    v65 = 0;
    v62 = 1LL;
    v60 = 4LL;
    v64 = 4 * v15 + 8;
    v61 = &v22;
    v59 = &v23;
    v57 = &v24;
    v55 = &v28;
    v53 = &v25;
    v16 = -1LL;
    v58 = 4LL;
    v56 = 8LL;
    v54 = 4LL;
    if ( a8 == (struct _HAM_ACTIVITY_PROPERTIES *)-140LL )
    {
      v13 = &word_1800BBB1C;
      v18 = 2;
    }
    else
    {
      v17 = -1LL;
      do
        ++v17;
      while ( v13[v17] );
      v18 = 2 * v17 + 2;
    }
    v50 = v13;
    v51 = v18;
    v52 = 0;
    if ( a8 == (struct _HAM_ACTIVITY_PROPERTIES *)-12LL )
    {
      v14 = &word_1800BBB1C;
      v20 = 2;
    }
    else
    {
      v19 = -1LL;
      do
        ++v19;
      while ( v14[v19] );
      v20 = 2 * v19 + 2;
    }
    v48 = v20;
    v45 = &v29;
    v43 = &v26;
    v47 = v14;
    v49 = 0;
    v46 = 8LL;
    v44 = 4LL;
    if ( a4 )
    {
      do
        ++v16;
      while ( a4[v16] );
      v21 = 2 * v16 + 2;
    }
    else
    {
      a4 = &word_1800BBB1C;
      v21 = 2;
    }
    v41 = v21;
    v40 = a4;
    v38 = &v30;
    v42 = 0;
    v36 = v27;
    *(_DWORD *)&EventDescriptor.Level = 516;
    UserData.Ptr = (ULONGLONG)off_1800E12B8;
    v39 = 8LL;
    v37 = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 8LL;
    UserData.Size = *(unsigned __int16 *)off_1800E12B8;
    v33 = &unk_1800CED88;
    UserData.Reserved = 2;
    v34 = 190;
    v35 = 1;
    v27[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800E12D0, &EventDescriptor, 0LL, 0LL, 0xFu, &UserData);
  }
}
