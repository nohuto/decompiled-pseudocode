/*
 * XREFs of SmpEnableCachingOnDedicatedMemoryWorker @ 0x1400109AC
 * Callers:
 *     SmpAsyncMemoryConfiguration @ 0x14000ED40 (SmpAsyncMemoryConfiguration.c)
 *     SmpDedicatedMemoryCachingCallback @ 0x1400108A0 (SmpDedicatedMemoryCachingCallback.c)
 * Callees:
 *     memset_0 @ 0x14001E843 (memset_0.c)
 *     __security_check_cookie @ 0x14001E860 (__security_check_cookie.c)
 */

__int64 SmpEnableCachingOnDedicatedMemoryWorker()
{
  HANDLE v0; // r14
  int v1; // ebx
  unsigned int *Heap; // rsi
  int v3; // eax
  unsigned int *v4; // rdi
  unsigned int *v5; // r15
  unsigned __int64 v6; // r12
  SIZE_T Size; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v9; // [rsp+38h] [rbp-C8h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h]
  ULONG ResultLength; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v12; // [rsp+58h] [rbp-A8h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+60h] [rbp-A0h] BYREF
  __int128 KeyValueInformation; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v15[4]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v16; // [rsp+84h] [rbp-7Ch]
  unsigned __int64 v17; // [rsp+B0h] [rbp-50h]

  ResultLength = 0;
  memset_0(v15, 0, 0xF8uLL);
  v12 = 0LL;
  Handle = 0LL;
  *(_QWORD *)&ValueName.Length = 3932218LL;
  LODWORD(Size) = 0;
  ValueName.Buffer = L"DisableDedicatedMemoryCaching";
  v0 = 0LL;
  v9 = 0LL;
  KeyValueInformation = 0LL;
  if ( NtQueryValueKey(
         SmpMmKey,
         &ValueName,
         KeyValuePartialInformationAlign64,
         &KeyValueInformation,
         0x10u,
         &ResultLength) >= 0
    && (_DWORD)KeyValueInformation == 4
    && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x100000004LL )
  {
    return (unsigned int)-1073741823;
  }
  else
  {
    while ( 1 )
    {
      v1 = NtManagePartition(-2LL, 0LL, 9LL, &Size, 4);
      if ( v1 != -1073741789 )
        break;
      Heap = (unsigned int *)RtlAllocateHeap(
                               *(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
                               0,
                               (unsigned int)Size);
      if ( !Heap )
        return (unsigned int)-1073741670;
      v3 = NtManagePartition(-2LL, 0LL, 9LL, Heap, Size);
      v1 = v3;
      if ( v3 >= 0 )
      {
        v4 = Heap;
        v5 = 0LL;
        v6 = 0LL;
        while ( *v4 )
        {
          *((_QWORD *)&v9 + 1) = 0x1F000300000000LL;
          Handle = 0LL;
          *(_QWORD *)&v9 = *((_QWORD *)v4 + 3);
          if ( (int)NtManagePartition(-2LL, 0LL, 10LL, &v9, 24) >= 0 )
          {
            memset_0(v15, 0, 0xF8uLL);
            v16 = -1LL;
            v1 = NtManagePartition(Handle, 0LL, 0LL, v15, 248);
            NtClose(Handle);
            if ( v1 < 0 )
              goto LABEL_22;
            if ( v17 > v6 )
            {
              v6 = v17;
              v5 = v4;
            }
          }
          v4 = (unsigned int *)((char *)v4 + *v4);
        }
        if ( v5 )
        {
          Handle = 0LL;
          v9 = 0LL;
          *(_QWORD *)&v9 = *((_QWORD *)v5 + 3);
          HIDWORD(v9) = 2031619;
          v1 = NtManagePartition(-2LL, 0LL, 10LL, &v9, 24);
          if ( v1 >= 0 )
          {
            v0 = Handle;
            v12 = 4LL;
            v1 = NtManagePartition(Handle, 0LL, 6LL, &v12, 8);
            if ( v1 >= 0 )
              v1 = 0;
          }
        }
        else
        {
          v1 = -1073741275;
        }
LABEL_22:
        RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Heap);
        if ( v0 )
          NtClose(v0);
        return (unsigned int)v1;
      }
      if ( v3 != -1073741789 )
        goto LABEL_22;
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Heap);
    }
  }
  return (unsigned int)v1;
}
