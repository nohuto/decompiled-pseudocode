/*
 * XREFs of PrExtControlOperations @ 0x1406E0CC8
 * Callers:
 *     HalpMcEnumerateAndSetPatchConfig @ 0x140595968 (HalpMcEnumerateAndSetPatchConfig.c)
 *     HalpMcGetRollbackRequest @ 0x140595E28 (HalpMcGetRollbackRequest.c)
 *     HalpMcUpdateInitializeBSP @ 0x1405964E8 (HalpMcUpdateInitializeBSP.c)
 *     HalpLoadMicrocode @ 0x140787970 (HalpLoadMicrocode.c)
 *     HalpProcInitSystem @ 0x140BF1320 (HalpProcInitSystem.c)
 *     HalpMiscInitializeAmdSfs @ 0x140CBA6A0 (HalpMiscInitializeAmdSfs.c)
 * Callees:
 *     SfsInitialize @ 0x1406E141C (SfsInitialize.c)
 *     MicrocodeValidate @ 0x1406E1E10 (MicrocodeValidate.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlFindExportedRoutineByName @ 0x140AAD460 (RtlFindExportedRoutineByName.c)
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
  PVOID v12; // rax
  __int64 v13; // rdx
  PVOID ExportedRoutineByName; // rax
  __int128 v16; // [rsp+20h] [rbp-18h] BYREF

  v3 = a1 - 1;
  if ( !v3 )
  {
    LODWORD(v11) = 0;
    if ( a2 && (_DWORD)a3 == 12 )
    {
      *(_QWORD *)&CmpContextListLock.WaitBlockFill11[16] = a2;
      CmpContextListLock.WaitBlockFill5[27] = 0;
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
      CmpContextListLock.WaitBlockFill5[24] = *(_BYTE *)a2;
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
        *($9F5D72EF54BCA79AE5AD03946D2C2FEF *)((char *)&CmpContextListLock.216 + 8) = *($9F5D72EF54BCA79AE5AD03946D2C2FEF *)a2;
        *(_OWORD *)&CmpContextListLock.Teb = *((_OWORD *)a2 + 1);
        *(_QWORD *)&CmpContextListLock.Timer.Header.Lock = *((_QWORD *)a2 + 4);
        LODWORD(CmpContextListLock.Timer.Header.WaitListHead.Flink) = a2[10];
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
  CmpContextListLock.WaitBlockFill5[26] = *(_BYTE *)a2;
  return (unsigned int)v11;
}
