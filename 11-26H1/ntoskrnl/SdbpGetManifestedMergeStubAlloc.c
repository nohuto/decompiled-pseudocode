/*
 * XREFs of SdbpGetManifestedMergeStubAlloc @ 0x140887580
 * Callers:
 *     SdbpGetMergeRedirectPathInternal @ 0x140887904 (SdbpGetMergeRedirectPathInternal.c)
 * Callees:
 *     _wcsicmp @ 0x1405389F0 (_wcsicmp.c)
 *     _wcsnicmp @ 0x140538B30 (_wcsnicmp.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwEnumerateValueKey @ 0x140728220 (ZwEnumerateValueKey.c)
 *     SdbpGetMergeSdbsDisabled @ 0x140887E8C (SdbpGetMergeSdbsDisabled.c)
 *     AslPathToSystemPath @ 0x14088FB9C (AslPathToSystemPath.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 *     AslFree @ 0x1409D6144 (AslFree.c)
 *     AslAlloc @ 0x1409D8260 (AslAlloc.c)
 *     AslStringDuplicate @ 0x1409D8BA8 (AslStringDuplicate.c)
 *     RtlGetNtSystemRoot @ 0x1409E50B0 (RtlGetNtSystemRoot.c)
 *     AslRegistryGetKey @ 0x140B32A38 (AslRegistryGetKey.c)
 */

