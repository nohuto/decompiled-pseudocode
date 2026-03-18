/*
 * XREFs of ?CreateNotify@@YAPEAUtagNOTIFY@@PEAUtagEVENTHOOK@@KPEAUtagWND@@JJPEAUtagTHREADINFO@@KE@Z @ 0x14016F020
 * Callers:
 *     ?xxxDoLocalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z @ 0x140044B4C (-xxxDoLocalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z.c)
 *     ?CreateAndPostTSFNotify@@YAXKPEAUtagWND@@JJPEAUtagTHREADINFO@@1K@Z @ 0x14028CB58 (-CreateAndPostTSFNotify@@YAXKPEAUtagWND@@JJPEAUtagTHREADINFO@@1K@Z.c)
 * Callees:
 *     <none>
 */

struct tagNOTIFY *__fastcall CreateNotify(
        struct tagEVENTHOOK *a1,
        __int64 a2,
        struct tagWND *a3,
        int a4,
        int a5,
        PETHREAD *a6,
        unsigned int a7,
        unsigned __int8 a8)
{
  unsigned int v10; // r12d
  __int64 UserSessionState; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdi
  struct tagNOTIFY *result; // rax
  struct tagNOTIFY *v18; // rbx
  __int64 v19; // rsi
  __int64 v20; // rax
  unsigned int ThreadId; // eax
  struct tagNOTIFY **v22; // rcx
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v24; // rdi
  struct tagNOTIFY **v25; // rax
  _QWORD v26[7]; // [rsp+20h] [rbp-38h] BYREF

  v10 = a2;
  UserSessionState = W32GetUserSessionState(a1, a2);
  if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(UserSessionState + 42344)) != 1 )
    __int2c();
  v15 = W32GetUserSessionState(v14, v13);
  v16 = v15;
  if ( *(_DWORD *)(v15 + 70688) )
  {
    result = (struct tagNOTIFY *)Win32AllocPoolZInit(72LL, 2037281621LL);
    v18 = result;
    if ( !result )
      return result;
  }
  else
  {
    *(_DWORD *)(v15 + 70688) = 1;
    v18 = (struct tagNOTIFY *)(v15 + 70616);
  }
  v19 = 0LL;
  *((_QWORD *)v18 + 2) = 0LL;
  if ( !a8 )
  {
    v26[0] = (char *)v18 + 16;
    v26[1] = a1;
    HMAssignmentLock(v26, 0LL);
  }
  if ( a3 )
    v20 = *(_QWORD *)a3;
  else
    v20 = 0LL;
  *((_QWORD *)v18 + 4) = v20;
  *((_DWORD *)v18 + 7) = v10;
  *((_DWORD *)v18 + 10) = a4;
  *((_DWORD *)v18 + 11) = a5;
  ThreadId = (unsigned int)PsGetThreadId(*a6);
  *((_DWORD *)v18 + 6) = a8;
  v22 = (struct tagNOTIFY **)((char *)v18 + 8);
  *((_DWORD *)v18 + 12) = ThreadId;
  *((_DWORD *)v18 + 13) = a7;
  *((_DWORD *)v18 + 14) = 0;
  if ( a8 )
  {
    *v22 = v18;
    *(_QWORD *)v18 = v18;
    *((_QWORD *)v18 + 8) = 0LL;
  }
  else
  {
    *((_DWORD *)v18 + 14) = ~(unsigned __int8)(*((_DWORD *)a1 + 10) >> 1) & 4;
    *((_QWORD *)v18 + 1) = v18;
    *(_QWORD *)v18 = v18;
    *((_QWORD *)v18 + 8) = 0LL;
    if ( (*((_DWORD *)a1 + 10) & 8) != 0 )
    {
      v22 = (struct tagNOTIFY **)((char *)v18 + 8);
      if ( v10 >= 0x80000002 )
      {
        v22 = (struct tagNOTIFY **)((char *)v18 + 8);
        if ( v10 <= 0x80000005 )
        {
          CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(v22);
          if ( CurrentThreadWin32Thread )
            v19 = *CurrentThreadWin32Thread;
          v22 = (struct tagNOTIFY **)((char *)v18 + 8);
          if ( *((_QWORD *)a1 + 2) != v19 )
          {
            *((_DWORD *)v18 + 14) |= 4u;
            v22 = (struct tagNOTIFY **)((char *)v18 + 8);
          }
        }
      }
    }
  }
  v24 = v16 + 70600;
  v25 = *(struct tagNOTIFY ***)(v24 + 8);
  if ( *v25 != (struct tagNOTIFY *)v24 )
    __fastfail(3u);
  *v22 = (struct tagNOTIFY *)v25;
  *(_QWORD *)v18 = v24;
  *v25 = v18;
  result = v18;
  *(_QWORD *)(v24 + 8) = v18;
  return result;
}
