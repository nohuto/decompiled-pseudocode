/*
 * XREFs of NtUserRealInternalGetMessage @ 0x140115020
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     xxxRealInternalGetMessage @ 0x14011559C (xxxRealInternalGetMessage.c)
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall NtUserRealInternalGetMessage(
        _OWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        int a6)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  int Message; // ebx
  __int128 v10; // xmm1
  __int128 v11; // xmm2
  ULONG64 v12; // rcx
  unsigned __int64 v14; // [rsp+20h] [rbp-68h]
  __int64 v15[2]; // [rsp+48h] [rbp-40h] BYREF
  __int128 v16; // [rsp+58h] [rbp-30h]
  __int128 v17; // [rsp+68h] [rbp-20h]

  *(_OWORD *)v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  EnterCrit(0LL, 0LL);
  if ( (a5 & 0xE300FFFC) != 0 )
  {
    UserSetLastError(1004);
    Message = 0;
  }
  else
  {
    W32GetCurrentThreadNonPaged(v8, v7);
    LODWORD(v14) = a5;
    Message = xxxRealInternalGetMessage((__int64)v15, v14, a6);
    HIDWORD(v15[1]) = 0;
    HIDWORD(v17) = 0;
    v10 = v16;
    v11 = v17;
    v12 = MmUserProbeAddress;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (_OWORD *)MmUserProbeAddress;
    *a1 = *(_OWORD *)v15;
    a1[1] = v10;
    a1[2] = v11;
  }
  UserSessionSwitchLeaveCrit(v12);
  return Message;
}
