/*
 * XREFs of AuthzBasepQueryClaimAttributesToken @ 0x140A92D0C
 * Callers:
 *     SeQueryInformationToken @ 0x1408FA8C0 (SeQueryInformationToken.c)
 *     NtQueryInformationToken @ 0x140B81F50 (NtQueryInformationToken.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     AuthzBasepGetClaimAttributesCopyoutBufferSize @ 0x140A92DC4 (AuthzBasepGetClaimAttributesCopyoutBufferSize.c)
 *     AuthzBasepCopyoutClaimAttributes @ 0x140B30D10 (AuthzBasepCopyoutClaimAttributes.c)
 */

__int64 __fastcall AuthzBasepQueryClaimAttributesToken(_DWORD *a1, _OWORD *a2, unsigned int a3, _DWORD *a4)
{
  bool v5; // zf
  size_t v7; // rbp
  __int64 result; // rax
  int v10; // ebx
  size_t v11; // [rsp+40h] [rbp+8h] BYREF

  *a4 = 0;
  v5 = *a1 == 0;
  v7 = a3;
  v11 = 0LL;
  if ( v5 )
  {
    if ( a3 < 0x10 )
    {
      result = 3221225507LL;
    }
    else
    {
      result = 0LL;
      *a2 = 0LL;
      *(_WORD *)a2 = 1;
    }
    *a4 = 16;
  }
  else
  {
    result = AuthzBasepGetClaimAttributesCopyoutBufferSize(a1, &v11);
    if ( (int)result >= 0 )
    {
      v10 = v11;
      if ( v11 )
      {
        if ( v7 >= v11 )
        {
          memset_0(a2, 0, v7);
          result = AuthzBasepCopyoutClaimAttributes(a1, a2, v7);
        }
        else
        {
          result = 3221225507LL;
        }
        *a4 = v10;
      }
      else
      {
        return 3221225485LL;
      }
    }
  }
  return result;
}
