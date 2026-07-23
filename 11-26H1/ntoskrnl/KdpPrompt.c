/*
 * XREFs of KdpPrompt @ 0x140C1BEBC
 * Callers:
 *     KdpTrap @ 0x140C1DA90 (KdpTrap.c)
 * Callees:
 *     KdCopyToUser @ 0x140536320 (KdCopyToUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     KdExitDebugger @ 0x140C18008 (KdExitDebugger.c)
 *     KdLogDbgPrint @ 0x140C1BA40 (KdLogDbgPrint.c)
 *     KdpPromptString @ 0x140C1CBD4 (KdpPromptString.c)
 *     KdEnterDebugger @ 0x140C1D858 (KdEnterDebugger.c)
 */

__int64 __fastcall KdpPrompt(
        _BYTE *a1,
        unsigned __int16 a2,
        volatile void *a3,
        unsigned __int16 a4,
        char a5,
        __int64 a6,
        __int64 a7)
{
  _BYTE *v8; // r13
  unsigned __int16 v9; // r14
  unsigned __int16 v10; // r15
  void *v11; // rsp
  void *v12; // rsp
  _BYTE *v13; // rcx
  char v14; // bl
  __int64 v15; // rdx
  __int64 v16; // rcx
  _BYTE v18[480]; // [rsp+0h] [rbp-400h] BYREF
  _BYTE v19[480]; // [rsp+200h] [rbp-200h] BYREF
  _WORD v20[2]; // [rsp+400h] [rbp+0h] BYREF
  int v21; // [rsp+404h] [rbp+4h]
  _BYTE *v22; // [rsp+408h] [rbp+8h]
  __int128 v23; // [rsp+410h] [rbp+10h] BYREF
  _BYTE *v24; // [rsp+420h] [rbp+20h]

  v8 = a1;
  v21 = 0;
  v23 = 0LL;
  v9 = 512;
  if ( a2 <= 0x200u )
    v9 = a2;
  v10 = 512;
  if ( a4 <= 0x200u )
    v10 = a4;
  if ( a5 )
  {
    ProbeForRead(a1, v9, 1u);
    v11 = alloca(512LL);
    v24 = v19;
    KdCopyToUser((__int64)v19, (__int64)v8, v9);
    v8 = v19;
    ProbeForRead(a3, v10, 1u);
    v12 = alloca(512LL);
    v13 = v18;
    v24 = v18;
  }
  else
  {
    v13 = a3;
  }
  v22 = v13;
  v20[0] = 0;
  v20[1] = v10;
  *((_QWORD *)&v23 + 1) = v8;
  LOWORD(v23) = v9;
  KdLogDbgPrint((unsigned __int16 *)&v23);
  v14 = KdEnterDebugger(a6, a7);
  while ( (unsigned __int8)KdpPromptString(&v23, v20) == 1 )
    ;
  LOBYTE(v16) = v14;
  KdExitDebugger(v16, v15);
  if ( a5 == 1 )
    KdCopyToUser((__int64)a3, (__int64)v22, v20[0]);
  return v20[0];
}
