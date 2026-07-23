/*
 * XREFs of IopAddLiveDumpPagesToPartialKernelDump @ 0x1405D73D0
 * Callers:
 *     IoAddPagesForPartialKernelDump @ 0x1405D6F18 (IoAddPagesForPartialKernelDump.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x14042E520 (KeEnumerateNextProcessor.c)
 *     DumpCtlCheckErrorLocation @ 0x1405C897C (DumpCtlCheckErrorLocation.c)
 *     DumpCtlCheckExitStatus @ 0x1405C89A0 (DumpCtlCheckExitStatus.c)
 *     IoSaveBugCheckProgress @ 0x1405C9E10 (IoSaveBugCheckProgress.c)
 *     IopDumpCallAddPagesCallbacks @ 0x1405CB4D8 (IopDumpCallAddPagesCallbacks.c)
 *     IopLiveDumpMarkDeviceNode @ 0x1405D2B04 (IopLiveDumpMarkDeviceNode.c)
 *     IoAddProcessesToDump @ 0x1405D7170 (IoAddProcessesToDump.c)
 *     IopMarkPagesForProcessorData @ 0x1405D849C (IopMarkPagesForProcessorData.c)
 *     ExAddPrivateDataToCrashDump @ 0x1406CF990 (ExAddPrivateDataToCrashDump.c)
 *     MiAddRangeToCrashDump @ 0x1406FAE2C (MiAddRangeToCrashDump.c)
 *     MmAddPrivateDataToCrashDump @ 0x1406FB3EC (MmAddPrivateDataToCrashDump.c)
 *     MmGetDumpRange @ 0x1406FB5A4 (MmGetDumpRange.c)
 */

