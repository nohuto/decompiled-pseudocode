/*
 * XREFs of ?ValidateSecurityDescriptorDacl@@YAHPEAU_ACL@@0@Z @ 0x180106A50
 * Callers:
 *     ?InitializePnpInfo@@YAHXZ @ 0x1801063F8 (-InitializePnpInfo@@YAHXZ.c)
 * Callees:
 *     memcmp_0 @ 0x1800B31F0 (memcmp_0.c)
 *     memset_0 @ 0x1800B3208 (memset_0.c)
 */

void *__fastcall ValidateSecurityDescriptorDacl(PACL pAcl, PACL a2)
{
  SIZE_T v4; // r8
  unsigned int v5; // ebx
  void *result; // rax
  void *v7; // r14
  DWORD v8; // ebp
  __int64 i; // rdi
  __int64 j; // rdi
  LPVOID pAce; // [rsp+58h] [rbp+10h] BYREF
  LPVOID Buf1; // [rsp+60h] [rbp+18h] BYREF

  v4 = 4LL * a2->AceCount;
  pAce = 0LL;
  v5 = 0;
  Buf1 = 0LL;
  result = HeapAlloc(g_hHeap, 0, v4);
  v7 = result;
  if ( result )
  {
    memset_0(result, 0, 4LL * a2->AceCount);
    v8 = 0;
LABEL_3:
    if ( v8 < pAcl->AceCount )
    {
      v5 = 0;
      if ( !GetAce(pAcl, v8, &pAce) )
      {
LABEL_20:
        HeapFree(g_hHeap, 0, v7);
        return (void *)v5;
      }
      for ( i = 0LL; (unsigned int)i < a2->AceCount; i = (unsigned int)(i + 1) )
      {
        if ( !GetAce(a2, i, &Buf1) )
          goto LABEL_20;
        if ( *((_WORD *)Buf1 + 1) == *((_WORD *)pAce + 1) && !memcmp_0(Buf1, pAce, *((unsigned __int16 *)pAce + 1)) )
        {
          v5 = 1;
          ++v8;
          *((_DWORD *)v7 + i) = 1;
          goto LABEL_3;
        }
      }
    }
    if ( v5 )
    {
      for ( j = 0LL; (unsigned int)j < a2->AceCount; j = (unsigned int)(j + 1) )
      {
        if ( !*((_DWORD *)v7 + j) && (!GetAce(a2, j, &pAce) || (*((_BYTE *)pAce + 1) & 0x10) == 0) )
        {
          v5 = 0;
          goto LABEL_20;
        }
      }
    }
    goto LABEL_20;
  }
  return result;
}
