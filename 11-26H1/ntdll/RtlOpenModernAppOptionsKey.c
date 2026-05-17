/*
 * XREFs of RtlOpenModernAppOptionsKey @ 0x180108640
 * Callers:
 *     LdrpInitializeExecutionOptions @ 0x180118558 (LdrpInitializeExecutionOptions.c)
 * Callees:
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     NtOpenKey @ 0x18015F180 (NtOpenKey.c)
 */

__int64 __fastcall RtlOpenModernAppOptionsKey(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax
  _DWORD v5[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v6; // [rsp+28h] [rbp-28h]
  __int64 v7; // [rsp+30h] [rbp-20h]
  int v8; // [rsp+38h] [rbp-18h]
  int v9; // [rsp+3Ch] [rbp-14h]
  __int128 v10; // [rsp+40h] [rbp-10h]
  HANDLE Handle; // [rsp+78h] [rbp+28h] BYREF

  Handle = 0LL;
  v5[1] = 0;
  v9 = 0;
  if ( RtlpModernAppKey )
  {
    *a3 = RtlpModernAppKey;
    return 0LL;
  }
  v6 = a2;
  v7 = a1;
  v5[0] = 48;
  v8 = 576;
  v10 = 0LL;
  result = NtOpenKey(&Handle, 9LL, v5);
  if ( (int)result >= 0 )
  {
    if ( _InterlockedCompareExchange64(&RtlpModernAppKey, (signed __int64)Handle, 0LL) )
      NtClose(Handle);
    *a3 = RtlpModernAppKey;
    return 0LL;
  }
  return result;
}
