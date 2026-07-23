/*
 * XREFs of PspIumAlertMultipleThreadByThreadId @ 0x1406191A8
 * Callers:
 *     PsDispatchIumService @ 0x140518438 (PsDispatchIumService.c)
 * Callees:
 *     KeAlertMultipleThreadByThreadId @ 0x1405EE81C (KeAlertMultipleThreadByThreadId.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall PspIumAlertMultipleThreadByThreadId(__int64 a1)
{
  unsigned int v2; // r9d
  unsigned int v3; // edx
  __int64 v4; // rbx
  _QWORD *v5; // rax
  __int64 v6; // rcx
  _BYTE v8[104]; // [rsp+20h] [rbp-68h] BYREF

  memset_0(v8, 0, 0x60uLL);
  v3 = 0;
  v4 = a1 - (_QWORD)v8;
  v5 = v8;
  do
  {
    v6 = *(_QWORD *)((char *)v5 + v4 + 8);
    if ( !v6 )
      break;
    *v5 = v6;
    ++v3;
    ++v5;
  }
  while ( v3 < 0xC );
  KeAlertMultipleThreadByThreadId((__int64)v8, v3, 0LL, v2);
  return 0LL;
}
