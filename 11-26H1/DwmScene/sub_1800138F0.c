/*
 * XREFs of sub_1800138F0 @ 0x1800138F0
 * Callers:
 *     <none>
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1800138F0(__int64 a1, float a2)
{
  float v3; // xmm6_4

  v3 = a2;
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(qword_1801C8518 + 80) + 280LL))(*(_QWORD *)(qword_1801C8518 + 80)) )
    v3 = a2 * 3.1415927;
  if ( !*(_DWORD *)(a1 + 48) || *(_DWORD *)(a1 + 48) == 4 )
    *(float *)(a1 + 68) = v3;
  else
    *(float *)(*(_QWORD *)(a1 + 32) + 104LL) = v3;
  return 0LL;
}
