/*
 * XREFs of AMLIGetValidNamespaceName @ 0x14006DF68
 * Callers:
 *     AMLICreateNativeNamespaceObject @ 0x14006D1E8 (AMLICreateNativeNamespaceObject.c)
 *     AMLIAddNextNamespaceOverride @ 0x14006D790 (AMLIAddNextNamespaceOverride.c)
 *     AMLIAddNextNamespaceOverrideObject @ 0x14006D900 (AMLIAddNextNamespaceOverrideObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AMLIGetValidNamespaceName(__int64 a1, int *a2)
{
  unsigned int v2; // r8d
  unsigned int v3; // r10d
  __int64 v4; // r11
  __int64 v5; // rbx
  int v7; // [rsp+18h] [rbp+18h]

  v2 = 0;
  v7 = 1600085855;
  v3 = 0;
  v4 = a1;
  while ( v3 < 4 )
  {
    LOBYTE(a1) = *(_BYTE *)(v3 + v4);
    if ( !(_BYTE)a1 )
      break;
    if ( (unsigned __int8)(a1 - 48) > 0x2Fu || (v5 = 0x87FFFFFE03FFLL, !_bittest64(&v5, (unsigned int)(a1 - 48))) )
    {
      if ( (unsigned __int8)(a1 - 97) > 0x19u )
        return (unsigned int)-1073741811;
    }
    *((_BYTE *)&v7 + v3++) = a1;
  }
  if ( *(_BYTE *)(v3 + v4) )
    return (unsigned int)-1073741811;
  if ( a2 )
    *a2 = v7;
  return v2;
}
