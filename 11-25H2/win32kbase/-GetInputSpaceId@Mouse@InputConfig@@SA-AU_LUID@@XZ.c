/*
 * XREFs of ?GetInputSpaceId@Mouse@InputConfig@@SA?AU_LUID@@XZ @ 0x1400E102C
 * Callers:
 *     ?MouseSpeedHitTest@CMouseProcessor@@CA?AUtagINPUTDEST@@PEAUtagPOINT@@PEBU_SUBPIXELS@@GG_KKPEAXW4DIT_HITTESTATTRIBUTES@@KKPEAHPEAU_InputHitTestResult@@@Z @ 0x14019045C (-MouseSpeedHitTest@CMouseProcessor@@CA-AUtagINPUTDEST@@PEAUtagPOINT@@PEBU_SUBPIXELS@@GG_KKPEAXW4.c)
 *     NtUserGetPointerDeviceInputSpace @ 0x1401BD920 (NtUserGetPointerDeviceInputSpace.c)
 * Callees:
 *     ?UnLockExclusive@tagDomLock@@QEBAXXZ @ 0x1400BB1E0 (-UnLockExclusive@tagDomLock@@QEBAXXZ.c)
 *     ??0CEResourceLockShared@@QEAA@AEAVCEResourceLock@@@Z @ 0x1401F743C (--0CEResourceLockShared@@QEAA@AEAVCEResourceLock@@@Z.c)
 */

struct _LUID __fastcall InputConfig::Mouse::GetInputSpaceId(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 *v6; // rbx
  __int64 v7; // rbx
  tagDomLock *v9; // [rsp+28h] [rbp-10h] BYREF

  UserSessionState = W32GetUserSessionState(a1, a2);
  CEResourceLockShared::CEResourceLockShared(
    (CEResourceLockShared *)&v9,
    (struct CEResourceLock *)(UserSessionState + 18640));
  v5 = *(_QWORD *)(W32GetUserSessionState(v4, v3) + 18632);
  v6 = *(__int64 **)(v5 + 24);
  if ( !v6 )
    v6 = (__int64 *)(v5 + 32);
  v7 = *v6;
  tagDomLock::UnLockExclusive((PERESOURCE *)v9);
  return (struct _LUID)v7;
}
