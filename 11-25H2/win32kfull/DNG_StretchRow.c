/*
 * XREFs of DNG_StretchRow @ 0x1400CD3B0
 * Callers:
 *     DNG_DrawRow @ 0x1400CD010 (DNG_DrawRow.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall DNG_StretchRow(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  __int64 v4; // rdi
  unsigned int v5; // esi
  unsigned int v6; // r11d
  _DWORD *v7; // r10
  unsigned __int64 v8; // rbx
  _DWORD *result; // rax
  unsigned __int64 v10; // r9
  bool v11; // cf

  v4 = a4[3];
  v5 = a4[2];
  v6 = a4[1];
  v7 = (_DWORD *)(a2 + 4LL * (int)a4[6]);
  v8 = a2 + 4LL * (int)a4[7];
  result = (_DWORD *)(a3 + 4LL * *a4);
  v10 = a3 + 4LL * (*(_DWORD *)(a1 + 52) - *(_DWORD *)(a1 + 56));
  if ( *(_QWORD *)(a1 + 216) <= (unsigned __int64)v7
    && v8 <= *(_QWORD *)(a1 + 224)
    && *(_QWORD *)(a1 + 232) <= (unsigned __int64)result
    && v10 <= *(_QWORD *)(a1 + 240)
    && (unsigned __int64)v7 < v8 )
  {
    do
    {
      if ( (unsigned __int64)result >= v10 )
        break;
      v11 = v6 + v5 < v6;
      *v7 = *result;
      v6 += v5;
      ++v7;
      result += v11 + v4;
    }
    while ( (unsigned __int64)v7 < v8 );
  }
  return result;
}
