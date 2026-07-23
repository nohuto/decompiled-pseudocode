/*
 * XREFs of MicrocodeUpdate @ 0x1406E1C10
 * Callers:
 *     PrExtApplyPatch @ 0x1405322A8 (PrExtApplyPatch.c)
 * Callees:
 *     HviIsHypervisorVendorMicrosoft @ 0x1406E0C30 (HviIsHypervisorVendorMicrosoft.c)
 *     MicrocodeInitLogging @ 0x1406E1B38 (MicrocodeInitLogging.c)
 *     MicrocodePrePatchCheckAndLogging @ 0x1406E1B70 (MicrocodePrePatchCheckAndLogging.c)
 *     IntelMicrocodeChecksumValidate @ 0x1406E25FC (IntelMicrocodeChecksumValidate.c)
 *     IntelMicrocodeGetRecordData @ 0x1406E2640 (IntelMicrocodeGetRecordData.c)
 *     GetCpuManufacturer @ 0x1406E2838 (GetCpuManufacturer.c)
 *     AMDMicrocodeGetRecordData @ 0x1406E289C (AMDMicrocodeGetRecordData.c)
 */

__int64 __fastcall MicrocodeUpdate(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v4; // rsi
  int v12; // r12d
  __int64 result; // rax
  int v14; // edi
  int v15; // edi
  unsigned __int64 v16; // rbx
  unsigned int v17; // r9d
  int v18; // r9d
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  unsigned int v26; // ebx
  unsigned int v27; // r9d
  unsigned int v28[8]; // [rsp+20h] [rbp-20h] BYREF
  unsigned __int64 v29; // [rsp+88h] [rbp+48h] BYREF

  *(_QWORD *)v28 = 0LL;
  v4 = 0LL;
  v29 = 0LL;
  _RAX = 1LL;
  __asm { cpuid }
  v12 = _RAX;
  if ( HviIsHypervisorVendorMicrosoft() )
    return 3224698886LL;
  MicrocodeInitLogging(v12, a3);
  v14 = a3 - 1;
  if ( !v14 )
  {
LABEL_6:
    if ( !(unsigned __int8)GetCpuManufacturer(2LL) )
      goto LABEL_7;
    v25 = __readmsr(0x8Bu);
    v26 = v25;
    if ( a1 )
    {
      if ( (int)AMDMicrocodeGetRecordData(a1, a2, v28, &v29) < 0 )
        goto LABEL_19;
      v4 = v29;
      v27 = *(_DWORD *)(v29 + 4);
    }
    else
    {
      v27 = 0;
    }
    if ( (int)MicrocodePrePatchCheckAndLogging(v26, v27) < 0 )
      return 3221225659LL;
    __writemsr(0xC0010020, v4);
    v24 = __readmsr(0x8Bu);
    goto LABEL_24;
  }
  v15 = v14 - 1;
  if ( v15 )
  {
    if ( v15 != 11 )
    {
LABEL_7:
      CmpContextListLock.Timer.Header.SignalState = 8;
      return 3221225659LL;
    }
    goto LABEL_6;
  }
  if ( !(unsigned __int8)GetCpuManufacturer(1LL) )
    goto LABEL_7;
  v16 = __readmsr(0x8Bu) >> 32;
  if ( a1 )
  {
    if ( (int)IntelMicrocodeGetRecordData(a1, a2, v28, &v29) < 0 )
    {
LABEL_19:
      CmpContextListLock.Timer.Header.SignalState = 9;
      return 3221225659LL;
    }
    v4 = v29;
    result = IntelMicrocodeChecksumValidate(v29, v28[0]);
    if ( (int)result < 0 )
    {
      CmpContextListLock.Timer.Header.SignalState = 8;
      return result;
    }
  }
  else
  {
    v17 = 0;
  }
  if ( (int)MicrocodePrePatchCheckAndLogging(v16, v17) < 0 )
    return 3221225659LL;
  __writemsr(0x79u, v4 + 48);
  __writemsr(0x8Bu, 0LL);
  _RAX = 1LL;
  __asm { cpuid }
  v24 = __readmsr(0x8Bu) >> 32;
LABEL_24:
  LODWORD(CmpContextListLock.RelativeTimerBias) = v24;
  if ( v18 == (_DWORD)v24 )
  {
    CmpContextListLock.Timer.Header.SignalState = 0;
    return 0LL;
  }
  else
  {
    CmpContextListLock.Timer.Header.SignalState = 3;
    return 3221225534LL;
  }
}
