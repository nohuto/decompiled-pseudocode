/*
 * XREFs of ?DerefPageOnlyRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@H@Z @ 0x14011CE2C
 * Callers:
 *     FreeHidProcessRequest @ 0x14011EB54 (FreeHidProcessRequest.c)
 *     ?RemoveProcRequest@@YAXPEAUtagPROCESSINFO@@PEAUtagPROCESS_HID_REQUEST@@KH@Z @ 0x140217EC8 (-RemoveProcRequest@@YAXPEAUtagPROCESSINFO@@PEAUtagPROCESS_HID_REQUEST@@KH@Z.c)
 * Callees:
 *     ?FreeHidPageOnlyRequest@@YAXPEAUtagHID_PAGEONLY_REQUEST@@@Z @ 0x14011AE7C (-FreeHidPageOnlyRequest@@YAXPEAUtagHID_PAGEONLY_REQUEST@@@Z.c)
 *     ?SetHidPOCountToTLCInfo@@YAXGKH@Z @ 0x14011CEF4 (-SetHidPOCountToTLCInfo@@YAXGKH@Z.c)
 *     ??0?$ObjectLockRecursive@V?$SGLOCKgHidCountersLock@UtagObjLock@@@@@?$DomainExclusiveRecursive@$$V@?$DomainSharedRecursive@$$V@@QEAA@AEAV?$SGLOCKgHidCountersLock@UtagObjLock@@@@@Z @ 0x14011CFE8 (--0-$ObjectLockRecursive@V-$SGLOCKgHidCountersLock@UtagObjLock@@@@@-$DomainExclusiveRecursive@$$.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

void __fastcall DerefPageOnlyRequest(struct tagPROCESS_HID_REQUEST *a1, struct tagPROCESS_HID_TABLE *a2, int a3)
{
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 UserSessionState; // rax
  _BYTE v11[16]; // [rsp+20h] [rbp-38h] BYREF
  tagObjLock *v12; // [rsp+30h] [rbp-28h]
  char v13; // [rsp+40h] [rbp-18h]

  SetHidPOCountToTLCInfo(*((_WORD *)a1 + 8), --*(_DWORD *)(*((_QWORD *)a1 + 3) + 20LL), a3);
  v6 = *((_QWORD *)a1 + 3);
  if ( !*(_DWORD *)(v6 + 20) && a3 )
  {
    FreeHidPageOnlyRequest((struct tagHID_PAGEONLY_REQUEST ***)v6);
    *((_QWORD *)a1 + 3) = 0LL;
  }
  v7 = *((_DWORD *)a1 + 5);
  if ( (v7 & 1) != 0 )
  {
    *((_DWORD *)a1 + 5) = v7 & 0xFFFFFFFE;
    --*((_DWORD *)a2 + 20);
    DomainSharedRecursive<>::DomainExclusiveRecursive<>::ObjectLockRecursive<SGLOCKgHidCountersLock<tagObjLock>>::ObjectLockRecursive<SGLOCKgHidCountersLock<tagObjLock>>(v11);
    UserSessionState = W32GetUserSessionState(v9, v8);
    --*(_DWORD *)(UserSessionState + 16856);
    if ( v13 )
    {
      if ( v12 )
        tagObjLock::UnLockExclusive(v12);
    }
  }
}
