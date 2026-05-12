/*
 * XREFs of sub_140053318 @ 0x140053318
 * Callers:
 *     sub_140031B18 @ 0x140031B18 (sub_140031B18.c)
 *     sub_140185144 @ 0x140185144 (sub_140185144.c)
 * Callees:
 *     sub_140035B00 @ 0x140035B00 (sub_140035B00.c)
 *     sub_140053370 @ 0x140053370 (sub_140053370.c)
 */

__int64 __fastcall sub_140053318(__int64 a1)
{
  _BYTE *v2; // rax
  __int64 result; // rax

  *(_DWORD *)(a1 + 3576) = _InterlockedIncrement(&dword_140168760);
  v2 = *(_BYTE **)(a1 + 112);
  if ( v2 && (*v2 & 0x1F) == 1 )
    sub_140035B00(a1, 1u, 1u);
  sub_140053370(a1);
  result = *(_QWORD *)(a1 + 8);
  *(_DWORD *)(result + 48) &= ~0x80u;
  return result;
}
