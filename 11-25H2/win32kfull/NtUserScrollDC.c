/*
 * XREFs of NtUserScrollDC @ 0x140156860
 * Callers:
 *     <none>
 * Callees:
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     _ScrollDC @ 0x1401569D0 (_ScrollDC.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028C73C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserScrollDC(HDC a1, int a2, int a3, struct tagRECT *a4, ULONG64 a5, HRGN a6, ULONG64 a7)
{
  struct tagRECT *v11; // rdi
  _OWORD *v12; // rsi
  ULONG64 v13; // rcx
  int v14; // ebx
  _BYTE v16[24]; // [rsp+68h] [rbp-90h] BYREF
  struct tagRECT v17; // [rsp+80h] [rbp-78h] BYREF
  struct tagRECT v18; // [rsp+90h] [rbp-68h] BYREF
  __int128 v19; // [rsp+A0h] [rbp-58h] BYREF

  v11 = (struct tagRECT *)a5;
  v12 = (_OWORD *)a7;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  EnterLeaveCritShared::EnterLeaveCritShared(v16, 1LL);
  if ( a4 )
  {
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      a4 = (struct tagRECT *)MmUserProbeAddress;
    v17 = *a4;
    a4 = &v17;
  }
  if ( a5 )
  {
    if ( a5 >= MmUserProbeAddress )
      v11 = (struct tagRECT *)MmUserProbeAddress;
    v18 = *v11;
    v11 = &v18;
  }
  v14 = ScrollDC(a1, a2, a3, a4, v11, a6, (struct tagRECT *)((unsigned __int64)&v19 & -(__int64)(a7 != 0)));
  if ( a7 )
  {
    v13 = MmUserProbeAddress;
    if ( a7 >= MmUserProbeAddress )
      v12 = (_OWORD *)MmUserProbeAddress;
    *v12 = v19;
  }
  UserSessionSwitchLeaveCrit(v13);
  return v14;
}
