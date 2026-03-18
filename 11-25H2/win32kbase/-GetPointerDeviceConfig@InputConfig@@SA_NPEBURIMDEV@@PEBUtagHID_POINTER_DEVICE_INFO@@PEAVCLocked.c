/*
 * XREFs of ?GetPointerDeviceConfig@InputConfig@@SA_NPEBURIMDEV@@PEBUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInputSpace@@PEAVCLockedInputSpaceRegion@@@Z @ 0x14002D9EC
 * Callers:
 *     RIMSetDeviceOutputConfig @ 0x14002D684 (RIMSetDeviceOutputConfig.c)
 * Callees:
 *     ?UnLockExclusive@tagDomLock@@QEBAXXZ @ 0x1400BB1E0 (-UnLockExclusive@tagDomLock@@QEBAXXZ.c)
 *     ?GetMouseInputSpace@CInputConfig@@QEAAXPEAVCLockedInputSpace@@@Z @ 0x1400E6D70 (-GetMouseInputSpace@CInputConfig@@QEAAXPEAVCLockedInputSpace@@@Z.c)
 *     ??0CEResourceLockShared@@QEAA@AEAVCEResourceLock@@@Z @ 0x1401F743C (--0CEResourceLockShared@@QEAA@AEAVCEResourceLock@@@Z.c)
 */

char __fastcall InputConfig::GetPointerDeviceConfig(
        const struct RIMDEV *a1,
        const struct tagHID_POINTER_DEVICE_INFO *a2,
        struct CLockedInputSpace *a3,
        struct CLockedInputSpaceRegion *a4)
{
  char v4; // di
  __int64 UserSessionState; // rax
  _QWORD **v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  _QWORD **v13; // rcx
  _QWORD *i; // r12
  _QWORD **v15; // rax
  _QWORD **v16; // rbx
  _QWORD **v17; // rax
  _QWORD *v18; // r15
  __int64 v19; // rax
  _QWORD *j; // rdx
  _QWORD *v21; // rax
  _DWORD *v22; // rcx
  tagDomLock *v24; // [rsp+20h] [rbp-68h] BYREF
  tagDomLock *v25; // [rsp+38h] [rbp-50h] BYREF

  v4 = 0;
  if ( *((_DWORD *)a2 + 6) == 7 )
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    CInputConfig::GetMouseInputSpace(*(CInputConfig **)(UserSessionState + 18632), a3);
    v4 = 1;
    *(_QWORD *)a4 = *(_QWORD *)a3 + 24LL;
  }
  else
  {
    v9 = *(_QWORD ***)(W32GetUserSessionState(a1, a2) + 18632);
    v12 = W32GetUserSessionState(v11, v10);
    CEResourceLockShared::CEResourceLockShared((CEResourceLockShared *)&v25, (struct CEResourceLock *)(v12 + 18640));
    v13 = (_QWORD **)*v9;
    for ( i = (_QWORD *)**v9; ; i = (_QWORD *)*i )
    {
      v15 = 0LL;
      if ( v13 != v9 )
        v15 = v13 + 2;
      if ( !v15 )
        break;
      v16 = 0LL;
      if ( v13 != v9 )
        v16 = v13 + 2;
      if ( *((_DWORD *)v16 + 363) )
      {
        if ( *((_DWORD *)a1 + 334) )
        {
          if ( *((_DWORD *)a1 + 338) == 4 )
          {
            if ( ((_DWORD)v16[1] & 1) != 0 )
            {
              v17 = v16 + 92;
LABEL_31:
              *(_QWORD *)a3 = v16;
              v4 = 1;
              *(_QWORD *)a4 = v17;
              break;
            }
          }
          else
          {
            v18 = v16 + 182;
            v19 = W32GetUserSessionState(v13, v13 + 2);
            CEResourceLockShared::CEResourceLockShared(
              (CEResourceLockShared *)&v24,
              (struct CEResourceLock *)(v19 + 18640));
            for ( j = v16[182]; ; j = (_QWORD *)*j )
            {
              v21 = 0LL;
              if ( j != v18 )
                v21 = j + 2;
              if ( !v21 )
                break;
              v22 = 0LL;
              if ( j != v18 )
                v22 = j + 2;
              if ( (v22[4] & 2) != 0
                && v22[9] == *((_DWORD *)a1 + 467)
                && v22[10] == *((_DWORD *)a1 + 468)
                && v22[11] == *((_DWORD *)a1 + 470) )
              {
                *(_QWORD *)a3 = v16;
                v4 = 1;
                *(_QWORD *)a4 = v22;
                break;
              }
            }
            tagDomLock::UnLockExclusive(v24);
            if ( v4 )
              break;
          }
        }
        else if ( ((_DWORD)v16[1] & 1) != 0 )
        {
          v17 = v16 + 3;
          goto LABEL_31;
        }
      }
      v13 = (_QWORD **)i;
    }
    tagDomLock::UnLockExclusive(v25);
  }
  return v4;
}
