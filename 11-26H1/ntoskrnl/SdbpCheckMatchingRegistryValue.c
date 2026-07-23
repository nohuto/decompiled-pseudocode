/*
 * XREFs of SdbpCheckMatchingRegistryValue @ 0x1408893C0
 * Callers:
 *     SdbpCheckMatchingRegistryEntry @ 0x1408891DC (SdbpCheckMatchingRegistryEntry.c)
 *     SdbpCheckMatchingWildcardRegistryEntry @ 0x140889FBC (SdbpCheckMatchingWildcardRegistryEntry.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     _wcsicmp @ 0x1405389F0 (_wcsicmp.c)
 *     SdbpUmaInit_PCVOID @ 0x140719624 (SdbpUmaInit_PCVOID.c)
 *     SdbpUmaInit_PCWSTR @ 0x1407196AC (SdbpUmaInit_PCWSTR.c)
 *     ZwQueryValueKey @ 0x1407282A0 (ZwQueryValueKey.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 *     AslStringPatternMatchExW @ 0x1409D59C0 (AslStringPatternMatchExW.c)
 *     AslFree @ 0x1409D6144 (AslFree.c)
 *     AslAlloc @ 0x1409D8260 (AslAlloc.c)
 *     AslStringDuplicate @ 0x1409D8BA8 (AslStringDuplicate.c)
 */

