/*
 * XREFs of _anonymous_namespace_::DeferPointerCursorOperation @ 0x140197010
 * Callers:
 *     _anonymous_namespace_::ContactVisualizationWorker @ 0x1401969A0 (_anonymous_namespace_--ContactVisualizationWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

int __fastcall anonymous_namespace_::DeferPointerCursorOperation(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 UserSessionState; // rax
  __int64 v9; // rdi
  int v10; // eax
  __int64 v11; // rdx
  volatile __int64 *v12; // rcx
  signed __int64 v13; // rdi
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rbx
  _OWORD v18[5]; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v19; // [rsp+78h] [rbp-90h]
  __int128 v20; // [rsp+88h] [rbp-80h]
  _OWORD v21[7]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v22[128]; // [rsp+108h] [rbp+0h] BYREF

  v6 = ValidateHwnd(*(_QWORD *)(a1 + 24));
  if ( v6 )
  {
    memset_0(v18, 0, 0x70uLL);
    LODWORD(v18[0]) = 4;
    *(_QWORD *)&v19 = v6;
    v21[1] = v18[1];
    HIDWORD(v19) = 2;
    v21[0] = v18[0];
    v21[3] = v18[3];
    v21[2] = v18[2];
    v21[5] = v19;
    v21[4] = v18[4];
    v21[6] = v20;
    CInputDest::CInputDest((CInputDest *)v22, (const struct tagINPUTDEST *)v21);
    UpdateGlobalCursorOwner(v22, a1 + 32);
    CInputDest::~CInputDest((CInputDest *)v22);
  }
  v7 = 0LL;
  while ( 1 )
  {
    UserSessionState = W32GetUserSessionState(v5, v4);
    v5 = *(_QWORD *)(UserSessionState + 36312);
    v9 = _InterlockedExchange64((volatile __int64 *)(v5 + 8 * v7 + 48), 0LL);
    if ( v9 )
      break;
    v7 = (unsigned int)(v7 + 1);
    if ( (unsigned int)v7 >= 3 )
      return UserSessionState;
  }
  v10 = *(_DWORD *)(a2 + 8);
  *(_QWORD *)v9 = *(_QWORD *)a2;
  *(_DWORD *)(v9 + 8) = v10;
  v12 = *(volatile __int64 **)(W32GetUserSessionState(v5, v4) + 36312);
  v13 = _InterlockedExchange64(v12, v9);
  if ( v13 )
  {
    v15 = v13 - *(_QWORD *)(W32GetUserSessionState(v12, v11) + 36312) - 8;
    v16 = v15 / 0xC;
    v12 = *(volatile __int64 **)(W32GetUserSessionState(v15, (v15 * (unsigned __int128)0xAAAAAAAAAAAAAAABuLL) >> 64)
                               + 36312);
    _InterlockedCompareExchange64(&v12[v16 + 6], v13, 0LL);
  }
  v14 = W32GetUserSessionState(v12, v11);
  LODWORD(UserSessionState) = KeSetEvent(*(PRKEVENT *)(*(_QWORD *)(v14 + 36312) + 72LL), 1, 0);
  return UserSessionState;
}
