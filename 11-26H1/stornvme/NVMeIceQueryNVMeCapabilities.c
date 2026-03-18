/*
 * XREFs of NVMeIceQueryNVMeCapabilities @ 0x140031EA8
 * Callers:
 *     NVMeHwFindAdapter @ 0x140012650 (NVMeHwFindAdapter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeIceQueryNVMeCapabilities(unsigned int *a1)
{
  __int64 result; // rax
  unsigned int v3; // ecx
  unsigned int v4; // ecx

  result = StorPortExtendedFunction(0LL, a1, 32LL, 1701672526LL);
  if ( !(_DWORD)result )
  {
    result = StorPortExtendedFunction(140LL, a1, a1[1084], a1[1085]);
    v3 = a1[1086];
    if ( (_DWORD)result )
    {
      v4 = v3 & 0xFFFFFFFD;
      if ( (_DWORD)result == -1056964606 )
        result = 0LL;
    }
    else
    {
      v4 = v3 | 2;
    }
    a1[1086] = v4;
  }
  return result;
}
