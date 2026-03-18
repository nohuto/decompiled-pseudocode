/*
 * XREFs of ?AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z @ 0x14011E5B0
 * Callers:
 *     _RegisterRawInputDevices @ 0x14011DA34 (_RegisterRawInputDevices.c)
 * Callees:
 *     HasHidTable @ 0x14011CE00 (HasHidTable.c)
 *     ??0?$ObjectLockRecursive@V?$SGLOCKgHidCountersLock@UtagObjLock@@@@@?$DomainExclusiveRecursive@$$V@?$DomainSharedRecursive@$$V@@QEAA@AEAV?$SGLOCKgHidCountersLock@UtagObjLock@@@@@Z @ 0x14011CFE8 (--0-$ObjectLockRecursive@V-$SGLOCKgHidCountersLock@UtagObjLock@@@@@-$DomainExclusiveRecursive@$$.c)
 *     ?InProcessDeviceTypeRequestTable@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@GG@Z @ 0x14011E984 (-InProcessDeviceTypeRequestTable@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@GG@Z.c)
 *     ValidatePtiMouse @ 0x14011F4D0 (ValidatePtiMouse.c)
 *     EditionUpdateRawMouseMode @ 0x140121E10 (EditionUpdateRawMouseMode.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

void __fastcall AdjustLegacyDeviceFlags(struct tagPROCESSINFO *a1)
{
  __int64 v1; // rbx
  struct tagPROCESS_HID_REQUEST *v2; // rax
  __int64 v3; // rdx
  int v4; // ecx
  struct tagPROCESS_HID_REQUEST *v5; // rsi
  int v6; // ecx
  __int64 v7; // rdx
  struct tagPROCESS_HID_REQUEST *v8; // rax
  __int64 v9; // rdx
  int v10; // ecx
  struct tagPROCESS_HID_REQUEST *v11; // rsi
  int v12; // ecx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  tagObjLock *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdi
  unsigned int v25; // ecx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 UserSessionState; // rax
  unsigned int v32; // ecx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // [rsp+20h] [rbp-40h] BYREF
  __int64 v49; // [rsp+28h] [rbp-38h]
  _BYTE v50[16]; // [rsp+30h] [rbp-30h] BYREF
  tagObjLock *v51; // [rsp+40h] [rbp-20h]
  char v52; // [rsp+50h] [rbp-10h]

  v1 = *((_QWORD *)a1 + 103);
  v2 = InProcessDeviceTypeRequestTable((struct tagPROCESS_HID_TABLE *)v1, 1u, 6u);
  v4 = *(_DWORD *)(v1 + 100);
  v5 = v2;
  if ( v2 )
  {
    v6 = v4 | 0x10;
    *(_DWORD *)(v1 + 100) = v6;
    v7 = -(*((_DWORD *)v2 + 5) & 1);
    if ( -__CFSHR__(v6, 7) != (_DWORD)v7 )
    {
      if ( (*((_DWORD *)v2 + 5) & 1) != 0 )
      {
        DomainSharedRecursive<>::DomainExclusiveRecursive<>::ObjectLockRecursive<SGLOCKgHidCountersLock<tagObjLock>>::ObjectLockRecursive<SGLOCKgHidCountersLock<tagObjLock>>(
          (__int64)v50,
          v7);
        UserSessionState = W32GetUserSessionState(v30, v29);
        ++*(_DWORD *)(UserSessionState + 16848);
      }
      else
      {
        DomainSharedRecursive<>::DomainExclusiveRecursive<>::ObjectLockRecursive<SGLOCKgHidCountersLock<tagObjLock>>::ObjectLockRecursive<SGLOCKgHidCountersLock<tagObjLock>>(
          (__int64)v50,
          v7);
        v47 = W32GetUserSessionState(v46, v45);
        --*(_DWORD *)(v47 + 16848);
      }
      if ( v52 && v51 )
        tagObjLock::UnLockExclusive(v51);
      v32 = (*((_DWORD *)v5 + 5) << 6) ^ (*(_DWORD *)(v1 + 100) ^ (*((_DWORD *)v5 + 5) << 6)) & 0xFFFFFFBF;
      *(_DWORD *)(v1 + 100) = v32;
      *(_DWORD *)(v1 + 100) = (*((_DWORD *)v5 + 5) << 6) ^ ((*((_DWORD *)v5 + 5) << 6) ^ v32) & 0xFFFFFF7F;
    }
    v48 = v1 + 72;
    v49 = *((_QWORD *)v5 + 4);
    HMAssignmentLock(&v48, 0LL);
  }
  else
  {
    v25 = v4 & 0xFFFFF9CF;
    *(_DWORD *)(v1 + 100) = v25;
    if ( (v25 & 0x40) != 0 )
    {
      DomainSharedRecursive<>::DomainExclusiveRecursive<>::ObjectLockRecursive<SGLOCKgHidCountersLock<tagObjLock>>::ObjectLockRecursive<SGLOCKgHidCountersLock<tagObjLock>>(
        (__int64)v50,
        v3);
      v41 = W32GetUserSessionState(v40, v39);
      --*(_DWORD *)(v41 + 16848);
      if ( v52 )
      {
        if ( v51 )
          tagObjLock::UnLockExclusive(v51);
      }
    }
    *(_DWORD *)(v1 + 100) &= 0xFFFFFF3F;
    HMAssignmentUnlock(v1 + 72);
  }
  v8 = InProcessDeviceTypeRequestTable((struct tagPROCESS_HID_TABLE *)v1, 1u, 2u);
  v10 = *(_DWORD *)(v1 + 100);
  v11 = v8;
  if ( v8 )
  {
    *(_DWORD *)(v1 + 112) = 0;
    v12 = v10 | 1;
    *(_DWORD *)(v1 + 100) = v12;
    v13 = -(*((_DWORD *)v8 + 5) & 1);
    v14 = (unsigned int)-__CFSHR__(v12, 3);
    if ( (_DWORD)v14 != (_DWORD)v13 )
    {
      if ( (*((_DWORD *)v8 + 5) & 1) != 0 )
      {
        DomainSharedRecursive<>::DomainExclusiveRecursive<>::ObjectLockRecursive<SGLOCKgHidCountersLock<tagObjLock>>::ObjectLockRecursive<SGLOCKgHidCountersLock<tagObjLock>>(
          (__int64)v50,
          v13);
        v44 = W32GetUserSessionState(v43, v42);
        ++*(_DWORD *)(v44 + 16852);
      }
      else
      {
        DomainSharedRecursive<>::DomainExclusiveRecursive<>::ObjectLockRecursive<SGLOCKgHidCountersLock<tagObjLock>>::ObjectLockRecursive<SGLOCKgHidCountersLock<tagObjLock>>(
          (__int64)v50,
          v13);
        v28 = W32GetUserSessionState(v27, v26);
        --*(_DWORD *)(v28 + 16852);
      }
      if ( v52 && v51 )
        tagObjLock::UnLockExclusive(v51);
      v13 = (4 * *((_DWORD *)v11 + 5)) ^ (*(_DWORD *)(v1 + 100) ^ (4 * *((_DWORD *)v11 + 5))) & 0xFFFFFFFB;
      *(_DWORD *)(v1 + 100) = v13;
      v14 = (4 * *((_DWORD *)v11 + 5)) ^ ((unsigned int)v13 ^ (4 * *((_DWORD *)v11 + 5))) & 0xFFFFFFF7;
      *(_DWORD *)(v1 + 100) = v14;
    }
    v15 = W32GetUserSessionState(v14, v13);
    v16 = ValidatePtiMouse(*(_QWORD *)(v15 + 18888));
    v17 = v16;
    if ( v16 && (unsigned int)HasHidTable(v16) && *(_QWORD *)(*(_QWORD *)(v17 + 464) + 824LL) == v1 )
    {
      v20 = W32GetUserSessionState(v19, v18);
      EditionUpdateRawMouseMode(*(_QWORD *)(v20 + 18888));
    }
    v48 = v1 + 64;
    v49 = *((_QWORD *)v11 + 4);
    HMAssignmentLock(&v48, 0LL);
  }
  else
  {
    v21 = (tagObjLock *)(v10 & 0xFFFFF6FC);
    *(_DWORD *)(v1 + 100) = (_DWORD)v21;
    if ( ((unsigned __int8)v21 & 4) != 0 )
    {
      DomainSharedRecursive<>::DomainExclusiveRecursive<>::ObjectLockRecursive<SGLOCKgHidCountersLock<tagObjLock>>::ObjectLockRecursive<SGLOCKgHidCountersLock<tagObjLock>>(
        (__int64)v50,
        v9);
      v38 = W32GetUserSessionState(v37, v36);
      --*(_DWORD *)(v38 + 16852);
      if ( v52 )
      {
        v21 = v51;
        if ( v51 )
          tagObjLock::UnLockExclusive(v51);
      }
    }
    *(_DWORD *)(v1 + 100) &= 0xFFFFFFF3;
    v22 = W32GetUserSessionState(v21, v9);
    v23 = ValidatePtiMouse(*(_QWORD *)(v22 + 18888));
    v24 = v23;
    if ( v23 && (unsigned int)HasHidTable(v23) && *(_QWORD *)(*(_QWORD *)(v24 + 464) + 824LL) == v1 )
    {
      v35 = W32GetUserSessionState(v34, v33);
      EditionUpdateRawMouseMode(*(_QWORD *)(v35 + 18888));
    }
    HMAssignmentUnlock(v1 + 64);
  }
}
