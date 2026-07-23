/*
 * XREFs of AuthzBasepFindSystemSecurityAttribute @ 0x140A839F8
 * Callers:
 *     AuthzBasepQuerySystemSecurityAttributeAndValues @ 0x140A83974 (AuthzBasepQuerySystemSecurityAttributeAndValues.c)
 * Callees:
 *     AuthzBasepEqualUnicodeString @ 0x1403B0620 (AuthzBasepEqualUnicodeString.c)
 */

__int64 __fastcall AuthzBasepFindSystemSecurityAttribute(const UNICODE_STRING *a1)
{
  char v1; // bl
  __int64 v3; // rdx
  const UNICODE_STRING *v4; // rsi
  const UNICODE_STRING *v5; // rdi
  _QWORD *i; // rdi
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  v8 = 0LL;
  _InterlockedExchange64(&v8, (__int64)WheapPfaLock.SchedulerApc.Reserved[1]);
  v3 = v8;
  v4 = 0LL;
  if ( v8 )
  {
    v5 = *(const UNICODE_STRING **)(v8 + 8);
    while ( v5 != (const UNICODE_STRING *)(v3 + 8) )
    {
      v4 = v5;
      if ( AuthzBasepEqualUnicodeString(v5 + 2, a1) )
      {
LABEL_5:
        v1 = 1;
        return (unsigned __int64)v4 & -(__int64)(v1 != 0);
      }
      v5 = *(const UNICODE_STRING **)&v5->Length;
      v3 = v8;
    }
    for ( i = *(_QWORD **)(v3 + 32); i != (_QWORD *)(v3 + 32); i = (_QWORD *)*i )
    {
      v4 = (const UNICODE_STRING *)(i - 2);
      if ( (i[5] & 1) == 0 )
      {
        if ( AuthzBasepEqualUnicodeString(v4 + 2, a1) )
          goto LABEL_5;
        v3 = v8;
      }
    }
  }
  return (unsigned __int64)v4 & -(__int64)(v1 != 0);
}
