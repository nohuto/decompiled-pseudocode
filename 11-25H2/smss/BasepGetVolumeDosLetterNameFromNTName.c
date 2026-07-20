/*
 * XREFs of BasepGetVolumeDosLetterNameFromNTName @ 0x14001A570
 * Callers:
 *     GetFinalPathNameByHandleW @ 0x14001ADC0 (GetFinalPathNameByHandleW.c)
 * Callees:
 *     DeviceIoControl @ 0x14001ACD0 (DeviceIoControl.c)
 *     CreateFileW @ 0x14001CA20 (CreateFileW.c)
 *     CloseHandle @ 0x14001CA80 (CloseHandle.c)
 *     memcpy_0 @ 0x14001EFA7 (memcpy_0.c)
 *     memmove_0 @ 0x14001EFB3 (memmove_0.c)
 */

__int64 __fastcall BasepGetVolumeDosLetterNameFromNTName(const wchar_t *Src, _QWORD *a2)
{
  _QWORD *v4; // rdi
  _DWORD *v5; // rax
  _DWORD *v6; // rcx
  unsigned int v7; // esi
  __int64 result; // rax
  void *FileW; // r12
  int v10; // eax
  _WORD *Heap; // r14
  unsigned __int16 v12; // ax
  unsigned int v13; // ebx
  _QWORD *v14; // rax
  WCHAR *v15; // r15
  unsigned int v16; // ebx
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-38h] BYREF
  __int64 v18; // [rsp+90h] [rbp+18h] BYREF

  v4 = 0LL;
  DestinationString = 0LL;
  LODWORD(v18) = _wcsnicmp(Src, L"\\Device\\MUP", 0xBuLL);
  if ( (_DWORD)v18 )
  {
    FileW = (void *)CreateFileW(L"\\\\.\\MountPointManager", 0LL, 3LL, 0LL, 3, 128, 0LL);
    if ( FileW != (void *)-1LL )
    {
      v10 = wcslen(Src);
      Heap = RtlAllocateHeap(
               *(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
               KernelBaseGlobalData,
               (unsigned int)(2 * v10 + 4));
      if ( Heap )
      {
        v12 = 2 * wcslen(Src);
        *Heap = v12;
        memcpy_0(Heap + 1, Src, v12);
        v13 = 536;
        while ( 1 )
        {
          if ( v4 )
            RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v4);
          v14 = RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), KernelBaseGlobalData, v13);
          v4 = v14;
          if ( !v14 )
            goto LABEL_38;
          v15 = (WCHAR *)(v14 + 1);
          v7 = DeviceIoControl(FileW, 0x6D0030u, (__int64)(v14 + 1), v13 - 8, (__int64)&v18);
          v13 = *(_DWORD *)v15 + 16;
          if ( v7 )
            break;
          if ( LODWORD(KeGetPcr()->Unused1[0]) != 234 )
          {
            RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v4);
LABEL_15:
            v4 = 0LL;
            goto LABEL_40;
          }
        }
        RtlInitUnicodeString(&DestinationString, v15 + 2);
        if ( DestinationString.Length != 96 && (DestinationString.Length != 98 || DestinationString.Buffer[48] != 92)
          || *DestinationString.Buffer != 92
          || DestinationString.Buffer[1] != 63 && DestinationString.Buffer[1] != 92
          || DestinationString.Buffer[2] != 63
          || DestinationString.Buffer[3] != 92
          || DestinationString.Buffer[4] != 86
          || DestinationString.Buffer[5] != 111
          || DestinationString.Buffer[6] != 108
          || DestinationString.Buffer[7] != 117
          || DestinationString.Buffer[8] != 109
          || DestinationString.Buffer[9] != 101
          || DestinationString.Buffer[10] != 123
          || DestinationString.Buffer[19] != 45
          || DestinationString.Buffer[24] != 45
          || DestinationString.Buffer[29] != 45
          || DestinationString.Buffer[34] != 45
          || DestinationString.Buffer[47] != 125 )
        {
          v16 = *(_DWORD *)v15;
          *a2 = v4;
          *v4 = 0x5C003F005C005CLL;
          memmove_0(v15, v15 + 2, v16);
          *((_WORD *)v4 + ((unsigned __int64)v16 >> 1) + 4) = 0;
          goto LABEL_15;
        }
        RtlSetLastWin32Error(3u);
      }
      else
      {
LABEL_38:
        RtlSetLastWin32Error(8u);
      }
      v7 = 0;
LABEL_40:
      CloseHandle(FileW);
      if ( v4 )
        RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v4);
      if ( Heap )
        RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Heap);
      return v7;
    }
  }
  else
  {
    v5 = RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), KernelBaseGlobalData, 0x10uLL);
    *a2 = v5;
    v6 = v5;
    if ( v5 )
    {
      *(_QWORD *)v5 = *(_QWORD *)L"\\\\?\\UNC";
      v5[2] = *(_DWORD *)L"UNC";
      *((_WORD *)v5 + 6) = aUnc_0[6];
      result = 1LL;
      *((_WORD *)v6 + 7) = 0;
      return result;
    }
    RtlSetLastWin32Error(8u);
  }
  return 0;
}
