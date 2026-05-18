/*
 * XREFs of sub_1800E57E0 @ 0x1800E57E0
 * Callers:
 *     <none>
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

void __fastcall sub_1800E57E0()
{
  __int64 v0; // rcx
  void (__fastcall ***v1)(_QWORD, __int64); // rax
  __int64 v2; // rbx

  while ( 1 )
  {
    v2 = qword_1801C8350;
    if ( !qword_1801C8350 )
      break;
    v0 = *(_QWORD *)(qword_1801C8350 + 8);
    qword_1801C8350 = *(_QWORD *)qword_1801C8350;
    v1 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v0 + 16LL))(v0);
    if ( v1 )
      (**v1)(v1, 1LL);
    o_free(v2);
  }
}
