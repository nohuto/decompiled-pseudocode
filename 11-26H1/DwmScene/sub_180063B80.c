/*
 * XREFs of sub_180063B80 @ 0x180063B80
 * Callers:
 *     <none>
 * Callees:
 *     sub_180033D14 @ 0x180033D14 (sub_180033D14.c)
 *     sub_180034DD0 @ 0x180034DD0 (sub_180034DD0.c)
 *     sub_1800643DC @ 0x1800643DC (sub_1800643DC.c)
 *     sub_1800644BC @ 0x1800644BC (sub_1800644BC.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_180063B80(unsigned int *a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v7; // r8

  sub_180034DD0((__int64)a1, a2);
  v3 = sub_180033D14((__int64)a1, 1);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v3 + 152LL))(v3, &unk_1801C9398, a1[147], 1LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v3 + 152LL))(v3, &unk_1801C99F8, a1[136], 1LL);
  if ( a1[166] == 3 )
  {
    (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v3 + 168LL))(v3, &unk_1801C91B8, v4, 1LL);
    (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v3 + 168LL))(v3, &unk_1801C9158, v5, 1LL);
    (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v3 + 168LL))(v3, &unk_1801C9178, v6, 1LL);
    (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v3 + 168LL))(v3, &unk_1801C9198, v7, 1LL);
  }
  sub_1800644BC(a1);
  sub_1800643DC(a1);
  return sub_18006444C(a1);
}
