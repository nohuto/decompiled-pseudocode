/*
 * XREFs of NtUserQueryDisplayConfig @ 0x140172D30
 * Callers:
 *     <none>
 * Callees:
 *     DrvSampleDisplayState @ 0x14002B4D0 (DrvSampleDisplayState.c)
 *     ??1MaybeEnterLeaveCrit@@QEAA@XZ @ 0x140047520 (--1MaybeEnterLeaveCrit@@QEAA@XZ.c)
 *     DrvQueryDisplayConfigAndLeaveUserCrit @ 0x140047BB4 (DrvQueryDisplayConfigAndLeaveUserCrit.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140048E98 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     UserIsWddmConnectedSession @ 0x14006BDB0 (UserIsWddmConnectedSession.c)
 *     ?CreateWithUserCritHeld@DISPLAYCONFIG_USER_SESSION_STATE@@SA?AV1@XZ @ 0x14006BDEC (-CreateWithUserCritHeld@DISPLAYCONFIG_USER_SESSION_STATE@@SA-AV1@XZ.c)
 *     EnterSharedCrit @ 0x14008A250 (EnterSharedCrit.c)
 *     SetLastNtError @ 0x14009DA54 (SetLastNtError.c)
 *     ??1?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x1400A038C (--1-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??0?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x1400E2330 (--0-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     DrvShouldTranslateQdcDatabaseToActive @ 0x1400E8DE4 (DrvShouldTranslateQdcDatabaseToActive.c)
 *     _QdcSdcTranslateStatusDefault @ 0x1400EC6F8 (_QdcSdcTranslateStatusDefault.c)
 *     RtlCopyVolatileMemory @ 0x140242F00 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtUserQueryDisplayConfig(
        unsigned int a1,
        unsigned int *a2,
        volatile void *a3,
        int *a4,
        _OWORD *Address)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  int v12; // ebx
  __int64 v13; // rcx
  _DWORD *v14; // rdx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v16; // rcx
  ULONG_PTR v17; // rsi
  struct tagTHREADINFO *BugCheckParameter4; // rax
  struct tagTHREADINFO *v19; // rax
  ULONG_PTR *v20; // rcx
  int v21; // r13d
  __int64 v22; // rax
  char ShouldTranslateQdcDatabaseToActive; // r14
  enum DISPLAYCONFIG_TOPOLOGY_ID *v24; // r9
  unsigned int i; // ecx
  __int64 v26; // rax
  char v28[4]; // [rsp+30h] [rbp-B8h] BYREF
  unsigned int v29; // [rsp+34h] [rbp-B4h] BYREF
  int v30; // [rsp+38h] [rbp-B0h]
  int v31; // [rsp+3Ch] [rbp-ACh] BYREF
  unsigned int v32[6]; // [rsp+40h] [rbp-A8h] BYREF
  ULONG_PTR BugCheckParameter2[2]; // [rsp+58h] [rbp-90h] BYREF
  void (__fastcall *v34)(char *); // [rsp+68h] [rbp-80h]
  ULONG_PTR v35; // [rsp+78h] [rbp-70h]
  __int128 v36; // [rsp+80h] [rbp-68h] BYREF
  __int64 v37; // [rsp+90h] [rbp-58h]
  int v38; // [rsp+98h] [rbp-50h]
  _BYTE v39[32]; // [rsp+A0h] [rbp-48h] BYREF

  v35 = 0LL;
  v29 = 0;
  v31 = -1;
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0;
  Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
  v28[0] = 1;
  EnterSharedCrit(1u, 1u);
  DISPLAYCONFIG_USER_SESSION_STATE::CreateWithUserCritHeld((__int64)v39, v9);
  if ( *(_DWORD *)(W32GetUserGdiSessionState(v10) + 32) )
  {
    if ( (a1 & 0xFFFFFF88) != 0 || (v13 = a1 & 7, (((_DWORD)v13 - 1) & 0xFFFFFFFC) != 0) || (_DWORD)v13 == 3 )
    {
      v12 = -1073741811;
      goto LABEL_47;
    }
    if ( (unsigned int)UserIsWddmConnectedSession(v13, v11) )
    {
      if ( v39[8] )
      {
        PtiCurrent();
        v14 = a2;
        if ( (unsigned __int64)a2 >= MmUserProbeAddress )
          v14 = (_DWORD *)MmUserProbeAddress;
        *v14 = *v14;
        v29 = *a2;
        if ( v29 )
        {
          CurrentProcessWow64Process = PsGetCurrentProcessWow64Process();
          ProbeForWrite(a3, 216LL * v29, CurrentProcessWow64Process != 0 ? 1 : 4);
          v17 = Win32AllocPoolWithQuotaZInitImpl(v16, 216LL * v29, 0x63447355u);
          v35 = v17;
          if ( !v17 )
            ExRaiseStatus(-1073741801);
          if ( v34 != (void (__fastcall *)(char *))-1LL )
          {
            BugCheckParameter4 = PtiCurrent();
            KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)BugCheckParameter2, v17, (ULONG_PTR)BugCheckParameter4);
          }
          v19 = PtiCurrent();
          BugCheckParameter2[0] = *((_QWORD *)v19 + 48);
          v20 = BugCheckParameter2;
          *((_QWORD *)v19 + 48) = BugCheckParameter2;
          BugCheckParameter2[1] = v17;
          v34 = GreDeleteFastMutex;
          v21 = a1 & 4;
          if ( (a1 & 4) != 0 )
          {
            ProbeForWrite(a4, 4uLL, 4u);
          }
          else if ( a4 )
          {
            v12 = -1073741811;
            v30 = -1073741811;
            goto LABEL_47;
          }
          if ( Address )
          {
            v22 = PsGetCurrentProcessWow64Process();
            ProbeForWrite(Address, 0x1CuLL, v22 != 0 ? 1 : 4);
          }
          v32[0] = a1;
          ShouldTranslateQdcDatabaseToActive = DrvShouldTranslateQdcDatabaseToActive((__int64)v20, v32);
          if ( Address )
            DrvSampleDisplayState((__int64)&v36);
          v28[0] = 0;
          v24 = (enum DISPLAYCONFIG_TOPOLOGY_ID *)&v31;
          if ( ShouldTranslateQdcDatabaseToActive )
            v24 = 0LL;
          v12 = DrvQueryDisplayConfigAndLeaveUserCrit(v32[0], &v29, (struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)v17, v24);
          v30 = v12;
          if ( v12 >= 0 && ShouldTranslateQdcDatabaseToActive )
          {
            if ( v29 > 1 )
            {
              for ( i = 1; i < v29; ++i )
              {
                v26 = 216LL * i;
                if ( *(_DWORD *)(v17 + 116) != *(_DWORD *)(v26 + v17 + 116) )
                  break;
                if ( *(_DWORD *)(v17 + 120) != *(_DWORD *)(v26 + v17 + 120) )
                  break;
              }
              v31 = i < v29 ? 4 : 2;
            }
            else
            {
              v31 = 1;
            }
          }
          if ( v12 == -2147483643 )
          {
            v12 = -1073741789;
            v30 = -1073741789;
          }
          else if ( v12 != -1073741789 )
          {
            v12 = QdcSdcTranslateStatusDefault(v12);
            v30 = v12;
          }
          RtlCopyVolatileMemory((void *)a3, (const void *)v17, 216LL * v29);
          *a2 = v29;
          if ( v21 )
            *a4 = v31;
          if ( Address )
          {
            *Address = v36;
            *((_QWORD *)Address + 2) = v37;
            *((_DWORD *)Address + 6) = v38;
          }
        }
        else
        {
          v12 = -1073741811;
          v30 = -1073741811;
        }
      }
      else
      {
        v12 = -1073741637;
      }
    }
    else
    {
      v12 = -1073741790;
    }
  }
  else
  {
    v12 = -1073741823;
  }
LABEL_47:
  MaybeEnterLeaveCrit::~MaybeEnterLeaveCrit((MaybeEnterLeaveCrit *)v28);
  Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
  return (unsigned int)v12;
}
