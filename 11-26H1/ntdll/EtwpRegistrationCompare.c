/*
 * XREFs of EtwpRegistrationCompare @ 0x1800CA790
 * Callers:
 *     EtwpFindRegistration @ 0x18003B0A0 (EtwpFindRegistration.c)
 * Callees:
 *     memcmp @ 0x1801648D0 (memcmp.c)
 */

int __fastcall EtwpRegistrationCompare(__int64 a1, __int64 a2)
{
  int result; // eax
  unsigned __int16 v5; // cx

  result = memcmp(*(const void **)a1, (const void *)(a2 + 32), 0x10uLL);
  if ( !result )
  {
    v5 = *(_WORD *)(a2 + 84);
    if ( *(_WORD *)(a1 + 8) > v5 )
      return -1;
    else
      return *(_WORD *)(a1 + 8) < v5;
  }
  return result;
}
