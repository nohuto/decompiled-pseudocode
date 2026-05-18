/*
 * XREFs of sub_1800CADDC @ 0x1800CADDC
 * Callers:
 *     sub_1800CAFCC @ 0x1800CAFCC (sub_1800CAFCC.c)
 *     sub_1800CEA90 @ 0x1800CEA90 (sub_1800CEA90.c)
 *     sub_1800CFBEC @ 0x1800CFBEC (sub_1800CFBEC.c)
 * Callees:
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_1800CADDC(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rbx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a2;
  if ( *a1 != *a2 )
  {
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(*a2);
    v5 = *a1;
    *a1 = v3;
    sub_18000F938(&v5);
  }
  return a1;
}
