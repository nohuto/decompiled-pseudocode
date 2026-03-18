/*
 * XREFs of NtUserfnOUTSTRING @ 0x14018B480
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtUserfnOUTSTRING(__int64 a1, __int64 a2, SIZE_T a3, _BYTE *a4, __int64 a5, char a6, int a7)
{
  unsigned int v9; // ebx
  __int64 v11; // rcx
  unsigned int v12; // eax
  SIZE_T v13; // rdx
  __int64 v14; // rbx
  __int64 UserSessionState; // rax
  int v17; // [rsp+48h] [rbp-20h] BYREF
  unsigned int v18; // [rsp+4Ch] [rbp-1Ch]
  _BYTE *v19; // [rsp+50h] [rbp-18h]

  v9 = a2;
  PtiCurrent(a1, a2);
  v11 = (a7 << 31) ^ ((unsigned int)a3 ^ (a7 << 31)) & 0x7FFFFFFF;
  v18 = (a7 << 31) ^ (a3 ^ (a7 << 31)) & 0x7FFFFFFF;
  v12 = v18;
  if ( !a7 )
  {
    v12 = v11 ^ (v11 ^ (2 * v11)) & 0x7FFFFFFF;
    v11 = v12;
    v18 = v12;
  }
  v13 = v11 & 0x7FFFFFFF;
  if ( v13 < a3 )
  {
    v14 = 0LL;
    UserSetLastError(0);
    return v14;
  }
  v17 = 0;
  v19 = a4;
  if ( (v11 & 0x7FFFFFFF) == 0 )
  {
    if ( !a4 )
      goto LABEL_9;
    v13 = ((unsigned __int64)~v12 >> 31) + 1;
  }
  ProbeForWrite(a4, v13, ((int)v11 >> 31) + 2);
LABEL_9:
  UserSessionState = W32GetUserSessionState(v11, v13);
  v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, SIZE_T, int *, __int64))(UserSessionState
                                                                           + 8LL * ((a6 + 6) & 0x1F)
                                                                           + 70920))(
          a1,
          v9,
          a3,
          &v17,
          a5);
  if ( !v14 && a3 )
  {
    if ( a7 )
      *a4 = 0;
    else
      *(_WORD *)a4 = 0;
  }
  return v14;
}
