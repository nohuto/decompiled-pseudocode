/*
 * XREFs of sub_180015828 @ 0x180015828
 * Callers:
 *     sub_180015784 @ 0x180015784 (sub_180015784.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180015828(__int64 a1)
{
  *(_QWORD *)a1 = &ISpectreNode::`vftable';
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = off_1800EE4F8;
  if ( qword_1801C84F8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_1801C84F8 + 8LL))(qword_1801C84F8);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)a1 = off_1800EE558;
  *(_QWORD *)(a1 + 16) = off_1800EE610;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  return a1;
}
