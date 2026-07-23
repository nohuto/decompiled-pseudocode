/*
 * XREFs of BiResolveLocatePartitionCallback @ 0x140899768
 * Callers:
 *     BiEnumerateDiskPartitions @ 0x1408984DC (BiEnumerateDiskPartitions.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x14041FEE0 (RtlAppendUnicodeToString.c)
 *     RtlULongLongMult @ 0x14045E560 (RtlULongLongMult.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwQueryAttributesFile @ 0x140728760 (ZwQueryAttributesFile.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     BiLogMessage @ 0x1409A58EC (BiLogMessage.c)
 *     BiTranslateSymbolicLink @ 0x140B244E4 (BiTranslateSymbolicLink.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

char __fastcall BiResolveLocatePartitionCallback(PCWSTR Source, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 v7; // r13
  __int64 v8; // rcx
  const WCHAR *v9; // r12
  unsigned __int64 v10; // rax
  ULONGLONG v11; // rcx
  ULONGLONG v12; // rbx
  wchar_t *Pool2; // rax
  wchar_t *v14; // r14
  unsigned int v15; // eax
  int v16; // r9d
  int v17; // eax
  void *v18; // rbx
  unsigned int v19; // edi
  void *v20; // rax
  UNICODE_STRING Destination; // [rsp+20h] [rbp-69h] BYREF
  ULONGLONG pullResult; // [rsp+30h] [rbp-59h] BYREF
  void *Src; // [rsp+38h] [rbp-51h]
  _DWORD *v25; // [rsp+40h] [rbp-49h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-41h] BYREF
  struct _FILE_BASIC_INFORMATION FileInformation; // [rsp+78h] [rbp-11h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  v5 = -1LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v7 = *(_QWORD *)(a4 + 120);
  v8 = -1LL;
  v9 = *(const WCHAR **)(a4 + 136);
  v25 = *(_DWORD **)(a4 + 112);
  memset(&FileInformation, 0, sizeof(FileInformation));
  Src = 0LL;
  do
    ++v8;
  while ( v9[v8] );
  v10 = -1LL;
  do
    ++v10;
  while ( Source[v10] );
  v11 = v10 + v8;
  if ( v11 >= v10 )
  {
    pullResult = v11;
    if ( RtlULongLongMult(v11, 2uLL, &pullResult) >= 0 )
    {
      v12 = pullResult + 2;
      if ( pullResult + 2 >= pullResult && v12 <= 0xFFFF )
      {
        Pool2 = (wchar_t *)ExAllocatePool2(0x102uLL);
        v14 = Pool2;
        if ( Pool2 )
        {
          *(_QWORD *)&Destination.Length = 0LL;
          Destination.MaximumLength = v12;
          Destination.Buffer = Pool2;
          RtlAppendUnicodeToString(&Destination, Source);
          RtlAppendUnicodeToString(&Destination, v9);
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = &Destination;
          ObjectAttributes.Attributes = 576;
          ObjectAttributes.RootDirectory = 0LL;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v15 = ZwQueryAttributesFile(&ObjectAttributes, &FileInformation);
          BiLogMessage(1LL, L"BiResolveLocatePartitionCallback: Checking '%ws'. Status %x", Destination.Buffer, v15);
          if ( v16 >= 0 )
          {
            v17 = BiTranslateSymbolicLink(Source);
            v18 = Src;
            if ( v17 >= 0 )
            {
              do
                ++v5;
              while ( *((_WORD *)Src + v5) );
              v19 = 2 * v5 + 2;
              v20 = (void *)ExAllocatePool2(0x102uLL);
              *(_QWORD *)v7 = v20;
              if ( v20 )
              {
                memset_0(v20, 0, v19 + 20);
                memmove((void *)(*(_QWORD *)v7 + 20LL), v18, v19);
                **(_DWORD **)v7 = 2;
                *v25 = v19 + 20;
                *(_BYTE *)(a4 + 145) = 1;
              }
            }
            if ( v18 )
              ExFreePoolWithTag(v18, 0x4B444342u);
          }
          ExFreePoolWithTag(v14, 0x4B444342u);
        }
      }
    }
  }
  return *(_BYTE *)(a4 + 145);
}
