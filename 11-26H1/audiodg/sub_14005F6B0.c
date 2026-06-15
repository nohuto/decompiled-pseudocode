/*
 * XREFs of sub_14005F6B0 @ 0x14005F6B0
 * Callers:
 *     sub_140060190 @ 0x140060190 (sub_140060190.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14005F6B0(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  _OWORD *v5; // rax

  *a3 = 0LL;
  *a2 = 0;
  v5 = CoTaskMemAlloc(0x60uLL);
  if ( !v5 )
    return 2147942414LL;
  *v5 = *(_OWORD *)&dword_1400C6698;
  v5[1] = xmmword_1400C6CB0;
  v5[2] = xmmword_1400C6688;
  v5[3] = xmmword_1400C72F0;
  v5[4] = xmmword_1400C6E30;
  v5[5] = xmmword_1400C9420;
  *a2 = 6;
  *a3 = v5;
  return 0LL;
}
