/*
 * XREFs of KdInitializeDebuggerDataBlock @ 0x140C1928C
 * Callers:
 *     KdInitSystem @ 0x140C18B60 (KdInitSystem.c)
 * Callees:
 *     MmGetPagedPoolCommitPointer @ 0x14051203C (MmGetPagedPoolCommitPointer.c)
 */

unsigned __int64 KdInitializeDebuggerDataBlock()
{
  unsigned __int64 result; // rax

  qword_140E011E0 = (__int64)MmGetPagedPoolCommitPointer();
  WORD1(KdVersionBlock) = NtBuildNumber;
  WORD3(KdVersionBlock) |= 1u;
  LOWORD(KdVersionBlock) = (unsigned int)NtBuildNumber >> 28;
  *((_QWORD *)&xmmword_140E0AAA0 + 1) = &PsLoadedModuleList;
  qword_140E0AAB0 = (__int64)&KdpDebuggerDataListHead;
  result = 0x140000000uLL;
  *(_QWORD *)&xmmword_140E0AAA0 = 0x140000000uLL;
  qword_140E01088 = 0x140000000uLL;
  *(_WORD *)((char *)&KdVersionBlock + 11) = 13059;
  dword_140E01080 = 1195525195;
  dword_140E01084 = 936;
  return result;
}
