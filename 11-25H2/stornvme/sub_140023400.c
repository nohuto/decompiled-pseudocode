/*
 * XREFs of sub_140023400 @ 0x140023400
 * Callers:
 *     sub_140021020 @ 0x140021020 (sub_140021020.c)
 *     sub_140023C40 @ 0x140023C40 (sub_140023C40.c)
 *     sub_140026970 @ 0x140026970 (sub_140026970.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_140023400(__int64 a1)
{
  __int64 v1; // rax
  char v2; // dl

  v1 = *(_QWORD *)(a1 + 1560);
  v2 = 0;
  if ( v1 && (*(_BYTE *)(v1 + 260) & 0x10) != 0 )
    return (*(_BYTE *)(a1 + 56) & 0x20) == 0;
  return v2;
}
