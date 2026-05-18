/*
 * XREFs of sub_1800C0E70 @ 0x1800C0E70
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002C560 @ 0x18002C560 (sub_18002C560.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

char __fastcall sub_1800C0E70(_DWORD *a1, float a2, float a3)
{
  int v5; // eax

  if ( a2 == (*(float (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 128LL))(a1)
    && a3 == (*(float (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 136LL))(a1)
    && !a1[50] )
  {
    return 1;
  }
  v5 = a1[50];
  if ( v5 > 0 )
    a1[50] = v5 - 1;
  if ( sub_18002C560((__int64)a1, a2, a3) )
  {
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 416LL))(a1);
    return 1;
  }
  return 0;
}
