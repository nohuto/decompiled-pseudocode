/*
 * XREFs of ApiSetEditionHandleAndPostKeyEvent @ 0x140188A00
 * Callers:
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x140123498 (xxxUpdateGlobalsAndSendKeyEvent.c)
 * Callees:
 *     SendMessageTo @ 0x14008B570 (SendMessageTo.c)
 *     EditionHandleAndPostKeyEvent @ 0x14014BB98 (EditionHandleAndPostKeyEvent.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionHandleAndPostKeyEvent(
        unsigned int a1,
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
  int v21; // edx
  int v22; // ecx
  int v23; // r8d
  __int64 *v24; // rax
  int v25; // edx
  int v26; // ecx
  int v27; // r8d
  __int64 v28; // rcx
  int (*v29)(void); // rax
  __int64 v30; // xmm0_8
  __int64 v32; // [rsp+80h] [rbp-18h] BYREF
  int v33; // [rsp+88h] [rbp-10h]

  v16 = 0;
  v32 = 0LL;
  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 18928) )
  {
    v24 = *(__int64 **)(*(_QWORD *)(W32GetUserSessionState(v22, v21, v23) + 18928) + 120LL);
    if ( v24 || (v24 = *(__int64 **)(*(_QWORD *)(W32GetUserSessionState(v26, v25, v27) + 18928) + 128LL)) != 0LL )
      v32 = *v24;
  }
  SendMessageTo(3, (int)&v32, 8);
  v29 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v28) + 48) + 5328LL);
  if ( v29 && v29() >= 0 )
  {
    v30 = *(_QWORD *)a2;
    v33 = *(_DWORD *)(a2 + 8);
    v32 = v30;
    return (unsigned int)EditionHandleAndPostKeyEvent(
                           a1,
                           &v32,
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
