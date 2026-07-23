/*
 * XREFs of HalpTimerQueryAndResetRtcErrors @ 0x1404EF7A0
 * Callers:
 *     HalpTimerInitSystem @ 0x140579A20 (HalpTimerInitSystem.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1404DC958 (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall HalpTimerQueryAndResetRtcErrors(char a1, char a2)
{
  __int64 v2; // r8
  __int32 v3; // ebx
  int v4; // eax
  unsigned __int8 *v6; // rdx
  __int64 v7; // r8
  int v8; // [rsp+20h] [rbp-60h]
  int v9; // [rsp+28h] [rbp-58h]
  __int32 v10; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11[2]; // [rsp+48h] [rbp-38h] BYREF
  __int32 *v12; // [rsp+68h] [rbp-18h]
  __int64 v13; // [rsp+70h] [rbp-10h]

  v2 = 0LL;
  v3 = _InterlockedExchange(&HalpTimerRtcErrorCode, 0);
  if ( a2 )
  {
    if ( (unsigned int)dword_140E024C8 <= 5 || !tlgKeywordOn((__int64)&dword_140E024C8, 0x200000000000LL) )
      goto LABEL_5;
    v6 = (unsigned __int8 *)byte_140044D25;
    goto LABEL_16;
  }
  if ( !a1 )
  {
    if ( (unsigned int)dword_140E024C8 <= 5
      || (qword_140E024D8 & 0x400000000000LL) == 0
      || (qword_140E024E0 & 0x400000000000LL) != qword_140E024E0 )
    {
      goto LABEL_5;
    }
    v6 = (unsigned __int8 *)&word_140044CEA;
LABEL_16:
    v12 = &v10;
    v10 = v3;
    v13 = 4LL;
    tlgWriteEx_EtwWriteEx((__int64)&dword_140E024C8, v6, v2, 1u, v8, v9, 3u, v11);
LABEL_5:
    v4 = 31;
    return v3 & (unsigned int)v4;
  }
  if ( (unsigned int)dword_140E024C8 > 5 && tlgKeywordOn((__int64)&dword_140E024C8, 0x400000000000LL) )
  {
    v10 = v3;
    v12 = &v10;
    v13 = 4LL;
    tlgWriteEx_EtwWriteEx((__int64)&dword_140E024C8, (unsigned __int8 *)&byte_140044CB0, v7, 1u, v8, v9, 3u, v11);
  }
  v4 = 9;
  return v3 & (unsigned int)v4;
}
