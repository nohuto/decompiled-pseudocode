/*
 * XREFs of ?HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K@Z @ 0x180011730
 * Callers:
 *     ?HampInProcCreateActivityForProcess@@YAJPEAX0PEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K@Z @ 0x1800694F0 (-HampInProcCreateActivityForProcess@@YAJPEAX0PEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K@Z.c)
 * Callees:
 *     ?HampActInsert@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180010D20 (-HampActInsert@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampSystemGetProcessFullIdentity@@YAJPEAXPEAKPEAU_RM_PSM_HOST_INFO@@@Z @ 0x180011B50 (-HampSystemGetProcessFullIdentity@@YAJPEAXPEAKPEAU_RM_PSM_HOST_INFO@@@Z.c)
 *     ?HampUtilCheckAndSanitizeActivityProperties@@YAKPEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180011FEC (-HampUtilCheckAndSanitizeActivityProperties@@YAKPEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 *     ?HampClientIsActive@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180012068 (-HampClientIsActive@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180026B1C (-RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamFindHostWithFullInfo@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@W4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002936C (-RmHamFindHostWithFullInfo@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@W4_HOST_GROUP@.c)
 *     ?HampActInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_ACTIVITY_PROPERTIES@@PEAU_RM_HAM_ACTIVITY_HOST@@_KPEAU_HAM_ACTIVITY@@@Z @ 0x180029864 (-HampActInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_ACTIVITY_PROPERTIES@@PEAU_RM_HAM_ACT.c)
 *     ?HampRmPopulateDefaultProperties@@YAJPEAU_HAM_ACTIVITY_PROPERTIES@@PEAU_HOST_ACTIVITY_MANAGER@@K@Z @ 0x18002B1F0 (-HampRmPopulateDefaultProperties@@YAJPEAU_HAM_ACTIVITY_PROPERTIES@@PEAU_HOST_ACTIVITY_MANAGER@@K.c)
 *     ??0HAM_ACTIVITY_RM_CONTEXT@@QEAA@PEAU_HAM_ACTIVITY@@@Z @ 0x18002BE3C (--0HAM_ACTIVITY_RM_CONTEXT@@QEAA@PEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampHostQueryHostGenerationForProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAXPEA_K@Z @ 0x18002FB04 (-HampHostQueryHostGenerationForProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAXPEA_K@Z.c)
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x180032320 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     CemRcObjectDereference @ 0x180038DE0 (CemRcObjectDereference.c)
 *     ?HampSrvTraceActivityCreateStart@@YAXXZ @ 0x180039830 (-HampSrvTraceActivityCreateStart@@YAXXZ.c)
 *     ?HampSrvTraceActivityCreateStop@@YAXJ_KPEAU_HAM_CLIENT_CONTEXT@@PEBGKPEAT_RM_SID@@0PEAU_HAM_ACTIVITY_PROPERTIES@@KKE@Z @ 0x180039924 (-HampSrvTraceActivityCreateStop@@YAXJ_KPEAU_HAM_CLIENT_CONTEXT@@PEBGKPEAT_RM_SID@@0PEAU_HAM_ACTI.c)
 *     ?HampUtilAreActivityPropertiesValid@@YAKPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x18006C0B4 (-HampUtilAreActivityPropertiesValid@@YAKPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180070958 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvCreateActivityForProcess(
        struct _HAM_CLIENT_CONTEXT *a1,
        HANDLE ProcessHandle,
        struct _HAM_ACTIVITY_PROPERTIES *a3,
        unsigned __int64 *a4)
{
  unsigned __int64 v7; // r15
  DWORD ProcessId; // r12d
  unsigned __int64 v9; // r14
  DWORD v10; // ebx
  signed int LastError; // edi
  DWORD v12; // ebx
  bool v14; // bl
  int HostWithFullInfo; // eax
  struct _RM_HAM_ACTIVITY_HOST *v16; // r15
  unsigned __int64 v17; // rdi
  struct _HAM_ACTIVITY *Heap; // rax
  struct _HAM_ACTIVITY *v19; // rbx
  unsigned __int64 v20; // rdx
  HAM_ACTIVITY_RM_CONTEXT *v21; // rax
  HAM_ACTIVITY_RM_CONTEXT *v22; // rax
  unsigned int v23[2]; // [rsp+60h] [rbp-358h] BYREF
  unsigned int v24; // [rsp+68h] [rbp-350h]
  struct _RM_HAM_ACTIVITY_HOST *v25; // [rsp+70h] [rbp-348h] BYREF
  unsigned __int64 v26; // [rsp+78h] [rbp-340h] BYREF
  union _RM_SID *v27; // [rsp+80h] [rbp-338h]
  unsigned __int16 *v28; // [rsp+88h] [rbp-330h]
  unsigned __int64 *v29; // [rsp+90h] [rbp-328h]
  _BYTE TlsValue[144]; // [rsp+A0h] [rbp-318h] BYREF
  _BYTE v31[464]; // [rsp+130h] [rbp-288h] BYREF
  char v32; // [rsp+300h] [rbp-B8h] BYREF
  unsigned int v33; // [rsp+348h] [rbp-70h]
  unsigned __int64 v34; // [rsp+350h] [rbp-68h]

  v29 = a4;
  memset_0(v31, 0, 0x228uLL);
  v7 = -1LL;
  v26 = 0LL;
  ProcessId = 0;
  v23[0] = 0;
  v9 = -1LL;
  v25 = 0LL;
  v28 = 0LL;
  v24 = 0;
  v27 = 0LL;
  HampSrvTraceActivityCreateStart();
  memset_0(TlsValue, 0, 0x88uLL);
  v10 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker == 0");
    TlsSetValue(v10, TlsValue);
  }
  if ( !HampUtilCheckAndSanitizeActivityProperties(a3) )
  {
    LastError = -1073741583;
    goto LABEL_9;
  }
  if ( !HampClientIsActive(a1) )
  {
    LastError = -1073741661;
    goto LABEL_9;
  }
  if ( !ProcessHandle )
  {
    LastError = -1073741816;
    goto LABEL_9;
  }
  ProcessId = GetProcessId(ProcessHandle);
  if ( !ProcessId )
  {
    if ( (int)GetLastError() > 0 )
      LastError = (unsigned __int16)GetLastError() | 0xC0070000;
    else
      LastError = GetLastError();
    goto LABEL_9;
  }
  LastError = HampSystemGetProcessFullIdentity(ProcessHandle, v23, (struct _RM_PSM_HOST_INFO *)v31);
  if ( LastError < 0 )
    goto LABEL_9;
  v7 = v34;
  v28 = (unsigned __int16 *)v31;
  v14 = v23[0] == 0;
  v24 = v33;
  v27 = (union _RM_SID *)&v32;
  *(_QWORD *)v23 = v34;
  if ( !HampUtilAreActivityPropertiesValid((struct _RM_PSM_HOST_INFO *)v31, a3) )
  {
    LastError = -1073741583;
    goto LABEL_9;
  }
  if ( ((*(_DWORD *)a3 & 0x2000000) != 0) != v14 )
  {
    LastError = -1073741776;
    goto LABEL_9;
  }
  HostWithFullInfo = RmHamFindHostWithFullInfo(
                       (*((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL) - 48LL * *((unsigned __int8 *)a1 + 164) - 16,
                       v31,
                       v14,
                       &v25);
  v16 = v25;
  LastError = HostWithFullInfo;
  if ( HostWithFullInfo >= 0 )
  {
    LastError = HampHostQueryHostGenerationForProcess(v25, ProcessHandle, &v26);
    if ( LastError >= 0 )
    {
      v17 = (*((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL) - 48LL * *((unsigned __int8 *)a1 + 164);
      Heap = (struct _HAM_ACTIVITY *)HampAllocateHeap(0x238uLL);
      v19 = Heap;
      if ( Heap )
      {
        HampActInitialize((struct _HOST_ACTIVITY_MANAGER *)(v17 - 16), a3, v16, v26, Heap);
        v20 = *((_QWORD *)v19 + 4) & 0xFFFFFFFFFFFFFFFCuLL;
        *((_QWORD *)v19 + 8) = a1;
        LastError = HampRmPopulateDefaultProperties(
                      (struct _HAM_ACTIVITY *)((char *)v19 + 112),
                      (struct _HOST_ACTIVITY_MANAGER *)(v20 - 440),
                      0);
        if ( LastError >= 0 )
        {
          v21 = (HAM_ACTIVITY_RM_CONTEXT *)operator new(0x20uLL);
          if ( v21 && (v22 = HAM_ACTIVITY_RM_CONTEXT::HAM_ACTIVITY_RM_CONTEXT(v21, v19)) != 0LL )
          {
            *((_QWORD *)v19 + 11) = v22;
            LastError = HampActInsert(v19);
            if ( LastError >= 0 )
            {
              LastError = 0;
              v9 = *((_QWORD *)v19 + 5);
              *v29 = v9;
              if ( !v19 )
                goto LABEL_18;
            }
          }
          else
          {
            LastError = -1073741801;
          }
        }
        CemRcObjectDereference(v19);
      }
      else
      {
        LastError = -1073741801;
      }
    }
  }
LABEL_18:
  if ( v16 )
    RmHamHostDereference(v16);
  v7 = *(_QWORD *)v23;
LABEL_9:
  v12 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker->Bitmap == 0");
    TlsSetValue(v12, 0LL);
  }
  HampSrvTraceActivityCreateStop(LastError, v9, a1, v28, v24, v27, v7, a3, ProcessId, 0, 0);
  return (unsigned int)LastError;
}
