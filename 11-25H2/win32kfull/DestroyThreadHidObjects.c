/*
 * XREFs of DestroyThreadHidObjects @ 0x14011C130
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ObjectLockRecursive@V?$SGLOCKgHidCountersLock@UtagObjLock@@@@@?$DomainExclusiveRecursive@$$V@?$DomainSharedRecursive@$$V@@QEAA@AEAV?$SGLOCKgHidCountersLock@UtagObjLock@@@@@Z @ 0x14011CFE8 (--0-$ObjectLockRecursive@V-$SGLOCKgHidCountersLock@UtagObjLock@@@@@-$DomainExclusiveRecursive@$$.c)
 *     ?SearchProcessHidRequest@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESSINFO@@GGPEAK@Z @ 0x14011EAD8 (-SearchProcessHidRequest@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESSINFO@@GGPEAK@Z.c)
 *     FreeHidProcessRequest @ 0x14011EB54 (FreeHidProcessRequest.c)
 *     ValidatePtiMouse @ 0x14011F4D0 (ValidatePtiMouse.c)
 *     EditionUpdateRawMouseMode @ 0x140121E10 (EditionUpdateRawMouseMode.c)
 *     ?HasRawKeyboardPerThreadRegistration@@YAHPEBUtagPROCESSINFO@@@Z @ 0x140274598 (-HasRawKeyboardPerThreadRegistration@@YAHPEBUtagPROCESSINFO@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall DestroyThreadHidObjects(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 result; // rax
  char v6; // dl
  struct tagPROCESS_HID_REQUEST *v7; // rsi
  struct tagPROCESS_HID_REQUEST *v8; // rcx
  struct tagPROCESS_HID_REQUEST *v9; // rsi
  struct tagPROCESS_HID_REQUEST *v10; // rsi
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 UserSessionState; // rax
  __int64 v15; // rdx
  tagObjLock *v16; // rcx
  unsigned int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  struct tagPROCESS_HID_REQUEST *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  const struct tagPROCESSINFO *v26; // rcx
  struct tagPROCESSINFO *v27; // rcx
  struct tagPROCESS_HID_REQUEST *v28; // rcx
  unsigned int v29; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v30[16]; // [rsp+28h] [rbp-50h] BYREF
  tagObjLock *v31; // [rsp+38h] [rbp-40h]
  char v32; // [rsp+48h] [rbp-30h]

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 464) + 824LL);
  v3 = *(_QWORD *)(v2 + 72);
  if ( v3 )
  {
    if ( *(_QWORD *)(v3 + 16) == a1 )
    {
      HMAssignmentUnlock(v2 + 72);
      v11 = *(_DWORD *)(v2 + 100) & 0xFFFFFFCF;
      *(_DWORD *)(v2 + 100) = v11;
      if ( (v11 & 0x40) != 0 )
      {
        DomainSharedRecursive<>::DomainExclusiveRecursive<>::ObjectLockRecursive<SGLOCKgHidCountersLock<tagObjLock>>::ObjectLockRecursive<SGLOCKgHidCountersLock<tagObjLock>>(v30);
        UserSessionState = W32GetUserSessionState(v13, v12);
        --*(_DWORD *)(UserSessionState + 16848);
        if ( v32 && v31 )
          tagObjLock::UnLockExclusive(v31);
        *(_DWORD *)(v2 + 100) &= ~0x40u;
      }
    }
  }
  v4 = *(_QWORD *)(v2 + 64);
  if ( v4 && *(_QWORD *)(v4 + 16) == a1 )
  {
    HMAssignmentUnlock(v2 + 64);
    v17 = *(_DWORD *)(v2 + 100) & 0xFFFFF7FC;
    *(_DWORD *)(v2 + 100) = v17;
    if ( (v17 & 4) != 0 )
    {
      DomainSharedRecursive<>::DomainExclusiveRecursive<>::ObjectLockRecursive<SGLOCKgHidCountersLock<tagObjLock>>::ObjectLockRecursive<SGLOCKgHidCountersLock<tagObjLock>>(v30);
      v25 = W32GetUserSessionState(v24, v23);
      --*(_DWORD *)(v25 + 16852);
      if ( v32 )
      {
        v16 = v31;
        if ( v31 )
          tagObjLock::UnLockExclusive(v31);
      }
      *(_DWORD *)(v2 + 100) &= ~4u;
    }
    v18 = W32GetUserSessionState(v16, v15);
    if ( ValidatePtiMouse(*(_QWORD *)(v18 + 18888)) == a1 )
    {
      v21 = W32GetUserSessionState(v20, v19);
      EditionUpdateRawMouseMode(*(_QWORD *)(v21 + 18888));
    }
  }
  *(_QWORD *)(v2 + 88) = 0LL;
  *(_DWORD *)(v2 + 96) = 0;
  result = *(_QWORD *)(a1 + 1360);
  if ( (result & 0x200000) != 0 )
  {
    v26 = *(const struct tagPROCESSINFO **)(a1 + 464);
    *(_QWORD *)(a1 + 1360) = result & 0xFFFFFFFFFFDFFFFFuLL;
    result = HasRawKeyboardPerThreadRegistration(v26);
    if ( !(_DWORD)result )
    {
      v29 = 0;
      result = (__int64)SearchProcessHidRequest(v27, 1u, 6u, &v29);
      if ( result )
      {
        result = FreeHidProcessRequest((struct tagPROCESS_HID_REQUEST *)result);
        *(_DWORD *)(v2 + 100) &= 0xFFFFFFCF;
      }
    }
  }
  v6 = 0;
  v7 = *(struct tagPROCESS_HID_REQUEST **)(v2 + 16);
  while ( v7 != (struct tagPROCESS_HID_REQUEST *)(v2 + 16) )
  {
    v8 = v7;
    v7 = *(struct tagPROCESS_HID_REQUEST **)v7;
    result = *((_QWORD *)v8 + 4);
    if ( result )
    {
      if ( *(_QWORD *)(result + 16) == a1 )
      {
        result = FreeHidProcessRequest(v8);
        v6 = 1;
      }
    }
  }
  v9 = *(struct tagPROCESS_HID_REQUEST **)(v2 + 32);
  while ( v9 != (struct tagPROCESS_HID_REQUEST *)(v2 + 32) )
  {
    v22 = v9;
    v9 = *(struct tagPROCESS_HID_REQUEST **)v9;
    result = *((_QWORD *)v22 + 4);
    if ( result && *(_QWORD *)(result + 16) == a1 )
    {
      result = FreeHidProcessRequest(v22);
      v6 = 1;
    }
  }
  v10 = *(struct tagPROCESS_HID_REQUEST **)(v2 + 48);
  while ( v10 != (struct tagPROCESS_HID_REQUEST *)(v2 + 48) )
  {
    v28 = v10;
    v10 = *(struct tagPROCESS_HID_REQUEST **)v10;
    result = *((_QWORD *)v28 + 4);
    if ( result && *(_QWORD *)(result + 16) == a1 )
    {
      result = FreeHidProcessRequest(v28);
      v6 = 1;
    }
  }
  if ( v6 )
  {
    result = *(_QWORD *)(a1 + 464);
    *(_QWORD *)(result + 808) |= 0x8000000uLL;
  }
  return result;
}
