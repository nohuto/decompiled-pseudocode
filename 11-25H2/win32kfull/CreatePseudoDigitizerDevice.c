/*
 * XREFs of CreatePseudoDigitizerDevice @ 0x14027BC78
 * Callers:
 *     _InitializeTouchInjectionWorker @ 0x14027B154 (_InitializeTouchInjectionWorker.c)
 * Callees:
 *     GetPhysicalScreenRect @ 0x1401E2F60 (GetPhysicalScreenRect.c)
 *     ?_UpdateReportDescriptor@@YAXUtagRECT@@KK@Z @ 0x14027B920 (-_UpdateReportDescriptor@@YAXUtagRECT@@KK@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

struct DEVICEINFO *__fastcall CreatePseudoDigitizerDevice(int a1, int a2, __int64 a3)
{
  struct DEVICEINFO *DeviceInfo; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 UserSessionState; // rax
  HANDLE *v10; // rdi
  __m128i v11; // xmm6
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  HANDLE v20; // rcx
  unsigned int v21; // eax
  void **v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  struct tagRECT v27; // [rsp+38h] [rbp-99h] BYREF
  struct _UNICODE_STRING DestinationString_8; // [rsp+48h] [rbp-89h] BYREF
  __int64 v29; // [rsp+58h] [rbp-79h] BYREF
  int v30; // [rsp+60h] [rbp-71h]
  int v31; // [rsp+64h] [rbp-6Dh]
  __int64 v32; // [rsp+B0h] [rbp-21h]
  int v33; // [rsp+B8h] [rbp-19h]
  __int64 v34; // [rsp+BCh] [rbp-15h]
  int v35; // [rsp+C4h] [rbp-Dh]
  unsigned int v36; // [rsp+C8h] [rbp-9h]
  int v37; // [rsp+CCh] [rbp-5h]
  int v38; // [rsp+E0h] [rbp+Fh]

  DestinationString_8 = 0LL;
  DeviceInfo = 0LL;
  RtlInitUnicodeString(&DestinationString_8, L"\\??\\VIRTUAL_DIGITIZER");
  EtwTracePseudoDevCreationStart();
  UserSessionState = W32GetUserSessionState(v8, v7);
  v10 = (HANDLE *)(a3 + 88);
  if ( (int)CHidInput::GetKernelHandleToRimObj(*(CHidInput **)(UserSessionState + 16840), (void **)(a3 + 88)) >= 0 )
  {
    v11 = *(__m128i *)RIMGetVirtualDesktopPhysicalSize(&v27);
    v27 = (struct tagRECT)*GetPhysicalScreenRect(&v27, v12);
    _UpdateReportDescriptor(
      &v27,
      3937 * (_mm_cvtsi128_si32(_mm_srli_si128(v11, 8)) / 1000) / 0x64u,
      3937 * (_mm_cvtsi128_si32(_mm_srli_si128(v11, 12)) / 1000) / 0x64u);
    memset_0(&v29, 0, 0x90uLL);
    v15 = W32GetUserSessionState(v14, v13);
    v30 = 498;
    v29 = v15 + 69948;
    v32 = 0LL;
    v31 = 1;
    v33 = a1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v16);
    if ( CurrentProcessWin32Process )
    {
      v18 = -*(_QWORD *)CurrentProcessWin32Process;
      CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    }
    v34 = *(_QWORD *)(CurrentProcessWin32Process + 864);
    v35 = *(_DWORD *)(CurrentProcessWin32Process + 872);
    v19 = PsGetCurrentProcessWin32Process(v18);
    if ( v19 )
      v19 &= -(__int64)(*(_QWORD *)v19 != 0LL);
    v20 = *v10;
    v21 = *(_DWORD *)(v19 + 12) & 0x80000000;
    v37 = a2;
    v22 = (void **)(a3 + 96);
    v36 = v21;
    v38 = 0;
    if ( (int)RIMAddInjectionDeviceOfType(v20, &DestinationString_8, 2LL, &v29, 0, v22) < 0 )
    {
      ZwClose(*v10);
      *v10 = 0LL;
      *v22 = 0LL;
    }
    else
    {
      v25 = W32GetUserSessionState(v24, v23);
      DeviceInfo = CBaseInput::FindDeviceInfo(*(CBaseInput **)(v25 + 16840), *v22, 0);
    }
  }
  EtwTracePseudoDevCreationStop();
  return DeviceInfo;
}
