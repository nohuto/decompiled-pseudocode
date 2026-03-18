/*
 * XREFs of ApiSetEditionHandleAndPostKeyEvent @ 0x140195544
 * Callers:
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x14018D324 (xxxUpdateGlobalsAndSendKeyEvent.c)
 * Callees:
 *     SendMessageTo @ 0x1400675F0 (SendMessageTo.c)
 *     EditionHandleAndPostKeyEvent @ 0x140110130 (EditionHandleAndPostKeyEvent.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionHandleAndPostKeyEvent(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        char a5,
        int a6,
        __int16 a7,
        __int16 a8,
        __int16 a9,
        __int16 a10,
        __int64 a11,
        int a12,
        __int64 a13,
        __int64 a14,
        __int16 a15,
        __int64 a16)
{
  unsigned int v16; // ebx
  unsigned int v20; // r14d
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  int (*v28)(void); // rax
  __int64 v29; // xmm0_8
  __int64 v31; // [rsp+80h] [rbp-18h] BYREF
  int v32; // [rsp+88h] [rbp-10h]

  v16 = 0;
  v31 = 0LL;
  v20 = a1;
  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 18888) )
  {
    v23 = *(__int64 **)(*(_QWORD *)(W32GetUserSessionState(v22, v21) + 18888) + 120LL);
    if ( v23 || (v23 = *(__int64 **)(*(_QWORD *)(W32GetUserSessionState(v25, v24) + 18888) + 128LL)) != 0LL )
      v31 = *v23;
  }
  SendMessageTo(3LL, &v31, 8LL);
  v28 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v27, v26) + 48) + 5768LL);
  if ( v28 && v28() >= 0 )
  {
    v29 = *(_QWORD *)a2;
    v32 = *(_DWORD *)(a2 + 8);
    v31 = v29;
    return (unsigned int)EditionHandleAndPostKeyEvent(
                           v20,
                           &v31,
                           a3,
                           a4,
                           a5,
                           a6,
                           a7,
                           a8,
                           a9,
                           a10,
                           a11,
                           a12,
                           a13,
                           a14,
                           a15,
                           a16);
  }
  return v16;
}
