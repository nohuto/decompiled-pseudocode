/*
 * XREFs of SymCryptEcpointSetValue @ 0x1405645A0
 * Callers:
 *     SymCryptEcurveInitialize @ 0x14055ADA4 (SymCryptEcurveInitialize.c)
 *     SymCryptEckeySetValue @ 0x14055B8D0 (SymCryptEckeySetValue.c)
 * Callees:
 *     SymCryptFdefSizeofModElementFromModulus @ 0x14055AD50 (SymCryptFdefSizeofModElementFromModulus.c)
 *     SymCryptEcurveSizeofFieldElement @ 0x14055B438 (SymCryptEcurveSizeofFieldElement.c)
 *     SymCryptIntCreate @ 0x14055C1F0 (SymCryptIntCreate.c)
 *     SymCryptIntFromModulus @ 0x14055C28C (SymCryptIntFromModulus.c)
 *     SymCryptIntIsLessThan @ 0x14055C34C (SymCryptIntIsLessThan.c)
 *     SymCryptIntSetValue @ 0x14055C3B4 (SymCryptIntSetValue.c)
 *     SymCryptModElementSetValue @ 0x14055C618 (SymCryptModElementSetValue.c)
 *     SymCryptSizeofIntFromDigits @ 0x14055C9A8 (SymCryptSizeofIntFromDigits.c)
 *     SymCryptEcpointCreateEx @ 0x14056436C (SymCryptEcpointCreateEx.c)
 *     SymCryptEcpointTransform @ 0x1405647A4 (SymCryptEcpointTransform.c)
 */

__int64 __fastcall SymCryptEcpointSetValue(
        __int64 a1,
        int a2,
        unsigned __int64 a3,
        int a4,
        int a5,
        __int64 a6,
        int a7,
        _BYTE *a8,
        __int64 a9)
{
  __int64 result; // rax
  unsigned __int64 v13; // r13
  int v14; // ebx
  __int64 v15; // r14
  _BYTE *v16; // r12
  int v17; // edi
  _BYTE *v18; // rcx
  __int64 v19; // rbx

  SymCryptFdefSizeofModElementFromModulus(a1);
  if ( a3 != (unsigned int)SymCryptEcurveSizeofFieldElement(a1)
           * *((_DWORD *)SymCryptEcpointFormatNumberofElements + a5) )
    return 32781LL;
  v13 = a3 / *((unsigned int *)SymCryptEcpointFormatNumberofElements + a5);
  SymCryptSizeofIntFromDigits();
  SymCryptIntCreate();
  v14 = 0;
  if ( !*((_DWORD *)SymCryptEcpointFormatNumberofElements + a5) )
  {
LABEL_7:
    v15 = (unsigned int)(4 * *(_DWORD *)(a1 + 36) + 32);
    v16 = SymCryptEcpointCreateEx(a8, v15, a1, 4u);
    if ( v16 )
    {
      v17 = 0;
      if ( !*((_DWORD *)SymCryptEcpointFormatNumberofElements + a5) )
      {
        v19 = a9 - v15;
        return SymCryptEcpointTransform(a1, (_DWORD)v16, a6, a5, 1, a7, (__int64)&a8[v15], v19);
      }
      while ( 1 )
      {
        v18 = &v16[*(_DWORD *)(a1 + 36) * v17 + 32];
        if ( !v18 )
          break;
        v19 = a9 - v15;
        result = SymCryptModElementSetValue(a2, v13, a4, *(_DWORD **)(a1 + 616), v18, (__int64)&a8[v15], a9 - v15);
        if ( (_DWORD)result )
          return result;
        a2 += v13;
        if ( (unsigned int)++v17 >= *((_DWORD *)SymCryptEcpointFormatNumberofElements + a5) )
          return SymCryptEcpointTransform(a1, (_DWORD)v16, a6, a5, 1, a7, (__int64)&a8[v15], v19);
      }
    }
    return 32780LL;
  }
  while ( 1 )
  {
    result = SymCryptIntSetValue();
    if ( (_DWORD)result )
      return result;
    SymCryptIntFromModulus();
    if ( !(unsigned int)SymCryptIntIsLessThan() )
      return 32782LL;
    if ( (unsigned int)++v14 >= *((_DWORD *)SymCryptEcpointFormatNumberofElements + a5) )
      goto LABEL_7;
  }
}
