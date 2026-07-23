/*
 * XREFs of KiGetNextTimer2ExpirationDueTime @ 0x1405FA798
 * Callers:
 *     KiGetNextTimerExpirationDueTime @ 0x1404F5E20 (KiGetNextTimerExpirationDueTime.c)
 * Callees:
 *     KiReadNextTimer2DueTimeForHrCollections @ 0x140470AB0 (KiReadNextTimer2DueTimeForHrCollections.c)
 */

unsigned __int64 __fastcall KiGetNextTimer2ExpirationDueTime(
        char a1,
        char a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4,
        _BYTE *a5)
{
  unsigned __int64 v5; // r10
  char v6; // bl
  unsigned __int64 v8; // r11
  __int64 v9; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v11; // rdx

  v5 = -1LL;
  v6 = 0;
  v8 = -1LL;
  if ( a1 )
  {
    if ( !a2 || (v9 = 6LL, !LOBYTE(ExSaPageGroupDescriptorArrayLock.UserWaitTime)) )
      v9 = 5LL;
  }
  else
  {
    v6 = 1;
    v9 = 3LL;
  }
  *a5 = 0;
  do
  {
    while ( 1 )
    {
      result = 3 * v9;
      v11 = qword_140F26DB0[3 * v9];
      if ( v9 != 3 )
        break;
      v9 = 4LL;
      if ( v11 < v5 )
        v5 = v11;
    }
    if ( v11 < v8 )
    {
      result = v9 - 5;
      v8 = qword_140F26DB0[3 * v9];
      if ( (unsigned __int64)(v9 - 5) <= 1 )
        *a5 = 1;
    }
    ++v9;
  }
  while ( v9 < 7 );
  if ( v6 )
  {
    result = KiReadNextTimer2DueTimeForHrCollections(0);
    if ( result < v5 )
      v5 = result;
  }
  *a3 = v5;
  *a4 = v8;
  return result;
}
