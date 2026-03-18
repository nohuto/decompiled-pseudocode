/*
 * XREFs of SendGestureMessage @ 0x14021FF48
 * Callers:
 *     NtUserfnGESTURE @ 0x14021FE50 (NtUserfnGESTURE.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     _FreeGestureInfo @ 0x1402694A0 (_FreeGestureInfo.c)
 *     AllocGestureInfo @ 0x140269ACC (AllocGestureInfo.c)
 *     ValidateGestureInfo @ 0x14026EF64 (ValidateGestureInfo.c)
 *     RtlCopyFromUser @ 0x140270948 (RtlCopyFromUser.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SendGestureMessage(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        _QWORD *a7)
{
  int v8; // ebx
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 UserSessionState; // rax
  __int128 v20; // [rsp+48h] [rbp-80h] BYREF
  __int128 v21; // [rsp+58h] [rbp-70h]
  __int128 v22; // [rsp+68h] [rbp-60h]
  SIZE_T Length; // [rsp+78h] [rbp-50h]
  __int128 v24; // [rsp+80h] [rbp-48h] BYREF
  __int128 v25; // [rsp+90h] [rbp-38h]
  __int128 v26; // [rsp+A0h] [rbp-28h]
  SIZE_T v27; // [rsp+B0h] [rbp-18h]

  v8 = a3;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v11 = 0LL;
  if ( (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL
    || !a4
    || (unsigned __int64)(a3 - 1) > 0xFFFFFFFE
    || (unsigned int)a3 < 0x38 )
  {
    UserSetLastError(87);
    return 0LL;
  }
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  Length = 0LL;
  RtlCopyFromUser(&v20, (void *)a4, 0x38uLL);
  v24 = v20;
  v25 = v21;
  v26 = v22;
  v27 = Length;
  if ( (_DWORD)Length != v8 - 56 )
  {
    UserSetLastError(87);
    return 0LL;
  }
  if ( (_DWORD)Length )
  {
    v11 = a4 + 56;
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v13, v12);
    ProbeForRead((volatile void *)(a4 + 56), (unsigned int)Length, CurrentProcessWow64Process != 0 ? 1 : 4);
  }
  if ( !(unsigned int)ValidateGestureInfo(&v24) )
    return 0LL;
  v18 = AllocGestureInfo(a1, 0LL, &v24, v11);
  if ( !v18 )
    return 0LL;
  UserSessionState = W32GetUserSessionState(v17, v16);
  *a7 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, __int64))(UserSessionState
                                                                             + 8LL * (((_BYTE)a6 + 6) & 0x1F)
                                                                             + 70920))(
          a1,
          a2,
          DWORD2(v24),
          v18,
          a5);
  if ( a6 == 683 || a6 == 684 || a6 == 692 )
    FreeGestureInfo(v18, 1LL);
  return 1LL;
}
