/*
 * XREFs of sub_14052EE64 @ 0x14052EE64
 * Callers:
 *     sub_1404A2EE0 @ 0x1404A2EE0 (sub_1404A2EE0.c)
 * Callees:
 *     Feature_WBAccessors__private_IsEnabledDeviceUsageNoInline @ 0x140500988 (Feature_WBAccessors__private_IsEnabledDeviceUsageNoInline.c)
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 */

__int64 __fastcall sub_14052EE64(__int64 a1, int *a2, __int16 a3, __int64 a4, _DWORD *a5)
{
  __int64 v5; // rbx
  __int64 ULong64FromUser; // rax
  int ULongFromUser; // eax

  v5 = 0LL;
  if ( a3 )
  {
    if ( a3 == 3 )
    {
      if ( (unsigned int)Feature_WBAccessors__private_IsEnabledDeviceUsageNoInline() )
        ULongFromUser = RtlReadULongFromUser(a2);
      else
        ULongFromUser = *a2;
      v5 = 4LL;
      *a5 = a4 + ULongFromUser;
    }
    else if ( a3 == 10 )
    {
      if ( (unsigned int)Feature_WBAccessors__private_IsEnabledDeviceUsageNoInline() )
        ULong64FromUser = RtlReadULong64FromUser(a2);
      else
        ULong64FromUser = *(_QWORD *)a2;
      v5 = 8LL;
      *(_QWORD *)a5 = ULong64FromUser + a4;
    }
    else
    {
      return -1LL;
    }
  }
  return v5;
}
