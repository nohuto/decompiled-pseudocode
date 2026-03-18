/*
 * XREFs of NtUserGetInputLocaleInfo @ 0x1401701F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     SetLastNtError @ 0x14009DA54 (SetLastNtError.c)
 *     ?RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x14011DBB8 (-RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     HKLtoPKLq @ 0x140136170 (HKLtoPKLq.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14019B238 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140242F00 (RtlCopyVolatileMemory.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall NtUserGetInputLocaleInfo(__int64 a1, ULONG64 a2)
{
  int v3; // ebx
  __int64 v4; // r8
  __int64 v5; // rdx
  _DWORD *v6; // rdx
  void *v7; // rcx
  __int64 v9; // [rsp+38h] [rbp-80h] BYREF
  ULONG64 v10; // [rsp+40h] [rbp-78h]
  _QWORD Src[8]; // [rsp+60h] [rbp-58h] BYREF

  v10 = a2;
  memset(Src, 0, sizeof(Src));
  EnterLeaveCritShared::EnterLeaveCritShared(&v9, 1LL);
  v3 = 0;
  if ( a1 )
    v4 = HKLtoPKLq(v9, a1);
  else
    v4 = *(_QWORD *)(v9 + 480);
  if ( v4 )
  {
    v6 = (_DWORD *)v10;
    if ( v10 >= MmUserProbeAddress )
      v6 = (_DWORD *)MmUserProbeAddress;
    if ( *v6 == 64 )
    {
      LODWORD(Src[0]) = 64;
      Src[1] = *(_QWORD *)(v4 + 40);
      LODWORD(Src[2]) = *(_DWORD *)(v4 + 112);
      HIDWORD(Src[2]) = *(unsigned __int16 *)(v4 + 72);
      Src[3] = *(_QWORD *)(v4 + 64);
      RtlStringCchCopyNW((char *)&Src[4], 16LL, (char *)(v4 + 124), 0x10uLL);
      HIDWORD(Src[0]) = 0;
      v7 = (void *)v10;
      if ( v10 >= MmUserProbeAddress )
        v7 = (void *)MmUserProbeAddress;
      RtlCopyVolatileMemory(v7, Src, 0x40uLL);
      v3 = 1;
    }
    else
    {
      UserSetLastError(87);
    }
  }
  else
  {
    UserSetLastError(6);
  }
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v5);
  return v3;
}
