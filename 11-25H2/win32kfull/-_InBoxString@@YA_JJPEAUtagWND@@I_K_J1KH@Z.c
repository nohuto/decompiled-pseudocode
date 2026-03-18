/*
 * XREFs of ?_InBoxString@@YA_JJPEAUtagWND@@I_K_J1KH@Z @ 0x140188B28
 * Callers:
 *     NtUserfnINCBOXSTRING @ 0x140188A30 (NtUserfnINCBOXSTRING.c)
 *     NtUserfnINLBOXSTRING @ 0x140188AB0 (NtUserfnINLBOXSTRING.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     NtUserfnINSTRING @ 0x140188CC0 (NtUserfnINSTRING.c)
 *     NtUserfnINSTRINGNULL @ 0x140188E60 (NtUserfnINSTRINGNULL.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
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
  struct tagTHREADINFO *v12; // rax
  struct tagTHREADINFO *v13; // rbx
  __int64 result; // rax
  unsigned int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // r15d
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 UserSessionState; // rax

  v11 = a1;
  v12 = PtiCurrent(a1, (__int64)a2);
  v13 = v12;
  if ( (unsigned __int64)a2 - 2 > 0xFFFFFFFFFFFFFFFBuLL || !v12 )
    return -1LL;
  v15 = *(_DWORD *)(*((_QWORD *)a2 + 5) + 28LL);
  if ( v11 == 678 )
  {
    v16 = 399LL;
    v17 = v15 >> 6;
  }
  else
  {
    v16 = 332LL;
    v17 = v15 >> 9;
  }
  v18 = *((_DWORD *)v12 + 401);
  LOBYTE(v17) = v17 & 1;
  if ( (_BYTE)v17 || (*(_DWORD *)(*((_QWORD *)a2 + 5) + 28LL) & 0x30) == 0 )
  {
    *((_DWORD *)v12 + 401) = 2;
    if ( a3 == (_DWORD)v16 )
      result = NtUserfnINSTRINGNULL((_DWORD)a2, a3, a4, a5, a6, a7, a8);
    else
      result = NtUserfnINSTRING((_DWORD)a2, a3, a4, a5, a6, a7, a8);
    goto LABEL_11;
  }
  v19 = ((_BYTE)a7 + 6) & 0x1F;
  if ( *(__int64 (__fastcall **)(int, int, int, int, __int64))(W32GetUserSessionState(v17, v16) + 8 * v19 + 70920) == xxxSendMessageFF
    || *(__int64 (__fastcall **)(int, int, int, int, void *))(W32GetUserSessionState(xxxSendMessageFF, v20)
                                                            + 8 * v19
                                                            + 70920) == xxxWrapSendMessageBSM )
  {
    return -1LL;
  }
  *((_DWORD *)v13 + 401) = 1;
  UserSessionState = W32GetUserSessionState(xxxWrapSendMessageBSM, v21);
  result = (*(__int64 (__fastcall **)(struct tagWND *, _QWORD, __int64, __int64, unsigned __int64))(UserSessionState
                                                                                                  + 8 * v19
                                                                                                  + 70920))(
             a2,
             a3,
             a4,
             a5,
             a6);
LABEL_11:
  *((_DWORD *)v13 + 401) = v18;
  return result;
}
