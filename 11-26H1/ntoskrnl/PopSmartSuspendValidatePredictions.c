/*
 * XREFs of PopSmartSuspendValidatePredictions @ 0x140B65EDC
 * Callers:
 *     PopIdleGlobalUserPresenceCallback @ 0x1407DE1C0 (PopIdleGlobalUserPresenceCallback.c)
 * Callees:
 *     SSHSupportIsPlatformAoAc @ 0x1404C3180 (SSHSupportIsPlatformAoAc.c)
 *     PopDiagTraceSmartSuspendValidation @ 0x1407D8240 (PopDiagTraceSmartSuspendValidation.c)
 */

unsigned __int8 PopSmartSuspendValidatePredictions()
{
  unsigned __int8 result; // al
  char *v1; // rdi
  __int64 v2; // rsi
  unsigned __int64 v3; // rbx
  __int64 v4; // rdx
  int v5; // ecx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  int v8; // eax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax

  result = SSHSupportIsPlatformAoAc();
  if ( result )
  {
    v1 = (char *)&unk_140F0CA61;
    v2 = 16LL;
    v3 = MEMORY[0xFFFFF78000000014];
    while ( 1 )
    {
      if ( !v1[63] )
      {
        v4 = *(_QWORD *)(v1 + 23);
        if ( v4 )
          break;
      }
LABEL_31:
      v1[63] = 1;
      v1 += 104;
      if ( !--v2 )
        return result;
    }
    v5 = 100;
    if ( *v1 )
    {
      v6 = *(_QWORD *)(v1 + 31);
      if ( !v6 )
      {
        if ( (*(_DWORD *)(v1 + 3) & 0x40) != 0 )
          v5 = v3 >= v4 + 18000000000LL ? 0xC8 : 0;
        else
          v5 = (*(_DWORD *)(v1 + 3) & 0x200) != 0 ? 101 : 300;
        goto LABEL_18;
      }
      if ( v3 > v6 )
      {
        v7 = *(_QWORD *)(v1 + 39);
        if ( v7 == -1LL )
        {
          if ( (*(_DWORD *)(v1 + 3) & 0x400) == 0 )
          {
            v5 = v3 < v4 + 2592000000000LL ? 201 : 1;
            goto LABEL_18;
          }
        }
        else if ( v3 >= v7 )
        {
          v5 = v7 + 18000000000LL < v3 ? 202 : 2;
          goto LABEL_18;
        }
        v5 = 203;
        goto LABEL_18;
      }
      v5 = 3;
    }
LABEL_18:
    v8 = 100;
    if ( v1[2] )
    {
      v9 = *(_QWORD *)(v1 + 47);
      if ( v9 )
      {
        if ( v3 > v9 )
        {
          v10 = *(_QWORD *)(v1 + 55);
          if ( v10 == -1LL )
          {
            v8 = v3 < v4 + 2592000000000LL ? 201 : 1;
          }
          else if ( v3 < v10 )
          {
            v8 = 203;
          }
          else
          {
            v8 = v10 + 36000000000LL < v3 ? 202 : 2;
          }
        }
        else
        {
          v8 = 3;
        }
      }
      else if ( (*(_DWORD *)(v1 + 3) & 0xC0) != 0 )
      {
        v8 = v3 >= v4 + 36000000000LL ? 0xC8 : 0;
      }
      else
      {
        v8 = (*(_DWORD *)(v1 + 3) & 0x100) != 0 ? 101 : 300;
      }
    }
    *(_DWORD *)(v1 + 75) = v5;
    *(_DWORD *)(v1 + 79) = v8;
    *(_QWORD *)(v1 + 87) = v3;
    result = PopDiagTraceSmartSuspendValidation();
    goto LABEL_31;
  }
  return result;
}
