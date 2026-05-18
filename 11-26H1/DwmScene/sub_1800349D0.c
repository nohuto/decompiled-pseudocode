/*
 * XREFs of sub_1800349D0 @ 0x1800349D0
 * Callers:
 *     sub_1800167D4 @ 0x1800167D4 (sub_1800167D4.c)
 *     sub_1800168F8 @ 0x1800168F8 (sub_1800168F8.c)
 *     sub_180033140 @ 0x180033140 (sub_180033140.c)
 *     sub_180035030 @ 0x180035030 (sub_180035030.c)
 *     sub_1800351DC @ 0x1800351DC (sub_1800351DC.c)
 *     sub_180035A5C @ 0x180035A5C (sub_180035A5C.c)
 *     sub_180036FAC @ 0x180036FAC (sub_180036FAC.c)
 *     sub_180037410 @ 0x180037410 (sub_180037410.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_18006FB60 @ 0x18006FB60 (sub_18006FB60.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_1800349D0(__int64 a1, unsigned int a2, _QWORD *a3, _QWORD *a4)
{
  void (__fastcall *v8)(__int64, _QWORD, __int64); // rbp
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v16[7]; // [rsp+50h] [rbp-38h] BYREF

  v8 = *(void (__fastcall **)(__int64, _QWORD, __int64))(a1 + 912);
  if ( v8 )
  {
    sub_180012C40(&v15, a4);
    v9 = sub_180012C40(v16, a3);
    v12 = sub_18006FB60(a1 + 376, v10, v11, v9);
    v8(a1, a2, v12);
  }
  v13 = a3[1];
  if ( v13 )
    sub_180010EC8(v13);
  v14 = a4[1];
  if ( v14 )
    sub_180010EC8(v14);
}
