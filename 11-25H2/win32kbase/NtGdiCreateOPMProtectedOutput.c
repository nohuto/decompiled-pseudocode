/*
 * XREFs of NtGdiCreateOPMProtectedOutput @ 0x140153500
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x14006A610 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 *     ?CreateProtectedOutput@COPM@@QEAAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH@Z @ 0x140082BE8 (-CreateProtectedOutput@COPM@@QEAAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiCreateOPMProtectedOutput(_OWORD *a1, void **a2)
{
  __int64 result; // rax
  unsigned int v5; // esi
  ULONG64 v6; // rcx
  __int64 SessionState; // rax
  int v8; // eax
  __int64 v9; // rdx
  int v10; // ebx
  int v11; // [rsp+30h] [rbp-48h] BYREF
  void *v12; // [rsp+38h] [rbp-40h] BYREF
  struct _LUID v13[2]; // [rsp+40h] [rbp-38h] BYREF

  result = AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList();
  v5 = 0;
  if ( (int)result >= 0 )
  {
    v12 = (void *)-1LL;
    *(_OWORD *)&v13[0].LowPart = 0LL;
    v6 = (ULONG64)(a1 + 1);
    if ( a1 + 1 < a1 || v6 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *(_OWORD *)&v13[0].LowPart = *a1;
    v11 = 0;
    SessionState = W32GetSessionState(v6);
    v8 = COPM::CreateProtectedOutput(
           *(COPM **)(*(_QWORD *)(SessionState + 88) + 3648LL),
           (enum _DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS)v13[1].HighPart,
           v13,
           v13[1].LowPart,
           &v12,
           &v11);
    v10 = 0;
    if ( v8 < 0 )
      v10 = v8;
    if ( v11 && v10 >= 0 )
      v10 = -1073741198;
    if ( (unsigned __int64)(a2 + 1) > MmUserProbeAddress || a2 + 1 <= a2 )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a2 = v12;
    UserSessionSwitchLeaveCritWithNonPaged(0LL, v9);
    if ( v10 < 0 )
      return (unsigned int)v10;
    return v5;
  }
  return result;
}
