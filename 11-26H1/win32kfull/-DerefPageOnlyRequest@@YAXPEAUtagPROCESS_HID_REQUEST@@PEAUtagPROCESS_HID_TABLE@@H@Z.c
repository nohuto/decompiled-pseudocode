/*
 * XREFs of ?DerefPageOnlyRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@H@Z @ 0x1401729BC
 * Callers:
 *     FreeHidProcessRequest @ 0x140171304 (FreeHidProcessRequest.c)
 *     ?RemoveProcRequest@@YAXPEAUtagPROCESSINFO@@PEAUtagPROCESS_HID_REQUEST@@KH@Z @ 0x1401739F4 (-RemoveProcRequest@@YAXPEAUtagPROCESSINFO@@PEAUtagPROCESS_HID_REQUEST@@KH@Z.c)
 * Callees:
 *     ?FreeHidPageOnlyRequest@@YAXPEAUtagHID_PAGEONLY_REQUEST@@@Z @ 0x14009A620 (-FreeHidPageOnlyRequest@@YAXPEAUtagHID_PAGEONLY_REQUEST@@@Z.c)
 *     ??0?$ObjectLockRecursive@V?$SGLOCKgHidCountersLock@UtagObjLock@@@@@?$DomainExclusiveRecursive@$$V@?$DomainSharedRecursive@$$V@@QEAA@AEAV?$SGLOCKgHidCountersLock@UtagObjLock@@@@@Z @ 0x140171FE8 (--0-$ObjectLockRecursive@V-$SGLOCKgHidCountersLock@UtagObjLock@@@@@-$DomainExclusiveRecursive@$$.c)
 *     ?SetHidPOCountToTLCInfo@@YAXGKH@Z @ 0x140172A84 (-SetHidPOCountToTLCInfo@@YAXGKH@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall DerefPageOnlyRequest(struct tagPROCESS_HID_REQUEST *a1, struct tagPROCESS_HID_TABLE *a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 UserSessionState; // rax
  _BYTE v12[16]; // [rsp+20h] [rbp-38h] BYREF
  tagObjLock *v13; // [rsp+30h] [rbp-28h]
  char v14; // [rsp+40h] [rbp-18h]

  SetHidPOCountToTLCInfo(*((_WORD *)a1 + 8), --*(_DWORD *)(*((_QWORD *)a1 + 3) + 20LL), a3);
  v7 = *((_QWORD *)a1 + 3);
  if ( !*(_DWORD *)(v7 + 20) && a3 )
  {
    FreeHidPageOnlyRequest((struct tagHID_PAGEONLY_REQUEST ***)v7);
    *((_QWORD *)a1 + 3) = 0LL;
  }
  v8 = *((_DWORD *)a1 + 5);
  if ( (v8 & 1) != 0 )
  {
    *((_DWORD *)a1 + 5) = v8 & 0xFFFFFFFE;
    --*((_DWORD *)a2 + 20);
    DomainSharedRecursive<>::DomainExclusiveRecursive<>::ObjectLockRecursive<SGLOCKgHidCountersLock<tagObjLock>>::ObjectLockRecursive<SGLOCKgHidCountersLock<tagObjLock>>(
      (__int64)v12,
      v6);
    UserSessionState = W32GetUserSessionState(v10, v9);
    --*(_DWORD *)(UserSessionState + 16848);
    if ( v14 )
    {
      if ( v13 )
        tagObjLock::UnLockExclusive(v13);
    }
  }
}
