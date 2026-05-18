/*
 * XREFs of sub_18001E740 @ 0x18001E740
 * Callers:
 *     sub_18002CF9C @ 0x18002CF9C (sub_18002CF9C.c)
 *     sub_1800876BC @ 0x1800876BC (sub_1800876BC.c)
 *     sub_1800D956E @ 0x1800D956E (sub_1800D956E.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

void __fastcall sub_18001E740(__int64 a1)
{
  __int64 v1; // rcx
  void (__fastcall ***v2)(_QWORD, __int64); // rax

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 )
  {
    v2 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
    if ( v2 )
      (**v2)(v2, 1LL);
  }
}
