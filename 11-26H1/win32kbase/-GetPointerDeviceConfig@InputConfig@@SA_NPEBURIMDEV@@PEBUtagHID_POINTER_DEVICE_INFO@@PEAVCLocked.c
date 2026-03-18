/*
 * XREFs of ?GetPointerDeviceConfig@InputConfig@@SA_NPEBURIMDEV@@PEBUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInputSpace@@PEAVCLockedInputSpaceRegion@@@Z @ 0x14007BBB0
 * Callers:
 *     RIMSetDeviceOutputConfig @ 0x14007B81C (RIMSetDeviceOutputConfig.c)
 * Callees:
 *     ?GetMouseInputSpace@CInputConfig@@QEAAXPEAVCLockedInputSpace@@@Z @ 0x14012DF14 (-GetMouseInputSpace@CInputConfig@@QEAAXPEAVCLockedInputSpace@@@Z.c)
 */

char __fastcall InputConfig::GetPointerDeviceConfig(
        const struct RIMDEV *a1,
        const struct tagHID_POINTER_DEVICE_INFO *a2,
        struct CLockedInputSpace *a3,
        struct CLockedInputSpaceRegion *a4)
{
  _QWORD **v4; // rbx
  char v8; // di
  __int64 v9; // rax
  _QWORD **v11; // r15
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  __int64 UserSessionState; // r13
  int v16; // r8d
  _QWORD **v17; // rcx
  _QWORD *i; // r12
  _QWORD **v19; // rax
  __int64 v20; // r15
  _QWORD *v21; // r9
  _QWORD *j; // r8
  _DWORD *v23; // rdx
  _QWORD *v24; // rcx
  _QWORD **v25; // rax
  _QWORD **v26; // [rsp+58h] [rbp+10h]

  v4 = 0LL;
  v8 = 0;
  if ( *((_DWORD *)a2 + 6) != 7 )
  {
    v11 = *(_QWORD ***)(W32GetUserSessionState((_DWORD)a1, (_DWORD)a2, (_DWORD)a3) + 18680);
    v26 = v11;
    UserSessionState = W32GetUserSessionState(v13, v12, v14);
    ExEnterCriticalRegionAndAcquireResourceShared(*(PERESOURCE *)(UserSessionState + 18688));
    v17 = (_QWORD **)*v11;
    for ( i = (_QWORD *)**v11; ; i = (_QWORD *)*i )
    {
      v19 = 0LL;
      if ( v17 != v11 )
        v19 = v17 + 2;
      if ( !v19 )
      {
LABEL_8:
        ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(UserSessionState + 18688));
        return v8;
      }
      if ( v17 != v11 )
        v4 = v17 + 2;
      if ( !*((_DWORD *)v4 + 363) )
        goto LABEL_12;
      if ( !*((_DWORD *)a1 + 332) )
        break;
      if ( *((_DWORD *)a1 + 336) == 4 )
      {
        if ( ((_DWORD)v4[1] & 1) != 0 )
        {
          v25 = v4 + 92;
LABEL_26:
          *(_QWORD *)a3 = v4;
          v8 = 1;
          *(_QWORD *)a4 = v25;
          goto LABEL_8;
        }
LABEL_12:
        v4 = 0LL;
        goto LABEL_13;
      }
      v20 = W32GetUserSessionState((_DWORD)v17, (int)v17 + 16, v16);
      ExEnterCriticalRegionAndAcquireResourceShared(*(PERESOURCE *)(v20 + 18688));
      v21 = v4 + 182;
      for ( j = v4[182]; ; j = (_QWORD *)*j )
      {
        v23 = j + 2;
        v24 = 0LL;
        if ( j != v21 )
          v24 = j + 2;
        if ( !v24 )
          break;
        if ( j == v21 )
          v23 = 0LL;
        if ( (v23[4] & 2) != 0
          && v23[9] == *((_DWORD *)a1 + 465)
          && v23[10] == *((_DWORD *)a1 + 466)
          && v23[11] == *((_DWORD *)a1 + 468) )
        {
          *(_QWORD *)a3 = v4;
          v8 = 1;
          *(_QWORD *)a4 = v23;
          break;
        }
      }
      ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(v20 + 18688));
      v4 = 0LL;
      if ( v8 )
        goto LABEL_8;
      v11 = v26;
LABEL_13:
      v17 = (_QWORD **)i;
    }
    if ( ((_DWORD)v4[1] & 1) != 0 )
    {
      v25 = v4 + 3;
      goto LABEL_26;
    }
    goto LABEL_12;
  }
  v9 = W32GetUserSessionState((_DWORD)a1, (_DWORD)a2, (_DWORD)a3);
  CInputConfig::GetMouseInputSpace(*(CInputConfig **)(v9 + 18680), a3);
  v8 = 1;
  *(_QWORD *)a4 = *(_QWORD *)a3 + 24LL;
  return v8;
}
