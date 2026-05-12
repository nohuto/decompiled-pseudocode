/*
 * XREFs of sub_140055D8C @ 0x140055D8C
 * Callers:
 *     StorPortExtendedFunction @ 0x140046CC0 (StorPortExtendedFunction.c)
 *     sub_14019EDA4 @ 0x14019EDA4 (sub_14019EDA4.c)
 *     sub_1401B1388 @ 0x1401B1388 (sub_1401B1388.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

char __fastcall sub_140055D8C(__int64 a1)
{
  int (__fastcall *v1)(_QWORD, char *); // rax
  char v2; // bl
  char v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(int (__fastcall **)(_QWORD, char *))(a1 + 48);
  v2 = 0;
  v4 = 0;
  if ( v1 && v1(*(_QWORD *)(a1 + 8), &v4) >= 0 )
    return v4;
  return v2;
}
