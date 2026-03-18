/*
 * XREFs of PrExtControlOperations @ 0x1406DCA28
 * Callers:
 *     HalpMcEnumerateAndSetPatchConfig @ 0x1405931E8 (HalpMcEnumerateAndSetPatchConfig.c)
 *     HalpMcGetRollbackRequest @ 0x1405936A8 (HalpMcGetRollbackRequest.c)
 *     HalpMcUpdateInitializeBSP @ 0x140593D68 (HalpMcUpdateInitializeBSP.c)
 *     HalpLoadMicrocode @ 0x140784E40 (HalpLoadMicrocode.c)
 *     HalpProcInitSystem @ 0x140BEB320 (HalpProcInitSystem.c)
 *     HalpMiscInitializeAmdSfs @ 0x140CB4660 (HalpMiscInitializeAmdSfs.c)
 * Callees:
 *     SfsInitialize @ 0x1406DD17C (SfsInitialize.c)
 *     MicrocodeValidate @ 0x1406DDB70 (MicrocodeValidate.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlFindExportedRoutineByName @ 0x140AAF810 (RtlFindExportedRoutineByName.c)
 */

__int64 __fastcall PrExtControlOperations(int a1, unsigned int *a2, __int64 a3)
{
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 ExportedRoutineByName; // rax
  __int128 v16; // [rsp+20h] [rbp-18h] BYREF

  v3 = a1 - 1;
  if ( !v3 )
  {
    LODWORD(v11) = 0;
    if ( a2 && (_DWORD)a3 == 12 )
    {
      *(_QWORD *)&CmpCallbackListLock.WaitBlockFill11[16] = a2;
      CmpCallbackListLock.WaitBlockFill5[35] = 0;
      return (unsigned int)v11;
    }
    goto LABEL_29;
  }
  v4 = v3 - 2;
  if ( !v4 )
  {
    LODWORD(v11) = 0;
    if ( a2 && (_DWORD)a3 == 1 )
    {
      CmpCallbackListLock.WaitBlockFill5[33] = *(_BYTE *)a2;
      return (unsigned int)v11;
    }
    goto LABEL_29;
  }
  v5 = v4 - 2;
  if ( !v5 )
  {
    if ( (_DWORD)a3 == 44 )
    {
      LODWORD(v11) = 0;
      if ( a2 )
      {
        *(_OWORD *)&CmpCallbackListLock.Queue = *(_OWORD *)a2;
        *(_OWORD *)&CmpCallbackListLock.RelativeTimerBias = *((_OWORD *)a2 + 1);
        CmpCallbackListLock.Timer.Header.WaitListHead.Flink = (struct _LIST_ENTRY *)*((_QWORD *)a2 + 4);
        LODWORD(CmpCallbackListLock.Timer.Header.WaitListHead.Blink) = a2[10];
        return (unsigned int)v11;
      }
    }
    goto LABEL_29;
  }
  v6 = v5 - 3;
  if ( !v6 )
  {
    ExportedRoutineByName = RtlFindExportedRoutineByName(a2, "UcpUpdateControls");
    v11 = 0LL;
    if ( !ExportedRoutineByName )
      return (unsigned int)v11;
    goto LABEL_18;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v12 = RtlFindExportedRoutineByName(a2, "UcpUpdateControls");
    LODWORD(v11) = 0;
    if ( !v12 )
      return (unsigned int)v11;
    v11 = 1LL;
LABEL_18:
    v10 = guard_dispatch_icall_no_overrides(v11, v13);
    goto LABEL_19;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    if ( (_DWORD)a3 == 4 )
    {
      v10 = MicrocodeValidate(*a2);
      goto LABEL_19;
    }
LABEL_29:
    LODWORD(v11) = -1073741811;
    return (unsigned int)v11;
  }
  v9 = v8 - 1;
  if ( v9 )
  {
    if ( v9 == 1 && (_DWORD)a3 == 16 )
    {
      v16 = *(_OWORD *)a2;
      v10 = ((__int64 (__fastcall *)(__int128 *, unsigned int *, __int64, unsigned int *))SfsInitialize)(
              &v16,
              a2,
              a3,
              a2);
LABEL_19:
      LODWORD(v11) = v10;
      return (unsigned int)v11;
    }
    goto LABEL_29;
  }
  if ( (_DWORD)a3 != 1 )
    goto LABEL_29;
  LODWORD(v11) = 0;
  CmpCallbackListLock.WaitBlockFill5[34] = *(_BYTE *)a2;
  return (unsigned int)v11;
}
