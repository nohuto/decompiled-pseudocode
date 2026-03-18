/*
 * XREFs of EditionPostMouseWheelToForeground @ 0x14011F510
 * Callers:
 *     <none>
 * Callees:
 *     PostInputMessage @ 0x14011FED8 (PostInputMessage.c)
 *     AdjustPwndPtiPqForDelegation @ 0x1401203DC (AdjustPwndPtiPqForDelegation.c)
 */

__int64 __fastcall EditionPostMouseWheelToForeground(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned int a7,
        struct tagINPUT_MESSAGE_SOURCE *a8,
        struct tagUIPI_INFO *a9)
{
  unsigned int v11; // ebx
  struct tagQ *v12; // r10
  __int64 result; // rax
  int v14; // [rsp+88h] [rbp-1h] BYREF
  int v15; // [rsp+8Ch] [rbp+3h] BYREF
  __int64 v16; // [rsp+90h] [rbp+7h] BYREF
  struct tagQ *v17; // [rsp+98h] [rbp+Fh] BYREF
  __int64 v18; // [rsp+A0h] [rbp+17h] BYREF

  v11 = a1;
  v18 = 0LL;
  v16 = 0LL;
  v12 = *(struct tagQ **)(W32GetUserSessionState(a1, a2) + 18888);
  v15 = 0;
  v14 = 0;
  v17 = v12;
  result = AdjustPwndPtiPqForDelegation(
             (unsigned int)&v17,
             (unsigned int)&v18,
             (unsigned int)&v16,
             v11,
             (__int64)a8,
             (__int64)&v15,
             (__int64)&v14);
  if ( (_DWORD)result )
    return PostInputMessage(v17, 0LL, v11, a3, a4, a5, a6, a7, a8, 0LL, a9, v15, v14, v16);
  return result;
}
