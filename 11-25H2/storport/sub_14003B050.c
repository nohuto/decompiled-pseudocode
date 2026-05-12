/*
 * XREFs of sub_14003B050 @ 0x14003B050
 * Callers:
 *     sub_140061988 @ 0x140061988 (sub_140061988.c)
 * Callees:
 *     sub_14003CC04 @ 0x14003CC04 (sub_14003CC04.c)
 *     sub_14006B21C @ 0x14006B21C (sub_14006B21C.c)
 */

__int64 __fastcall sub_14003B050(__int64 a1)
{
  _BYTE *v1; // rbx
  NTSTATUS v2; // ebp
  char v3; // al
  _BYTE *v5; // rdi
  __int64 v6; // r8

  v1 = (_BYTE *)(a1 + 104);
  v2 = 0;
  v3 = *(_BYTE *)(a1 + 104);
  v5 = (_BYTE *)(a1 + 104);
  if ( (v3 & 2) == 0 && *(_BYTE *)(a1 + 531) )
  {
    v2 = IoWMIRegistrationControl(*(PDEVICE_OBJECT *)(a1 + 8), (v3 & 4 | 2u) >> 1);
    if ( v2 >= 0 )
    {
      *v1 |= 4u;
      v2 = sub_14006B21C(a1 + 1392, *(_QWORD *)(a1 + 8), v6, 176LL, sub_1400A5CC0);
      if ( v2 >= 0 )
        goto LABEL_5;
      v5 = (_BYTE *)(a1 + 104);
    }
    if ( (*v1 & 4) != 0 )
    {
      IoWMIRegistrationControl(*(PDEVICE_OBJECT *)(a1 + 8), 2u);
      *v1 &= ~4u;
    }
    sub_14003CC04(a1 + 1392);
  }
LABEL_5:
  *v5 |= 2u;
  return (unsigned int)v2;
}
