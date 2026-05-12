/*
 * XREFs of sub_1400296E0 @ 0x1400296E0
 * Callers:
 *     sub_14000CCB0 @ 0x14000CCB0 (sub_14000CCB0.c)
 *     sub_140012944 @ 0x140012944 (sub_140012944.c)
 *     sub_1400129E0 @ 0x1400129E0 (sub_1400129E0.c)
 *     sub_140012E50 @ 0x140012E50 (sub_140012E50.c)
 *     sub_14001AB28 @ 0x14001AB28 (sub_14001AB28.c)
 *     sub_14001F5FC @ 0x14001F5FC (sub_14001F5FC.c)
 *     sub_140029648 @ 0x140029648 (sub_140029648.c)
 *     Callback @ 0x140045BD0 (Callback.c)
 *     sub_14005595C @ 0x14005595C (sub_14005595C.c)
 *     sub_140061988 @ 0x140061988 (sub_140061988.c)
 *     sub_14006A4DC @ 0x14006A4DC (sub_14006A4DC.c)
 *     sub_140077B00 @ 0x140077B00 (sub_140077B00.c)
 *     sub_140077BF8 @ 0x140077BF8 (sub_140077BF8.c)
 *     sub_140077D58 @ 0x140077D58 (sub_140077D58.c)
 *     sub_14007A1F0 @ 0x14007A1F0 (sub_14007A1F0.c)
 *     sub_140178FA0 @ 0x140178FA0 (sub_140178FA0.c)
 *     sub_14017A21C @ 0x14017A21C (sub_14017A21C.c)
 *     sub_14017A65C @ 0x14017A65C (sub_14017A65C.c)
 *     sub_1401AD7BC @ 0x1401AD7BC (sub_1401AD7BC.c)
 *     sub_1401B0538 @ 0x1401B0538 (sub_1401B0538.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1400296E0(__int64 a1)
{
  __int64 (__fastcall *v1)(__int64); // rax
  __int64 result; // rax
  int v3; // ecx

  v1 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 232) + 120LL);
  if ( !v1 )
    return 3221225659LL;
  result = v1(*(_QWORD *)(a1 + 240) + 16LL);
  v3 = result;
  if ( (_DWORD)result )
  {
    result = 3221225473LL;
    if ( v3 == 2 )
      return 2147483665LL;
  }
  return result;
}
