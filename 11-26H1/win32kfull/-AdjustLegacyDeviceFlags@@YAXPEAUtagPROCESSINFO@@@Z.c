/*
 * XREFs of ?AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1401709C0
 * Callers:
 *     _RegisterRawInputDevices @ 0x14016FDF8 (_RegisterRawInputDevices.c)
 * Callees:
 *     EditionUpdateRawMouseMode @ 0x1400548C0 (EditionUpdateRawMouseMode.c)
 *     ?InProcessDeviceTypeRequestTable@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@GG@Z @ 0x140170D7C (-InProcessDeviceTypeRequestTable@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@GG@Z.c)
 *     ValidatePtiMouse @ 0x140170ED4 (ValidatePtiMouse.c)
 *     ??0?$ObjectLockRecursive@V?$SGLOCKgHidCountersLock@UtagObjLock@@@@@?$DomainExclusiveRecursive@$$V@?$DomainSharedRecursive@$$V@@QEAA@AEAV?$SGLOCKgHidCountersLock@UtagObjLock@@@@@Z @ 0x140171FE8 (--0-$ObjectLockRecursive@V-$SGLOCKgHidCountersLock@UtagObjLock@@@@@-$DomainExclusiveRecursive@$$.c)
 *     HasHidTable @ 0x140172990 (HasHidTable.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall AdjustLegacyDeviceFlags(struct tagPROCESSINFO *a1)
{
  __int64 v1; // rbx
  struct tagPROCESS_HID_REQUEST *v2; // rax
  int v3; // ecx
  struct tagPROCESS_HID_REQUEST *v4; // rsi
  int v5; // ecx
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 UserSessionState; // rax
  unsigned int v10; // ecx
  struct tagPROCESS_HID_REQUEST *v11; // rax
  __int64 v12; // rdx
  int v13; // ecx
  struct tagPROCESS_HID_REQUEST *v14; // rsi
  int v15; // ecx
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdi
  tagObjLock *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rdx
  unsigned int v29; // ecx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  unsigned int v33; // ecx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // [rsp+20h] [rbp-40h] BYREF
  __int64 v51; // [rsp+28h] [rbp-38h]
  _BYTE v52[16]; // [rsp+30h] [rbp-30h] BYREF
  tagObjLock *v53; // [rsp+40h] [rbp-20h]
  char v54; // [rsp+50h] [rbp-10h]

  v1 = *((_QWORD *)a1 + 103);
  v2 = InProcessDeviceTypeRequestTable((struct tagPROCESS_HID_TABLE *)v1, 1u, 6u);
  v3 = *(_DWORD *)(v1 + 100);
  v4 = v2;
  if ( v2 )
  {
    v5 = v3 | 0x10;
    *(_DWORD *)(v1 + 100) = v5;
    v6 = -(*((_DWORD *)v2 + 5) & 1);
    if ( -__CFSHR__(v5, 7) != v6 )
    {
      if ( v6 )
      {
        DomainSharedRecursive<>::DomainExclusiveRecursive<>::ObjectLockRecursive<SGLOCKgHidCountersLock<tagObjLock>>::ObjectLockRecursive<SGLOCKgHidCountersLock<tagObjLock>>(v52);
        UserSessionState = W32GetUserSessionState(v8, v7);
        ++*(_DWORD *)(UserSessionState + 16840);
      }
      else
      {
        DomainSharedRecursive<>::DomainExclusiveRecursive<>::ObjectLockRecursive<SGLOCKgHidCountersLock<tagObjLock>>::ObjectLockRecursive<SGLOCKgHidCountersLock<tagObjLock>>(v52);
        v49 = W32GetUserSessionState(v48, v47);
        --*(_DWORD *)(v49 + 16840);
      }
      if ( v54 && v53 )
        tagObjLock::UnLockExclusive(v53);
      v10 = (*((_DWORD *)v4 + 5) << 6) ^ (*(_DWORD *)(v1 + 100) ^ (*((_DWORD *)v4 + 5) << 6)) & 0xFFFFFFBF;
      *(_DWORD *)(v1 + 100) = v10;
      *(_DWORD *)(v1 + 100) = (*((_DWORD *)v4 + 5) << 6) ^ ((*((_DWORD *)v4 + 5) << 6) ^ v10) & 0xFFFFFF7F;
    }
    v50 = v1 + 72;
    v51 = *((_QWORD *)v4 + 4);
    HMAssignmentLock(&v50, 0LL);
  }
  else
  {
    v29 = v3 & 0xFFFFF9CF;
    *(_DWORD *)(v1 + 100) = v29;
    if ( (v29 & 0x40) != 0 )
    {
      DomainSharedRecursive<>::DomainExclusiveRecursive<>::ObjectLockRecursive<SGLOCKgHidCountersLock<tagObjLock>>::ObjectLockRecursive<SGLOCKgHidCountersLock<tagObjLock>>(v52);
      v43 = W32GetUserSessionState(v42, v41);
      --*(_DWORD *)(v43 + 16840);
      if ( v54 )
      {
        if ( v53 )
          tagObjLock::UnLockExclusive(v53);
      }
    }
    *(_DWORD *)(v1 + 100) &= 0xFFFFFF3F;
    HMAssignmentUnlock(v1 + 72);
  }
  v11 = InProcessDeviceTypeRequestTable((struct tagPROCESS_HID_TABLE *)v1, 1u, 2u);
  v13 = *(_DWORD *)(v1 + 100);
  v14 = v11;
  if ( v11 )
  {
    v15 = v13 | 1;
    *(_DWORD *)(v1 + 112) = 0;
    *(_DWORD *)(v1 + 100) = v15;
    v16 = -(*((_DWORD *)v11 + 5) & 1);
    v17 = (unsigned int)-__CFSHR__(v15, 3);
    if ( (_DWORD)v17 != v16 )
    {
      if ( v16 )
      {
        DomainSharedRecursive<>::DomainExclusiveRecursive<>::ObjectLockRecursive<SGLOCKgHidCountersLock<tagObjLock>>::ObjectLockRecursive<SGLOCKgHidCountersLock<tagObjLock>>(v52);
        v46 = W32GetUserSessionState(v45, v44);
        ++*(_DWORD *)(v46 + 16844);
      }
      else
      {
        DomainSharedRecursive<>::DomainExclusiveRecursive<>::ObjectLockRecursive<SGLOCKgHidCountersLock<tagObjLock>>::ObjectLockRecursive<SGLOCKgHidCountersLock<tagObjLock>>(v52);
        v32 = W32GetUserSessionState(v31, v30);
        --*(_DWORD *)(v32 + 16844);
      }
      if ( v54 && v53 )
        tagObjLock::UnLockExclusive(v53);
      v33 = (4 * *((_DWORD *)v14 + 5)) ^ (*(_DWORD *)(v1 + 100) ^ (4 * *((_DWORD *)v14 + 5))) & 0xFFFFFFFB;
      *(_DWORD *)(v1 + 100) = v33;
      v17 = (4 * *((_DWORD *)v14 + 5)) ^ ((4 * *((_DWORD *)v14 + 5)) ^ v33) & 0xFFFFFFF7;
      *(_DWORD *)(v1 + 100) = v17;
    }
    v18 = W32GetUserSessionState(v17, v12);
    v19 = ValidatePtiMouse(*(_QWORD *)(v18 + 18928));
    v20 = v19;
    if ( v19 && (unsigned int)HasHidTable(v19) && *(_QWORD *)(*(_QWORD *)(v20 + 456) + 824LL) == v1 )
    {
      v27 = W32GetUserSessionState(v26, v25);
      EditionUpdateRawMouseMode(*(_QWORD *)(v27 + 18928), v28);
    }
    v50 = v1 + 64;
    v51 = *((_QWORD *)v14 + 4);
    HMAssignmentLock(&v50, 0LL);
  }
  else
  {
    v21 = (tagObjLock *)(v13 & 0xFFFFF6FC);
    *(_DWORD *)(v1 + 100) = (_DWORD)v21;
    if ( ((unsigned __int8)v21 & 4) != 0 )
    {
      DomainSharedRecursive<>::DomainExclusiveRecursive<>::ObjectLockRecursive<SGLOCKgHidCountersLock<tagObjLock>>::ObjectLockRecursive<SGLOCKgHidCountersLock<tagObjLock>>(v52);
      v40 = W32GetUserSessionState(v39, v38);
      --*(_DWORD *)(v40 + 16844);
      if ( v54 )
      {
        v21 = v53;
        if ( v53 )
          tagObjLock::UnLockExclusive(v53);
      }
    }
    *(_DWORD *)(v1 + 100) &= 0xFFFFFFF3;
    v22 = W32GetUserSessionState(v21, v12);
    v23 = ValidatePtiMouse(*(_QWORD *)(v22 + 18928));
    v24 = v23;
    if ( v23 && (unsigned int)HasHidTable(v23) && *(_QWORD *)(*(_QWORD *)(v24 + 456) + 824LL) == v1 )
    {
      v36 = W32GetUserSessionState(v35, v34);
      EditionUpdateRawMouseMode(*(_QWORD *)(v36 + 18928), v37);
    }
    HMAssignmentUnlock(v1 + 64);
  }
}
