/*
 * XREFs of BiSetObjectDescription @ 0x140B56BF0
 * Callers:
 *     BiCreateObject @ 0x1409A3A50 (BiCreateObject.c)
 * Callees:
 *     BiSetRegistryValue @ 0x1409A57C0 (BiSetRegistryValue.c)
 *     BiCreateKey @ 0x1409A6848 (BiCreateKey.c)
 *     BiCloseKey @ 0x1409A7258 (BiCloseKey.c)
 */

__int64 __fastcall BiSetObjectDescription(unsigned __int64 a1, __int64 a2)
{
  __int64 result; // rax
  bool v5; // [rsp+50h] [rbp+18h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp+20h] BYREF

  Handle = 0LL;
  result = BiCreateKey(a1, L"Description", 0x20019u, 1u, &Handle, &v5);
  if ( (int)result >= 0 )
  {
    BiCloseKey(Handle);
    return BiSetRegistryValue(a1, L"Type", (__int64)L"Description", 4u, (PVOID)(a2 + 4), 4u);
  }
  return result;
}
