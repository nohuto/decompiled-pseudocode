/*
 * XREFs of sub_180019870 @ 0x180019870
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010334 @ 0x180010334 (sub_180010334.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_180019870(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // r10

  v1 = sub_180010334((volatile signed __int32 *)(a1 + 12));
  if ( !v1 )
  {
    if ( v2 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 120LL))(v2, v1 + 1);
    if ( qword_1801C84F8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_1801C84F8 + 16LL))(qword_1801C84F8);
  }
  return v1;
}
