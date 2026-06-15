/*
 * XREFs of sub_140016F80 @ 0x140016F80
 * Callers:
 *     sub_140016D5C @ 0x140016D5C (sub_140016D5C.c)
 *     sub_140019E50 @ 0x140019E50 (sub_140019E50.c)
 * Callees:
 *     sub_14001FC40 @ 0x14001FC40 (sub_14001FC40.c)
 *     sub_1400257E4 @ 0x1400257E4 (sub_1400257E4.c)
 */

__int64 __fastcall sub_140016F80(__int64 *a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 result; // rax
  char v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  if ( *a1 )
  {
    sub_1400257E4(&v6);
    CM_Unregister_Notification(v2);
    result = sub_14001FC40(&v6);
  }
  *a1 = a2;
  return result;
}
