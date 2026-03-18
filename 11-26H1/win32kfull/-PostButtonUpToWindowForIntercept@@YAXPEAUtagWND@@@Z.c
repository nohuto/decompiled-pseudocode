/*
 * XREFs of ?PostButtonUpToWindowForIntercept@@YAXPEAUtagWND@@@Z @ 0x1402D0F94
 * Callers:
 *     ?DelegateMoveSizeToShell@@YA_NPEAUtagWND@@I@Z @ 0x1402D0DB8 (-DelegateMoveSizeToShell@@YA_NPEAUtagWND@@I@Z.c)
 * Callees:
 *     AdjustPwndPtiPqForDelegation @ 0x14005527C (AdjustPwndPtiPqForDelegation.c)
 *     PostInputMessage @ 0x1400904E8 (PostInputMessage.c)
 */

void __fastcall PostButtonUpToWindowForIntercept(struct tagWND *a1)
{
  int v1; // ecx
  __int64 v2; // rdi
  __int64 v3; // [rsp+80h] [rbp+37h] BYREF
  __int64 v4[3]; // [rsp+88h] [rbp+3Fh] BYREF
  struct tagWND *v5; // [rsp+B0h] [rbp+67h] BYREF
  int v6; // [rsp+B8h] [rbp+6Fh] BYREF
  int v7; // [rsp+C0h] [rbp+77h] BYREF
  __int64 v8; // [rsp+C8h] [rbp+7Fh] BYREF

  v5 = a1;
  v3 = *((_QWORD *)a1 + 2);
  v8 = 0LL;
  SetSystemInputSource(&v8);
  v1 = *(unsigned __int16 *)(v3 + 788) | (*(unsigned __int16 *)(v3 + 792) << 16);
  v7 = 0;
  v4[0] = *(_QWORD *)(v3 + 464);
  v2 = v1;
  v6 = 0;
  if ( (unsigned int)AdjustPwndPtiPqForDelegation(v4, (__int64 *)&v5, &v3, 0x202u, &v8, &v7, &v6) )
    PostInputMessage(
      *(struct tagQ **)(v3 + 464),
      v5,
      0x202u,
      0LL,
      v2,
      0,
      0LL,
      0LL,
      0,
      (struct tagINPUT_MESSAGE_SOURCE *)&v8,
      0LL,
      0LL,
      v7,
      v6,
      v3);
}
