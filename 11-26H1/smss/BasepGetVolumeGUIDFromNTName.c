/*
 * XREFs of BasepGetVolumeGUIDFromNTName @ 0x14001B074
 * Callers:
 *     GetFinalPathNameByHandleW @ 0x14001B504 (GetFinalPathNameByHandleW.c)
 * Callees:
 *     DeviceIoControl @ 0x14001B414 (DeviceIoControl.c)
 *     CreateFileW @ 0x14001C57C (CreateFileW.c)
 *     CloseHandle @ 0x14001C5D4 (CloseHandle.c)
 *     memcpy_0 @ 0x14001E82B (memcpy_0.c)
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
  int v11; // r8d
  unsigned int v12; // eax
  int v13; // ecx
  int i; // edx
  __int64 v15; // r9
  _WORD *v16; // rbx
  size_t v17; // r15
  _WORD *v18; // rax
  _WORD *v19; // r14
  __int64 v21; // [rsp+80h] [rbp+18h] BYREF

  LODWORD(v21) = 0;
  v4 = 0LL;
  FileW = (void *)CreateFileW(L"\\\\.\\MountPointManager", 0LL, 3LL, 0LL, 3, 128, 0LL);
  if ( FileW == (void *)-1LL )
  {
    return 0;
  }
  else
  {
    v7 = wcslen(Src);
    Heap = RtlAllocateHeap(
             *(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
             KernelBaseGlobalData,
             (unsigned int)(2 * v7 + 24));
    if ( Heap )
    {
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
        v6 = DeviceIoControl(FileW, 0x6D0008u, (__int64)v4, v10, (__int64)&v21);
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
      v12 = 0;
      v13 = 0;
      for ( i = 0; ; i = v11 )
      {
        if ( v12 >= v4[1] )
        {
          RtlSetLastWin32Error(0x32u);
          goto LABEL_39;
        }
        v15 = LOWORD(v4[6 * v13 + 3]);
        v16 = (_WORD *)((char *)v4 + (unsigned int)v4[6 * i + 2]);
        if ( ((_DWORD)v15 == 96 || (_DWORD)v15 == 98 && v16[48] == 92)
          && *v16 == 92
          && (v16[1] == 63 || v16[1] == 92)
          && v16[2] == 63
          && v16[3] == 92
          && v16[4] == 86
          && v16[5] == 111
          && v16[6] == 108
          && v16[7] == 117
          && v16[8] == 109
          && v16[9] == 101
          && v16[10] == 123
          && v16[19] == 45
          && v16[24] == 45
          && v16[29] == 45
          && v16[34] == 45
          && v16[47] == 125 )
        {
          break;
        }
        v12 = ++v11;
        v13 = v11;
      }
      v17 = LOWORD(v4[6 * v13 + 3]);
      v18 = RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), KernelBaseGlobalData, v15 + 2);
      *a2 = v18;
      v19 = v18;
      if ( !v18 )
        goto LABEL_38;
      memcpy_0(v18, v16, v17);
      v19[v17 >> 1] = 0;
      v19[1] = 92;
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v4);
      goto LABEL_11;
    }
LABEL_38:
    RtlSetLastWin32Error(8u);
    v6 = 0;
LABEL_39:
    CloseHandle(FileW);
    if ( Heap )
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Heap);
    if ( v4 )
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v4);
  }
  return v6;
}
