/*
 * XREFs of sub_18003CD04 @ 0x18003CD04
 * Callers:
 *     sub_18003CDEC @ 0x18003CDEC (sub_18003CDEC.c)
 *     sub_18003D09C @ 0x18003D09C (sub_18003D09C.c)
 *     sub_180065618 @ 0x180065618 (sub_180065618.c)
 *     sub_180067CF0 @ 0x180067CF0 (sub_180067CF0.c)
 * Callees:
 *     sub_18003D758 @ 0x18003D758 (sub_18003D758.c)
 */

unsigned __int64 __fastcall sub_18003CD04(__int64 a1, _DWORD *a2)
{
  unsigned __int64 v4; // rdx
  unsigned __int64 result; // rax

  sub_18003D758();
  *(_DWORD *)(a1 + 156) = *a2;
  *(_DWORD *)(a1 + 160) = a2[1];
  *(_DWORD *)(a1 + 164) = a2[2];
  *(_DWORD *)(a1 + 168) = a2[3];
  v4 = _InterlockedIncrement64(&qword_1801C7C88);
  *(_QWORD *)(a1 + 208) = v4;
  result = *(_QWORD *)(a1 + 216);
  if ( v4 < result )
    v4 = *(_QWORD *)(a1 + 216);
  *(_QWORD *)(a1 + 216) = v4;
  return result;
}
