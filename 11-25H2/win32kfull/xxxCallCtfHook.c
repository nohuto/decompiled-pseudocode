/*
 * XREFs of xxxCallCtfHook @ 0x1400C4B80
 * Callers:
 *     xxxRealInternalGetMessage @ 0x14011559C (xxxRealInternalGetMessage.c)
 *     ?xxxDestroyWindow_Prologue@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@PEAHPEA_N@Z @ 0x140257214 (-xxxDestroyWindow_Prologue@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@PEAHPEA_N@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027D2B8 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     fnHkINLPCHARHOOKSTRUCT @ 0x1400C3D88 (fnHkINLPCHARHOOKSTRUCT.c)
 *     fnHkINLPMOUSEHOOKSTRUCTEX @ 0x1400C3F2C (fnHkINLPMOUSEHOOKSTRUCTEX.c)
 *     fnHkINDWORD @ 0x1400C4E78 (fnHkINDWORD.c)
 *     fnHkINLPMSG @ 0x1400C4FD0 (fnHkINLPMSG.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1400C5FF0 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     fnHkINLPCBTACTIVATESTRUCT @ 0x1401EF600 (fnHkINLPCBTACTIVATESTRUCT.c)
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxCallCtfHook(__int64 a1, __int64 a2, __int64 a3, __int128 *a4)
{
  unsigned __int64 v4; // rdi
  unsigned int v5; // ebx
  int v8; // r13d
  int v9; // r14d
  __int16 v10; // r12
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *CurrentThreadNonPaged; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rsi
  __int64 *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  int v22; // edi
  int v23; // edi
  __int64 v24; // rax
  int v27; // edi
  __int64 UserSessionState; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rax
  __int64 v33; // r9
  struct _KTHREAD *v34; // rcx
  __int64 v35; // rax
  int v36; // [rsp+40h] [rbp-78h] BYREF
  __int64 v37[3]; // [rsp+48h] [rbp-70h] BYREF
  int v38; // [rsp+60h] [rbp-58h]
  int v39; // [rsp+64h] [rbp-54h]

  v4 = (int)a1;
  v5 = 0;
  v8 = a2;
  v9 = (unsigned __int16)a2 | ((unsigned __int16)a1 << 16);
  v36 = 0;
  v10 = 0;
  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19872) )
  {
    v14 = *(_QWORD *)(W32GetUserSessionState(v12, v11) + 19872);
    if ( *(_QWORD *)(v14 + 856) )
    {
      CurrentThreadNonPaged = (_QWORD *)W32GetCurrentThreadNonPaged(v14, v13);
      v18 = CurrentThreadNonPaged ? *CurrentThreadNonPaged : 0LL;
      if ( v18 != *(_QWORD *)(W32GetUserSessionState(v17, v16) + 18648)
        && (_InterlockedCompareExchange((volatile signed __int32 *)(v18 + 528), 0, 0) & 0x1000000D) == 0 )
      {
        if ( *(_QWORD *)(v18 + 496) )
        {
          v19 = *(__int64 **)(v18 + 504);
          v20 = *v19;
          v21 = (unsigned int)(*(_DWORD *)(v18 + 720) | *(_DWORD *)(*v19 + 16));
          if ( ((*(_WORD *)(v18 + 720) | *(_WORD *)(*v19 + 16)) & 0x400) == 0
            || (v34 = *(struct _KTHREAD **)v18,
                v39 = 0,
                v37[0] = (unsigned int)PsGetThreadId(v34),
                v38 = v8,
                v37[2] = a3,
                v37[1] = (__int64)a4,
                !(unsigned int)xxxCallHook(0, v4, (__int64)v37, 9)) )
          {
            v22 = v4 - 2;
            if ( v22 )
            {
              v23 = v22 - 1;
              if ( v23 )
              {
                v27 = v23 - 2;
                if ( v27 )
                {
                  if ( v27 != 2 )
                    return v5;
                  UserSessionState = W32GetUserSessionState(v20, v21);
                  return (unsigned int)fnHkINLPMOUSEHOOKSTRUCTEX(
                                         v9,
                                         a3,
                                         a4,
                                         0LL,
                                         *(_QWORD *)(*(_QWORD *)(UserSessionState + 19872) + 856LL),
                                         &v36);
                }
                else
                {
                  v35 = W32GetUserSessionState(v20, v21);
                  if ( v8 == 5 )
                    return (unsigned int)fnHkINLPCBTACTIVATESTRUCT(
                                           v9,
                                           a3,
                                           (_DWORD)a4,
                                           0,
                                           *(_QWORD *)(*(_QWORD *)(v35 + 19872) + 856LL));
                  else
                    return (unsigned int)fnHkINDWORD(
                                           v9,
                                           a3,
                                           (_DWORD)a4,
                                           0,
                                           *(_QWORD *)(*(_QWORD *)(v35 + 19872) + 856LL),
                                           (__int64)&v36);
                }
              }
              else
              {
                v24 = W32GetUserSessionState(v20, v21);
                return (unsigned int)fnHkINLPMSG(
                                       v9,
                                       a3,
                                       (_DWORD)a4,
                                       0,
                                       *(_QWORD *)(*(_QWORD *)(v24 + 19872) + 856LL),
                                       0,
                                       (__int64)&v36);
              }
            }
            else
            {
              v31 = *((_QWORD *)PtiCurrent(v20, v21) + 60);
              if ( v31 )
                v10 = InternalMapVirtualKeyEx((unsigned int)a3, 0LL, *(_QWORD *)(*(_QWORD *)(v31 + 48) + 32LL));
              if ( a3 == 231 && !(_BYTE)v10 && (v10 & 0x8000) == 0 )
              {
                v30 = (*(unsigned __int16 *)(v18 + 922) << 16) | 0xE7u;
                a3 = (int)v30;
              }
              v32 = W32GetUserSessionState(v30, v29);
              return (unsigned int)fnHkINLPCHARHOOKSTRUCT(
                                     v9,
                                     a3,
                                     a4,
                                     v33,
                                     *(_QWORD *)(*(_QWORD *)(v32 + 19872) + 856LL));
            }
          }
        }
      }
    }
  }
  return 0LL;
}
