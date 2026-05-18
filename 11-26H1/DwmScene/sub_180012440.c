/*
 * XREFs of sub_180012440 @ 0x180012440
 * Callers:
 *     sub_180011F0C @ 0x180011F0C (sub_180011F0C.c)
 *     sub_1800120E0 @ 0x1800120E0 (sub_1800120E0.c)
 *     sub_180012730 @ 0x180012730 (sub_180012730.c)
 *     sub_180019170 @ 0x180019170 (sub_180019170.c)
 *     sub_1800BC4A0 @ 0x1800BC4A0 (sub_1800BC4A0.c)
 *     sub_1800BFD20 @ 0x1800BFD20 (sub_1800BFD20.c)
 *     sub_1800C1570 @ 0x1800C1570 (sub_1800C1570.c)
 *     sub_1800C1B5C @ 0x1800C1B5C (sub_1800C1B5C.c)
 *     sub_1800C1FC0 @ 0x1800C1FC0 (sub_1800C1FC0.c)
 *     sub_1800C2570 @ 0x1800C2570 (sub_1800C2570.c)
 *     sub_1800C2B14 @ 0x1800C2B14 (sub_1800C2B14.c)
 *     sub_1800C4B58 @ 0x1800C4B58 (sub_1800C4B58.c)
 *     sub_1800C4EEC @ 0x1800C4EEC (sub_1800C4EEC.c)
 *     sub_1800C7CA0 @ 0x1800C7CA0 (sub_1800C7CA0.c)
 *     sub_1800CAFCC @ 0x1800CAFCC (sub_1800CAFCC.c)
 *     sub_1800CB5F4 @ 0x1800CB5F4 (sub_1800CB5F4.c)
 *     sub_1800CB8A8 @ 0x1800CB8A8 (sub_1800CB8A8.c)
 *     sub_1800CEA90 @ 0x1800CEA90 (sub_1800CEA90.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_180012440(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
  return result;
}
