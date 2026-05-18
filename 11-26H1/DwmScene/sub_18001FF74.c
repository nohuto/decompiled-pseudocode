/*
 * XREFs of sub_18001FF74 @ 0x18001FF74
 * Callers:
 *     sub_180033900 @ 0x180033900 (sub_180033900.c)
 *     sub_180035030 @ 0x180035030 (sub_180035030.c)
 *     sub_1800351DC @ 0x1800351DC (sub_1800351DC.c)
 *     sub_18003587C @ 0x18003587C (sub_18003587C.c)
 *     sub_180035A5C @ 0x180035A5C (sub_180035A5C.c)
 *     sub_180035EE0 @ 0x180035EE0 (sub_180035EE0.c)
 *     sub_1800369D4 @ 0x1800369D4 (sub_1800369D4.c)
 *     sub_180036FAC @ 0x180036FAC (sub_180036FAC.c)
 *     sub_180037410 @ 0x180037410 (sub_180037410.c)
 *     sub_180063CC0 @ 0x180063CC0 (sub_180063CC0.c)
 *     sub_180064090 @ 0x180064090 (sub_180064090.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_18001FF74(_QWORD *a1, _QWORD *a2, __int64 a3, int a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rcx

  *a1 = 0LL;
  a1[1] = 0LL;
  *a1 = *a2;
  a1[1] = a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  *((_DWORD *)a1 + 4) = a4;
  a1[3] = a3;
  a1[4] = a5;
  a1[5] = a6;
  *((_BYTE *)a1 + 48) = 1;
  a1[7] = 0LL;
  (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(*a1 + 16LL) + 8LL))(*(_QWORD *)(*a1 + 16LL), &a5);
  a1[7] = a5;
  v8 = a2[1];
  if ( v8 )
    sub_180010EC8(v8);
  return a1;
}
