/*
 * XREFs of CrmRegistrationStartWithActivity @ 0x18006BAAC
 * Callers:
 *     CrmGlobalsStartCrmRegistrations @ 0x18007788C (CrmGlobalsStartCrmRegistrations.c)
 * Callees:
 *     CrmRegistrationStart @ 0x180030A3C (CrmRegistrationStart.c)
 *     CrmRegistrationCreateActivity @ 0x180033DFC (CrmRegistrationCreateActivity.c)
 */

__int64 __fastcall CrmRegistrationStartWithActivity(__int64 a1, int a2, __int64 a3, int a4, __int64 a5)
{
  __int64 result; // rax

  result = CrmRegistrationStart(a1, 0LL, a4, a5);
  if ( (int)result >= 0 )
  {
    result = CrmRegistrationCreateActivity(a1, a2, 0, 0LL);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
