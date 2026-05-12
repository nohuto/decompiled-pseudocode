/*
 * XREFs of sub_140044660 @ 0x140044660
 * Callers:
 *     StorPortExtendedFunction @ 0x140046CC0 (StorPortExtendedFunction.c)
 * Callees:
 *     sub_1400273F0 @ 0x1400273F0 (sub_1400273F0.c)
 *     sub_140037090 @ 0x140037090 (sub_140037090.c)
 *     sub_1401AD970 @ 0x1401AD970 (sub_1401AD970.c)
 *     sub_1401B06F4 @ 0x1401B06F4 (sub_1401B06F4.c)
 */

__int64 __fastcall sub_140044660(__int64 a1, char a2, __int64 a3)
{
  const char *v4; // rcx
  __int64 v5; // r14
  void *KeyHandle; // r15
  const char *v7; // rdi
  __int64 v8; // r12
  int v9; // r13d
  __int64 v11; // rbx
  int *v12; // rsi
  NTSTATUS v13; // eax
  int v14; // ecx
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  int v18; // ebx
  struct _STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  PCSZ SourceString; // [rsp+40h] [rbp-30h]
  struct _UNICODE_STRING UnicodeString; // [rsp+48h] [rbp-28h] BYREF
  struct _UNICODE_STRING v22; // [rsp+58h] [rbp-18h] BYREF
  int v24; // [rsp+C0h] [rbp+50h]
  int *v25; // [rsp+C8h] [rbp+58h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  v4 = *(const char **)(a3 + 8);
  v5 = 0LL;
  v25 = 0LL;
  KeyHandle = 0LL;
  v7 = *(const char **)a3;
  v8 = 0LL;
  v9 = 0;
  SourceString = v4;
  v24 = *(_DWORD *)(a3 + 16);
  v22 = 0LL;
  UnicodeString = 0LL;
  if ( a2 )
  {
    v5 = *(_QWORD *)(a3 + 24);
    KeyHandle = *(void **)(a3 + 32);
  }
  else
  {
    v8 = *(_QWORD *)(a3 + 24);
    v9 = *(_DWORD *)(a3 + 32);
  }
  if ( KeGetCurrentIrql() )
    return 3238002696LL;
  sub_1400273F0(a1, (int **)&DestinationString, &v25);
  v11 = *(_QWORD *)&DestinationString.Length;
  v12 = v25;
  if ( !*(_QWORD *)&DestinationString.Length && !v25 )
    return 3238002694LL;
  if ( v7
    && (DestinationString = 0LL,
        RtlInitAnsiString(&DestinationString, v7),
        v13 = RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u),
        v13 < 0)
    || (DestinationString = 0LL,
        RtlInitAnsiString(&DestinationString, SourceString),
        v13 = RtlAnsiStringToUnicodeString(&v22, &DestinationString, 1u),
        v13 < 0) )
  {
    v14 = v13;
  }
  else
  {
    if ( a2 )
    {
      if ( v11 )
        v15 = *(_QWORD *)(v11 + 32);
      else
        v15 = *((_QWORD *)v12 + 4);
      v16 = sub_1401AD970(v15, (unsigned __int64)&UnicodeString & -(__int64)(v7 != 0LL), (int)&v22, v24, v5, KeyHandle);
    }
    else
    {
      if ( v11 )
        v17 = *(_QWORD *)(v11 + 32);
      else
        v17 = *((_QWORD *)v12 + 4);
      v16 = sub_1401B06F4(
              v17,
              (unsigned __int64)&UnicodeString & -(__int64)(v7 != 0LL),
              (unsigned int)&v22,
              v24,
              v8,
              v9);
    }
    v18 = v16;
    if ( UnicodeString.Buffer )
      RtlFreeUnicodeString(&UnicodeString);
    if ( v22.Buffer )
      RtlFreeUnicodeString(&v22);
    v14 = v18;
  }
  return sub_140037090(v14);
}
