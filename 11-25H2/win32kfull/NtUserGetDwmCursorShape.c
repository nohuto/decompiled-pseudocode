/*
 * XREFs of NtUserGetDwmCursorShape @ 0x1402977E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     Feature_DesktopDWMCursor__private_IsEnabledDeviceUsageNoInline @ 0x14026D970 (Feature_DesktopDWMCursor__private_IsEnabledDeviceUsageNoInline.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?FreeTelemetryInfoBitmaps@CursorApiRouter@@QEAAXPEAUCursorTelemetryInfo@@@Z @ 0x1402DB858 (-FreeTelemetryInfoBitmaps@CursorApiRouter@@QEAAXPEAUCursorTelemetryInfo@@@Z.c)
 *     ?GetTelemetryInfo@CursorApiRouter@@QEAAXPEAUCursorTelemetryInfo@@@Z @ 0x1402DBAF8 (-GetTelemetryInfo@CursorApiRouter@@QEAAXPEAUCursorTelemetryInfo@@@Z.c)
 *     ?UserGetDwmCursorShape@CursorApiRouter@@QEAAKKREAXKREAK@Z @ 0x1402DCA0C (-UserGetDwmCursorShape@CursorApiRouter@@QEAAKKREAXKREAK@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1403423E0 (RtlCopyVolatileMemory.c)
 */

_BOOL8 __fastcall NtUserGetDwmCursorShape(__int64 a1, char *a2, unsigned int a3, unsigned int *a4)
{
  SIZE_T v4; // r14
  unsigned int v6; // ebx
  __int64 CurrentProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // r8d
  BOOL v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  char *v16; // rbx
  unsigned int v17; // esi
  _DWORD *v18; // rdx
  CursorApiRouter *v19; // rcx
  _DWORD *v20; // rdx
  __int64 UserSessionState; // rax
  int DwmCursorShape; // eax
  unsigned int v25; // [rsp+44h] [rbp-144h]
  _QWORD Src[4]; // [rsp+60h] [rbp-128h] BYREF
  int v27; // [rsp+80h] [rbp-108h]
  __int128 v28; // [rsp+84h] [rbp-104h]
  __int128 v29; // [rsp+94h] [rbp-F4h]
  __int64 v30; // [rsp+A4h] [rbp-E4h]
  char v31; // [rsp+ACh] [rbp-DCh]
  __int16 v32; // [rsp+ADh] [rbp-DBh]
  char v33; // [rsp+AFh] [rbp-D9h]
  __int128 v34; // [rsp+B0h] [rbp-D8h]
  __int128 v35; // [rsp+C0h] [rbp-C8h]
  __int128 v36; // [rsp+D0h] [rbp-B8h]
  __int64 v37; // [rsp+E0h] [rbp-A8h]
  __int128 v38; // [rsp+E8h] [rbp-A0h]
  __int128 v39; // [rsp+F8h] [rbp-90h]
  void *v40; // [rsp+108h] [rbp-80h]
  size_t Size; // [rsp+110h] [rbp-78h]
  __int128 v42; // [rsp+118h] [rbp-70h]
  __int128 v43; // [rsp+128h] [rbp-60h]
  void *v44; // [rsp+138h] [rbp-50h]
  size_t v45; // [rsp+140h] [rbp-48h]

  v4 = a3;
  v6 = a1;
  CurrentProcess = PsGetCurrentProcess(a1);
  if ( !(unsigned int)UserUnsafeIsProcessDwm(CurrentProcess) )
  {
    v11 = 30510;
LABEL_3:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, v11);
LABEL_4:
    v12 = 0;
    UserSetLastError(5);
    return v12;
  }
  if ( (unsigned __int8)IsInputThread(v9, v8, v10) )
  {
    if ( a2 )
      ProbeForWrite(a2, v4, 1u);
    v20 = a4;
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      v20 = (_DWORD *)MmUserProbeAddress;
    *v20 = *v20;
    UserSessionState = W32GetUserSessionState(MmUserProbeAddress, v20);
    DwmCursorShape = CursorApiRouter::UserGetDwmCursorShape(
                       *(CursorApiRouter **)(UserSessionState + 36304),
                       v6,
                       a2,
                       v4,
                       a4);
    v12 = DwmCursorShape == 0;
    if ( DwmCursorShape )
    {
      v12 = 0;
      UserSetLastError(DwmCursorShape);
    }
  }
  else
  {
    if ( !(unsigned int)Feature_DesktopDWMCursor__private_IsEnabledDeviceUsageNoInline() )
    {
      v11 = 30607;
      goto LABEL_3;
    }
    if ( v6 != -2 )
      goto LABEL_4;
    memset(Src, 0, sizeof(Src));
    v27 = 0;
    v28 = 0LL;
    v29 = 0LL;
    v30 = 0LL;
    v31 = 0;
    v32 = 0;
    v33 = 0;
    v34 = 0LL;
    v35 = 0LL;
    v36 = 0LL;
    v37 = 0LL;
    v38 = 0LL;
    v39 = 0LL;
    v40 = 0LL;
    Size = 0LL;
    v42 = 0LL;
    v43 = 0LL;
    v44 = 0LL;
    v45 = 0LL;
    ProbeForWrite(a2, v4, 2u);
    if ( (unsigned int)v4 >= 0xE8 )
    {
      v15 = W32GetUserSessionState(v14, v13);
      CursorApiRouter::GetTelemetryInfo(*(CursorApiRouter **)(v15 + 36304), (struct CursorTelemetryInfo *)Src);
      RtlCopyVolatileMemory(a2, Src, 0xE8uLL);
      v16 = a2 + 232;
      v17 = v4 - 232;
      v25 = v4 - 232;
      if ( v40 )
      {
        if ( v17 < (unsigned int)Size )
        {
          *((_QWORD *)a2 + 21) = 0LL;
        }
        else
        {
          RtlCopyVolatileMemory(a2 + 232, v40, (unsigned int)Size);
          *((_QWORD *)a2 + 21) = v16;
          v16 += (unsigned int)Size;
          v17 -= Size;
          v25 = v17;
        }
      }
      if ( v44 )
      {
        if ( v17 < (unsigned int)v45 )
        {
          *((_QWORD *)a2 + 27) = 0LL;
        }
        else
        {
          RtlCopyVolatileMemory(v16, v44, (unsigned int)v45);
          *((_QWORD *)a2 + 27) = v16;
          v25 = v17 - v45;
        }
      }
      v18 = a4;
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        v18 = (_DWORD *)MmUserProbeAddress;
      *v18 = *v18;
      *a4 = v4 - v25;
      W32GetUserSessionState(MmUserProbeAddress, v18);
      CursorApiRouter::FreeTelemetryInfoBitmaps(v19, (struct CursorTelemetryInfo *)Src);
    }
    return 0;
  }
  return v12;
}
