/*
 * XREFs of SymCryptEcpointGetValue @ 0x1405667FC
 * Callers:
 *     SymCryptEcDsaSignEx @ 0x14055EED8 (SymCryptEcDsaSignEx.c)
 *     SymCryptEcDsaVerify @ 0x14055F56C (SymCryptEcDsaVerify.c)
 *     SymCryptEcDhSecretAgreement @ 0x140573CE4 (SymCryptEcDhSecretAgreement.c)
 * Callees:
 *     SymCryptEcurveSizeofFieldElement @ 0x14055D91C (SymCryptEcurveSizeofFieldElement.c)
 *     SymCryptModElementGetValue @ 0x14055EA84 (SymCryptModElementGetValue.c)
 *     SymCryptEcpointCreateEx @ 0x14056675C (SymCryptEcpointCreateEx.c)
 *     SymCryptEcpointTransform @ 0x140566B94 (SymCryptEcpointTransform.c)
 */

__int64 __fastcall SymCryptEcpointGetValue(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        unsigned __int64 a6,
        int a7,
        _BYTE *a8,
        __int64 a9)
{
  __int64 v9; // rbx
  int v11; // eax
  __int64 v12; // rbp
  unsigned __int64 v13; // rcx
  __int64 result; // rax
  unsigned __int64 v15; // r15
  __int64 v16; // rdi
  _BYTE *v17; // r12
  __int64 v18; // r13
  __int64 v19; // r14
  int v20; // ebx
  int v21; // edi
  _BYTE *v22; // rdx

  v9 = a4;
  v11 = SymCryptEcurveSizeofFieldElement(a1);
  v12 = v9;
  v13 = *((unsigned int *)SymCryptEcpointFormatNumberofElements + v9);
  if ( a6 != (_DWORD)v13 * v11 )
    return 32781LL;
  v15 = a6 / v13;
  v16 = (unsigned int)(4 * *(_DWORD *)(a1 + 36) + 32);
  v17 = SymCryptEcpointCreateEx(a8, v16, a1, 4u);
  if ( !v17 )
    return 32780LL;
  v18 = (__int64)&a8[v16];
  v19 = a9 - v16;
  result = SymCryptEcpointTransform(a1, a2, (_DWORD)v17, v9, 0, a7, (__int64)&a8[v16], a9 - v16);
  if ( !(_DWORD)result )
  {
    v20 = 0;
    if ( *((_DWORD *)SymCryptEcpointFormatNumberofElements + v12) )
    {
      v21 = a5;
      while ( 1 )
      {
        v22 = &v17[*(_DWORD *)(a1 + 36) * v20 + 32];
        if ( !v22 )
          break;
        result = SymCryptModElementGetValue(*(_QWORD *)(a1 + 616), (int)v22, v21, v15, a3, v18, v19);
        if ( !(_DWORD)result )
        {
          v21 += v15;
          if ( (unsigned int)++v20 < *((_DWORD *)SymCryptEcpointFormatNumberofElements + v12) )
            continue;
        }
        return result;
      }
      return 32780LL;
    }
  }
  return result;
}
