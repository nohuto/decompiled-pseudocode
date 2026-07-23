/*
 * XREFs of ObpReferenceSecurityDescriptor @ 0x1408F4D90
 * Callers:
 *     ObQuerySecurityDescriptorInfo @ 0x1408F3048 (ObQuerySecurityDescriptorInfo.c)
 *     ObCheckCreateObjectAccess @ 0x1408F4A00 (ObCheckCreateObjectAccess.c)
 *     SeDefaultObjectMethod @ 0x1408FD750 (SeDefaultObjectMethod.c)
 * Callees:
 *     ObpReferenceSecurityDescriptorSlow @ 0x140934FB4 (ObpReferenceSecurityDescriptorSlow.c)
 */

__int64 __fastcall ObpReferenceSecurityDescriptor(__int64 a1)
{
  signed __int64 v1; // rdx
  char v2; // r9
  signed __int64 v3; // rax
  unsigned __int64 v4; // rdx
  unsigned int v5; // r9d

  _m_prefetchw((const void *)(a1 + 40));
  v1 = *(_QWORD *)(a1 + 40);
  v2 = v1;
  if ( (v1 & 0xF) != 0 )
  {
    do
    {
      v3 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 40), v1 - 1, v1);
      if ( v1 == v3 )
        break;
      v1 = v3;
      v2 = v3;
    }
    while ( (v3 & 0xF) != 0 );
  }
  v4 = v1 & 0xFFFFFFFFFFFFFFF0uLL;
  v5 = v2 & 0xF;
  if ( v5 <= 1 && v4 )
    return ObpReferenceSecurityDescriptorSlow(a1, v5, v4);
  else
    return v4;
}
