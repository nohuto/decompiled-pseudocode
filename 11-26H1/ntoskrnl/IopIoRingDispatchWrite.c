/*
 * XREFs of IopIoRingDispatchWrite @ 0x14079B2EC
 * Callers:
 *     IopProcessIoRingEntry @ 0x140B02A30 (IopProcessIoRingEntry.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     IopFileObjectRevoked @ 0x1402692A0 (IopFileObjectRevoked.c)
 *     IopMcReleaseMdl @ 0x140410BE8 (IopMcReleaseMdl.c)
 *     IopCompleteIoRingEntry @ 0x140410C94 (IopCompleteIoRingEntry.c)
 *     IopWriteFile @ 0x140982A60 (IopWriteFile.c)
 *     IopIoRingGetBuffer @ 0x140B02CDC (IopIoRingGetBuffer.c)
 *     IopIoRingReferenceFileObject @ 0x140B409DC (IopIoRingReferenceFileObject.c)
 */

void __fastcall IopIoRingDispatchWrite(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  char PreviousMode; // r14
  int Buffer; // ebx
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  PVOID v13; // rbx
  __int64 v14; // rdx
  char v15; // [rsp+20h] [rbp-39h]
  char v16; // [rsp+28h] [rbp-31h]
  __int64 v17; // [rsp+70h] [rbp+17h] BYREF
  _OWORD v18[3]; // [rsp+78h] [rbp+1Fh] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+C8h] [rbp+6Fh] BYREF
  PVOID Object; // [rsp+D0h] [rbp+77h] BYREF
  __int64 v21; // [rsp+D8h] [rbp+7Fh] BYREF

  v2 = *(_DWORD *)(a2 + 16);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  BugCheckParameter4 = 0LL;
  v18[0] = 0LL;
  if ( (v2 & 0xFFFFFFFC) != 0 )
  {
    Buffer = -1069154303;
LABEL_11:
    v14 = *(_QWORD *)(a2 + 8);
    *((_QWORD *)&v18[0] + 1) = 0LL;
    LODWORD(v18[0]) = Buffer;
    IopCompleteIoRingEntry(a1, v14, v18, 0);
    return;
  }
  v7 = *(unsigned int *)(a2 + 48);
  v8 = *(_QWORD *)(a2 + 32);
  v9 = v2 >> 1;
  v16 = 0;
  LOBYTE(v9) = v9 & 1;
  v15 = PreviousMode;
  v17 = 0LL;
  Buffer = IopIoRingGetBuffer(a1, v8, v9, v7, v15, v16, &v17, &BugCheckParameter4);
  if ( Buffer >= 0 )
  {
    v12 = *(_QWORD *)(a2 + 24);
    LOBYTE(v10) = *(_BYTE *)(a2 + 16) & 1;
    LOBYTE(v11) = PreviousMode;
    Object = 0LL;
    v21 = 0LL;
    Buffer = IopIoRingReferenceFileObject(a1, v12, v10, v11, 1, 0, &Object, &v21);
    if ( Buffer >= 0 )
    {
      v13 = Object;
      if ( IopFileObjectRevoked((__int64)Object) )
      {
        ObfDereferenceObject(v13);
        Buffer = -1073739504;
      }
      else
      {
        *(_BYTE *)(a2 + 23) = 0;
        Buffer = IopWriteFile(
                   (ULONG_PTR)v13,
                   v18,
                   v17,
                   *(_DWORD *)(a2 + 48),
                   a2 + 40,
                   a2 + 52,
                   SHIDWORD(v21),
                   a1,
                   *(_QWORD *)(a2 + 8),
                   *(_DWORD *)(a2 + 20) | 0x80000000,
                   (__int64)&BugCheckParameter4);
      }
    }
  }
  if ( BugCheckParameter4 )
    IopMcReleaseMdl((struct _MDL *)BugCheckParameter4);
  if ( Buffer != 259 )
    goto LABEL_11;
}
