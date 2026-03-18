/*
 * XREFs of NtGdiCreateOPMProtectedOutput @ 0x140009580
 * Callers:
 *     <none>
 * Callees:
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1400096D0 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 *     ?CreateProtectedOutput@COPM@@QEAAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH@Z @ 0x1400098D0 (-CreateProtectedOutput@COPM@@QEAAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     RtlCopyFromUser @ 0x1401C9358 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     RtlCopyToUser @ 0x1402D2054 (RtlCopyToUser.c)
 */

__int64 __fastcall NtGdiCreateOPMProtectedOutput(void *Src, void *a2)
{
  __int64 result; // rax
  unsigned int v5; // esi
  _DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS v6; // ebx
  enum _DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS v7; // edi
  __int64 v8; // rcx
  __int64 SessionState; // rax
  int v10; // eax
  int v11; // ebx
  int v12; // [rsp+30h] [rbp-48h] BYREF
  __int64 Srca; // [rsp+38h] [rbp-40h] BYREF
  _DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS v14[4]; // [rsp+40h] [rbp-38h] BYREF

  result = AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList();
  v5 = 0;
  if ( (int)result >= 0 )
  {
    Srca = -1LL;
    *(_OWORD *)v14 = 0LL;
    RtlCopyFromUser(v14, Src, 0x10uLL);
    v12 = 0;
    v6 = v14[2];
    v7 = v14[3];
    SessionState = W32GetSessionState(v8);
    v10 = COPM::CreateProtectedOutput(
            *(COPM **)(*(_QWORD *)(SessionState + 88) + 3728LL),
            v7,
            (struct _LUID *)v14,
            v6,
            (void **)&Srca,
            &v12);
    v11 = 0;
    if ( v10 < 0 )
      v11 = v10;
    if ( v12 && v11 >= 0 )
      v11 = -1073741198;
    RtlCopyToUser(a2, &Srca, 8uLL);
    UserSessionSwitchLeaveCritWithNonPaged();
    if ( v11 < 0 )
      return (unsigned int)v11;
    return v5;
  }
  return result;
}