__int64 __fastcall IopAddLiveDumpPagesToPartialKernelDump(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // r9
  unsigned int v9; // eax
  int v10; // edi
  unsigned int v11; // ebx
  unsigned int v12; // eax
  __int64 i; // rsi
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // eax
  unsigned int v24; // eax
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // r8
  unsigned int v30; // eax
  _QWORD v32[5]; // [rsp+28h] [rbp-61h] BYREF
  __int64 v33; // [rsp+50h] [rbp-39h]
  __int128 v34; // [rsp+58h] [rbp-31h] BYREF
  __int64 v35; // [rsp+68h] [rbp-21h]
  _QWORD v36[2]; // [rsp+70h] [rbp-19h] BYREF
  _QWORD v37[5]; // [rsp+80h] [rbp-9h] BYREF
  __int64 v38; // [rsp+A8h] [rbp+1Fh]
  unsigned int v39; // [rsp+100h] [rbp+77h] BYREF
  int v40; // [rsp+104h] [rbp+7Bh]

  v40 = HIDWORD(a4);
  v33 = 0LL;
  v35 = 0LL;
  v39 = 0;
  v34 = 0LL;
  v8 = *(_QWORD *)(CrashdmpDumpBlock + 8);
  v36[0] = *(_QWORD *)(v8 + 48);
  v36[1] = v8 + 56;
  v32[2] = v36;
  v32[4] = &AvailablePagesForPartialDump;
  v32[0] = IoSetDumpRange;
  v32[3] = v8;
  LODWORD(v33) = 3;
  v32[1] = 0LL;
  v9 = MiAddRangeToCrashDump(v32, &KdDebuggerDataBlock, 936LL, 0LL);
  v10 = DumpCtlCheckErrorLocation(v9, 16842753);
  v11 = ((v10 >> 31) & 1) + 16842752;
  if ( v10 < 0 )
    goto LABEL_32;
  v12 = MiAddRangeToCrashDump(v32, KiProcessorBlock, 8LL * (unsigned int)KeNumberProcessors_0, 0LL);
  v11 = 16842754;
  v10 = DumpCtlCheckErrorLocation(v12, 16842754);
  if ( v10 < 0 )
    goto LABEL_32;
  for ( i = 0LL; (unsigned int)i < (unsigned int)KeNumberProcessors_0; i = (unsigned int)(i + 1) )
  {
    v14 = MiAddRangeToCrashDump(v32, KiProcessorBlock[i], 52992LL, 0LL);
    v10 = DumpCtlCheckErrorLocation(v14, 16842754);
    if ( v10 < 0 )
      goto LABEL_32;
  }
  v11 = 16842755;
  *((_QWORD *)&v34 + 1) = *($C9C4F79064DE35237E3F199A7D1BD3E1 *)((char *)&stru_140FC11F0.116 + 4);
  *(_QWORD *)&v34 = &stru_140FC11F0.WaitRegister;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v39, (unsigned __int16 **)&v34) )
  {
    v15 = IopMarkPagesForProcessorData(v32, v39);
    v10 = DumpCtlCheckErrorLocation(v15, 16842755);
    if ( v10 < 0 )
      goto LABEL_32;
  }
  v16 = MmAddPrivateDataToCrashDump(v32, 2LL);
  v11 = 16842756;
  v10 = DumpCtlCheckErrorLocation(v16, 16842756);
  if ( v10 < 0 )
    goto LABEL_32;
  v17 = MiAddRangeToCrashDump(v32, 0xFFFFF78000000000uLL, 2720LL, 0LL);
  v11 = 16842757;
  v10 = DumpCtlCheckErrorLocation(v17, 16842757);
  if ( v10 < 0 )
    goto LABEL_32;
  v18 = MmAddPrivateDataToCrashDump(v32, 4LL);
  v11 = 16842758;
  v10 = DumpCtlCheckErrorLocation(v18, 16842758);
  if ( v10 < 0 )
    goto LABEL_32;
  v19 = MmAddPrivateDataToCrashDump(v32, 8LL);
  v11 = 16842759;
  v10 = DumpCtlCheckErrorLocation(v19, 16842759);
  if ( v10 < 0 )
    goto LABEL_32;
  if ( MmPhysicalMemoryBlock )
  {
    v20 = MiAddRangeToCrashDump(
            v32,
            MmPhysicalMemoryBlock,
            16 * ((unsigned int)(*(_DWORD *)MmPhysicalMemoryBlock - 1) + 2LL),
            0LL);
    v11 = 16842760;
    v10 = DumpCtlCheckErrorLocation(v20, 16842760);
    if ( v10 < 0 )
      goto LABEL_32;
  }
  v21 = MmAddPrivateDataToCrashDump(v32, 16LL);
  v11 = 16842761;
  v10 = DumpCtlCheckErrorLocation(v21, 16842761);
  if ( v10 < 0 )
    goto LABEL_32;
  if ( a1 == 351 && a2 == 2 )
  {
    v22 = MiAddRangeToCrashDump(v32, a3, 56LL, 0LL);
    v11 = 16842762;
    v10 = DumpCtlCheckErrorLocation(v22, 16842762);
    if ( v10 < 0 )
      goto LABEL_32;
    v23 = IopLiveDumpMarkDeviceNode((__int64)v32, *(_QWORD *)(a3 + 48));
    v11 = 16842763;
    v10 = DumpCtlCheckErrorLocation(v23, 16842763);
    if ( v10 < 0 )
      goto LABEL_32;
    if ( a5 )
    {
      v24 = IopLiveDumpMarkDeviceNode((__int64)v32, a5);
      v10 = DumpCtlCheckErrorLocation(v24, 16842763);
      if ( v10 < 0 )
        goto LABEL_32;
    }
  }
  if ( IoPreparedTriageDumpData )
  {
    if ( IoPreparedTriageDumpData != *(void **)(CrashdmpDumpBlock + 1328) )
    {
      v25 = MiAddRangeToCrashDump(
              v32,
              (char *)IoPreparedTriageDumpData - 0x2000,
              *((unsigned int *)IoPreparedTriageDumpData + 1),
              0LL);
      v11 = 16842764;
      v10 = DumpCtlCheckErrorLocation(v25, 16842764);
      if ( v10 < 0 )
        goto LABEL_32;
    }
  }
  v26 = ExAddPrivateDataToCrashDump(v32);
  v11 = 16842765;
  v10 = DumpCtlCheckErrorLocation(v26, 16842765);
  if ( v10 < 0 )
    goto LABEL_32;
  v27 = IoAddProcessesToDump((__int64)v32, (__int64)IopPartialDumpAddProcessesCallback);
  v11 = 16842766;
  v10 = DumpCtlCheckErrorLocation(v27, 16842766);
  if ( v10 < 0 )
    goto LABEL_32;
  IopDumpCallAddPagesCallbacks(a1);
  IoSaveBugCheckProgress(33);
  v38 = 0LL;
  v28 = *(_QWORD *)(CrashdmpDumpBlock + 8);
  *(_QWORD *)&v34 = *(_QWORD *)(v28 + 48);
  *((_QWORD *)&v34 + 1) = v28 + 56;
  v37[2] = &v34;
  v37[4] = &AvailablePagesForPartialDump;
  v37[0] = IoSetDumpRange;
  v37[1] = IoFreeDumpRange;
  v37[3] = v28;
  LODWORD(v38) = 7;
  MmGetDumpRange(v37, 0LL, v29, 3LL);
  IoSaveBugCheckProgress(41);
  if ( !AvailablePagesForPartialDump )
  {
    v11 = 16842768;
    v10 = DumpCtlCheckErrorLocation(0xC0000023, 16842768);
    if ( v10 < 0 )
      goto LABEL_32;
  }
  v30 = MmAddPrivateDataToCrashDump(v32, 1LL);
  v11 = 16842767;
  v10 = DumpCtlCheckErrorLocation(v30, 16842767);
  if ( v10 < 0 )
LABEL_32:
    DumpCtlCheckExitStatus(v11, (unsigned int)v10);
  return (unsigned int)v10;
}
