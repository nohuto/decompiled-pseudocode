/*
 * XREFs of RtlExpandEnvironmentStrings @ 0x18009BC70
 * Callers:
 *     RtlGetPersistedStateLocation @ 0x180028780 (RtlGetPersistedStateLocation.c)
 * Callees:
 *     RtlQueryEnvironmentVariable @ 0x18009BE40 (RtlQueryEnvironmentVariable.c)
 */

NTSTATUS __cdecl RtlExpandEnvironmentStrings(
        PVOID Environment,
        PCWSTR Source,
        SIZE_T SourceLength,
        PWSTR Destination,
        SIZE_T DestinationLength,
        PSIZE_T ReturnLength)
{
  SIZE_T v6; // rbx
  SIZE_T ValueLength; // r12
  NTSTATUS v9; // r14d
  ULONG_PTR v11; // rbp
  PCWSTR v12; // rsi
  NTSTATUS result; // eax
  SIZE_T v14; // r15
  SIZE_T v15; // rax
  NTSTATUS v16; // edx
  ULONG_PTR v17; // rax
  PVOID v18; // [rsp+80h] [rbp+8h]
  ULONG_PTR v19; // [rsp+90h] [rbp+18h] BYREF

  v18 = Environment;
  v6 = SourceLength;
  ValueLength = DestinationLength;
  v9 = 0;
  v19 = 0LL;
  v11 = 0LL;
  if ( !SourceLength )
    goto LABEL_22;
  do
  {
    if ( *Source != 37 )
      goto LABEL_3;
    v14 = 0LL;
    v12 = Source + 1;
    v15 = v6 - 1;
    if ( v6 == 1 )
      goto LABEL_3;
    do
    {
      if ( *v12 == 37 )
        break;
      ++v12;
      ++v14;
    }
    while ( v14 < v15 );
    if ( v14
      && v14 < v15
      && ((v16 = RtlQueryEnvironmentVariable(Environment, Source + 1, v14, Destination, ValueLength, &v19),
           (int)(v16 + 0x80000000) < 0)
       || v16 == -1073741789) )
    {
      v17 = v19 + v11;
      v11 = v19 + v11 - 1;
      if ( v16 != -1073741789 )
        v11 = v17;
      v6 += -2LL - v14;
      if ( v16 < 0 )
      {
        v9 = v16;
      }
      else
      {
        ValueLength -= v19;
        Destination += v19;
      }
    }
    else
    {
LABEL_3:
      if ( v9 >= 0 )
      {
        if ( ValueLength <= 1 )
        {
          v9 = -1073741789;
        }
        else
        {
          --ValueLength;
          *Destination++ = *Source;
        }
      }
      ++v11;
      v12 = Source;
      --v6;
    }
    Environment = v18;
    Source = v12 + 1;
  }
  while ( v6 );
  if ( v9 >= 0 )
  {
LABEL_22:
    if ( ValueLength )
      *Destination = 0;
    else
      v9 = -1073741789;
  }
  result = v9;
  if ( ReturnLength )
    *ReturnLength = v11 + 1;
  return result;
}
