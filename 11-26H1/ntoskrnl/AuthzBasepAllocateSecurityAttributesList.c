/*
 * XREFs of AuthzBasepAllocateSecurityAttributesList @ 0x1403CAE7C
 * Callers:
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1403CC2F0 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SepVerifyDesktopAppxPackageName @ 0x1403D0998 (SepVerifyDesktopAppxPackageName.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x14088FB44 (AuthzBasepInitializeSystemSecurityAttributes.c)
 *     SepCreateClaimAttributes @ 0x140AEFEE8 (SepCreateClaimAttributes.c)
 *     SepDuplicateClaimAttributes @ 0x140AFBF28 (SepDuplicateClaimAttributes.c)
 * Callees:
 *     AuthzBasepMemAlloc @ 0x1403CAE50 (AuthzBasepMemAlloc.c)
 */

__int64 AuthzBasepAllocateSecurityAttributesList()
{
  __int64 result; // rax

  result = AuthzBasepMemAlloc();
  if ( result )
  {
    *(_DWORD *)(result + 4) = 0;
    *(_DWORD *)(result + 28) = 0;
    *(_QWORD *)(result + 16) = result + 8;
    *(_QWORD *)(result + 8) = result + 8;
    *(_DWORD *)result = 0;
    *(_QWORD *)(result + 40) = result + 32;
    *(_QWORD *)(result + 32) = result + 32;
    *(_DWORD *)(result + 24) = 0;
  }
  return result;
}
