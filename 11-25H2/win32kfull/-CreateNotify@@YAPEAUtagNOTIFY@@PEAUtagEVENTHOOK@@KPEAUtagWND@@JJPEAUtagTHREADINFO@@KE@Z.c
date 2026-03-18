/*
 * XREFs of ?CreateNotify@@YAPEAUtagNOTIFY@@PEAUtagEVENTHOOK@@KPEAUtagWND@@JJPEAUtagTHREADINFO@@KE@Z @ 0x14015004C
 * Callers:
 *     ?xxxDoLocalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z @ 0x14022BAC0 (-xxxDoLocalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z.c)
 *     ?CreateAndPostTSFNotify@@YAXKPEAUtagWND@@JJPEAUtagTHREADINFO@@1K@Z @ 0x14026936C (-CreateAndPostTSFNotify@@YAXKPEAUtagWND@@JJPEAUtagTHREADINFO@@1K@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
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
  int v10; // r15d
  __int64 UserSessionState; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdi
  struct tagNOTIFY *result; // rax
  struct tagNOTIFY *v18; // rbx
  __int64 v19; // rax
  unsigned int ThreadId; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // eax
  struct tagNOTIFY **v24; // rdx
  _QWORD v25[5]; // [rsp+20h] [rbp-28h] BYREF

  v10 = a2;
  UserSessionState = W32GetUserSessionState(a1, a2);
  if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(UserSessionState + 42320)) != 1 )
    __int2c();
  v15 = W32GetUserSessionState(v14, v13);
  v16 = v15;
  if ( *(_DWORD *)(v15 + 70696) )
  {
    result = (struct tagNOTIFY *)Win32AllocPoolZInit(72LL, 2037281621LL);
    v18 = result;
    if ( !result )
      return result;
  }
  else
  {
    *(_DWORD *)(v15 + 70696) = 1;
    v18 = (struct tagNOTIFY *)(v15 + 70624);
  }
  *((_QWORD *)v18 + 2) = 0LL;
  if ( !a8 )
  {
    v25[0] = (char *)v18 + 16;
    v25[1] = a1;
    HMAssignmentLock(v25, 0LL);
  }
  if ( a3 )
    v19 = *(_QWORD *)a3;
  else
    v19 = 0LL;
  *((_QWORD *)v18 + 4) = v19;
  *((_DWORD *)v18 + 7) = v10;
  *((_DWORD *)v18 + 10) = a4;
  *((_DWORD *)v18 + 11) = a5;
  ThreadId = (unsigned int)PsGetThreadId(*a6);
  *((_DWORD *)v18 + 14) = 0;
  *((_DWORD *)v18 + 12) = ThreadId;
  *((_DWORD *)v18 + 13) = a7;
  *((_DWORD *)v18 + 6) = a8;
  if ( a8 )
    v23 = 0;
  else
    v23 = ~(unsigned __int8)(*((_DWORD *)a1 + 10) >> 1) & 4;
  *((_DWORD *)v18 + 14) = v23;
  *((_QWORD *)v18 + 1) = v18;
  *(_QWORD *)v18 = v18;
  *((_QWORD *)v18 + 8) = 0LL;
  if ( !a8
    && (*((_DWORD *)a1 + 10) & 8) != 0
    && (unsigned int)(v10 + 2147483646) <= 3
    && *((struct tagTHREADINFO **)a1 + 2) != PtiCurrent(v22, v21) )
  {
    *((_DWORD *)v18 + 14) |= 4u;
  }
  v24 = *(struct tagNOTIFY ***)(v16 + 70616);
  if ( *v24 != (struct tagNOTIFY *)(v16 + 70608) )
    __fastfail(3u);
  *(_QWORD *)v18 = v16 + 70608;
  *((_QWORD *)v18 + 1) = v24;
  *v24 = v18;
  *(_QWORD *)(v16 + 70616) = v18;
  return v18;
}
