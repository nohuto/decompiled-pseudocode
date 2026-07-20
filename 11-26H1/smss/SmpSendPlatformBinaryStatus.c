/*
 * XREFs of SmpSendPlatformBinaryStatus @ 0x140017F7C
 * Callers:
 *     SmpGetPlatformBinary @ 0x140014990 (SmpGetPlatformBinary.c)
 *     SmpLoadDataFromRegistry @ 0x1400159FC (SmpLoadDataFromRegistry.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x140001008 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x14001E860 (__security_check_cookie.c)
 */

char __fastcall SmpSendPlatformBinaryStatus(int a1, __int64 a2, __int64 a3, unsigned __int16 *a4)
{
  bool v4; // zf
  __int64 v8; // rcx
  char *Heap; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  char *InputBuffer; // rbx
  __int64 v13; // rcx
  __int128 *v14; // r9
  void *v15; // rdx
  __int64 v16; // r8
  unsigned __int8 *v17; // rdx
  int ShareAccess; // [rsp+28h] [rbp-E0h]
  __int64 v20; // [rsp+58h] [rbp-B0h] BYREF
  void *FileHandle; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD ObjectAttributes[7]; // [rsp+68h] [rbp-A0h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v24; // [rsp+B0h] [rbp-58h] BYREF
  char v25[32]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 *v26; // [rsp+E8h] [rbp-20h]
  __int64 v27; // [rsp+F0h] [rbp-18h]
  _QWORD *v28; // [rsp+F8h] [rbp-10h]
  __int64 v29; // [rsp+100h] [rbp-8h]
  _DWORD *v30; // [rsp+108h] [rbp+0h]
  __int64 v31; // [rsp+110h] [rbp+8h]
  __int64 v32; // [rsp+118h] [rbp+10h]
  _DWORD v33[2]; // [rsp+120h] [rbp+18h] BYREF
  int v34; // [rsp+168h] [rbp+60h] BYREF

  v34 = a1;
  v4 = a1 == 0;
  v24 = 0LL;
  FileHandle = 0LL;
  memset(&ObjectAttributes[1], 0, 44);
  IoStatusBlock = 0LL;
  v8 = *(_QWORD *)&KeGetPcr()->MajorVersion;
  if ( !v4 )
    a2 = 0LL;
  Heap = (char *)RtlAllocateHeap(*(PVOID *)(v8 + 48), 8u, 0x34uLL);
  InputBuffer = Heap;
  if ( Heap )
  {
    ObjectAttributes[3] = L"8:";
    LODWORD(ObjectAttributes[1]) = 48;
    ObjectAttributes[2] = 0LL;
    LODWORD(ObjectAttributes[4]) = 0;
    *(_OWORD *)&ObjectAttributes[5] = 0LL;
    LODWORD(Heap) = NtOpenFile(
                      &FileHandle,
                      0x120003u,
                      (POBJECT_ATTRIBUTES)&ObjectAttributes[1],
                      &IoStatusBlock,
                      2u,
                      0x60u);
    if ( (int)Heap >= 0 )
    {
      *((_DWORD *)InputBuffer + 5) = 1;
      *((_DWORD *)InputBuffer + 7) = 1;
      *(_DWORD *)InputBuffer = 1130980673;
      *((_DWORD *)InputBuffer + 1) = 1396854879;
      *((_DWORD *)InputBuffer + 2) = 52;
      *((_DWORD *)InputBuffer + 3) = 4;
      *((_DWORD *)InputBuffer + 4) = 0x40000;
      *((_DWORD *)InputBuffer + 6) = 0x40000;
      *((_DWORD *)InputBuffer + 8) = 0x40000;
      *((_DWORD *)InputBuffer + 9) = v34;
      *((_DWORD *)InputBuffer + 10) = 524290;
      *(_QWORD *)(InputBuffer + 44) = a2;
      LOBYTE(Heap) = NtDeviceIoControlFile(
                       FileHandle,
                       0LL,
                       0LL,
                       0LL,
                       &IoStatusBlock,
                       0x32C000u,
                       InputBuffer,
                       0x34u,
                       0LL,
                       0);
    }
  }
  if ( FileHandle )
    LOBYTE(Heap) = NtClose(FileHandle);
  if ( InputBuffer )
    LOBYTE(Heap) = RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, InputBuffer);
  v13 = SmpTraceHandle;
  if ( SmpTraceHandle )
  {
    if ( v34 )
    {
      *((_QWORD *)&v24 + 1) = 4LL;
      *(_QWORD *)&v24 = &v34;
      v14 = &v24;
      v16 = 1LL;
      v15 = &SmssEvt_PlatformBinaryExecutionFailed;
    }
    else
    {
      v14 = 0LL;
      v15 = &SmssEvt_PlatformBinaryExecuted;
      v16 = 0LL;
    }
    LOBYTE(Heap) = EtwEventWrite(SmpTraceHandle, v15, v16, v14);
  }
  if ( a4 )
  {
    if ( (unsigned int)dword_14002FE08 > 5 )
    {
      v17 = (unsigned __int8 *)&unk_14002AF6F;
      LODWORD(v20) = v34;
      v26 = &v20;
      v28 = ObjectAttributes;
      v30 = v33;
      v32 = *((_QWORD *)a4 + 1);
      v33[0] = *a4;
      ShareAccess = 6;
      v31 = 2LL;
      v33[1] = 0;
LABEL_20:
      v27 = 4LL;
      ObjectAttributes[0] = a3;
      v29 = 8LL;
      LOBYTE(Heap) = tlgWriteTransfer_EtwEventWriteTransfer(v13, v17, v10, v11, ShareAccess, (__int64)v25);
    }
  }
  else if ( (unsigned int)dword_14002FE08 > 5 )
  {
    v17 = (unsigned __int8 *)&unk_14002AF3E;
    LODWORD(v20) = v34;
    v26 = &v20;
    v28 = ObjectAttributes;
    ShareAccess = 4;
    goto LABEL_20;
  }
  return (char)Heap;
}
