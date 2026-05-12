/*
 * XREFs of sub_1400C941C @ 0x1400C941C
 * Callers:
 *     sub_1400CE144 @ 0x1400CE144 (sub_1400CE144.c)
 *     sub_1400CE6F0 @ 0x1400CE6F0 (sub_1400CE6F0.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1400C941C(__int64 a1)
{
  __int64 v1; // rax
  char v2; // dl
  __int64 v3; // rax

  v1 = *(_QWORD *)(a1 + 592);
  v2 = 0;
  if ( v1 )
  {
    if ( (*(_BYTE *)(v1 + 260) & 0x10) != 0 )
    {
      v3 = *(_QWORD *)(a1 + 1048);
      if ( v3 )
        return (*(_BYTE *)(v3 + 24) & 0x20) == 0;
    }
  }
  return v2;
}
