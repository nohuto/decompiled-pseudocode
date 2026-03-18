/*
 * XREFs of NtUserCallMsgFilter @ 0x1400207A0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     xxxCallMsgFilter @ 0x14001FA20 (xxxCallMsgFilter.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028C73C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserCallMsgFilter(_OWORD *a1, unsigned int a2)
{
  _BYTE *v4; // rdx
  __int64 v5; // rdi
  __int128 v7; // [rsp+38h] [rbp-50h] BYREF
  __int128 v8; // [rsp+48h] [rbp-40h]
  __int128 v9; // [rsp+58h] [rbp-30h]
  __int64 v11; // [rsp+A0h] [rbp+18h] BYREF

  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  EnterLeaveCritShared::EnterLeaveCritShared(&v11, 1LL);
  v4 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v4 = (_BYTE *)MmUserProbeAddress;
  *v4 = *v4;
  v4[47] = v4[47];
  v7 = *a1;
  v8 = a1[1];
  v9 = a1[2];
  if ( (DWORD2(v7) & 0xFFFE0000) != 0 )
  {
    UserSetLastError(87);
    UserSessionSwitchLeaveCrit();
    return 0LL;
  }
  else
  {
    v5 = (int)xxxCallMsgFilter((__int64)&v7, a2);
    *a1 = v7;
    a1[1] = v8;
    a1[2] = v9;
    UserSessionSwitchLeaveCrit();
    return v5;
  }
}
