/*
 * XREFs of _IsPseudoDevice @ 0x140159680
 * Callers:
 *     TouchTargetingEnabledForInput @ 0x1401595E0 (TouchTargetingEnabledForInput.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x14006E810 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall IsPseudoDevice(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx
  __int64 v4; // rax

  v2 = *(_QWORD *)(a1 + 16);
  v3 = 1;
  if ( v2 )
  {
    LOBYTE(a2) = 19;
    v4 = HMValidateHandleNoSecure(v2, a2);
    if ( v4 )
      return (*(_DWORD *)(v4 + 168) >> 13) & 1;
  }
  return v3;
}
