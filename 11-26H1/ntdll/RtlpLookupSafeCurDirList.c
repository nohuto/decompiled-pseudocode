/*
 * XREFs of RtlpLookupSafeCurDirList @ 0x180105A64
 * Callers:
 *     LdrpSearchPath @ 0x180097CEC (LdrpSearchPath.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlExpandEnvironmentStrings_U @ 0x18009B9D0 (RtlExpandEnvironmentStrings_U.c)
 *     RtlQueryEnvironmentVariable_U @ 0x18009BC00 (RtlQueryEnvironmentVariable_U.c)
 *     RtlpEnsureTailingSlashAndAddToList @ 0x18011D4E0 (RtlpEnsureTailingSlashAndAddToList.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     NtOpenKey @ 0x18015F080 (NtOpenKey.c)
 *     ZwEnumerateValueKey @ 0x18015F0A0 (ZwEnumerateValueKey.c)
 *     NtQueryValueKey @ 0x18015F120 (NtQueryValueKey.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 RtlpLookupSafeCurDirList()
{
  __int64 result; // rax
  _QWORD *Heap_0; // rax
  _QWORD *v2; // rbx
  signed __int64 v3; // rdi
  _QWORD *v4; // r8
  __int64 v5; // rax
  PVOID v6; // rcx
  HANDLE v7; // rdi
  HANDLE v8; // rcx
  ULONG v9; // edi
  ULONG i; // edx
  _UNICODE_STRING *p_Value; // rdx
  NTSTATUS v12; // eax
  NTSTATUS v13; // edx
  signed __int64 v14; // rcx
  ULONG ResultLength[2]; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-C8h] BYREF
  _UNICODE_STRING Value; // [rsp+48h] [rbp-C0h] BYREF
  _UNICODE_STRING ValueName; // [rsp+58h] [rbp-B0h] BYREF
  _UNICODE_STRING Destination; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v20; // [rsp+78h] [rbp-90h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+88h] [rbp-80h] BYREF
  int v22; // [rsp+8Ch] [rbp-7Ch]
  int v23; // [rsp+90h] [rbp-78h]
  char v24; // [rsp+94h] [rbp-74h] BYREF
  _BYTE v25[4]; // [rsp+298h] [rbp+190h] BYREF
  int v26; // [rsp+29Ch] [rbp+194h]
  char v27; // [rsp+2A4h] [rbp+19Ch] BYREF
  char v28; // [rsp+4B8h] [rbp+3B0h] BYREF

  v20 = 0LL;
  memset_thunk_772440563353939046(v25, 0, 0x214uLL);
  memset_thunk_772440563353939046(KeyValueInformation, 0, 0x20CuLL);
  *(_QWORD *)&Destination.Length = 34078720LL;
  Destination.Buffer = 0LL;
  Value.Buffer = 0LL;
  ValueName.Buffer = 0LL;
  result = qword_1801C57B8;
  KeyHandle = 0LL;
  ResultLength[0] = 0;
  *(_QWORD *)&Value.Length = 34078720LL;
  *(_QWORD *)&ValueName.Length = 0x2000000LL;
  if ( qword_1801C57B8 == -1 )
  {
    ValueName.Buffer = (wchar_t *)&v24;
    Value.Buffer = (wchar_t *)&v27;
    Destination.Buffer = (wchar_t *)&v28;
    Heap_0 = RtlAllocateHeap_0(LdrpHeap, NtdllBaseTag + 0x40000, 0x10uLL);
    v2 = Heap_0;
    if ( Heap_0 )
    {
      Heap_0[1] = Heap_0;
      *Heap_0 = Heap_0;
      v7 = qword_1801CA350;
      KeyHandle = qword_1801CA350;
      if ( !qword_1801CA350 )
      {
        v13 = NtOpenKey(&KeyHandle, 1u, (POBJECT_ATTRIBUTES)&stru_180171D00);
        if ( v13 >= 0 )
        {
          v14 = (signed __int64)KeyHandle;
        }
        else
        {
          v14 = -1LL;
          KeyHandle = (HANDLE)-1LL;
        }
        v7 = (HANDLE)_InterlockedCompareExchange64((volatile signed __int64 *)&qword_1801CA350, v14, 0LL);
        if ( v7 )
        {
          if ( v13 >= 0 )
            NtClose(KeyHandle);
          KeyHandle = v7;
        }
        else
        {
          v7 = KeyHandle;
        }
      }
      if ( v7 != (HANDLE)-1LL
        && NtQueryValueKey(v7, (PUNICODE_STRING)&stru_180171CC0, KeyValuePartialInformation, &v20, 0x10u, ResultLength) >= 0
        && ResultLength[0] == 16
        && HIDWORD(v20) == 1
        || RtlQueryEnvironmentVariable_U(0LL, (PUNICODE_STRING)&stru_180171CF0, &Value) >= 0
        && (int)RtlpEnsureTailingSlashAndAddToList(v2, &Value) >= 0 )
      {
        v8 = KeyHandle;
        if ( KeyHandle != (HANDLE)-1LL )
        {
          v9 = 0;
          for ( i = 0; ; i = v9 )
          {
            v12 = ZwEnumerateValueKey(v8, i, KeyValueBasicInformation, KeyValueInformation, 0x20Cu, ResultLength);
            if ( v12 == -2147483622 )
              break;
            if ( v12 != -2147483643 )
            {
              if ( v12 < 0 )
                break;
              if ( v23 )
              {
                if ( (unsigned int)(v22 - 1) <= 1 )
                {
                  ValueName.Length = v23;
                  if ( NtQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, v25, 0x214u, ResultLength) >= 0
                    && (unsigned int)(v22 - 1) <= 1 )
                  {
                    p_Value = &Value;
                    Value.Length = 2 * ((ResultLength[0] - 12) >> 1) - 2;
                    if ( v26 == 2 )
                    {
                      if ( RtlExpandEnvironmentStrings_U(0LL, &Value, &Destination, 0LL) < 0 )
                        goto LABEL_33;
                      p_Value = &Destination;
                    }
                    RtlpEnsureTailingSlashAndAddToList(v2, p_Value);
                  }
                }
              }
            }
LABEL_33:
            v8 = KeyHandle;
            ++v9;
          }
        }
      }
    }
    v3 = _InterlockedCompareExchange64(&qword_1801C57B8, (signed __int64)v2, -1LL);
    if ( v3 == -1 )
    {
      return (__int64)v2;
    }
    else
    {
      if ( v2 )
      {
        while ( 1 )
        {
          v4 = (_QWORD *)*v2;
          if ( (_QWORD *)*v2 == v2 )
            break;
          if ( (_QWORD *)v4[1] != v2 || (v5 = *v4, *(_QWORD **)(*v4 + 8LL) != v4) )
            __fastfail(3u);
          v6 = LdrpHeap;
          *v2 = v5;
          *(_QWORD *)(v5 + 8) = v2;
          RtlFreeHeap_0(v6, 0, v4);
        }
        RtlFreeHeap_0(LdrpHeap, 0, v2);
      }
      return v3;
    }
  }
  return result;
}
