/*
 * XREFs of sub_1400298E0 @ 0x1400298E0
 * Callers:
 *     sub_14008BB38 @ 0x14008BB38 (sub_14008BB38.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400298E0(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 224);
  if ( result )
    return (unsigned __int8)BYTE2(*(_DWORD *)(result + 104)) | ((((unsigned __int8)*(_DWORD *)(result + 104) << 8) | (unsigned int)(unsigned __int8)BYTE1(*(_DWORD *)(result + 104))) << 8);
  return result;
}
