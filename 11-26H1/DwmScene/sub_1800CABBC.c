/*
 * XREFs of sub_1800CABBC @ 0x1800CABBC
 * Callers:
 *     sub_1800CB160 @ 0x1800CB160 (sub_1800CB160.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800CABBC(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 (__fastcall ***v4)(_QWORD, __int64); // rcx

  *(_DWORD *)a1 = *(_DWORD *)a2;
  *(_BYTE *)(a1 + 4) = *(_BYTE *)(a2 + 4);
  *(_BYTE *)(a1 + 5) = *(_BYTE *)(a2 + 5);
  *(_BYTE *)(a1 + 6) = *(_BYTE *)(a2 + 6);
  v3 = a1 + 8;
  *(_QWORD *)(a1 + 64) = 0LL;
  v4 = *(__int64 (__fastcall ****)(_QWORD, __int64))(a2 + 64);
  if ( v4 )
    *(_QWORD *)(v3 + 56) = (**v4)(v4, v3);
  return a1;
}