__int64 __fastcall SdbpGetManifestedMergeStubAlloc(_QWORD *a1, const wchar_t *a2)
{
  ULONG v2; // r13d
  __int64 v4; // r15
  wchar_t *v5; // rsi
  HANDLE v7; // rcx
  NTSTATUS MergeSdbsDisabled; // ebx
  int Key; // eax
  int v10; // r14d
  const wchar_t **v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // r14
  __int64 v14; // rax
  ULONG Length; // ebx
  const char *v16; // r9
  int v17; // r8d
  NTSTATUS v18; // eax
  __int64 v19; // rax
  ULONG v20; // ebx
  unsigned __int64 v21; // r12
  const wchar_t *NtSystemRoot; // rax
  const wchar_t *v23; // rbx
  size_t v24; // r8
  __int64 v25; // rax
  __int64 v26; // [rsp+30h] [rbp-10h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-8h] BYREF
  ULONG ResultLength; // [rsp+90h] [rbp+50h] BYREF
  ULONG v30; // [rsp+98h] [rbp+58h] BYREF

  v2 = 0;
  v30 = 0;
  v4 = 0LL;
  ResultLength = 0;
  v5 = 0LL;
  v26 = 0LL;
  KeyHandle = 0LL;
  if ( !a1 )
    return 3221225711LL;
  *a1 = 0LL;
  MergeSdbsDisabled = SdbpGetMergeSdbsDisabled(&v30);
  if ( MergeSdbsDisabled >= 0 )
  {
    if ( v30 )
    {
      MergeSdbsDisabled = -1073741772;
    }
    else
    {
      Key = AslRegistryGetKey(
              &KeyHandle,
              L"Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\SdbUpdates\\ManifestedMergeStubSdbs",
              2147483904LL,
              1LL);
      MergeSdbsDisabled = Key;
      if ( Key >= 0 )
      {
        v10 = 1;
        v11 = (const wchar_t **)&off_14000B718;
        do
        {
          if ( !wcsicmp(a2, *v11) )
            break;
          ++v10;
          v11 += 4;
        }
        while ( (__int64)v11 < (__int64)&qword_14000B838 );
        v5 = 0LL;
        if ( v10 >= 10 )
        {
LABEL_47:
          MergeSdbsDisabled = -1073741772;
        }
        else
        {
          v13 = -1LL;
          v14 = -1LL;
          do
            ++v14;
          while ( a2[v14] );
          Length = 2 * v14 + 18;
          v30 = Length;
          v4 = AslAlloc(v12, Length);
          if ( v4 )
          {
            while ( 1 )
            {
              v18 = ZwEnumerateValueKey(KeyHandle, v2, KeyValuePartialInformation, (PVOID)v4, Length, &ResultLength);
              MergeSdbsDisabled = v18;
              if ( v18 != -2147483643 && v18 != -1073741789 )
              {
                if ( v18 == -2147483622 )
                  goto LABEL_47;
                if ( v18 < 0 )
                {
                  v16 = "Failed to query partial info.";
                  v17 = 1219;
                  goto LABEL_19;
                }
                if ( *(_DWORD *)(v4 + 4) == 1 && !wcsicmp(a2, (const wchar_t *)(v4 + 12)) )
                  break;
              }
              Length = v30;
              ++v2;
            }
            v19 = -1LL;
            do
              ++v19;
            while ( a2[v19] );
            v20 = 2 * v19 + 538;
            v21 = v20;
            v5 = (wchar_t *)AslAlloc(0LL, v20);
            if ( !v5 )
            {
              v16 = "Failed to allocate basic info.";
              v17 = 1236;
              goto LABEL_18;
            }
            MergeSdbsDisabled = ZwEnumerateValueKey(KeyHandle, v2, KeyValueBasicInformation, v5, v20, &ResultLength);
            if ( MergeSdbsDisabled < 0 )
            {
              v16 = "Failed to query basic info.";
              v17 = 1247;
              goto LABEL_19;
            }
            if ( (unsigned __int64)ResultLength + 2 > v21 )
            {
              MergeSdbsDisabled = -1073741789;
              v16 = "Buffer too small to query basic info.";
              v17 = 1252;
              goto LABEL_19;
            }
            NtSystemRoot = RtlGetNtSystemRoot();
            v23 = NtSystemRoot;
            v24 = -1LL;
            do
              ++v24;
            while ( NtSystemRoot[v24] );
            if ( wcsnicmp(NtSystemRoot, v5 + 6, v24) )
            {
              MergeSdbsDisabled = AslStringDuplicate(&v26, v5 + 6);
              if ( MergeSdbsDisabled < 0 )
              {
                v16 = "Failed to duplicate stub path.";
                v17 = 1279;
                goto LABEL_19;
              }
            }
            else
            {
              do
                ++v13;
              while ( v23[v13] );
              MergeSdbsDisabled = AslPathToSystemPath(&v26, &v5[v13 + 6]);
              if ( MergeSdbsDisabled < 0 )
              {
                v16 = "Failed to allocate or convert stub path.";
                v17 = 1272;
                goto LABEL_19;
              }
            }
            v25 = v26;
            if ( !v26 )
            {
              v16 = "Failed to allocate stub path.";
              v17 = 1286;
              goto LABEL_18;
            }
            MergeSdbsDisabled = 0;
            v26 = 0LL;
            *a1 = v25;
          }
          else
          {
            v16 = "Failed to allocate partial info.";
            v17 = 1200;
LABEL_18:
            MergeSdbsDisabled = -1073741801;
LABEL_19:
            AslLogCallPrintf(1, (unsigned int)"SdbpGetManifestedMergeStubAlloc", v17, (_DWORD)v16);
          }
        }
      }
      else if ( Key != -1073741772 )
      {
        AslLogCallPrintf(
          1,
          (unsigned int)"SdbpGetManifestedMergeStubAlloc",
          1180,
          (unsigned int)"AslRegistryGetKey failed to open ManifestedMergeStubSdbs key [%x]");
      }
      v7 = KeyHandle;
      if ( (char *)KeyHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        ZwClose(KeyHandle);
    }
  }
  else
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpGetManifestedMergeStubAlloc",
      1164,
      (unsigned int)"SdbpGetMergeSdbsDisabled failed [%x]");
  }
  if ( v26 )
    AslFree(v7, v26);
  if ( v4 )
    AslFree(v7, v4);
  if ( v5 )
    AslFree(v7, v5);
  return (unsigned int)MergeSdbsDisabled;
}
