/*
 * XREFs of sub_140034770 @ 0x140034770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_140034770(__int64 a1)
{
  return (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 24)) | (unsigned __int64)(((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 24)) | ((unsigned __int8)*(_DWORD *)(a1 + 24) << 8)) << 8);
}
