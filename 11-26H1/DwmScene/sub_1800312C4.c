/*
 * XREFs of sub_1800312C4 @ 0x1800312C4
 * Callers:
 *     sub_18002CF9C @ 0x18002CF9C (sub_18002CF9C.c)
 *     sub_18002EEDC @ 0x18002EEDC (sub_18002EEDC.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800312C4(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  bool v5; // di
  __int64 v6; // rcx

  *(_QWORD *)a1 = a2;
  v4 = *(_QWORD *)(*(int *)(*(_QWORD *)a2 + 4LL) + a2 + 72);
  v5 = 0;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  if ( std::ios_base::good((std::ios_base *)(a2 + *(int *)(*(_QWORD *)a2 + 4LL))) )
  {
    v6 = *(_QWORD *)(*(int *)(*(_QWORD *)a2 + 4LL) + a2 + 80);
    if ( !v6 || v6 == a2 )
    {
      v5 = 1;
    }
    else
    {
      std::wostream::flush();
      v5 = std::ios_base::good((std::ios_base *)(a2 + *(int *)(*(_QWORD *)a2 + 4LL)));
    }
  }
  *(_BYTE *)(a1 + 8) = v5;
  return a1;
}
