/*
 * XREFs of sub_14004F968 @ 0x14004F968
 * Callers:
 *     sub_14004CE60 @ 0x14004CE60 (sub_14004CE60.c)
 *     sub_14004CEE8 @ 0x14004CEE8 (sub_14004CEE8.c)
 *     sub_14005089C @ 0x14005089C (sub_14005089C.c)
 * Callees:
 *     sub_14001FC40 @ 0x14001FC40 (sub_14001FC40.c)
 *     sub_1400257E4 @ 0x1400257E4 (sub_1400257E4.c)
 */

void __fastcall sub_14004F968(__int64 *a1, __int64 a2)
{
  __int64 v2; // rdi
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  if ( *a1 )
  {
    sub_1400257E4((__int64)&v5);
    RtlUnsubscribeWnfStateChangeNotification(v2);
    sub_14001FC40((__int64)&v5);
  }
  *a1 = a2;
}
