/*
 * XREFs of GetMicrocodePatchData @ 0x1406E16D0
 * Callers:
 *     PrExtExportRecordData @ 0x1406E0E18 (PrExtExportRecordData.c)
 * Callees:
 *     MicrocodeInitLogging @ 0x1406E1B38 (MicrocodeInitLogging.c)
 *     MicrocodePrePatchCheckAndLogging @ 0x1406E1B70 (MicrocodePrePatchCheckAndLogging.c)
 *     IntelMicrocodeChecksumValidate @ 0x1406E25FC (IntelMicrocodeChecksumValidate.c)
 *     IntelMicrocodeGetRecordData @ 0x1406E2640 (IntelMicrocodeGetRecordData.c)
 *     GetCpuManufacturer @ 0x1406E2838 (GetCpuManufacturer.c)
 *     AMDMicrocodeGetRecordData @ 0x1406E289C (AMDMicrocodeGetRecordData.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall GetMicrocodePatchData(__int64 a1, unsigned __int64 a2, __int64 a3, void **a4)
{
  unsigned int v12; // esi
  __int64 result; // rax
  unsigned int v14; // ebx
  int v15; // r9d
  unsigned int v16; // r9d
  unsigned int v17; // ebx
  unsigned int v18; // ebx
  unsigned __int64 v19; // rsi
  unsigned int v20; // ebx
  unsigned __int64 v21; // rax
  const void *v22; // r10
  size_t v23; // r11
  unsigned int v24[8]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v25; // [rsp+70h] [rbp+30h] BYREF

  *(_QWORD *)v24 = 0LL;
  v25 = 0LL;
  _RAX = 1LL;
  __asm { cpuid }
  v12 = _RAX;
  if ( a1 )
  {
    if ( a2 < 0x10 )
      return 3221225485LL;
    if ( a3 != *(_QWORD *)(a1 + 8) )
      return 3221225507LL;
    v14 = *(_DWORD *)a1;
    if ( (unsigned __int8)GetCpuManufacturer(2LL) )
    {
      if ( v14 != 1 && v14 != 13 )
        return 3221225485LL;
    }
    if ( (unsigned __int8)GetCpuManufacturer(1LL) && v14 != v15 )
      return 3221225485LL;
  }
  else
  {
    v14 = (unsigned __int8)GetCpuManufacturer(1LL) != 0 ? 2 : 0;
    if ( (unsigned __int8)GetCpuManufacturer(2LL) )
      v14 = 1;
  }
  MicrocodeInitLogging(v12, v14);
  v17 = v14 - 1;
  if ( !v17 )
    goto LABEL_16;
  v18 = v17 - 1;
  if ( v18 )
  {
    if ( v18 != 11 )
    {
LABEL_17:
      CmpContextListLock.Timer.Header.SignalState = 8;
      return 3221225659LL;
    }
LABEL_16:
    if ( !(unsigned __int8)GetCpuManufacturer(v16) )
      goto LABEL_17;
    v21 = __readmsr(0x8Bu);
    LODWORD(v19) = v21;
    if ( a1 )
    {
      if ( (int)AMDMicrocodeGetRecordData(a1, a2, v24, &v25) < 0 )
        goto LABEL_26;
      v20 = *(_DWORD *)(v25 + 4);
      goto LABEL_29;
    }
    goto LABEL_28;
  }
  if ( !(unsigned __int8)GetCpuManufacturer(1LL) )
    goto LABEL_17;
  v19 = __readmsr(0x8Bu) >> 32;
  if ( !a1 )
  {
LABEL_28:
    v20 = 0;
    goto LABEL_29;
  }
  if ( (int)IntelMicrocodeGetRecordData(a1, a2, v24, &v25) < 0 )
  {
LABEL_26:
    CmpContextListLock.Timer.Header.SignalState = 9;
    return 3221225659LL;
  }
  v20 = *(_DWORD *)(v25 + 4);
  result = IntelMicrocodeChecksumValidate(v25, v24[0]);
  if ( (int)result < 0 )
  {
    CmpContextListLock.Timer.Header.SignalState = 8;
    return result;
  }
LABEL_29:
  if ( (int)MicrocodePrePatchCheckAndLogging((unsigned int)v19, v20) < 0 )
    return 3221225659LL;
  if ( a1 )
    memmove(*a4, v22, v23);
  return 0LL;
}
