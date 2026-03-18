/*
 * XREFs of BiResolveLocatePartitionCallback @ 0x140893368
 * Callers:
 *     BiEnumerateDiskPartitions @ 0x1408920E0 (BiEnumerateDiskPartitions.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140432EB0 (RtlAppendUnicodeToString.c)
 *     RtlULongLongMult @ 0x1404655A0 (RtlULongLongMult.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwQueryAttributesFile @ 0x140723B90 (ZwQueryAttributesFile.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     BiLogMessage @ 0x1409D490C (BiLogMessage.c)
 *     BiTranslateSymbolicLink @ 0x140B220E4 (BiTranslateSymbolicLink.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
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
  unsigned int AttributesFile; // eax
  int v16; // r9d
  int v17; // eax
  void *v18; // rbx
  unsigned int v19; // edi
  void *v20; // rax
  UNICODE_STRING Destination; // [rsp+20h] [rbp-69h] BYREF
  ULONGLONG pullResult; // [rsp+30h] [rbp-59h] BYREF
  void *Src; // [rsp+38h] [rbp-51h]
  _DWORD *v25; // [rsp+40h] [rbp-49h]
  _DWORD v26[2]; // [rsp+48h] [rbp-41h] BYREF
  __int64 v27; // [rsp+50h] [rbp-39h]
  UNICODE_STRING *p_Destination; // [rsp+58h] [rbp-31h]
  int v29; // [rsp+60h] [rbp-29h]
  int v30; // [rsp+64h] [rbp-25h]
  __int128 v31; // [rsp+68h] [rbp-21h]
  _OWORD v32[2]; // [rsp+78h] [rbp-11h] BYREF
  __int64 v33; // [rsp+98h] [rbp+Fh]

  v33 = 0LL;
  v26[1] = 0;
  v5 = -1LL;
  v30 = 0;
  v7 = *(_QWORD *)(a4 + 120);
  v8 = -1LL;
  v9 = *(const WCHAR **)(a4 + 136);
  v25 = *(_DWORD **)(a4 + 112);
  memset(v32, 0, sizeof(v32));
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
          v26[0] = 48;
          p_Destination = &Destination;
          v29 = 576;
          v27 = 0LL;
          v31 = 0LL;
          AttributesFile = ZwQueryAttributesFile((__int64)v26, (__int64)v32);
          BiLogMessage(
            1LL,
            L"BiResolveLocatePartitionCallback: Checking '%ws'. Status %x",
            Destination.Buffer,
            AttributesFile);
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
