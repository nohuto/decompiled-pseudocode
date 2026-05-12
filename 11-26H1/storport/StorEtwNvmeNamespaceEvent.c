/*
 * XREFs of StorEtwNvmeNamespaceEvent @ 0x1400B2058
 * Callers:
 *     StorpInitializeNvmeNamespaceTelemetry @ 0x1400B7678 (StorpInitializeNvmeNamespaceTelemetry.c)
 *     NvmeControllerCreateNvmeNamespace @ 0x140100594 (NvmeControllerCreateNvmeNamespace.c)
 *     NvmeNamespaceClearUnresponsiveAttribute @ 0x140102080 (NvmeNamespaceClearUnresponsiveAttribute.c)
 *     NvmeNamespaceSetQOSIoctl @ 0x140112EC4 (NvmeNamespaceSetQOSIoctl.c)
 *     NvmeNamespaceSetUnresponsiveAttribute @ 0x140113520 (NvmeNamespaceSetUnresponsiveAttribute.c)
 *     NvmeNamespaceStorageProtocolCommandIoctlCompletion @ 0x140114940 (NvmeNamespaceStorageProtocolCommandIoctlCompletion.c)
 *     NvmeNamespaceTelemetryIdIoctl @ 0x140115190 (NvmeNamespaceTelemetryIdIoctl.c)
 *     NvmeNamespaceWaitForRemoveLock @ 0x1401163B0 (NvmeNamespaceWaitForRemoveLock.c)
 *     StorpInitializeNvmePerNamespacePerfTelemetry @ 0x14018FD08 (StorpInitializeNvmePerNamespacePerfTelemetry.c)
 * Callees:
 *     RaidDriverGetName @ 0x14004A42C (RaidDriverGetName.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall StorEtwNvmeNamespaceEvent(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        void *a5,
        char a6,
        void *a7,
        char a8)
{
  __int64 v8; // rdi
  NTSTATUS result; // eax
  __int64 v11; // rsi
  EVENT_DESCRIPTOR v12; // xmm0
  __int64 v13; // rcx
  __int64 v14; // rax
  int v15; // r8d
  const wchar_t *v16; // rax
  const int *v17; // rdx
  const int *v18; // r8
  __int64 v19; // rax
  int v20; // eax
  const int *v21; // r8
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rax
  void *v27; // rdx
  __int64 v28; // rax
  int v29; // eax
  void *v30; // rax
  int v31; // ecx
  __int64 v32; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v33; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v34; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v35; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v36; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v37; // [rsp+70h] [rbp-98h] BYREF
  __int64 v38; // [rsp+78h] [rbp-90h] BYREF
  __int128 v39; // [rsp+80h] [rbp-88h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+90h] [rbp-78h] BYREF
  GUID ActivityId; // [rsp+A0h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v43; // [rsp+C8h] [rbp-40h]
  __int64 v44; // [rsp+D0h] [rbp-38h]
  const wchar_t *v45; // [rsp+D8h] [rbp-30h]
  int v46; // [rsp+E0h] [rbp-28h]
  int v47; // [rsp+E4h] [rbp-24h]
  const int *v48; // [rsp+E8h] [rbp-20h]
  int v49; // [rsp+F0h] [rbp-18h]
  int v50; // [rsp+F4h] [rbp-14h]
  __int64 v51; // [rsp+F8h] [rbp-10h]
  __int64 v52; // [rsp+100h] [rbp-8h]
  __int64 *v53; // [rsp+108h] [rbp+0h]
  __int64 v54; // [rsp+110h] [rbp+8h]
  __int64 v55; // [rsp+118h] [rbp+10h]
  __int64 v56; // [rsp+120h] [rbp+18h]
  const int *v57; // [rsp+128h] [rbp+20h]
  int v58; // [rsp+130h] [rbp+28h]
  int v59; // [rsp+134h] [rbp+2Ch]
  __int64 v60; // [rsp+138h] [rbp+30h]
  int v61; // [rsp+140h] [rbp+38h]
  int v62; // [rsp+144h] [rbp+3Ch]
  __int64 v63; // [rsp+148h] [rbp+40h]
  int v64; // [rsp+150h] [rbp+48h]
  int v65; // [rsp+154h] [rbp+4Ch]
  __int64 v66; // [rsp+158h] [rbp+50h]
  int v67; // [rsp+160h] [rbp+58h]
  int v68; // [rsp+164h] [rbp+5Ch]
  void *v69; // [rsp+168h] [rbp+60h]
  int v70; // [rsp+170h] [rbp+68h]
  int v71; // [rsp+174h] [rbp+6Ch]
  char *v72; // [rsp+178h] [rbp+70h]
  __int64 v73; // [rsp+180h] [rbp+78h]
  void *v74; // [rsp+188h] [rbp+80h]
  int v75; // [rsp+190h] [rbp+88h]
  int v76; // [rsp+194h] [rbp+8Ch]
  char *v77; // [rsp+198h] [rbp+90h]
  __int64 v78; // [rsp+1A0h] [rbp+98h]
  const wchar_t *v79; // [rsp+1A8h] [rbp+A0h]
  __int64 v80; // [rsp+1B0h] [rbp+A8h]
  __int64 *v81; // [rsp+1B8h] [rbp+B0h]
  __int64 v82; // [rsp+1C0h] [rbp+B8h]
  const wchar_t *v83; // [rsp+1C8h] [rbp+C0h]
  __int64 v84; // [rsp+1D0h] [rbp+C8h]
  __int64 *v85; // [rsp+1D8h] [rbp+D0h]
  __int64 v86; // [rsp+1E0h] [rbp+D8h]
  const wchar_t *v87; // [rsp+1E8h] [rbp+E0h]
  __int64 v88; // [rsp+1F0h] [rbp+E8h]
  __int64 *v89; // [rsp+1F8h] [rbp+F0h]
  __int64 v90; // [rsp+200h] [rbp+F8h]
  const wchar_t *v91; // [rsp+208h] [rbp+100h]
  __int64 v92; // [rsp+210h] [rbp+108h]
  __int64 *v93; // [rsp+218h] [rbp+110h]
  __int64 v94; // [rsp+220h] [rbp+118h]
  const wchar_t *v95; // [rsp+228h] [rbp+120h]
  __int64 v96; // [rsp+230h] [rbp+128h]
  __int64 *v97; // [rsp+238h] [rbp+130h]
  __int64 v98; // [rsp+240h] [rbp+138h]
  const wchar_t *v99; // [rsp+248h] [rbp+140h]
  __int64 v100; // [rsp+250h] [rbp+148h]
  __int64 *v101; // [rsp+258h] [rbp+150h]
  __int64 v102; // [rsp+260h] [rbp+158h]

  v8 = *(_QWORD *)(a1 + 16);
  result = *(_DWORD *)(a1 + 56);
  v38 = 0LL;
  v37 = 0LL;
  v36 = 0LL;
  v35 = 0LL;
  v34 = 0LL;
  v33 = 0LL;
  LODWORD(v32) = result;
  ActivityId = 0LL;
  v11 = *(_QWORD *)(v8 + 128);
  v39 = 0LL;
  if ( a2 )
  {
    if ( a2 != 1 )
      return result;
    if ( a3 == 2 )
    {
      v12 = (EVENT_DESCRIPTOR)EventNVMeNamespaceError;
    }
    else if ( a3 == 3 )
    {
      v12 = (EVENT_DESCRIPTOR)EventNVMeNamespaceWarning;
    }
    else
    {
      v12 = (EVENT_DESCRIPTOR)EventNVMeNamespaceInformational;
    }
  }
  else if ( a3 == 2 )
  {
    v12 = (EVENT_DESCRIPTOR)EventNVMeNamespaceDiagnosticError;
  }
  else if ( a3 == 3 )
  {
    v12 = (EVENT_DESCRIPTOR)EventNVMeNamespaceDiagnosticWarning;
  }
  else
  {
    v12 = (EVENT_DESCRIPTOR)EventNVMeNamespaceDiagnosticInformational;
  }
  EventDescriptor = v12;
  if ( (*(_BYTE *)(v8 + 136) & 2) != 0 )
    EventDescriptor.Keyword |= 0x8000uLL;
  RaidDriverGetName(*(_QWORD *)(v11 + 16), (__int64)&v39);
  v13 = -1LL;
  UserData.Ptr = v11 + 56;
  *(_QWORD *)&UserData.Size = 4LL;
  v43 = v11 + 1048;
  v44 = 16LL;
  if ( *((_QWORD *)&v39 + 1) )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( *(_WORD *)(*((_QWORD *)&v39 + 1) + 2 * v14) );
    v15 = 2 * v14 + 2;
  }
  else
  {
    v15 = 10;
  }
  v46 = v15;
  v16 = L"NULL";
  v47 = 0;
  if ( *((_QWORD *)&v39 + 1) )
    v16 = (const wchar_t *)*((_QWORD *)&v39 + 1);
  v17 = &dword_140154ADC;
  v45 = v16;
  v18 = *(const int **)(v8 + 792);
  if ( v18 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( *((_BYTE *)v18 + v19) );
    v20 = v19 + 1;
  }
  else
  {
    v20 = 1;
    v18 = &dword_140154ADC;
  }
  v49 = v20;
  v51 = v8 + 4;
  v53 = &v32;
  v55 = v8 + 744;
  v48 = v18;
  v50 = 0;
  v52 = 2LL;
  v54 = 4LL;
  v56 = 1LL;
  v21 = *(const int **)(v8 + 752);
  if ( v21 )
    v17 = *(const int **)(v8 + 752);
  else
    v21 = &dword_140154ADC;
  v22 = -1LL;
  do
    ++v22;
  while ( *((_BYTE *)v17 + v22) );
  v57 = v21;
  v58 = v22 + 1;
  v23 = -1LL;
  v59 = 0;
  do
    ++v23;
  while ( *(_BYTE *)(v8 + 800 + v23) );
  v60 = v8 + 800;
  v61 = v23 + 1;
  v24 = v8 + 841;
  v25 = -1LL;
  v62 = 0;
  do
    ++v25;
  while ( *(_BYTE *)(v24 + v25) );
  v63 = v24;
  v64 = v25 + 1;
  v26 = -1LL;
  v65 = 0;
  v66 = a4;
  do
    ++v26;
  while ( *(_WORD *)(a4 + 2 * v26) );
  v27 = a5;
  v67 = 2 * v26 + 2;
  v68 = 0;
  if ( a5 )
  {
    v28 = -1LL;
    do
      ++v28;
    while ( *((_WORD *)a5 + v28) );
    v29 = 2 * v28 + 2;
  }
  else
  {
    v29 = 2;
    v27 = &unk_140153274;
  }
  v70 = v29;
  v72 = &a6;
  v30 = a7;
  v69 = v27;
  v71 = 0;
  v73 = 8LL;
  if ( a7 )
  {
    do
      ++v13;
    while ( *((_WORD *)a7 + v13) );
    v31 = 2 * v13 + 2;
  }
  else
  {
    v31 = 2;
    v30 = &unk_140153274;
  }
  v74 = v30;
  v75 = v31;
  v77 = &a8;
  v79 = &word_140152E7C;
  v81 = &v33;
  v83 = &word_140152E7C;
  v85 = &v34;
  v87 = &word_140152E7C;
  v89 = &v35;
  v93 = &v36;
  v97 = &v37;
  v101 = &v38;
  v91 = &word_140152E7C;
  v95 = &word_140152E7C;
  v99 = &word_140152E7C;
  v76 = 0;
  v78 = 8LL;
  v80 = 2LL;
  v82 = 8LL;
  v84 = 2LL;
  v86 = 8LL;
  v88 = 2LL;
  v90 = 8LL;
  v92 = 2LL;
  v94 = 8LL;
  v96 = 2LL;
  v98 = 8LL;
  v100 = 2LL;
  v102 = 8LL;
  return EtwWriteEx(StorPortEventProvider_Context, &EventDescriptor, 0LL, 1u, &ActivityId, 0LL, 0x1Bu, &UserData);
}
