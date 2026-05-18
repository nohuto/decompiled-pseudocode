/*
 * XREFs of sub_1800C5A00 @ 0x1800C5A00
 * Callers:
 *     sub_1800C53AC @ 0x1800C53AC (sub_1800C53AC.c)
 * Callees:
 *     sub_1800C5DF0 @ 0x1800C5DF0 (sub_1800C5DF0.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1800C5A00(__int64 a1, char a2)
{
  __int64 result; // rax

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 144) + 880LL))(*(_QWORD *)(a1 + 144));
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 144) + 888LL))(*(_QWORD *)(a1 + 144));
  if ( a2 )
    return sub_1800C5DF0(a1);
  return result;
}
