/*
 * XREFs of ?HamSrvRegisterDesktopBridgeProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXK1@Z @ 0x180065F5C
 * Callers:
 *     HamRpcSrvRegisterDesktopBridgeProcess @ 0x180065F30 (HamRpcSrvRegisterDesktopBridgeProcess.c)
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000EC30 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x18000F650 (CempLockTrackerClearForThread.c)
 *     ?HampSrvTraceHostRegisterProcessStop@@YAXJPEAXPEAU_PSM_APP_IDENTITY@@_KKU_GUID@@2K@Z @ 0x18000F690 (-HampSrvTraceHostRegisterProcessStop@@YAXJPEAXPEAU_PSM_APP_IDENTITY@@_KKU_GUID@@2K@Z.c)
 *     ?HampSrvTraceHostRegisterProcessStart@@YAXXZ @ 0x18000F8F0 (-HampSrvTraceHostRegisterProcessStart@@YAXXZ.c)
 *     ?HampSystemGetProcessFullIdentity@@YAJPEAXPEAKPEAU_RM_PSM_HOST_INFO@@@Z @ 0x180011B50 (-HampSystemGetProcessFullIdentity@@YAJPEAXPEAKPEAU_RM_PSM_HOST_INFO@@@Z.c)
 *     ?HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@KPEA_KPEAK@Z @ 0x18001562C (-HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?HampPkgIsServicingEnabled@@YAEPEAU_HAM_PACKAGE@@@Z @ 0x1800191F0 (-HampPkgIsServicingEnabled@@YAEPEAU_HAM_PACKAGE@@@Z.c)
 *     ?RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180026B1C (-RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180029A48 (-HampHostFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KW4_HOST_GROUP@@PEA.c)
 *     CempGetTokenHostInfo @ 0x18002F350 (CempGetTokenHostInfo.c)
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x18005A320 (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?HampSystemQueryProcessAppSessionGuid@@YAXPEAXPEAU_GUID@@@Z @ 0x18006269C (-HampSystemQueryProcessAppSessionGuid@@YAXPEAXPEAU_GUID@@@Z.c)
 *     ?HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1PEA_K@Z @ 0x18006B3E4 (-HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1PEA_K@Z.c)
 *     memcpy_0 @ 0x1800A28C2 (memcpy_0.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvRegisterDesktopBridgeProcess(
        struct _HOST_ACTIVITY_MANAGER *a1,
        void *a2,
        unsigned int a3,
        void *a4)
{
  __int64 v7; // rdi
  struct _RM_HAM_ACTIVITY_HOST *v8; // rsi
  unsigned int v9; // r15d
  NTSTATUS ProcessFullIdentity; // ebx
  ULONG v11; // eax
  DWORD i; // edi
  int v13; // eax
  int v14; // eax
  int v15; // edi
  void *TokenHandle; // [rsp+40h] [rbp-C0h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v18; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v20; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v21; // [rsp+60h] [rbp-A0h]
  struct _GUID v22; // [rsp+70h] [rbp-90h] BYREF
  struct _GUID v23; // [rsp+80h] [rbp-80h] BYREF
  int v24; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v25; // [rsp+94h] [rbp-6Ch]
  unsigned __int16 v26[232]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE DestinationSid[69]; // [rsp+268h] [rbp+168h] BYREF
  char v28; // [rsp+2ADh] [rbp+1ADh]
  unsigned __int16 v29[232]; // [rsp+2B0h] [rbp+1B0h] BYREF
  _BYTE Sid[68]; // [rsp+480h] [rbp+380h] BYREF
  int v31; // [rsp+4C4h] [rbp+3C4h]
  unsigned __int64 v32; // [rsp+4D0h] [rbp+3D0h]
  _BYTE v33[144]; // [rsp+4E0h] [rbp+3E0h] BYREF

  *(_QWORD *)&v22.Data1 = a4;
  memset_0(v33, 0, 0x88uLL);
  v23 = 0LL;
  memset_0(v29, 0, 0x228uLL);
  v7 = -1LL;
  LODWORD(TokenHandle) = 0;
  v18 = 0LL;
  Handle = 0LL;
  v8 = 0LL;
  v20 = -1LL;
  v21 = -1LL;
  memset_0(&v24, 0, 0x220uLL);
  v9 = 0;
  RtlCopySid(0xCu, DestinationSid, (char *)a1 + 1108);
  HampSrvTraceHostRegisterProcessStart();
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v33);
  if ( a2 )
  {
    HampSystemQueryProcessAppSessionGuid(a2, &v23);
    ProcessFullIdentity = HampSystemGetProcessFullIdentity(a2, (unsigned int *)&TokenHandle, 0LL);
    if ( ProcessFullIdentity >= 0 )
    {
      if ( (_DWORD)TokenHandle )
      {
        ProcessFullIdentity = -1073741776;
      }
      else if ( (a3 & 0x82) == a3 )
      {
        TokenHandle = 0LL;
        ProcessFullIdentity = NtOpenProcessToken(a2, 8u, &TokenHandle);
        if ( ProcessFullIdentity >= 0 )
          ProcessFullIdentity = CempGetTokenHostInfo(TokenHandle, (char *)v29);
        if ( TokenHandle )
          NtClose(TokenHandle);
        if ( ProcessFullIdentity >= 0 )
        {
          v28 |= 1u;
          v21 = v32;
          v24 = v31;
          DestinationSid[68] = 4;
          v11 = RtlLengthSid(Sid);
          memcpy_0(DestinationSid, Sid, v11);
          do
            ++v7;
          while ( v29[v7] );
          v25 = 2 * v7 + 2;
          RtlStringCbCopyW((char *)v26, v25, (char *)v29);
          ProcessFullIdentity = NtOpenProcessTokenEx(a2, 8u, 0, &Handle);
          if ( ProcessFullIdentity >= 0 )
          {
            for ( i = 1; ; i *= 2 )
            {
              v13 = HampHostFindOrCreate(a1, (__int64)v29, 2u, 1, &v18);
              v8 = v18;
              ProcessFullIdentity = v13;
              if ( v13 < 0 )
                goto LABEL_26;
              v14 = HampHostRegisterProcess(
                      v18,
                      a2,
                      Handle,
                      (struct _PSM_APP_IDENTITY *)&v24,
                      v32,
                      a3,
                      *(void **)&v22.Data1,
                      &v20);
              ProcessFullIdentity = v14;
              if ( v14 != -1073741790 )
                break;
              if ( v9 >= 0x3E8 )
              {
                if ( HampPkgIsServicingEnabled(*(struct _HAM_PACKAGE **)(*((_QWORD *)v8 + 99) + 88LL)) )
                  ProcessFullIdentity = -1058275325;
                goto LABEL_24;
              }
              RmHamHostDereference(v8);
              v18 = 0LL;
              Sleep(i);
              v9 += i;
            }
            if ( v14 < 0 )
            {
LABEL_24:
              v15 = 1;
              goto LABEL_27;
            }
            ProcessFullIdentity = 0;
          }
        }
      }
      else
      {
        ProcessFullIdentity = -1073741811;
      }
    }
  }
  else
  {
    ProcessFullIdentity = -1073741816;
  }
LABEL_26:
  v15 = 0;
LABEL_27:
  if ( Handle )
    NtClose(Handle);
  if ( v15 )
  {
    LODWORD(TokenHandle) = 0;
    HampHostQueueTerminateEx((__int64)v8, 1, 0x900u, 0LL, 0, 0, 0LL, (unsigned int *)&TokenHandle);
  }
  if ( v8 )
    RmHamHostDereference(v8);
  CempLockTrackerClearForThread(HampLockTrackerId);
  v22 = v23;
  HampSrvTraceHostRegisterProcessStop(ProcessFullIdentity, a2, (struct _PSM_APP_IDENTITY *)&v24, v21, a3, &v22, v20, v9);
  return (unsigned int)ProcessFullIdentity;
}
