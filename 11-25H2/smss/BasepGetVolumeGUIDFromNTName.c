/*
 * XREFs of BasepGetVolumeGUIDFromNTName @ 0x14001A92C
 * Callers:
 *     GetFinalPathNameByHandleW @ 0x14001ADC0 (GetFinalPathNameByHandleW.c)
 * Callees:
 *     DeviceIoControl @ 0x14001ACD0 (DeviceIoControl.c)
 *     CreateFileW @ 0x14001CA20 (CreateFileW.c)
 *     CloseHandle @ 0x14001CA80 (CloseHandle.c)
 *     memcpy_0 @ 0x14001EFA7 (memcpy_0.c)
 */

__int64 __fastcall BasepGetVolumeGUIDFromNTName(const wchar_t *Src, _QWORD *a2)
{
  _DWORD *v4; // rdi
  void *FileW; // r12
  unsigned int v6; // esi
  int v7; // eax
  _QWORD *Heap; // rbp
  unsigned __int16 v9; // ax
  ULONG v10; // ebx
  unsigned int v11; // r8d
  __int64 v12; // rax
  int v13; // edx
  __int64 v14; // r9
  _WORD *v15; // rbx
  size_t v16; // r15
  _WORD *v17; // rax
  _WORD *v18; // r14
  __int64 v20; // [rsp+80h] [rbp+18h] BYREF

  LODWORD(v20) = 0;
  v4 = 0LL;
  FileW = (void *)CreateFileW(L"\\\\.\\MountPointManager", 0LL, 3LL, 0LL, 3, 128, 0LL);
  if ( FileW == (void *)-1LL )
    return 0;
  v7 = wcslen(Src);
  Heap = RtlAllocateHeap(
           *(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
           KernelBaseGlobalData,
           (unsigned int)(2 * v7 + 24));
  if ( !Heap )
    goto LABEL_38;
  *(_OWORD *)Heap = 0LL;
  Heap[2] = 0LL;
  *((_DWORD *)Heap + 4) = 24;
  v9 = 2 * wcslen(Src);
  *((_WORD *)Heap + 10) = v9;
  memcpy_0(Heap + 3, Src, v9);
  v10 = 672;
  while ( 1 )
  {
    if ( v4 )
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v4);
    v4 = RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), KernelBaseGlobalData, v10);
    if ( !v4 )
      goto LABEL_38;
    v6 = DeviceIoControl(FileW, 0x6D0008u, (__int64)v4, v10, (__int64)&v20);
    v10 = *v4 + 32;
    if ( v6 )
      break;
    if ( LODWORD(KeGetPcr()->Unused1[0]) != 234 )
    {
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v4);
LABEL_11:
      v4 = 0LL;
      goto LABEL_39;
    }
  }
  v11 = 0;
  if ( v4[1] )
  {
    v12 = 0LL;
    v13 = 0;
    while ( 1 )
    {
      v14 = LOWORD(v4[6 * v12 + 3]);
      v15 = (_WORD *)((char *)v4 + (unsigned int)v4[6 * v13 + 2]);
      if ( ((_DWORD)v14 == 96 || (_DWORD)v14 == 98 && v15[48] == 92)
        && *v15 == 92
        && (v15[1] == 63 || v15[1] == 92)
        && v15[2] == 63
        && v15[3] == 92
        && v15[4] == 86
        && v15[5] == 111
        && v15[6] == 108
        && v15[7] == 117
        && v15[8] == 109
        && v15[9] == 101
        && v15[10] == 123
        && v15[19] == 45
        && v15[24] == 45
        && v15[29] == 45
        && v15[34] == 45
        && v15[47] == 125 )
      {
        break;
      }
      v13 = ++v11;
      v12 = v11;
      if ( v11 >= v4[1] )
        goto LABEL_35;
    }
    v16 = LOWORD(v4[6 * v12 + 3]);
    v17 = RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), KernelBaseGlobalData, v14 + 2);
    *a2 = v17;
    v18 = v17;
    if ( v17 )
    {
      memcpy_0(v17, v15, v16);
      v18[v16 >> 1] = 0;
      v18[1] = 92;
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v4);
      goto LABEL_11;
    }
LABEL_38:
    RtlSetLastWin32Error(8u);
    v6 = 0;
    goto LABEL_39;
  }
LABEL_35:
  RtlSetLastWin32Error(0x32u);
LABEL_39:
  CloseHandle(FileW);
  if ( Heap )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Heap);
  if ( v4 )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v4);
  return v6;
}
