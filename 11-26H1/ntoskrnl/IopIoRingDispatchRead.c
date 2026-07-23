/*
 * XREFs of IopIoRingDispatchRead @ 0x140B02B40
 * Callers:
 *     IopProcessIoRingEntry @ 0x140B02A30 (IopProcessIoRingEntry.c)
 * Callees:
 *     IopReferenceFileObject @ 0x1402644F0 (IopReferenceFileObject.c)
 *     IopMcReleaseMdl @ 0x140410BE8 (IopMcReleaseMdl.c)
 *     IopCompleteIoRingEntry @ 0x140410C94 (IopCompleteIoRingEntry.c)
 *     IopReadFile @ 0x1409284FC (IopReadFile.c)
 *     IopIoRingGetBuffer @ 0x140B02CDC (IopIoRingGetBuffer.c)
 */

void __fastcall IopIoRingDispatchRead(_DWORD *a1, __int64 a2)
{
  unsigned int v2; // r8d
  KPROCESSOR_MODE PreviousMode; // r14
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // r8
  int Buffer; // ebx
  bool v10; // zf
  void *v11; // rcx
  __int64 v12; // rdx
  SIZE_T Length; // [rsp+30h] [rbp-50h]
  __int128 v14; // [rsp+70h] [rbp-10h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+B8h] [rbp+38h] BYREF
  volatile void *Address; // [rsp+C0h] [rbp+40h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+C8h] [rbp+48h] BYREF

  v2 = *(_DWORD *)(a2 + 16);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  BugCheckParameter4 = 0LL;
  v14 = 0LL;
  if ( (v2 & 0xFFFFFFFC) != 0 )
  {
    Buffer = -1069154303;
LABEL_13:
    v12 = *(_QWORD *)(a2 + 8);
    *((_QWORD *)&v14 + 1) = 0LL;
    LODWORD(v14) = Buffer;
    IopCompleteIoRingEntry((__int64)a1, v12, &v14, 0);
    return;
  }
  v6 = *(unsigned int *)(a2 + 48);
  v7 = *(_QWORD *)(a2 + 32);
  v8 = v2 >> 1;
  LOBYTE(v8) = v8 & 1;
  Address = 0LL;
  Buffer = IopIoRingGetBuffer(a1, v7, v8, v6, PreviousMode, 1, &Address, &BugCheckParameter4);
  if ( Buffer >= 0 )
  {
    v10 = (*(_BYTE *)(a2 + 16) & 1) == 0;
    v11 = *(void **)(a2 + 24);
    BugCheckParameter2 = 0LL;
    if ( !v10 )
    {
      if ( (unsigned int)v11 >= a1[48] )
      {
        Buffer = -1073740591;
        goto LABEL_6;
      }
      v11 = *(void **)(*((_QWORD *)a1 + 25) + 8LL * (unsigned int)v11);
    }
    Buffer = IopReferenceFileObject(v11, 1u, PreviousMode, &BugCheckParameter2, 0LL);
    if ( Buffer >= 0 )
    {
      LODWORD(Length) = *(_DWORD *)(a2 + 48);
      Buffer = IopReadFile(
                 (struct _FILE_OBJECT *)BugCheckParameter2,
                 0LL,
                 0LL,
                 0LL,
                 (unsigned int *)&v14,
                 (struct _IRP *)Address,
                 Length,
                 a2 + 40,
                 (unsigned int *)(a2 + 52),
                 a1,
                 *(struct _IO_STATUS_BLOCK **)(a2 + 8),
                 0x80000000,
                 &BugCheckParameter4,
                 0LL);
    }
  }
LABEL_6:
  if ( BugCheckParameter4 )
    IopMcReleaseMdl((struct _MDL *)BugCheckParameter4);
  if ( Buffer != 259 )
    goto LABEL_13;
}
