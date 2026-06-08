/*
 * XREFs of GetHvProcessorInfo @ 0x14000DB24
 * Callers:
 *     RegisterHvPackage @ 0x14003E080 (RegisterHvPackage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetHvProcessorInfo(int a1)
{
  __int64 v1; // r9
  unsigned int i; // r8d

  v1 = 0LL;
  for ( i = 0; i < dword_140015B88; ++i )
  {
    if ( a1 == *(_DWORD *)(qword_140015B80 + 12LL * i) )
      return qword_140015B80 + 12LL * i;
  }
  return v1;
}
