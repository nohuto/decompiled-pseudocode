/*
 * XREFs of IopAddMiniDumpPagesToPartialKernelDump @ 0x1405D7878
 * Callers:
 *     IoAddPagesForPartialKernelDump @ 0x1405D6F18 (IoAddPagesForPartialKernelDump.c)
 * Callees:
 *     IopUpdateMinidumpContext @ 0x140442108 (IopUpdateMinidumpContext.c)
 *     DumpCtlCheckErrorLocation @ 0x1405C897C (DumpCtlCheckErrorLocation.c)
 *     DumpCtlCheckExitStatus @ 0x1405C89A0 (DumpCtlCheckExitStatus.c)
 *     IopAddTriageDumpDataToPartialKernelDump @ 0x1405D7B48 (IopAddTriageDumpDataToPartialKernelDump.c)
 *     IopCalculateStackInformation @ 0x1405D7BEC (IopCalculateStackInformation.c)
 *     IopMarkPagesForDpcData @ 0x1405D7F24 (IopMarkPagesForDpcData.c)
 *     IopMarkPagesForLoadedDriverInformation @ 0x1405D83A0 (IopMarkPagesForLoadedDriverInformation.c)
 *     IopMarkPagesForRunTimeTriageDataBlocks @ 0x1405D8690 (IopMarkPagesForRunTimeTriageDataBlocks.c)
 *     MiAddRangeToCrashDump @ 0x1406FAE2C (MiAddRangeToCrashDump.c)
 *     MmAddUnloadedDriverInformationToCrashDump @ 0x1406FB510 (MmAddUnloadedDriverInformationToCrashDump.c)
 */

__int64 __fastcall IopAddMiniDumpPagesToPartialKernelDump(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6,
        _KTHREAD *a7,
        unsigned int a8)
{
  unsigned int v9; // ecx
  int v10; // ebx
  __int64 v11; // r9
  _QWORD *v12; // r10
  __int64 v13; // r11
  unsigned int v14; // r8d
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned int v17; // eax
  unsigned int v18; // eax
  char v19; // al
  __int64 v20; // rdi
  unsigned int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // eax
  unsigned int v24; // eax
  unsigned int v25; // eax
  unsigned int v26; // eax
  char v28; // [rsp+40h] [rbp-31h]
  __int64 v29; // [rsp+58h] [rbp-19h] BYREF
  __int128 v30; // [rsp+60h] [rbp-11h] BYREF
  __int128 v31; // [rsp+70h] [rbp-1h] BYREF
  __int128 v32; // [rsp+80h] [rbp+Fh]
  __int128 v33; // [rsp+90h] [rbp+1Fh]

  v29 = 0LL;
  a8 = 0;
  v9 = 0;
  if ( !AvailablePagesForPartialDump )
    v9 = -1073741789;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v30 = 0LL;
  v10 = DumpCtlCheckErrorLocation(v9, 16973833);
  v14 = ((v10 >> 31) & 9) + 16973824;
  if ( v10 < 0 )
    goto LABEL_13;
  v15 = *(_QWORD *)(CrashdmpDumpBlock + 8);
  v16 = *(_QWORD *)(v15 + 48);
  DWORD2(v33) |= 3u;
  *(_QWORD *)&v30 = v16;
  *((_QWORD *)&v30 + 1) = v15 + 56;
  *(_QWORD *)&v32 = &v30;
  *(_QWORD *)&v33 = &AvailablePagesForPartialDump;
  *(_QWORD *)&v31 = IoSetDumpRange;
  *((_QWORD *)&v32 + 1) = v15;
  *((_QWORD *)&v31 + 1) = 0LL;
  IopUpdateMinidumpContext(a1, v13, v12, v11, a5, a6, a7, v28, PartialDumpControl & 8);
  v17 = MmAddUnloadedDriverInformationToCrashDump(&v31);
  v10 = DumpCtlCheckErrorLocation(v17, 16973825);
  if ( v10 < 0 )
    goto LABEL_13;
  v18 = IopMarkPagesForLoadedDriverInformation(&v31);
  v10 = DumpCtlCheckErrorLocation(v18, 16973826);
  if ( v10 < 0 )
    goto LABEL_13;
  v19 = IopCalculateStackInformation(a7, a6, &v29, &a8);
  v20 = v29;
  if ( v19 )
  {
    v21 = IopMarkPagesForRunTimeTriageDataBlocks(&v31, a6, v29, v29 + a8);
    v10 = DumpCtlCheckErrorLocation(v21, 16973827);
    if ( v10 < 0 )
      goto LABEL_13;
  }
  v22 = IopMarkPagesForDpcData(&v31);
  v10 = DumpCtlCheckErrorLocation(v22, 16973828);
  if ( v10 < 0 )
    goto LABEL_13;
  v23 = MiAddRangeToCrashDump(&v31, a7->ApcState.Process, 2112LL, 0LL);
  v10 = DumpCtlCheckErrorLocation(v23, 16973829);
  if ( v10 < 0
    || (v24 = MiAddRangeToCrashDump(&v31, a7, 1944LL, 0LL), v10 = DumpCtlCheckErrorLocation(v24, 16973830), v10 < 0)
    || (v25 = MiAddRangeToCrashDump(&v31, v20, a8, 0LL), v10 = DumpCtlCheckErrorLocation(v25, 16973831), v10 < 0)
    || (v26 = IopAddTriageDumpDataToPartialKernelDump(&v31, *(_QWORD *)(CrashdmpDumpBlock + 1416)),
        v10 = DumpCtlCheckErrorLocation(v26, 16973832),
        v10 < 0) )
  {
LABEL_13:
    DumpCtlCheckExitStatus(v14, (unsigned int)v10);
  }
  return (unsigned int)v10;
}
