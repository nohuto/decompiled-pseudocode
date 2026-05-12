/*
 * XREFs of RaidAdapterMapUsermodeNvmeDoorbellAddress @ 0x140063F88
 * Callers:
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x14001BC80 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 * Callees:
 *     WPP_SF_d @ 0x14005C17C (WPP_SF_d.c)
 *     McTemplateK0quuujjzssszpq_EtwWriteTransfer @ 0x14005F168 (McTemplateK0quuujjzssszpq_EtwWriteTransfer.c)
 */

__int64 __fastcall RaidAdapterMapUsermodeNvmeDoorbellAddress(__int64 a1, IRP *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  unsigned int v6; // eax
  unsigned __int64 v7; // rdx
  unsigned int v10; // eax
  _QWORD *v12; // rcx
  __int64 v13; // r8
  NTSTATUS v14; // ebx
  PDEVICE_OBJECT v15; // rcx
  unsigned __int16 v16; // dx
  ULONG RequestorProcessId; // eax
  void *v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // r8
  unsigned __int16 v22; // cx
  PVOID i; // rdx
  __int64 v24; // rax
  union _LARGE_INTEGER SectionOffset; // [rsp+80h] [rbp-39h] BYREF
  ULONG_PTR ViewSize; // [rsp+88h] [rbp-31h] BYREF
  _QWORD v28[2]; // [rsp+90h] [rbp-29h] BYREF
  _CLIENT_ID ClientId; // [rsp+A0h] [rbp-19h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B0h] [rbp-9h] BYREF
  void *ProcessHandle; // [rsp+120h] [rbp+67h] BYREF
  PVOID BaseAddress; // [rsp+130h] [rbp+77h] BYREF
  void *SectionHandle; // [rsp+138h] [rbp+7Fh] BYREF

  v28[0] = 3014700LL;
  SectionHandle = 0LL;
  v28[1] = L"\\Device\\PhysicalMemory";
  v5 = *(_QWORD *)(a4 + 24);
  v6 = *(_DWORD *)(a1 + 4816) & 0xFFFFC000;
  ProcessHandle = 0LL;
  BaseAddress = 0LL;
  SectionOffset.LowPart = v6 + 4096;
  v7 = v5 + 4;
  SectionOffset.HighPart = *(_DWORD *)(a1 + 4820);
  v10 = *(unsigned __int16 *)(a3 + 44);
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  ClientId = 0LL;
  if ( (_WORD)v10 )
  {
    v12 = (_QWORD *)(a4 + 72);
    v13 = v10;
    do
    {
      if ( v7 < *v12 + 4LL )
        v7 = *v12 + 4LL;
      v12 += 8;
      --v13;
    }
    while ( v13 );
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ViewSize = (v7 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v28;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v14 = ZwOpenSection(&SectionHandle, 6u, &ObjectAttributes);
  if ( v14 < 0 )
  {
    v15 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      v16 = 32;
LABEL_11:
      WPP_SF_d((__int64)v15->AttachedDevice, v16, (__int64)&WPP_2b772e7f1b7c3ebf6aeeae420fec8777_Traceguids, v14);
      goto LABEL_31;
    }
    goto LABEL_31;
  }
  RequestorProcessId = IoGetRequestorProcessId(a2);
  v18 = (void *)RequestorProcessId;
  if ( !RequestorProcessId || (HANDLE)RequestorProcessId == PsGetCurrentProcessId() )
  {
    v19 = -1LL;
    ProcessHandle = (void *)-1LL;
LABEL_21:
    v14 = ZwMapViewOfSection(
            SectionHandle,
            (HANDLE)v19,
            &BaseAddress,
            0LL,
            0LL,
            &SectionOffset,
            &ViewSize,
            ViewUnmap,
            0,
            4u);
    if ( v14 >= 0 )
    {
      if ( (byte_140173443 & 0x40) != 0 )
        McTemplateK0quuujjzssszpq_EtwWriteTransfer(
          a1 + 5128,
          v20,
          v21,
          *(_DWORD *)(a1 + 56),
          0,
          0,
          0,
          0LL,
          a1 + 5128,
          *(const wchar_t **)(a1 + 4784),
          0LL,
          0LL,
          0LL,
          *(const wchar_t **)(a1 + 5144),
          (char)BaseAddress,
          ViewSize);
      v22 = 0;
      for ( i = BaseAddress; v22 < *(_WORD *)(a3 + 44); *(_QWORD *)((v24 << 6) + a4 + 72) += i )
        v24 = v22++;
      *(_QWORD *)(a4 + 24) += i;
    }
    else
    {
      v15 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      {
        v16 = 34;
        goto LABEL_11;
      }
    }
    goto LABEL_31;
  }
  ClientId.UniqueProcess = v18;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 512;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v14 = ZwOpenProcess(&ProcessHandle, 0x1FFFFFu, &ObjectAttributes, &ClientId);
  if ( v14 >= 0 )
  {
    v19 = (__int64)ProcessHandle;
    goto LABEL_21;
  }
  v15 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    v16 = 33;
    goto LABEL_11;
  }
LABEL_31:
  if ( (char *)ProcessHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    ZwClose(ProcessHandle);
  if ( SectionHandle )
    ZwClose(SectionHandle);
  return (unsigned int)v14;
}
