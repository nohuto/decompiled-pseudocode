/*
 * XREFs of ?DerefIncludeRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@HH@Z @ 0x140171D60
 * Callers:
 *     FreeHidProcessRequest @ 0x140171304 (FreeHidProcessRequest.c)
 *     ?RemoveProcRequest@@YAXPEAUtagPROCESSINFO@@PEAUtagPROCESS_HID_REQUEST@@KH@Z @ 0x1401739F4 (-RemoveProcRequest@@YAXPEAUtagPROCESSINFO@@PEAUtagPROCESS_HID_REQUEST@@KH@Z.c)
 * Callees:
 *     FreeHidTLCInfo @ 0x1401703CC (FreeHidTLCInfo.c)
 *     ??0?$ObjectLockRecursive@V?$SGLOCKgHidCountersLock@UtagObjLock@@@@@?$DomainExclusiveRecursive@$$V@?$DomainSharedRecursive@$$V@@QEAA@AEAV?$SGLOCKgHidCountersLock@UtagObjLock@@@@@Z @ 0x140171FE8 (--0-$ObjectLockRecursive@V-$SGLOCKgHidCountersLock@UtagObjLock@@@@@-$DomainExclusiveRecursive@$$.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall DerefIncludeRequest(struct tagPROCESS_HID_REQUEST *a1, struct tagPROCESS_HID_TABLE *a2, int a3, int a4)
{
  __int64 UserSessionState; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  int v12; // eax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  _BYTE v18[16]; // [rsp+28h] [rbp-50h] BYREF
  tagObjLock *v19; // [rsp+38h] [rbp-40h]
  char v20; // [rsp+48h] [rbp-30h]

  if ( a3 )
  {
    v13 = *((_DWORD *)a2 + 25);
    if ( (v13 & 0x100) != 0 && *((_WORD *)a1 + 8) == 1 && *((_WORD *)a1 + 9) == 2 )
    {
      v13 &= ~0x100u;
      *((_DWORD *)a2 + 25) = v13;
    }
    if ( (v13 & 0x800) != 0 && *((_WORD *)a1 + 8) == 1 && *((_WORD *)a1 + 9) == 2 )
    {
      v13 &= ~0x800u;
      *((_DWORD *)a2 + 25) = v13;
    }
    if ( (v13 & 0x200) != 0 && *((_WORD *)a1 + 8) == 1 && *((_WORD *)a1 + 9) == 6 )
    {
      v13 &= ~0x200u;
      *((_DWORD *)a2 + 25) = v13;
    }
    if ( (v13 & 0x400) != 0 && *((_WORD *)a1 + 8) == 1 && *((_WORD *)a1 + 9) == 6 )
    {
      v13 &= ~0x400u;
      *((_DWORD *)a2 + 25) = v13;
    }
    if ( (v13 & 0x1000) != 0 && *((_WORD *)a1 + 8) == 1 && *((_WORD *)a1 + 9) == 6 )
      *((_DWORD *)a2 + 25) = v13 & 0xFFFFEFFF;
  }
  else
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    v9 = 0LL;
    if ( *(struct _KTHREAD **)(UserSessionState + 112) != KeGetCurrentThread() )
    {
      v9 = UserSessionState + 104;
      RIMLockExclusive(UserSessionState + 104);
    }
    v10 = *((_QWORD *)a1 + 3);
    if ( (*(_DWORD *)(v10 + 24))-- == 1 )
    {
      if ( a4 )
      {
        v17 = *((_QWORD *)a1 + 3);
        if ( !(*(_DWORD *)(v17 + 20) | *(_DWORD *)(v17 + 24) | *(_DWORD *)(v17 + 32) | *(_DWORD *)(v17 + 36)) )
          FreeHidTLCInfo(
            (_QWORD *)v17,
            *(_DWORD *)(v17 + 20) | *(_DWORD *)(v17 + 24) | (unsigned int)(*(_DWORD *)(v17 + 32) | *(_DWORD *)(v17 + 36)));
      }
    }
    if ( v9 )
      RIMUnlockExclusive(v9);
  }
  v12 = *((_DWORD *)a1 + 5);
  if ( (v12 & 1) != 0 )
  {
    *((_DWORD *)a1 + 5) = v12 & 0xFFFFFFFE;
    if ( !a3 )
    {
      --*((_DWORD *)a2 + 20);
      DomainSharedRecursive<>::DomainExclusiveRecursive<>::ObjectLockRecursive<SGLOCKgHidCountersLock<tagObjLock>>::ObjectLockRecursive<SGLOCKgHidCountersLock<tagObjLock>>(v18);
      v16 = W32GetUserSessionState(v15, v14);
      --*(_DWORD *)(v16 + 16848);
      if ( v20 )
      {
        if ( v19 )
          tagObjLock::UnLockExclusive(v19);
      }
    }
  }
}
