/*
 * XREFs of sub_18006AC38 @ 0x18006AC38
 * Callers:
 *     sub_18006AD00 @ 0x18006AD00 (sub_18006AD00.c)
 * Callees:
 *     sub_18000BFA4 @ 0x18000BFA4 (sub_18000BFA4.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 *     sub_180027AF0 @ 0x180027AF0 (sub_180027AF0.c)
 */

__int64 __fastcall sub_18006AC38(__int64 a1)
{
  __int64 v2; // rcx
  volatile signed __int32 *v3; // rcx

  *(_QWORD *)a1 = &Spectre::Engine::DepthBuffer::`vftable';
  sub_180027AF0((void **)(a1 + 256));
  sub_18000BFA4(a1 + 192, 16LL, 4LL, (void (__fastcall *)(__int64))Concurrency::details::TaskStack::~TaskStack);
  sub_18000BFA4(a1 + 128, 16LL, 4LL, (void (__fastcall *)(__int64))Concurrency::details::TaskStack::~TaskStack);
  v2 = *(_QWORD *)(a1 + 120);
  if ( v2 )
    sub_180010EC8(v2);
  v3 = *(volatile signed __int32 **)(a1 + 104);
  if ( v3 )
    sub_180010F00(v3);
  return sub_180027C54(a1);
}
