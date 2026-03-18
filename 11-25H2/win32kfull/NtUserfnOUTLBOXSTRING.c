/*
 * XREFs of NtUserfnOUTLBOXSTRING @ 0x1401A9470
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     NtUserfnGETDBCSTEXTLENGTHS @ 0x1401A9640 (NtUserfnGETDBCSTEXTLENGTHS.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtUserfnOUTLBOXSTRING(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        volatile void *a4,
        __int64 a5,
        int a6,
        int a7)
{
  __int64 v10; // rax
  __int64 v11; // rbx
  unsigned int v12; // r8d
  int v13; // ecx
  __int64 v14; // rcx
  unsigned int v15; // edx
  unsigned int v16; // r10d
  __int64 v17; // rdx
  SIZE_T v18; // rdx
  unsigned int v19; // eax
  __int64 UserSessionState; // rax
  int v21; // eax
  __int128 v23; // [rsp+48h] [rbp-40h] BYREF
  unsigned int v24; // [rsp+98h] [rbp+10h]

  v24 = a2;
  v23 = 0LL;
  PtiCurrent(a1, a2);
  if ( (unsigned __int64)(a1 - 2) > 0xFFFFFFFFFFFFFFFBuLL )
    return -1LL;
  v10 = NtUserfnGETDBCSTEXTLENGTHS(a1, 394, a3, (_DWORD)a4, a5, a6, a7);
  v11 = -1LL;
  if ( v10 != -1 )
  {
    v12 = v10 + 1;
    v13 = (a7 << 31) | DWORD1(v23) & 0x7FFFFFFF;
    DWORD1(v23) = v13;
    if ( a7 )
    {
      v14 = v12 & 0x7FFFFFFF | v13 & 0x80000000;
      DWORD1(v23) = v14;
      v15 = v14;
      v16 = v14;
    }
    else
    {
      v19 = v13 ^ (v13 ^ (2 * v12)) & 0x7FFFFFFF;
      v14 = v19;
      v15 = v19;
      DWORD1(v23) = v19;
      v16 = v19;
    }
    v17 = v15 & 0x7FFFFFFF;
    if ( ((unsigned int)v14 & 0x7FFFFFFF) < v12 )
    {
      UserSetLastError(0);
      return v11;
    }
    LODWORD(v23) = 0;
    *((_QWORD *)&v23 + 1) = a4;
    if ( (_DWORD)v17 )
    {
      v18 = v14 & 0x7FFFFFFF;
    }
    else
    {
      if ( !a4 )
        goto LABEL_13;
      v18 = ((unsigned __int64)~v16 >> 31) + 1;
    }
    ProbeForWrite(a4, v18, ((int)v14 >> 31) + 2);
LABEL_13:
    UserSessionState = W32GetUserSessionState(v14, v17);
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int128 *, __int64))(UserSessionState
                                                                                   + 8LL * (((_BYTE)a6 + 6) & 0x1F)
                                                                                   + 70920))(
            a1,
            v24,
            a3,
            &v23,
            a5);
    v21 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 28LL);
    if ( (v21 & 0x40) == 0 && (v21 & 0x30) != 0 )
      return a7 != 0 ? 8LL : 4LL;
  }
  return v11;
}
