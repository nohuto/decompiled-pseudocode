/*
 * XREFs of IopQueryProcessIdsUsingFile @ 0x1409705AC
 * Callers:
 *     NtQueryInformationFile @ 0x1409B4B00 (NtQueryInformationFile.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     ExEnumHandleTable @ 0x1408FBBA0 (ExEnumHandleTable.c)
 *     PsGetNextProcess @ 0x14096EE20 (PsGetNextProcess.c)
 *     MmIsFileMapped @ 0x1409706E8 (MmIsFileMapped.c)
 *     ObReferenceProcessHandleTable @ 0x1409717D0 (ObReferenceProcessHandleTable.c)
 */

__int64 __fastcall IopQueryProcessIdsUsingFile(__int64 a1, _DWORD *a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned __int64 *v6; // r12
  unsigned int v7; // r15d
  unsigned int v8; // edi
  struct _EX_RUNDOWN_REF *i; // rcx
  LIST_ENTRY *NextProcess; // rax
  struct _EX_RUNDOWN_REF *v11; // rbx
  unsigned int *v12; // rax
  char v13; // si
  __int64 v15; // [rsp+20h] [rbp-48h] BYREF
  __int64 v16; // [rsp+28h] [rbp-40h]

  v6 = (unsigned __int64 *)(a2 + 2);
  v7 = (unsigned int)(a3 - 8) >> 3;
  v8 = 0;
  v16 = 0LL;
  *a2 = 0;
  v15 = a1;
  for ( i = 0LL; ; i = v11 )
  {
    NextProcess = PsGetNextProcess(i, (__int64)a2, a3, a4);
    v11 = (struct _EX_RUNDOWN_REF *)NextProcess;
    if ( !NextProcess )
      break;
    v12 = (unsigned int *)ObReferenceProcessHandleTable(NextProcess);
    if ( v12 )
    {
      LOBYTE(v16) = v11 == (struct _EX_RUNDOWN_REF *)KeGetCurrentThread()->ApcState.Process;
      v13 = ExEnumHandleTable(v12, (__int64)IopIsFileOpenOrSection, (__int64)&v15, 0LL);
      ExReleaseRundownProtection_0(v11 + 61);
    }
    else
    {
      v13 = 0;
    }
    if ( v13 || (unsigned int)MmIsFileMapped(v11, a1) )
    {
      if ( v8 < v7 )
      {
        *v6 = v11[58].Count;
        ++*a2;
        ++v6;
      }
      ++v8;
    }
  }
  LODWORD(a4->Thread) = 8 * v8 + 8;
  return v7 < v8 ? 0xC0000004 : 0;
}
