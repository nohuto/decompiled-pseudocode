/*
 * XREFs of NtUserGetInputLocaleInfo @ 0x140164250
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14003D7B0 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     SetLastNtError @ 0x140087ACC (SetLastNtError.c)
 *     HKLtoPKLq @ 0x1401643C0 (HKLtoPKLq.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 *     RtlCopyToUser @ 0x1402D2054 (RtlCopyToUser.c)
 *     RtlReadULongFromUser @ 0x1402D21A0 (RtlReadULongFromUser.c)
 */

__int64 __fastcall NtUserGetInputLocaleInfo(__int64 a1, void *a2)
{
  __int64 v3; // rdx
  int v4; // ebx
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  _WORD *v11; // rcx
  __int64 v12; // rdi
  __int16 v13; // ax
  _WORD *v14; // rax
  __int64 v16; // [rsp+40h] [rbp-68h] BYREF
  void *v17; // [rsp+48h] [rbp-60h]
  _QWORD Src[8]; // [rsp+50h] [rbp-58h] BYREF

  v17 = a2;
  memset(Src, 0, sizeof(Src));
  EnterLeaveCritShared::EnterLeaveCritShared(&v16);
  v4 = 0;
  if ( a1 )
    v5 = HKLtoPKLq(v16, a1);
  else
    v5 = *(_QWORD *)(v16 + 472);
  if ( v5 )
  {
    if ( (unsigned int)RtlReadULongFromUser(v17, v3) == 64 )
    {
      LODWORD(Src[0]) = 64;
      Src[1] = *(_QWORD *)(v5 + 40);
      LODWORD(Src[2]) = *(_DWORD *)(v5 + 112);
      HIDWORD(Src[2]) = *(unsigned __int16 *)(v5 + 72);
      Src[3] = *(_QWORD *)(v5 + 64);
      v10 = 16LL;
      v11 = &Src[4];
      v12 = v5 - (_QWORD)&Src[4];
      do
      {
        v13 = *(_WORD *)((char *)v11 + v12 + 124);
        if ( !v13 )
          break;
        *v11++ = v13;
        --v10;
      }
      while ( v10 );
      v14 = v11 - 1;
      if ( v10 )
        v14 = v11;
      *v14 = 0;
      HIDWORD(Src[0]) = 0;
      RtlCopyToUser(v17, Src, 0x40uLL);
      v4 = 1;
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
  UserSessionSwitchLeaveCritWithNonPaged(v7, v6, v8, v9);
  return v4;
}
