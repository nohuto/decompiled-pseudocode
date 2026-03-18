/*
 * XREFs of MiHandleEnclaveFault @ 0x14077BFB4
 * Callers:
 *     MmAccessFault @ 0x1403A2390 (MmAccessFault.c)
 * Callees:
 *     MiUnlockAndDereferenceVadShared @ 0x14027DA30 (MiUnlockAndDereferenceVadShared.c)
 *     MiObtainReferencedVadEx @ 0x1402D0160 (MiObtainReferencedVadEx.c)
 *     MiReadVadFlags @ 0x1404655D0 (MiReadVadFlags.c)
 */

__int64 __fastcall MiHandleEnclaveFault(unsigned __int64 a1)
{
  ULONG_PTR v1; // rcx
  __int64 result; // rax
  ULONG_PTR v3; // rcx
  unsigned int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0;
  v1 = MiObtainReferencedVadEx(a1, 2LL, (int *)&v4);
  result = 3221225477LL;
  v4 = -1073741819;
  if ( v1 )
  {
    if ( (MiReadVadFlags(v1) & 0x880000) == 0x880000
      && (*(_DWORD *)(v3 + 72) & 1) != 0
      && (*(_DWORD *)(v3 + 80) & 1) != 0 )
    {
      v4 = -1073740638;
    }
    MiUnlockAndDereferenceVadShared(v3);
    return v4;
  }
  return result;
}
