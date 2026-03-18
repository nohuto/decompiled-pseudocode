/*
 * XREFs of ?ResetSystemColors@@YAXXZ @ 0x14007F318
 * Callers:
 *     xxxResetDisplayDevice @ 0x14007F460 (xxxResetDisplayDevice.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400D0B5C (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     xxxSetSysColors @ 0x1401B7328 (xxxSetSysColors.c)
 */

void __fastcall ResetSystemColors(__int64 a1, int a2, int a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rdi
  int v5; // ecx
  _DWORD v6[1103]; // [rsp+0h] [rbp-1264h]
  _BYTE v7[8]; // [rsp+114Ch] [rbp-118h] BYREF
  __int64 v8; // [rsp+1154h] [rbp-110h]
  char v9; // [rsp+115Ch] [rbp-108h] BYREF
  char v10; // [rsp+11DCh] [rbp-88h] BYREF

  v3 = 0;
  v4 = 1111LL;
  do
  {
    v6[v4 + 32] = v3++;
    a1 = *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 19904);
    v6[v4] = *(_DWORD *)(v4 * 4 + a1);
    ++v4;
  }
  while ( v3 < 0x1F );
  AtomicExecutionCheck::AtomicExecutionCheck(v7);
  xxxSetSysColors(v5, v3, (unsigned int)&v10, (unsigned int)&v9, 6);
  if ( v7[0] )
    --*(_DWORD *)(v8 + 28);
}
