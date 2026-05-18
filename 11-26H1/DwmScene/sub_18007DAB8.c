/*
 * XREFs of sub_18007DAB8 @ 0x18007DAB8
 * Callers:
 *     sub_18007DD00 @ 0x18007DD00 (sub_18007DD00.c)
 * Callees:
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 *     sub_180027AF0 @ 0x180027AF0 (sub_180027AF0.c)
 */

__int64 __fastcall sub_18007DAB8(__int64 a1)
{
  volatile signed __int32 *v2; // rcx

  *(_QWORD *)a1 = &Spectre::Engine::ConstantBuffer::`vftable';
  sub_180027AF0((void **)(a1 + 112));
  v2 = *(volatile signed __int32 **)(a1 + 104);
  if ( v2 )
    sub_180010F00(v2);
  return sub_180027C54(a1);
}
