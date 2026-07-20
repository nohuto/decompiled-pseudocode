/*
 * XREFs of SmpConfigureFileRenames @ 0x140013DF0
 * Callers:
 *     <none>
 * Callees:
 *     SmpSaveRegistryValue @ 0x140019758 (SmpSaveRegistryValue.c)
 */

__int64 __fastcall SmpConfigureFileRenames(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  __int64 result; // rax

  if ( qword_1400322E0 )
  {
    result = SmpSaveRegistryValue(a6, qword_1400322E0, a3, 0LL, 0LL);
    qword_1400322E0 = 0LL;
  }
  else
  {
    qword_1400322E0 = a3;
    return 0LL;
  }
  return result;
}
