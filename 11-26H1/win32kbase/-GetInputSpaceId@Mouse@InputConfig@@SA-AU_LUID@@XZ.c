/*
 * XREFs of ?GetInputSpaceId@Mouse@InputConfig@@SA?AU_LUID@@XZ @ 0x140106C58
 * Callers:
 *     ?MouseSpeedHitTest@CMouseProcessor@@CA?AUtagINPUTDEST@@PEAUtagPOINT@@PEBU_SUBPIXELS@@GG_KKPEAXW4DIT_HITTESTATTRIBUTES@@KPEAHPEAU_InputHitTestResult@@@Z @ 0x140106654 (-MouseSpeedHitTest@CMouseProcessor@@CA-AUtagINPUTDEST@@PEAUtagPOINT@@PEBU_SUBPIXELS@@GG_KKPEAXW4.c)
 *     NtUserGetPointerDeviceInputSpace @ 0x1401E4C50 (NtUserGetPointerDeviceInputSpace.c)
 * Callees:
 *     <none>
 */

struct _LUID __fastcall InputConfig::Mouse::GetInputSpaceId(int a1, int a2, int a3)
{
  __int64 UserSessionState; // rdi
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  __int64 v7; // rcx
  __int64 *v8; // rbx
  __int64 v9; // rbx

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  ExEnterCriticalRegionAndAcquireResourceShared(*(PERESOURCE *)(UserSessionState + 18688));
  v7 = *(_QWORD *)(W32GetUserSessionState(v5, v4, v6) + 18680);
  v8 = *(__int64 **)(v7 + 24);
  if ( !v8 )
    v8 = (__int64 *)(v7 + 32);
  v9 = *v8;
  ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(UserSessionState + 18688));
  return (struct _LUID)v9;
}
