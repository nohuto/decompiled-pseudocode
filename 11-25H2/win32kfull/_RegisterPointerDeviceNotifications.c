/*
 * XREFs of _RegisterPointerDeviceNotifications @ 0x1401EB79C
 * Callers:
 *     NtUserRegisterPointerDeviceNotifications @ 0x1401EB670 (NtUserRegisterPointerDeviceNotifications.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RegisterPointerDeviceNotifications(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  int v3; // r14d
  __int64 v5; // rbx
  _QWORD *v6; // r8
  _QWORD *v7; // rax
  _QWORD *v9; // rax
  _QWORD *v10; // rsi
  __int64 *v11; // rax
  __int64 **v12; // rcx
  _QWORD v13[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  v3 = a2;
  v5 = W32GetUserSessionState(a1, a2) + 16712;
  v6 = *(_QWORD **)v5;
  while ( v6 != (_QWORD *)v5 )
  {
    v7 = v6 - 2;
    v6 = (_QWORD *)*v6;
    if ( *v7 == a1 )
      return v2;
  }
  v9 = (_QWORD *)Win32AllocPoolZInit(32LL, 2020635477LL);
  v10 = v9;
  if ( v9 )
  {
    *v9 = 0LL;
    v13[0] = v9;
    v13[1] = a1;
    HMAssignmentLock(v13, 0LL);
    *((_DWORD *)v10 + 2) = v3;
    v11 = v10 + 2;
    v12 = *(__int64 ***)(v5 + 8);
    if ( *v12 != (__int64 *)v5 )
      __fastfail(3u);
    *v11 = v5;
    v2 = 1;
    v10[3] = v12;
    *v12 = v11;
    *(_QWORD *)(v5 + 8) = v11;
  }
  return v2;
}
