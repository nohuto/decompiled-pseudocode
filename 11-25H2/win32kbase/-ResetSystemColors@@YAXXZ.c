/*
 * XREFs of ?ResetSystemColors@@YAXXZ @ 0x1400AB1C4
 * Callers:
 *     xxxResetDisplayDevice @ 0x1400AB7F0 (xxxResetDisplayDevice.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140039670 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140039698 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     xxxSetSysColors @ 0x1400AAAB0 (xxxSetSysColors.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

void __fastcall ResetSystemColors(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdi
  __int64 v4; // rcx
  _DWORD v5[1103]; // [rsp+0h] [rbp-1274h]
  _BYTE v6[16]; // [rsp+114Ch] [rbp-128h] BYREF
  char v7[128]; // [rsp+115Ch] [rbp-118h] BYREF
  char v8[128]; // [rsp+11DCh] [rbp-98h] BYREF

  v2 = 0;
  v3 = 1111LL;
  do
  {
    v5[v3 + 32] = v2++;
    a1 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19872);
    v5[v3] = *(_DWORD *)(v3 * 4 + a1);
    ++v3;
  }
  while ( v2 < 0x1F );
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v6);
  xxxSetSysColors(v4, v2, v8, v7, 6u);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v6);
}
