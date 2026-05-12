/*
 * XREFs of sub_140070610 @ 0x140070610
 * Callers:
 *     sub_140062314 @ 0x140062314 (sub_140062314.c)
 *     DllInitialize @ 0x1400A3DE0 (DllInitialize.c)
 *     sub_1400D6FE0 @ 0x1400D6FE0 (sub_1400D6FE0.c)
 *     sub_1401B1AF4 @ 0x1401B1AF4 (sub_1401B1AF4.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_140070610(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 16) = a1;
  ExInitializeResourceLite((PERESOURCE)(a2 + 24));
  *(_QWORD *)(a2 + 128) = 0LL;
  *(_QWORD *)(a2 + 144) = sub_140070FE0;
  *(_QWORD *)(a2 + 152) = a2;
  KeInitializeEvent((PRKEVENT)(a2 + 160), NotificationEvent, 0);
  *(_WORD *)(a2 + 184) = 1;
}
