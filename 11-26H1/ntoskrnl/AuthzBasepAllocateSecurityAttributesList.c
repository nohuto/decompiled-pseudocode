/*
 * XREFs of AuthzBasepAllocateSecurityAttributesList @ 0x1403B2488
 * Callers:
 *     SepVerifyDesktopAppxPackageName @ 0x1403AF970 (SepVerifyDesktopAppxPackageName.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1403B0C10 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x140895F40 (AuthzBasepInitializeSystemSecurityAttributes.c)
 *     SepCreateClaimAttributes @ 0x140AF2AAC (SepCreateClaimAttributes.c)
 *     SepDuplicateClaimAttributes @ 0x140AFDB28 (SepDuplicateClaimAttributes.c)
 * Callees:
 *     AuthzBasepMemAlloc @ 0x1403B24D0 (AuthzBasepMemAlloc.c)
 */

__int64 __fastcall AuthzBasepAllocateSecurityAttributesList(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = AuthzBasepMemAlloc(48LL, a2, 1950442835LL);
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
