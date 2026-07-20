/*
 * XREFs of SmpConfigureExecute @ 0x140013990
 * Callers:
 *     <none>
 * Callees:
 *     SmpSaveRegistryValue @ 0x1400193B0 (SmpSaveRegistryValue.c)
 */

__int64 __fastcall SmpConfigureExecute(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, _DWORD *a6)
{
  __int64 result; // rax
  _QWORD v7[3]; // [rsp+30h] [rbp-18h] BYREF

  v7[0] = 0LL;
  result = SmpSaveRegistryValue(a6 + 10, a3, 0LL, 1LL, v7);
  if ( (int)result >= 0 )
  {
    ++*a6;
    a6[1] += *(unsigned __int16 *)(v7[0] + 16LL) + 2;
  }
  return result;
}
