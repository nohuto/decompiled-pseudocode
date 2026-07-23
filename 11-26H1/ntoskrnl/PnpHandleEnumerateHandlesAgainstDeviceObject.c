/*
 * XREFs of PnpHandleEnumerateHandlesAgainstDeviceObject @ 0x1409BDC4C
 * Callers:
 *     PnpHandleEnumerateHandlesAgainstPdoStack @ 0x1404F90BC (PnpHandleEnumerateHandlesAgainstPdoStack.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExEnumHandleTable @ 0x14092BB30 (ExEnumHandleTable.c)
 *     ObReferenceProcessHandleTable @ 0x1409BB940 (ObReferenceProcessHandleTable.c)
 *     PsGetNextProcess @ 0x1409BC470 (PsGetNextProcess.c)
 */

__int64 __fastcall PnpHandleEnumerateHandlesAgainstDeviceObject(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  unsigned int v4; // edi
  struct _EX_RUNDOWN_REF *v7; // rcx
  LIST_ENTRY *NextProcess; // rax
  struct _EX_RUNDOWN_REF *v10; // rbx
  unsigned int *v11; // rax
  __int128 v13; // [rsp+20h] [rbp-28h] BYREF
  __int128 v14; // [rsp+30h] [rbp-18h]

  v4 = 0;
  v13 = 0LL;
  v7 = 0LL;
  v14 = 0LL;
  while ( 1 )
  {
    NextProcess = PsGetNextProcess(v7, a2, a3, a4);
    v10 = (struct _EX_RUNDOWN_REF *)NextProcess;
    if ( !NextProcess )
      break;
    v11 = (unsigned int *)ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)NextProcess);
    if ( v11 )
    {
      *(_QWORD *)&v13 = a1;
      *((_QWORD *)&v13 + 1) = v10;
      *(_QWORD *)&v14 = a2;
      *((_QWORD *)&v14 + 1) = a3;
      v4 = (unsigned __int8)ExEnumHandleTable(v11, (__int64)PnpHandleProcessWalkWorker, (__int64)&v13, 0LL);
      ExReleaseRundownProtection_0(v10 + 61);
      if ( v4 )
      {
        ObfDereferenceObjectWithTag(v10, 0x6E457350u);
        return v4;
      }
    }
    v7 = v10;
  }
  return v4;
}
