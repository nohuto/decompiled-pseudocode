/*
 * XREFs of PspWow64SetupUserStack @ 0x140AB9ACC
 * Callers:
 *     PspAllocateThread @ 0x140A7A6A8 (PspAllocateThread.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlpWow64CreateUserStack @ 0x140AB9B7C (RtlpWow64CreateUserStack.c)
 */

__int64 __fastcall PspWow64SetupUserStack(_KPROCESS *a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  bool v5; // zf
  int UserStack; // edi
  char v9; // cl
  _OWORD v11[3]; // [rsp+30h] [rbp-48h] BYREF

  v5 = (*(_BYTE *)a4 & 1) == 0;
  memset(v11, 0, sizeof(v11));
  if ( !v5 )
  {
    v9 = 0;
    goto LABEL_4;
  }
  KiStackAttachProcess(a1, 0, (__int64)v11);
  UserStack = RtlpWow64CreateUserStack(*(_QWORD *)(a4 + 16), *(_QWORD *)(a4 + 24), *(_QWORD *)(a4 + 8), a5, a3);
  if ( UserStack >= 0 )
  {
    KiUnstackDetachProcess((__int64)v11, 0);
    v9 = 4;
LABEL_4:
    *(_BYTE *)a4 = v9 | *(_BYTE *)a4 & 0xFB;
    return 0LL;
  }
  KiUnstackDetachProcess((__int64)v11, 0);
  return (unsigned int)UserStack;
}
