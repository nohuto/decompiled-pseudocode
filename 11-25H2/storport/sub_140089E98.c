/*
 * XREFs of sub_140089E98 @ 0x140089E98
 * Callers:
 *     sub_140044EDC @ 0x140044EDC (sub_140044EDC.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_140089E98(__int64 a1, __int64 a2, __int64 a3)
{
  bool v3; // cl
  _BYTE *v4; // rdx

  v3 = 0;
  if ( *(_DWORD *)(a3 + 24) == 1 )
  {
    v4 = *(_BYTE **)(*(_QWORD *)(a3 + 32) + 144LL);
    if ( v4[5] == 11 && v4[6] == 0xBE )
      v3 = v4[7] == 0xF0;
    return dword_140168420 == 1 || dword_140168420 != 0 && v3;
  }
  return v3;
}
