/*
 * XREFs of sub_18000FFE0 @ 0x18000FFE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180011490 @ 0x180011490 (sub_180011490.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18000FFE0(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  _QWORD *v5; // r8
  __int64 v6; // r9

  v3 = 0;
  *a3 = 0LL;
  if ( (unsigned int)sub_180011490(a2, &unk_1800FA0F0, a3, a1)
    || (unsigned int)sub_180011490(v4, &unk_1800FA0E0, v5, v6) )
  {
    *v5 = v6;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  }
  else
  {
    return (unsigned int)-2147467262;
  }
  return v3;
}
