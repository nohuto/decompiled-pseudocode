/*
 * XREFs of sub_180013E60 @ 0x180013E60
 * Callers:
 *     sub_180013F00 @ 0x180013F00 (sub_180013F00.c)
 *     sub_18003CDEC @ 0x18003CDEC (sub_18003CDEC.c)
 *     sub_18003CF74 @ 0x18003CF74 (sub_18003CF74.c)
 *     sub_1800627F8 @ 0x1800627F8 (sub_1800627F8.c)
 *     sub_180065618 @ 0x180065618 (sub_180065618.c)
 *     sub_180067CF0 @ 0x180067CF0 (sub_180067CF0.c)
 *     sub_18008EB20 @ 0x18008EB20 (sub_18008EB20.c)
 *     sub_18008ECA0 @ 0x18008ECA0 (sub_18008ECA0.c)
 * Callees:
 *     sub_18003D758 @ 0x18003D758 (sub_18003D758.c)
 */

unsigned __int64 __fastcall sub_180013E60(__int64 a1, _DWORD *a2)
{
  unsigned __int64 v4; // rdx
  unsigned __int64 result; // rax

  sub_18003D758();
  *(_DWORD *)(a1 + 144) = *a2;
  *(_DWORD *)(a1 + 148) = a2[1];
  *(_DWORD *)(a1 + 152) = a2[2];
  v4 = _InterlockedIncrement64(&qword_1801C7C88);
  *(_QWORD *)(a1 + 208) = v4;
  result = *(_QWORD *)(a1 + 216);
  if ( v4 < result )
    v4 = *(_QWORD *)(a1 + 216);
  *(_QWORD *)(a1 + 216) = v4;
  return result;
}
