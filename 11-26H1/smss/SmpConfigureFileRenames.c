/*
 * XREFs of SmpConfigureFileRenames @ 0x140013A20
 * Callers:
 *     <none>
 * Callees:
 *     SmpSaveRegistryValue @ 0x1400193B0 (SmpSaveRegistryValue.c)
 */

__int64 __fastcall SmpConfigureFileRenames(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  __int64 result; // rax

  if ( qword_140031290 )
  {
    result = SmpSaveRegistryValue(a6, qword_140031290, a3, 0LL, 0LL);
    qword_140031290 = 0LL;
  }
  else
  {
    qword_140031290 = a3;
    return 0LL;
  }
  return result;
}