__int64 __fastcall SdbpCheckMatchingRegistryValue(
        void *a1,
        __int64 (*a2)(void),
        int a3,
        __int64 (*a4)(void),
        int a5,
        __int64 a6,
        __int64 (*Src)(void),
        size_t Size,
        _DWORD *a9)
{
  _WORD *v9; // rsi
  _DWORD *v10; // rdi
  unsigned int v11; // r14d
  __int64 v14; // rcx
  wchar_t *v15; // r12
  __int64 (*v16)(void); // r13
  const WCHAR *v17; // rdx
  NTSTATUS v18; // eax
  const char *v19; // r9
  int v20; // r8d
  int v21; // eax
  _DWORD *v22; // r15
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  bool v28; // zf
  _WORD *v29; // rax
  _WORD *v30; // rcx
  _WORD *v31; // rax
  ULONG ResultLength[4]; // [rsp+38h] [rbp-51h] BYREF
  PCWSTR SourceString; // [rsp+48h] [rbp-41h] BYREF
  void *Buf1[2]; // [rsp+50h] [rbp-39h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-29h] BYREF
  wchar_t *Str1[2]; // [rsp+70h] [rbp-19h] BYREF
  __int64 (*v38[3])(void); // [rsp+80h] [rbp-9h] BYREF

  SourceString = 0LL;
  v9 = 0LL;
  ResultLength[0] = 0;
  v10 = 0LL;
  v11 = 0;
  DestinationString = 0LL;
  *(_OWORD *)Str1 = 0LL;
  *(_OWORD *)v38 = 0LL;
  *(_OWORD *)Buf1 = 0LL;
  SdbpUmaInit_PCWSTR(a2, (__int64 (**)(void))Str1);
  SdbpUmaInit_PCWSTR(a4, v38);
  SdbpUmaInit_PCVOID(Src, Size, (__int64 (**)(void))Buf1);
  v15 = Str1[0];
  v16 = v38[0];
  if ( !Str1[0] && Str1[1] || !v38[0] && v38[1] || !Buf1[0] && Buf1[1] )
  {
    AslLogCallPrintf(1, (unsigned int)"SdbpCheckMatchingRegistryValue", 1205, (unsigned int)"Out of memory");
    goto LABEL_56;
  }
  if ( !Str1[0] || !*Str1[0] )
    goto LABEL_52;
  if ( wcsicmp(Str1[0], L"dbRegistryDefaultName") )
  {
    if ( (int)AslStringDuplicate(&SourceString, v15) < 0 )
      goto LABEL_56;
    v17 = SourceString;
  }
  else
  {
    v17 = 0LL;
  }
  RtlInitUnicodeString(&DestinationString, v17);
  v18 = ZwQueryValueKey(a1, &DestinationString, KeyValueFullInformation, 0LL, 0, ResultLength);
  if ( v18 < 0 && v18 != -2147483643 && v18 != -1073741789 )
  {
    v11 = 1;
    goto LABEL_56;
  }
  v10 = (_DWORD *)AslAlloc(v14, ResultLength[0]);
  if ( !v10 )
  {
    AslLogCallPrintf(1, (unsigned int)"SdbpCheckMatchingRegistryValue", 1249, (unsigned int)"Failed to allocate memory");
    goto LABEL_56;
  }
  if ( ZwQueryValueKey(a1, &DestinationString, KeyValueFullInformation, v10, ResultLength[0], ResultLength) >= 0 )
  {
    v21 = v10[1];
    if ( !a3 )
    {
      *a9 = 1;
LABEL_25:
      v11 = 1;
      goto LABEL_53;
    }
    if ( v21 != a3 )
      goto LABEL_25;
    v22 = (_DWORD *)((char *)v10 + (unsigned int)v10[2]);
    v23 = v21 - 1;
    if ( v23 && (v24 = v23 - 1) != 0 )
    {
      v25 = v24 - 1;
      if ( !v25 )
      {
        if ( Size != v10[3] )
          goto LABEL_25;
        v28 = memcmp(Buf1[0], (char *)v10 + (unsigned int)v10[2], Size) == 0;
        goto LABEL_44;
      }
      v26 = v25 - 1;
      if ( !v26 )
      {
        v28 = a5 == *v22;
        goto LABEL_44;
      }
      v27 = v26 - 3;
      if ( v27 )
      {
        if ( v27 != 4 )
        {
          v19 = "Unknown registry value data type";
          v20 = 1396;
          goto LABEL_22;
        }
        v28 = a6 == *(_QWORD *)v22;
LABEL_44:
        if ( !v28 )
          goto LABEL_25;
        goto LABEL_52;
      }
      v29 = (_WORD *)AslAlloc(v14, (unsigned int)v10[3] + 2LL);
      v9 = v29;
      if ( !v29 )
      {
        v19 = "Failed to allocate memory";
        v20 = 1321;
        goto LABEL_22;
      }
      memmove(v29, v22, (unsigned int)v10[3]);
      v30 = v9;
      for ( v9[(unsigned __int64)(unsigned int)v10[3] >> 1] = 0; v30 < (_WORD *)((char *)v9 + (v10[3] & 0xFFFFFFFE)); ++v30 )
      {
        if ( !*v30 )
        {
          if ( !v30[1] )
            break;
          *v30 = 59;
        }
      }
    }
    else
    {
      v31 = (_WORD *)AslAlloc(v14, (unsigned int)v10[3] + 2LL);
      v9 = v31;
      if ( !v31 )
      {
        v19 = "Failed to allocate memory";
        v20 = 1297;
        goto LABEL_22;
      }
      memmove(v31, v22, (unsigned int)v10[3]);
      v9[(unsigned __int64)(unsigned int)v10[3] >> 1] = 0;
    }
    if ( !(unsigned int)AslStringPatternMatchExW(v16, v9) )
      goto LABEL_25;
LABEL_52:
    *a9 = 1;
    v11 = 1;
    if ( !v10 )
      goto LABEL_54;
    goto LABEL_53;
  }
  v19 = "Failed to read value";
  v20 = 1260;
LABEL_22:
  AslLogCallPrintf(1, (unsigned int)"SdbpCheckMatchingRegistryValue", v20, (_DWORD)v19);
LABEL_53:
  AslFree(v14, v10);
LABEL_54:
  if ( v9 )
    AslFree(v14, v9);
LABEL_56:
  if ( SourceString )
    AslFree(v14, SourceString);
  if ( v15 && v15 != Str1[1] )
    AslFree(v14, v15);
  if ( v16 && v16 != v38[1] )
    AslFree(v14, v16);
  if ( Buf1[0] && Buf1[0] != Buf1[1] )
    AslFree(v14, Buf1[0]);
  return v11;
}
