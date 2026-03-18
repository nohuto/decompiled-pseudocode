/*
 * XREFs of NtUserGetMessage @ 0x140115120
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     xxxInternalGetMessage @ 0x1401153B0 (xxxInternalGetMessage.c)
 */

__int64 __fastcall NtUserGetMessage(_OWORD *a1, __int64 a2, int a3, int a4)
{
  int Message; // ebx
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  ULONG64 v10; // rcx
  int v12; // [rsp+20h] [rbp-68h]
  __int128 v13; // [rsp+48h] [rbp-40h] BYREF
  __int128 v14; // [rsp+58h] [rbp-30h]
  __int128 v15; // [rsp+68h] [rbp-20h]

  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  EnterCrit(0LL, 0LL);
  if ( ((a4 | a3) & 0xFFFE0000) != 0 )
  {
    Message = 0;
    UserSetLastError(87);
  }
  else
  {
    v12 = 1;
    Message = xxxInternalGetMessage((__int64)&v13, v12, 1);
    HIDWORD(v13) = 0;
    HIDWORD(v15) = 0;
    v8 = v14;
    v9 = v15;
    v10 = MmUserProbeAddress;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (_OWORD *)MmUserProbeAddress;
    *a1 = v13;
    a1[1] = v8;
    a1[2] = v9;
  }
  UserSessionSwitchLeaveCrit(v10);
  return Message;
}
