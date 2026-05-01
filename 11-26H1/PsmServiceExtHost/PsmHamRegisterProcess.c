/*
 * XREFs of PsmHamRegisterProcess @ 0x18000F2D0
 * Callers:
 *     <none>
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000EC30 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x18000F650 (CempLockTrackerClearForThread.c)
 *     ?HampSrvTraceHostRegisterProcessStop@@YAXJPEAXPEAU_PSM_APP_IDENTITY@@_KKU_GUID@@2K@Z @ 0x18000F690 (-HampSrvTraceHostRegisterProcessStop@@YAXJPEAXPEAU_PSM_APP_IDENTITY@@_KKU_GUID@@2K@Z.c)
 *     ?HampSrvTraceHostRegisterProcessStart@@YAXXZ @ 0x18000F8F0 (-HampSrvTraceHostRegisterProcessStart@@YAXXZ.c)
 *     ?HampSystemGetProcessFullIdentity@@YAJPEAXPEAKPEAU_RM_PSM_HOST_INFO@@@Z @ 0x180011B50 (-HampSystemGetProcessFullIdentity@@YAJPEAXPEAKPEAU_RM_PSM_HOST_INFO@@@Z.c)
 *     ?RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180026B1C (-RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180029A48 (-HampHostFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KW4_HOST_GROUP@@PEA.c)
 *     ?HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1PEA_K@Z @ 0x18006B3E4 (-HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1PEA_K@Z.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall PsmHamRegisterProcess(
        HANDLE ProcessHandle,
        __int64 a2,
        int *a3,
        unsigned __int64 a4,
        unsigned int a5,
        void *a6)
{
  unsigned int v9; // ebx
  ULONG v10; // r12d
  unsigned __int64 v11; // r12
  unsigned int v12; // eax
  __int64 v13; // rdx
  _WORD *v14; // rcx
  __int16 v15; // ax
  _WORD *v16; // rax
  int ProcessFullIdentity; // ebx
  __int64 v18; // r9
  int v19; // eax
  struct _RM_HAM_ACTIVITY_HOST *v20; // rdi
  unsigned int v21; // esi
  int v22; // eax
  int v24; // ebx
  unsigned __int64 v25; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v26; // [rsp+48h] [rbp-B8h] BYREF
  int v27; // [rsp+4Ch] [rbp-B4h]
  struct _RM_HAM_ACTIVITY_HOST *v28; // [rsp+50h] [rbp-B0h] BYREF
  struct _GUID v29; // [rsp+60h] [rbp-A0h]
  int v30; // [rsp+70h] [rbp-90h]
  char *v31; // [rsp+78h] [rbp-88h]
  void *v32; // [rsp+80h] [rbp-80h]
  struct _GUID v33; // [rsp+90h] [rbp-70h] BYREF
  _BYTE ProcessInformation[4]; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v35; // [rsp+A4h] [rbp-5Ch]
  __int64 v36; // [rsp+B0h] [rbp-50h]
  unsigned __int16 v37; // [rsp+D8h] [rbp-28h]
  unsigned __int16 v38; // [rsp+DCh] [rbp-24h]
  _BYTE v39[144]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v40[464]; // [rsp+190h] [rbp+90h] BYREF
  _BYTE DestinationSid[68]; // [rsp+360h] [rbp+260h] BYREF
  int v42; // [rsp+3A4h] [rbp+2A4h]
  unsigned int v43; // [rsp+3A8h] [rbp+2A8h]
  unsigned __int64 v44; // [rsp+3B0h] [rbp+2B0h]

  v32 = a6;
  *(_QWORD *)&v33.Data1 = a2;
  v31 = (char *)RmSvcGlobals + 2360;
  memset_0(v39, 0, 0x88uLL);
  memset_0(v40, 0, 0x228uLL);
  v26 = 0;
  HampSrvTraceHostRegisterProcessStart();
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v39);
  v28 = 0LL;
  v25 = -1LL;
  memset_0(ProcessInformation, 0, 0x60uLL);
  NtQueryInformationProcess(ProcessHandle, (PROCESSINFOCLASS)64, ProcessInformation, 0x60u, 0LL);
  v29.Data1 = v35;
  v29.Data2 = v37;
  v29.Data3 = v38;
  *(_QWORD *)v29.Data4 = v36;
  if ( (a5 & 4) != 0 )
    v9 = 8;
  else
    v9 = (a5 & 8) != 0 ? 4 : 2;
  v27 = *a3;
  v30 = 0;
  v10 = RtlLengthSid(a3 + 118);
  if ( !(unsigned __int8)PsmIsValidKey(a3 + 2) )
  {
    v24 = -1073741585;
LABEL_32:
    v11 = v25;
    goto LABEL_23;
  }
  if ( v10 < 0xC || !RtlValidSid(a3 + 118) || RtlLengthSid(a3 + 118) != v10 )
  {
    v24 = -1073741584;
    goto LABEL_32;
  }
  if ( ((v9 - 1) & v9) != 0 )
  {
    v24 = -1073741581;
    goto LABEL_32;
  }
  v11 = v25;
  _BitScanForward(&v12, v9);
  if ( v12 >= 4 )
  {
    v24 = -1073741581;
  }
  else
  {
    if ( a4 != v25 )
    {
      v13 = 232LL;
      v14 = v40;
      do
      {
        if ( v13 == -2147483414 )
          break;
        v15 = *(_WORD *)((char *)v14 + (char *)(a3 + 2) - v40);
        if ( !v15 )
          break;
        *v14++ = v15;
        --v13;
      }
      while ( v13 );
      v16 = v14 - 1;
      if ( v13 )
        v16 = v14;
      *v16 = 0;
      RtlCopySid(0x44u, DestinationSid, a3 + 118);
      v42 = v27;
      v43 = v9;
      v44 = a4;
      goto LABEL_17;
    }
    v24 = -1073741580;
  }
LABEL_23:
  ProcessFullIdentity = v24 + 1;
  if ( ProcessFullIdentity < 0 )
    goto LABEL_24;
LABEL_17:
  ProcessFullIdentity = HampSystemGetProcessFullIdentity(ProcessHandle, &v26, 0LL);
  if ( ProcessFullIdentity < 0 )
  {
LABEL_24:
    v21 = a5;
    goto LABEL_25;
  }
  LOBYTE(v18) = v26 == 0;
  v19 = HampHostFindOrCreate(v31, v40, 0LL, v18, &v28);
  v20 = v28;
  ProcessFullIdentity = v19;
  v21 = a5;
  if ( v19 >= 0 )
  {
    v22 = HampHostRegisterProcess(
            v28,
            ProcessHandle,
            *(void **)&v33.Data1,
            (struct _PSM_APP_IDENTITY *)a3,
            a4,
            a5,
            v32,
            &v25);
    v11 = v25;
    ProcessFullIdentity = v22;
    if ( v22 >= 0 )
      ProcessFullIdentity = 0;
  }
  if ( v20 )
    RmHamHostDereference(v20);
LABEL_25:
  CempLockTrackerClearForThread(HampLockTrackerId);
  v33 = v29;
  HampSrvTraceHostRegisterProcessStop(
    ProcessFullIdentity,
    ProcessHandle,
    (struct _PSM_APP_IDENTITY *)a3,
    a4,
    v21,
    &v33,
    v11,
    0);
  return (unsigned int)ProcessFullIdentity;
}
