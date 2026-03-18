/*
 * XREFs of SepSddlLookupAccessMaskInTable @ 0x1400DAF80
 * Callers:
 *     SepSddlGetAclForString @ 0x1400DAB3C (SepSddlGetAclForString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepSddlLookupAccessMaskInTable(wchar_t *String, unsigned int *AccessMask, wchar_t **End)
{
  unsigned int i; // ebx
  __int64 result; // rax

  for ( i = 0; i < 8; ++i )
  {
    if ( !_wcsnicmp(String, RightsLookup[i].Key, RightsLookup[i].KeyLen) )
    {
      result = 1LL;
      *AccessMask = RightsLookup[i].Value;
      *End = &String[RightsLookup[i].KeyLen];
      return result;
    }
  }
  *AccessMask = 0;
  result = 0LL;
  *End = String;
  return result;
}
