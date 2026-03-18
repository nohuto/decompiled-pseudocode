/*
 * XREFs of ?_InBoxString@@YA_JJPEAUtagWND@@I_K_J1KH@Z @ 0x1401BBD98
 * Callers:
 *     NtUserfnINCBOXSTRING @ 0x1401BBCA0 (NtUserfnINCBOXSTRING.c)
 *     NtUserfnINLBOXSTRING @ 0x1401BBD20 (NtUserfnINLBOXSTRING.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     IsPseudoPwnd @ 0x14012E280 (IsPseudoPwnd.c)
 *     NtUserfnINSTRING @ 0x1401BBF30 (NtUserfnINSTRING.c)
 *     NtUserfnINSTRINGNULL @ 0x1401BC0C0 (NtUserfnINSTRINGNULL.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall _InBoxString(
        __int64 a1,
        struct tagWND *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        unsigned __int64 a6,
        unsigned int a7,
        int a8)
{
  int v11; // edi
  struct tagTHREADINFO *v12; // rbx
  unsigned int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // r14d
  __int64 result; // rax
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 UserSessionState; // rax

  v11 = a1;
  v12 = PtiCurrent(a1);
  if ( !IsPseudoPwnd((__int64)a2) && v12 )
  {
    v13 = *(_DWORD *)(*((_QWORD *)a2 + 5) + 28LL);
    if ( v11 == 678 )
    {
      v14 = 399LL;
      v15 = v13 >> 6;
    }
    else
    {
      v14 = 332LL;
      v15 = v13 >> 9;
    }
    v16 = *((_DWORD *)v12 + 401);
    LOBYTE(v15) = v15 & 1;
    if ( (_BYTE)v15 || (*(_DWORD *)(*((_QWORD *)a2 + 5) + 28LL) & 0x30) == 0 )
    {
      *((_DWORD *)v12 + 401) = 2;
      if ( a3 == (_DWORD)v14 )
        result = NtUserfnINSTRINGNULL(a2, a3, a4, a5, a6, a7, a8);
      else
        result = NtUserfnINSTRING(a2, a3, a4, a5, a6, a7, a8);
      goto LABEL_8;
    }
    v18 = ((_BYTE)a7 + 6) & 0x1F;
    if ( *(__int64 (__fastcall **)(int, int, int, int, volatile void *))(W32GetUserSessionState(v15, v14)
                                                                       + 8 * v18
                                                                       + 70904) != xxxSendMessageFF
      && *(__int64 (__fastcall **)(int, int, int, int, volatile void *))(W32GetUserSessionState(xxxSendMessageFF, v19)
                                                                       + 8 * v18
                                                                       + 70904) != xxxWrapSendMessageBSM )
    {
      *((_DWORD *)v12 + 401) = 1;
      UserSessionState = W32GetUserSessionState(xxxWrapSendMessageBSM, v20);
      result = (*(__int64 (__fastcall **)(struct tagWND *, _QWORD, __int64, __int64, unsigned __int64))(UserSessionState + 8 * v18 + 70904))(
                 a2,
                 a3,
                 a4,
                 a5,
                 a6);
LABEL_8:
      *((_DWORD *)v12 + 401) = v16;
      return result;
    }
  }
  return -1LL;
}
