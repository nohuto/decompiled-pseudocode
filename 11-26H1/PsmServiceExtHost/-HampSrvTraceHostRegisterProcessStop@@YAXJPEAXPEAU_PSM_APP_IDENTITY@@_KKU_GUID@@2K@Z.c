/*
 * XREFs of ?HampSrvTraceHostRegisterProcessStop@@YAXJPEAXPEAU_PSM_APP_IDENTITY@@_KKU_GUID@@2K@Z @ 0x18000F690
 * Callers:
 *     PsmHamRegisterProcess @ 0x18000F2D0 (PsmHamRegisterProcess.c)
 *     ?HamSrvRegisterDesktopBridgeProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXK1@Z @ 0x180065F5C (-HamSrvRegisterDesktopBridgeProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXK1@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

void __fastcall HampSrvTraceHostRegisterProcessStop(
        int a1,
        void *a2,
        struct _PSM_APP_IDENTITY *a3,
        __int64 a4,
        unsigned int a5,
        struct _GUID *a6,
        unsigned __int64 a7,
        unsigned int a8)
{
  char *v8; // rbx
  const wchar_t *v9; // rdi
  int v10; // eax
  __int64 v11; // rax
  int v12; // eax
  unsigned int v13; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v14; // [rsp+3Ch] [rbp-CCh] BYREF
  int v15; // [rsp+40h] [rbp-C8h] BYREF
  DWORD ProcessId; // [rsp+44h] [rbp-C4h] BYREF
  _DWORD v17[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v18; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 v19; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v20; // [rsp+60h] [rbp-A8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+68h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+78h] [rbp-90h] BYREF
  void *v23; // [rsp+88h] [rbp-80h]
  int v24; // [rsp+90h] [rbp-78h]
  int v25; // [rsp+94h] [rbp-74h]
  _DWORD *v26; // [rsp+98h] [rbp-70h]
  __int64 v27; // [rsp+A0h] [rbp-68h]
  DWORD *p_ProcessId; // [rsp+A8h] [rbp-60h]
  __int64 v29; // [rsp+B0h] [rbp-58h]
  const wchar_t *v30; // [rsp+B8h] [rbp-50h]
  int v31; // [rsp+C0h] [rbp-48h]
  int v32; // [rsp+C4h] [rbp-44h]
  __int64 *v33; // [rsp+C8h] [rbp-40h]
  __int64 v34; // [rsp+D0h] [rbp-38h]
  int *v35; // [rsp+D8h] [rbp-30h]
  __int64 v36; // [rsp+E0h] [rbp-28h]
  char *v37; // [rsp+E8h] [rbp-20h]
  int v38; // [rsp+F0h] [rbp-18h]
  int v39; // [rsp+F4h] [rbp-14h]
  unsigned int *v40; // [rsp+F8h] [rbp-10h]
  __int64 v41; // [rsp+100h] [rbp-8h]
  struct _GUID *v42; // [rsp+108h] [rbp+0h]
  __int64 v43; // [rsp+110h] [rbp+8h]
  unsigned __int64 *v44; // [rsp+118h] [rbp+10h]
  __int64 v45; // [rsp+120h] [rbp+18h]
  unsigned int *v46; // [rsp+128h] [rbp+20h]
  __int64 v47; // [rsp+130h] [rbp+28h]
  __int64 *v48; // [rsp+138h] [rbp+30h]
  __int64 v49; // [rsp+140h] [rbp+38h]

  if ( (unsigned int)dword_1800E12B0 > 4
    && (qword_1800E12C0 & 0x400000000008LL) != 0
    && (qword_1800E12C8 & 0x400000000008LL) == qword_1800E12C8 )
  {
    v8 = (char *)a3 + 472;
    v13 = a8;
    v9 = (const wchar_t *)((char *)a3 + 8);
    v19 = a7;
    v14 = a5;
    v15 = *(_DWORD *)a3;
    v18 = 0x1000000LL;
    v20 = a4;
    v17[0] = a1;
    ProcessId = GetProcessId(a2);
    v48 = &v18;
    v46 = &v13;
    v44 = &v19;
    v42 = a6;
    v40 = &v14;
    v49 = 8LL;
    v47 = 4LL;
    v45 = 8LL;
    v43 = 16LL;
    v41 = 4LL;
    v10 = (unsigned __int8)v8[1];
    v37 = v8;
    v39 = 0;
    v36 = 4LL;
    v34 = 8LL;
    v38 = 4 * v10 + 8;
    v35 = &v15;
    v33 = &v20;
    if ( v9 )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( v9[v11] );
      v12 = 2 * v11 + 2;
    }
    else
    {
      v9 = &word_1800BBB1C;
      v12 = 2;
    }
    v31 = v12;
    v32 = 0;
    p_ProcessId = &ProcessId;
    v30 = v9;
    v26 = v17;
    *(_DWORD *)&EventDescriptor.Level = 516;
    UserData.Ptr = (ULONGLONG)off_1800E12B8;
    v29 = 4LL;
    v27 = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0x400000000008LL;
    UserData.Size = *(unsigned __int16 *)off_1800E12B8;
    v23 = &unk_1800CF87A;
    UserData.Reserved = 2;
    v24 = 149;
    v25 = 1;
    v17[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800E12D0, &EventDescriptor, 0LL, 0LL, 0xDu, &UserData);
  }
}
