/*
 * XREFs of _dynamic_initializer_for__CCommonRegistryData::GameAreaScreenRatio__ @ 0x1800079D0
 * Callers:
 *     <none>
 * Callees:
 *     ?RegGetDwmDwordHelper@@YA_NPEBGPEAKW4DwmRegistrySubkey@@@Z @ 0x1801CAAC8 (-RegGetDwmDwordHelper@@YA_NPEBGPEAKW4DwmRegistrySubkey@@@Z.c)
 */

__int64 dynamic_initializer_for__CCommonRegistryData::GameAreaScreenRatio__()
{
  __int64 result; // rax
  int v1; // ecx
  int v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  result = RegGetDwmDwordHelper(L"GameAreaScreenRatio", &v2, 0LL);
  v1 = 10;
  if ( (_BYTE)result )
    v1 = v2;
  CCommonRegistryData::GameAreaScreenRatio = v1;
  return result;
}
