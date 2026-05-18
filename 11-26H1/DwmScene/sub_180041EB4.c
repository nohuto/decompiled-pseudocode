/*
 * XREFs of sub_180041EB4 @ 0x180041EB4
 * Callers:
 *     sub_180041F30 @ 0x180041F30 (sub_180041F30.c)
 *     sub_180041F70 @ 0x180041F70 (sub_180041F70.c)
 *     sub_180048A00 @ 0x180048A00 (sub_180048A00.c)
 *     sub_1800496FC @ 0x1800496FC (sub_1800496FC.c)
 *     sub_18004F7A4 @ 0x18004F7A4 (sub_18004F7A4.c)
 *     sub_1800570E0 @ 0x1800570E0 (sub_1800570E0.c)
 *     sub_180087E28 @ 0x180087E28 (sub_180087E28.c)
 *     sub_18008E740 @ 0x18008E740 (sub_18008E740.c)
 *     unknown_libname_38 @ 0x1800DAC51 (unknown_libname_38.c)
 * Callees:
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
void **__fastcall sub_180041EB4(_QWORD *a1)
{
  __int64 v2; // rcx
  volatile signed __int32 *v3; // rcx
  void **result; // rax
  volatile signed __int32 *v5; // rcx

  *a1 = &Spectre::Engine::Component::`vftable';
  v2 = a1[10];
  if ( v2 )
  {
    a1[10] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = (volatile signed __int32 *)a1[8];
  if ( v3 )
    sub_180010F00(v3);
  sub_1800129D0((__int64)(a1 + 3));
  result = &Spectre::Engine::IVisitable::`vftable';
  *a1 = &Spectre::Engine::IVisitable::`vftable';
  v5 = (volatile signed __int32 *)a1[2];
  if ( v5 )
    return (void **)sub_180010F00(v5);
  return result;
}
