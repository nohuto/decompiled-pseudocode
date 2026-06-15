/*
 * XREFs of sub_140073790 @ 0x140073790
 * Callers:
 *     sub_140073F98 @ 0x140073F98 (sub_140073F98.c)
 * Callees:
 *     sub_140073954 @ 0x140073954 (sub_140073954.c)
 */

HRESULT __fastcall sub_140073790(const IID *a1)
{
  return CoCreateInstance(
           a1 + 9,
           (LPUNKNOWN)((unsigned __int64)a1->Data4 & ((unsigned __int128)-(__int128)(unsigned __int64)a1 >> 64)),
           1u,
           &stru_1400C6598,
           (LPVOID *)a1[8].Data4);
}
