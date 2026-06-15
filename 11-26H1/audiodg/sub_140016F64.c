/*
 * XREFs of sub_140016F64 @ 0x140016F64
 * Callers:
 *     sub_140016D5C @ 0x140016D5C (sub_140016D5C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140016F64(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return CM_Unregister_Notification();
  return result;
}
