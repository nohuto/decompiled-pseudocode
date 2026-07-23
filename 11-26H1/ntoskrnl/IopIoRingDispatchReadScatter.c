/*
 * XREFs of IopIoRingDispatchReadScatter @ 0x14079ABC0
 * Callers:
 *     IopProcessIoRingEntry @ 0x140B02A30 (IopProcessIoRingEntry.c)
 * Callees:
 *     IopCompleteIoRingEntry @ 0x140410C94 (IopCompleteIoRingEntry.c)
 *     IopReadFileScatter @ 0x140B0EB28 (IopReadFileScatter.c)
 *     IopIoRingReferenceFileObject @ 0x140B409DC (IopIoRingReferenceFileObject.c)
 */

void __fastcall IopIoRingDispatchReadScatter(PVOID a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r8
  int FileScatter; // eax
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10[2]; // [rsp+60h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp+10h] BYREF

  v4 = *(unsigned int *)(a2 + 16);
  LOBYTE(a4) = KeGetCurrentThread()->PreviousMode;
  *(_OWORD *)v10 = 0LL;
  if ( (v4 & 0xFFFFFFFE) != 0 )
  {
    FileScatter = -1069154303;
LABEL_5:
    v9 = *(_QWORD *)(a2 + 8);
    v10[1] = 0LL;
    LODWORD(v10[0]) = FileScatter;
    IopCompleteIoRingEntry((__int64)a1, v9, v10, 0);
    return;
  }
  v8 = *(_QWORD *)(a2 + 24);
  LOBYTE(v4) = v4 & 1;
  BugCheckParameter2 = 0LL;
  FileScatter = IopIoRingReferenceFileObject(a1, v8, v4, a4, 0, 1, &BugCheckParameter2, 0LL);
  if ( FileScatter < 0 )
    goto LABEL_5;
  FileScatter = IopReadFileScatter(
                  BugCheckParameter2,
                  (__int64)v10,
                  *(_DWORD *)(a2 + 32),
                  *(PFILE_SEGMENT_ELEMENT *)(a2 + 40),
                  *(_DWORD *)(a2 + 56),
                  a2 + 48,
                  a2 + 60,
                  a1,
                  *(_QWORD *)(a2 + 8));
  if ( FileScatter != 259 )
    goto LABEL_5;
}
