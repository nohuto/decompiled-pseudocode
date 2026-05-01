/*
 * XREFs of ?PiiFilterpAddProfiles@@YAJPEAU_PII_FILTER@@@Z @ 0x18015BD48
 * Callers:
 *     PiiFilterCreate @ 0x18015A54C (PiiFilterCreate.c)
 * Callees:
 *     AslRegistryOpenKey @ 0x18015BC88 (AslRegistryOpenKey.c)
 *     AslRegistryGetString @ 0x18015C054 (AslRegistryGetString.c)
 *     AslRegistryOpenSubKey @ 0x18015C254 (AslRegistryOpenSubKey.c)
 *     ?Insert@RtlNameValueArray@@QEAAJPEBG00_K@Z @ 0x18015C760 (-Insert@RtlNameValueArray@@QEAAJPEBG00_K@Z.c)
 *     _wcsicmp @ 0x1802C9DF4 (_wcsicmp.c)
 *     _wcslwr @ 0x1802C9E00 (_wcslwr.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ?PiiFilterpAddItemSorted@@YAJPEAU_PII_FILTER@@PEBG1@Z @ 0x180676448 (-PiiFilterpAddItemSorted@@YAJPEAU_PII_FILTER@@PEBG1@Z.c)
 */

__int64 __fastcall PiiFilterpAddProfiles(struct _PII_FILTER *this)
{
  wchar_t *v2; // rdi
  wchar_t *Heap; // rsi
  PVOID v4; // r14
  int v5; // ebx
  ULONG i; // r15d
  NTSTATUS v7; // eax
  unsigned int j; // ebx
  int v9; // eax
  wchar_t *v10; // rax
  const unsigned __int16 *v11; // rdx
  wchar_t *String; // [rsp+30h] [rbp-10h] BYREF
  ULONG ResultLength; // [rsp+88h] [rbp+48h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp+50h] BYREF
  HANDLE KeyHandle; // [rsp+98h] [rbp+58h] BYREF

  ResultLength = 0;
  Handle = 0LL;
  KeyHandle = 0LL;
  v2 = 0LL;
  Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x218uLL);
  if ( Heap )
  {
    v4 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x218uLL);
    if ( v4 )
    {
      v5 = AslRegistryOpenKey(
             &KeyHandle,
             L"\\REGISTRY\\MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\ProfileList",
             8u);
      if ( v5 >= 0 )
      {
        for ( i = 0; ; ++i )
        {
          if ( Handle )
          {
            ZwClose(Handle);
            Handle = 0LL;
          }
          if ( v2 )
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
          String = 0LL;
          v2 = 0LL;
          memset_0(v4, 0, 0x218uLL);
          memset_0(Heap, 0, 0x218uLL);
          v7 = ZwEnumerateKey(KeyHandle, i, KeyBasicInformation, Heap, 0x217u, &ResultLength);
          if ( v7 == -2147483622 )
            break;
          if ( v7 >= 0 )
          {
            for ( j = 0; j < 3; ++j )
            {
              if ( !wcsicmp(Heap + 8, off_18071B690[j]) )
                goto LABEL_17;
            }
            if ( (int)AslRegistryOpenSubKey(&Handle) >= 0 )
            {
              v9 = AslRegistryGetString(&String, Handle, L"ProfileImagePath");
              v2 = String;
              if ( v9 >= 0 )
              {
                wcslwr(String);
                v5 = PiiFilterpAddItemSorted(this, v2, L"%USERPROFILE%");
                if ( v5 < 0 )
                  goto LABEL_19;
                v10 = wcsrchr(v2, 0x5Cu);
                if ( v10 )
                {
                  if ( v10[1] )
                  {
                    v5 = RtlNameValueArray::Insert(
                           (struct _PII_FILTER *)((char *)this + 48),
                           v11,
                           v10 + 1,
                           L"%USERNAME%",
                           *((_QWORD *)this + 8));
                    if ( v5 < 0 )
                      goto LABEL_19;
                  }
                }
              }
            }
          }
LABEL_17:
          ;
        }
        v5 = 0;
      }
    }
    else
    {
      v5 = -1073741801;
    }
LABEL_19:
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    if ( v4 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
  }
  else
  {
    v5 = -1073741801;
  }
  if ( v2 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v5;
}
