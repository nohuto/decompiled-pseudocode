/*
 * XREFs of IopIoRingDispatchWriteGather @ 0x14079B4A4
 * Callers:
 *     IopProcessIoRingEntry @ 0x140B02A30 (IopProcessIoRingEntry.c)
 * Callees:
 *     IopCompleteIoRingEntry @ 0x140410C94 (IopCompleteIoRingEntry.c)
 *     IopWriteFileGather @ 0x140B03A10 (IopWriteFileGather.c)
 *     IopIoRingReferenceFileObject @ 0x140B409DC (IopIoRingReferenceFileObject.c)
 */

void __fastcall IopIoRingDispatchWriteGather(PVOID Object, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r8
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10[2]; // [rsp+70h] [rbp-18h] BYREF
  __int64 v11; // [rsp+98h] [rbp+10h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+A0h] [rbp+18h] BYREF

  v4 = *(unsigned int *)(a2 + 16);
  LOBYTE(a4) = KeGetCurrentThread()->PreviousMode;
  *(_OWORD *)v10 = 0LL;
  if ( (v4 & 0xFFFFFFFE) != 0 )
  {
    v7 = -1069154303;
LABEL_5:
    v9 = *(_QWORD *)(a2 + 8);
    v10[1] = 0LL;
    LODWORD(v10[0]) = v7;
    IopCompleteIoRingEntry((__int64)Object, v9, v10, 0);
    return;
  }
  v8 = *(_QWORD *)(a2 + 24);
  LOBYTE(v4) = v4 & 1;
  BugCheckParameter2 = 0LL;
  v11 = 0LL;
  v7 = IopIoRingReferenceFileObject(Object, v8, v4, a4, 0, 0, &BugCheckParameter2, &v11);
  if ( v7 < 0 )
    goto LABEL_5;
  *(_BYTE *)(a2 + 23) = 0;
  v7 = IopWriteFileGather(
         BugCheckParameter2,
         (__int64)v10,
         *(_DWORD *)(a2 + 32),
         *(volatile void **)(a2 + 40),
         *(_DWORD *)(a2 + 56),
         a2 + 48,
         a2 + 60,
         SHIDWORD(v11),
         Object,
         *(_QWORD *)(a2 + 8),
         *(_DWORD *)(a2 + 20) | 0x80000000);
  if ( v7 != 259 )
    goto LABEL_5;
}
