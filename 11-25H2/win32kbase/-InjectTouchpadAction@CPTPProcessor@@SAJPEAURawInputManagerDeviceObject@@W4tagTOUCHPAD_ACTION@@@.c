/*
 * XREFs of ?InjectTouchpadAction@CPTPProcessor@@SAJPEAURawInputManagerDeviceObject@@W4tagTOUCHPAD_ACTION@@@Z @ 0x140211310
 * Callers:
 *     <none>
 * Callees:
 *     SendMessageTo @ 0x1400675F0 (SendMessageTo.c)
 *     ?TransformTPScreenToHimetric@CPTPProcessor@@CA?AUtagPOINT@@PEAUtagHID_POINTER_DEVICE_INFO@@U2@@Z @ 0x1400DA8D0 (-TransformTPScreenToHimetric@CPTPProcessor@@CA-AUtagPOINT@@PEAUtagHID_POINTER_DEVICE_INFO@@U2@@Z.c)
 *     ?EndInertiaAtPoint@CInertiaManager@@QEAA_NUtagPOINT@@0W4INERTIA_SOURCE@@@Z @ 0x1402122A0 (-EndInertiaAtPoint@CInertiaManager@@QEAA_NUtagPOINT@@0W4INERTIA_SOURCE@@@Z.c)
 *     ?StopInertiaAtPoint@CInertiaManager@@QEAA_NUtagPOINT@@0W4INERTIA_SOURCE@@@Z @ 0x14021263C (-StopInertiaAtPoint@CInertiaManager@@QEAA_NUtagPOINT@@0W4INERTIA_SOURCE@@@Z.c)
 */

__int64 __fastcall CPTPProcessor::InjectTouchpadAction(__int64 a1, int a2)
{
  __int64 v2; // rbx
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // ecx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  __int64 v10; // rdx
  __int64 UserSessionState; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct tagPOINT *v15; // rax
  struct tagPOINT v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rcx
  struct tagPOINT *v23; // rax
  struct tagPOINT v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // [rsp+20h] [rbp-18h] BYREF
  int v30; // [rsp+28h] [rbp-10h]
  int v31; // [rsp+2Ch] [rbp-Ch]

  v2 = *(_QWORD *)(a1 + 528);
  if ( a2 <= 5 )
  {
    if ( a2 == 5 )
    {
      v6 = 7;
      goto LABEL_25;
    }
    if ( !a2 )
    {
      v6 = 0;
      goto LABEL_25;
    }
    v3 = a2 - 1;
    if ( !v3 )
    {
      v6 = 3;
      goto LABEL_25;
    }
    v4 = v3 - 1;
    if ( !v4 )
    {
      v6 = 6;
      goto LABEL_25;
    }
    v5 = v4 - 1;
    if ( !v5 )
    {
      v6 = 1;
      goto LABEL_25;
    }
    if ( v5 == 1 )
    {
      v6 = 4;
LABEL_25:
      v28 = *(_QWORD *)(v2 + 792);
      v31 = 0;
      v30 = v6;
      v29 = v28;
      SendMessageTo(21LL, &v29, 16LL);
      return 0LL;
    }
    return 3221225485LL;
  }
  v7 = a2 - 6;
  if ( !v7 )
  {
    v6 = 2;
    goto LABEL_25;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v6 = 5;
    goto LABEL_25;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    v6 = 8;
    goto LABEL_25;
  }
  v10 = (unsigned int)(v9 - 1);
  if ( (_DWORD)v10 )
  {
    if ( (_DWORD)v10 != 1 )
      return 3221225485LL;
    UserSessionState = W32GetUserSessionState(a1, v10);
    v15 = (struct tagPOINT *)W32GetUserSessionState(v14, v13);
    v16 = CPTPProcessor::TransformTPScreenToHimetric((struct tagHID_POINTER_DEVICE_INFO *)v2, v15[2398]);
    v19 = W32GetUserSessionState(v18, v17);
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))CInertiaManager::EndInertiaAtPoint)(
      UserSessionState + 16920,
      *(_QWORD *)(v19 + 19184),
      v16,
      4LL);
  }
  else
  {
    v20 = W32GetUserSessionState(a1, v10);
    v23 = (struct tagPOINT *)W32GetUserSessionState(v22, v21);
    v24 = CPTPProcessor::TransformTPScreenToHimetric((struct tagHID_POINTER_DEVICE_INFO *)v2, v23[2398]);
    v27 = W32GetUserSessionState(v26, v25);
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))CInertiaManager::StopInertiaAtPoint)(
      v20 + 16920,
      *(_QWORD *)(v27 + 19184),
      v24);
  }
  return 0LL;
}
