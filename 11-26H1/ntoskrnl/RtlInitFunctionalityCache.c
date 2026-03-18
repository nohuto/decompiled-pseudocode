/*
 * XREFs of RtlInitFunctionalityCache @ 0x140800378
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1407EF070 (PspInitializeServerSiloDeferred.c)
 *     Phase1InitializationDiscard @ 0x140CABD00 (Phase1InitializationDiscard.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402150C0 (PsGetCurrentServerSiloGlobals.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     NtClose @ 0x1408F9F30 (NtClose.c)
 *     NtOpenKeyEx @ 0x140974620 (NtOpenKeyEx.c)
 *     NtEnumerateValueKey @ 0x14097F290 (NtEnumerateValueKey.c)
 */

__int64 RtlInitFunctionalityCache()
{
  unsigned int v0; // ebx
  int v1; // eax
  int i; // edi
  int v3; // esi
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  unsigned int v5; // r9d
  size_t Size; // [rsp+28h] [rbp-29h]
  __int64 v8; // [rsp+38h] [rbp-19h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-11h] BYREF
  _QWORD v10[2]; // [rsp+48h] [rbp-9h] BYREF
  _QWORD v11[4]; // [rsp+58h] [rbp+7h] BYREF
  __int128 v12; // [rsp+78h] [rbp+27h]
  int v13; // [rsp+8Ch] [rbp+3Bh]
  unsigned int v14; // [rsp+94h] [rbp+43h]

  v0 = 0;
  v10[0] = 8913030LL;
  Handle = 0LL;
  v10[1] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\RtlFunctionality";
  v11[0] = 48LL;
  v11[2] = v10;
  v11[3] = 576LL;
  LODWORD(v8) = 0;
  v11[1] = 0LL;
  v12 = 0LL;
  v1 = NtOpenKeyEx(&Handle, 131097LL, v11, 0LL);
  if ( v1 >= 0 )
  {
    for ( i = 0; ; ++i )
    {
      LODWORD(Size) = 20;
      v3 = NtEnumerateValueKey(Handle, Size, (__int64)&v8);
      if ( v3 < 0 )
      {
        if ( v3 != -2147483643 )
        {
          NtClose(Handle);
          if ( v3 != -2147483622 )
            return (unsigned int)v3;
          return v0;
        }
      }
      else if ( v13 == 4 && v14 < 0x80 )
      {
        CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
        *((_DWORD *)&CurrentServerSiloGlobals[90].Flink + ((unsigned __int64)v5 >> 5)) |= 1 << (v5 & 0x1F);
      }
    }
  }
  if ( v1 == -1073741772 )
    return 0;
  return (unsigned int)v1;
}
