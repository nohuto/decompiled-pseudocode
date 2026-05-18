/*
 * XREFs of sub_180039010 @ 0x180039010
 * Callers:
 *     sub_180042E1C @ 0x180042E1C (sub_180042E1C.c)
 *     sub_18008022C @ 0x18008022C (sub_18008022C.c)
 * Callees:
 *     sub_180013540 @ 0x180013540 (sub_180013540.c)
 *     sub_180042A7C @ 0x180042A7C (sub_180042A7C.c)
 */

void __fastcall sub_180039010(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbx
  _QWORD *v3; // r11
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx

  v2 = *(_QWORD *)(a1 + 96);
  v3 = a2;
  v4 = *a2;
  v5 = *(_QWORD *)(v2 + 14496);
  if ( v5 != v4 )
  {
    v6 = *(_QWORD *)(v4 + 112);
    v7 = *(_QWORD *)(v5 + 112);
    if ( v7 != v6 && (!v7 || !v6 || !(unsigned __int8)sub_180042A7C()) )
    {
      sub_180013540((__int64 *)(v2 + 14496), v3);
      *(_BYTE *)(v2 + 14533) = 1;
    }
  }
}
