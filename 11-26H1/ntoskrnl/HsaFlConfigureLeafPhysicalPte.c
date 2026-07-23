/*
 * XREFs of HsaFlConfigureLeafPhysicalPte @ 0x1405ADB50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HsaFlConfigureLeafPhysicalPte(unsigned __int64 *a1, unsigned __int64 a2, char a3, unsigned int a4)
{
  int v5; // ebx
  unsigned int v7; // r10d
  unsigned __int64 i; // r8
  unsigned __int64 v10; // r9
  __int64 v11; // rdx

  v5 = a3 & 2;
  if ( (a3 & 1) == 0 )
    return 0LL;
  v7 = 0;
  for ( i = a2 >> 12; v7 < a4; ++a1 )
  {
    v10 = *a1;
    if ( *a1 && ((v10 >> 12) & 0xFFFFFFFFFFLL) != i )
      break;
    v11 = i++ << 12;
    ++v7;
    *a1 = v11 & 0xFFFFFFFFFF000LL ^ (v10 & 0xFFF0000000000FFDuLL | (v5 != 0 ? 2uLL : 0)) | 0x8000000000000005uLL;
  }
  return v7;
}
