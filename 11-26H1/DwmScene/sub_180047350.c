/*
 * XREFs of sub_180047350 @ 0x180047350
 * Callers:
 *     sub_180046AD0 @ 0x180046AD0 (sub_180046AD0.c)
 * Callees:
 *     sub_180028A44 @ 0x180028A44 (sub_180028A44.c)
 *     sub_180029420 @ 0x180029420 (sub_180029420.c)
 *     sub_1800473DC @ 0x1800473DC (sub_1800473DC.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_180047350(__int64 a1, unsigned int a2)
{
  char *v4; // rbx
  _BYTE v6[72]; // [rsp+20h] [rbp-58h] BYREF
  char v7; // [rsp+68h] [rbp-10h] BYREF
  unsigned int v8; // [rsp+88h] [rbp+10h] BYREF

  v8 = a2;
  sub_180028A44((__int64 *)(a1 + 128), &v8);
  sub_1800473DC(a1, v6);
  v4 = v6;
  do
  {
    if ( *(_QWORD *)v4 )
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v4 + 24LL))(*(_QWORD *)v4, a2);
    v4 += 8;
  }
  while ( v4 != &v7 );
  v8 = a2;
  return sub_180029420((__int64 *)(a1 + 80), &v8);
}
