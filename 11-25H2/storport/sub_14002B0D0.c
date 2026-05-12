/*
 * XREFs of sub_14002B0D0 @ 0x14002B0D0
 * Callers:
 *     sub_1400068E0 @ 0x1400068E0 (sub_1400068E0.c)
 *     sub_14000C020 @ 0x14000C020 (sub_14000C020.c)
 *     sub_14000C6B0 @ 0x14000C6B0 (sub_14000C6B0.c)
 *     sub_140025E00 @ 0x140025E00 (sub_140025E00.c)
 *     sub_1400267A0 @ 0x1400267A0 (sub_1400267A0.c)
 *     sub_14002A7F0 @ 0x14002A7F0 (sub_14002A7F0.c)
 * Callees:
 *     sub_14002B140 @ 0x14002B140 (sub_14002B140.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_14002B0D0(PVOID Context)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int128 v4; // [rsp+30h] [rbp-28h] BYREF
  __int64 v5; // [rsp+40h] [rbp-18h]
  int v6; // [rsp+48h] [rbp-10h]

  v4 = 0LL;
  v5 = 0LL;
  v6 = 0;
  while ( 1 )
  {
    result = sub_14002B140(Context);
    if ( !result )
      break;
    v3 = *(_QWORD *)(*(_QWORD *)(result - 120 + 184) + 32LL);
    (*(void (__fastcall **)(_QWORD, __int64, __int128 *, _QWORD))(v3 + 712))(
      *(_QWORD *)(v3 + 704),
      result - 120,
      &v4,
      0LL);
  }
  return result;
}
