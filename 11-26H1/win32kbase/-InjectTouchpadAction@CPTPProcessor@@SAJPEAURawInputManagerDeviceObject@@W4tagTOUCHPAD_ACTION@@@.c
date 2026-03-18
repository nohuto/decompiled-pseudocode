/*
 * XREFs of ?InjectTouchpadAction@CPTPProcessor@@SAJPEAURawInputManagerDeviceObject@@W4tagTOUCHPAD_ACTION@@@Z @ 0x140218CF0
 * Callers:
 *     <none>
 * Callees:
 *     SendMessageTo @ 0x14008B570 (SendMessageTo.c)
 *     ?TransformTPScreenToHimetric@CPTPProcessor@@CA?AUtagPOINT@@PEAUtagHID_POINTER_DEVICE_INFO@@U2@@Z @ 0x140126618 (-TransformTPScreenToHimetric@CPTPProcessor@@CA-AUtagPOINT@@PEAUtagHID_POINTER_DEVICE_INFO@@U2@@Z.c)
 *     ?EndInertiaAtPoint@CInertiaManager@@QEAA_NUtagPOINT@@0W4INERTIA_SOURCE@@@Z @ 0x140219374 (-EndInertiaAtPoint@CInertiaManager@@QEAA_NUtagPOINT@@0W4INERTIA_SOURCE@@@Z.c)
 *     ?StopInertiaAtPoint@CInertiaManager@@QEAA_NUtagPOINT@@0W4INERTIA_SOURCE@@@Z @ 0x1402194D4 (-StopInertiaAtPoint@CInertiaManager@@QEAA_NUtagPOINT@@0W4INERTIA_SOURCE@@@Z.c)
 */

__int64 __fastcall CPTPProcessor::InjectTouchpadAction(__int64 a1, int a2, int a3)
{
  __int64 v3; // rbx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // ecx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  __int64 v13; // rdi
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  struct tagPOINT *UserSessionState; // rax
  struct tagPOINT v18; // rbx
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  __int64 v22; // rax
  __int64 v23; // rdi
  int v24; // edx
  int v25; // ecx
  int v26; // r8d
  struct tagPOINT *v27; // rax
  struct tagPOINT v28; // rbx
  int v29; // edx
  int v30; // ecx
  int v31; // r8d
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // [rsp+20h] [rbp-18h] BYREF
  int v35; // [rsp+28h] [rbp-10h]
  int v36; // [rsp+2Ch] [rbp-Ch]

  v3 = *(_QWORD *)(a1 + 528);
  if ( a2 <= 5 )
  {
    if ( a2 == 5 )
    {
      v7 = 7;
      goto LABEL_25;
    }
    if ( !a2 )
    {
      v7 = 0;
      goto LABEL_25;
    }
    v4 = a2 - 1;
    if ( !v4 )
    {
      v7 = 3;
      goto LABEL_25;
    }
    v5 = v4 - 1;
    if ( !v5 )
    {
      v7 = 6;
      goto LABEL_25;
    }
    v6 = v5 - 1;
    if ( !v6 )
    {
      v7 = 1;
      goto LABEL_25;
    }
    if ( v6 == 1 )
    {
      v7 = 4;
LABEL_25:
      v33 = *(_QWORD *)(v3 + 792);
      v35 = v7;
      v36 = 0;
      v34 = v33;
      SendMessageTo(21, (int)&v34, 16);
      return 0LL;
    }
    return 3221225485LL;
  }
  v8 = a2 - 6;
  if ( !v8 )
  {
    v7 = 2;
    goto LABEL_25;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    v7 = 5;
    goto LABEL_25;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    v7 = 8;
    goto LABEL_25;
  }
  v11 = v10 - 1;
  if ( v11 )
  {
    if ( v11 != 1 )
      return 3221225485LL;
    v13 = W32GetUserSessionState(a1, 1, a3) + 16912;
    UserSessionState = (struct tagPOINT *)W32GetUserSessionState(v15, v14, v16);
    v18 = CPTPProcessor::TransformTPScreenToHimetric((struct tagHID_POINTER_DEVICE_INFO *)v3, UserSessionState[2402]);
    v22 = W32GetUserSessionState(v20, v19, v21);
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))CInertiaManager::EndInertiaAtPoint)(
      v13,
      *(_QWORD *)(v22 + 19216),
      v18,
      4LL);
  }
  else
  {
    v23 = W32GetUserSessionState(a1, 0, a3) + 16912;
    v27 = (struct tagPOINT *)W32GetUserSessionState(v25, v24, v26);
    v28 = CPTPProcessor::TransformTPScreenToHimetric((struct tagHID_POINTER_DEVICE_INFO *)v3, v27[2402]);
    v32 = W32GetUserSessionState(v30, v29, v31);
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))CInertiaManager::StopInertiaAtPoint)(
      v23,
      *(_QWORD *)(v32 + 19216),
      v28);
  }
  return 0LL;
}
