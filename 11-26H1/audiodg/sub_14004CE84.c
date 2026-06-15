/*
 * XREFs of sub_14004CE84 @ 0x14004CE84
 * Callers:
 *     sub_14004CEE8 @ 0x14004CEE8 (sub_14004CEE8.c)
 *     sub_14004D330 @ 0x14004D330 (sub_14004D330.c)
 *     sub_14005089C @ 0x14005089C (sub_14005089C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14004CE84(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return RtlUnsubscribeWnfStateChangeNotification();
  return result;
}
