/*
 * XREFs of PsspCaptureHandleInformation @ 0x1800B624C
 * Callers:
 *     PssNtCaptureSnapshot @ 0x1800B4D70 (PssNtCaptureSnapshot.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     PsspWalkHandleTable @ 0x1800B6540 (PsspWalkHandleTable.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x18015F240 (ZwAllocateVirtualMemory.c)
 *     NtQueryInformationProcess @ 0x18015F260 (NtQueryInformationProcess.c)
 *     ZwFreeVirtualMemory @ 0x18015F300 (ZwFreeVirtualMemory.c)
 *     ZwMapViewOfSection @ 0x18015F440 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18015F480 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x18015F880 (NtCreateSection.c)
 */

NTSTATUS __fastcall PsspCaptureHandleInformation(__int64 a1, void *a2, int a3)
{
  NTSTATUS result; // eax
  ULONG v7; // esi
  int v8; // ebx
  void *Heap_0; // rax
  NTSTATUS v10; // esi
  ULONG v11; // r12d
  __int64 v12; // [rsp+58h] [rbp-19h] BYREF
  void *v13; // [rsp+60h] [rbp-11h] BYREF
  ULONG ReturnLength; // [rsp+68h] [rbp-9h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-1h] BYREF
  __int64 v16; // [rsp+78h] [rbp+7h] BYREF
  __int64 ProcessInformation; // [rsp+80h] [rbp+Fh] BYREF
  __int64 v18; // [rsp+88h] [rbp+17h] BYREF
  int v19; // [rsp+90h] [rbp+1Fh]
  __int64 v20; // [rsp+94h] [rbp+23h]
  int v21; // [rsp+9Ch] [rbp+2Bh]
  __int64 v22; // [rsp+A0h] [rbp+2Fh] BYREF
  unsigned int v23; // [rsp+F0h] [rbp+7Fh] BYREF

  ProcessInformation = 0LL;
  ReturnLength = 0;
  Handle = 0LL;
  v12 = 0LL;
  v21 = 0;
  result = NtQueryInformationProcess(a2, (PROCESSINFOCLASS)20, &ProcessInformation, 8u, 0LL);
  if ( result < 0 )
    return result;
  v7 = 4 * ProcessInformation;
  v8 = a3 & 0x20000000;
  if ( (a3 & 0x20000000) != 0 )
  {
    v13 = 0LL;
    v12 = (unsigned int)(4 * ProcessInformation);
    result = ZwAllocateVirtualMemory(-1LL, &v13, 0LL, &v12, 4096, 4);
    if ( result < 0 )
      return result;
    Heap_0 = v13;
  }
  else
  {
    Heap_0 = (void *)RtlAllocateHeap_0();
    v13 = Heap_0;
    if ( !Heap_0 )
      return -1073741670;
  }
  v10 = NtQueryInformationProcess(a2, ProcessWow64Information|0x20, Heap_0, v7, &ReturnLength);
  if ( v10 < 0 )
  {
    if ( !v8 )
      goto LABEL_16;
    goto LABEL_19;
  }
  v11 = ReturnLength >> 2;
  v23 = 0;
  PsspWalkHandleTable(
    (_DWORD)a2,
    (_DWORD)v13,
    ReturnLength >> 2,
    a3,
    (__int64)PsspHandleStreamSizeCalculator,
    (__int64)&v23);
  v22 = v23;
  v10 = NtCreateSection(&Handle, 983047LL, L"0", &v22, 4, 0x8000000, 0LL);
  if ( v10 < 0 )
  {
LABEL_15:
    if ( !v8 )
    {
LABEL_16:
      RtlFreeHeap_0();
      return v10;
    }
LABEL_19:
    v12 = 0LL;
    ZwFreeVirtualMemory(-1LL, &v13, &v12, 0x8000LL);
    return v10;
  }
  v16 = 0LL;
  v12 = 0LL;
  v10 = ZwMapViewOfSection(Handle, -1LL, &v16, 0LL, 0LL, 0LL, &v12, 1, 0, 4);
  if ( v10 < 0 )
  {
    NtClose(Handle);
    goto LABEL_15;
  }
  v18 = v16;
  v23 = v12;
  v19 = v12;
  v20 = 0LL;
  PsspWalkHandleTable((_DWORD)a2, (_DWORD)v13, v11, a3, (__int64)PsspHandleDumper, (__int64)&v18);
  NtUnmapViewOfSection(-1LL, v16);
  if ( v8 )
  {
    v12 = 0LL;
    ZwFreeVirtualMemory(-1LL, &v13, &v12, 0x8000LL);
  }
  else
  {
    RtlFreeHeap_0();
  }
  *(_DWORD *)(a1 + 960) = HIDWORD(v20);
  *(_QWORD *)(a1 + 968) = (unsigned int)v20;
  *(_QWORD *)(a1 + 976) = Handle;
  *(_QWORD *)(a1 + 984) = MEMORY[0x7FFE0014];
  return 0;
}
