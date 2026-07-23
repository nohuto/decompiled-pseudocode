/*
 * XREFs of sub_140531384 @ 0x140531384
 * Callers:
 *     sub_14049C900 @ 0x14049C900 (sub_14049C900.c)
 * Callees:
 *     Feature_WBAccessors__private_IsEnabledDeviceUsageNoInline @ 0x1404FA178 (Feature_WBAccessors__private_IsEnabledDeviceUsageNoInline.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 */

__int64 __fastcall sub_140531384(__int64 a1, int *a2, __int16 a3, __int64 a4, _DWORD *a5)
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
