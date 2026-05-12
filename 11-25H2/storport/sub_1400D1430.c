/*
 * XREFs of sub_1400D1430 @ 0x1400D1430
 * Callers:
 *     sub_1400D5D7C @ 0x1400D5D7C (sub_1400D5D7C.c)
 *     sub_1400D629C @ 0x1400D629C (sub_1400D629C.c)
 * Callees:
 *     sub_14003CC04 @ 0x14003CC04 (sub_14003CC04.c)
 *     sub_14006B21C @ 0x14006B21C (sub_14006B21C.c)
 */

__int64 __fastcall sub_1400D1430(__int64 a1)
{
  _QWORD *v1; // rbx
  int v2; // ebp
  unsigned __int64 v3; // rdx
  _QWORD *v5; // rdi
  __int64 v6; // r8

  v1 = (_QWORD *)(a1 + 144);
  v2 = 0;
  v3 = *(_QWORD *)(a1 + 144);
  v5 = (_QWORD *)(a1 + 144);
  if ( (v3 & 4) == 0 && *(_BYTE *)(a1 + 323) )
  {
    v2 = IoWMIRegistrationControl(*(PDEVICE_OBJECT *)(a1 + 8), (v3 >> 2) & 2 | 1);
    if ( v2 >= 0 )
    {
      *v1 |= 8uLL;
      v2 = sub_14006B21C(a1 + 736, *(void **)(a1 + 8), v6, 0xA0u, (__int64)sub_1400A5BE0);
      if ( v2 >= 0 )
        goto LABEL_9;
      v5 = (_QWORD *)(a1 + 144);
    }
    if ( (*(_BYTE *)v1 & 8) != 0 )
    {
      IoWMIRegistrationControl(*(PDEVICE_OBJECT *)(a1 + 8), 2u);
      *v1 &= ~8uLL;
    }
    sub_14003CC04((union _SLIST_HEADER *)(a1 + 736));
  }
LABEL_9:
  *v5 |= 4uLL;
  return (unsigned int)v2;
}
