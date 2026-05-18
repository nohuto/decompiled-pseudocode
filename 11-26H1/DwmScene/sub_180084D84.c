/*
 * XREFs of sub_180084D84 @ 0x180084D84
 * Callers:
 *     sub_180084A60 @ 0x180084A60 (sub_180084A60.c)
 * Callees:
 *     sub_180078020 @ 0x180078020 (sub_180078020.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180084D84(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v8; // rbx
  _QWORD *v9; // rdi

  *(_DWORD *)(a1 + 96) = *(_DWORD *)a3;
  *(_QWORD *)(a1 + 104) = *(_QWORD *)(a3 + 8);
  v8 = (_QWORD *)(a3 + 16);
  v9 = (_QWORD *)(a1 + 112);
  if ( a1 + 112 != a3 + 16 )
  {
    sub_180078020(a1 + 112);
    *v9 = *v8;
    v9[1] = v8[1];
    v9[2] = v8[2];
    *v8 = 0LL;
    v8[1] = 0LL;
    v8[2] = 0LL;
  }
  *(_QWORD *)(a1 + 136) = *(_QWORD *)(a3 + 40);
  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 40LL))(a1, a2, a4);
  return sub_180078020((__int64)v8);
}
