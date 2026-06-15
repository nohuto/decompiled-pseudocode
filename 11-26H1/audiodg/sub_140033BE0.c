/*
 * XREFs of sub_140033BE0 @ 0x140033BE0
 * Callers:
 *     sub_140033AE4 @ 0x140033AE4 (sub_140033AE4.c)
 * Callees:
 *     sub_14003FB78 @ 0x14003FB78 (sub_14003FB78.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 *     memset @ 0x14004A6AC (memset.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=4
__int64 *__fastcall sub_140033BE0(__int64 *a1)
{
  void *v2; // rax
  void *v3; // rbx
  __int64 v4; // rbx

  *a1 = 0LL;
  v2 = (void *)sub_140049338(104LL, &unk_1400C75FC);
  v3 = v2;
  if ( v2 )
  {
    memset(v2, 0, 0x68uLL);
    v4 = sub_14003FB78(v3);
    if ( *a1 )
      sub_1400B6010(*a1);
    *a1 = v4;
    v3 = 0LL;
  }
  if ( v3 )
    j_j__o_free(v3, 1LL);
  return a1;
}
