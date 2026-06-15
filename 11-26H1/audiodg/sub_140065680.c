/*
 * XREFs of sub_140065680 @ 0x140065680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140065680(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  _OWORD *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = CoTaskMemAlloc(0x40uLL);
  if ( v6 )
  {
    *v6 = *(_OWORD *)&dword_1400C6698;
    v6[1] = *(_OWORD *)&dword_1400C6A80;
    v6[2] = xmmword_1400C6688;
    v6[3] = unk_1400F5B10;
    *a2 = 4;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
