/*
 * XREFs of ExProcessCounterSetCallback @ 0x14091D960
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1402081F0 (RtlGetInterruptTimePrecise.c)
 *     PsGetCurrentServerSilo @ 0x1402161A0 (PsGetCurrentServerSilo.c)
 *     KeFlushProcessWriteBuffers @ 0x140252FDC (KeFlushProcessWriteBuffers.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     PsIsProcessInSilo @ 0x1404300D0 (PsIsProcessInSilo.c)
 *     ExReleaseExtensionTable @ 0x1404896C4 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x140495300 (ExGetExtensionTable.c)
 *     RtlUnicodeStringPrintf @ 0x1404B3820 (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExGetNextProcess @ 0x14091E590 (ExGetNextProcess.c)
 *     ExpSysInfoShouldSkipProcess @ 0x14091E7E0 (ExpSysInfoShouldSkipProcess.c)
 *     ExpCopyProcessInfo @ 0x14091E820 (ExpCopyProcessInfo.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x14091F7B0 (PsGetAllocatedFullProcessImageNameEx.c)
 *     RtlIntegerToUnicodeString @ 0x14097BC70 (RtlIntegerToUnicodeString.c)
 *     ExIsRestrictedCaller @ 0x1409DDEE0 (ExIsRestrictedCaller.c)
 *     ExpPcwDisabledStatus @ 0x140A768D4 (ExpPcwDisabledStatus.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExProcessCounterSetCallback(int a1, __int64 a2)
{
  __int64 v4; // rcx
  unsigned __int64 CurrentServerSilo; // rsi
  __int64 v6; // r15
  __int64 v7; // rcx
  LARGE_INTEGER InterruptTimePrecise; // rax
  PEPROCESS NextProcess; // rbx
  LARGE_INTEGER v10; // r12
  int v11; // edi
  bool v12; // sf
  __int128 *QuadPart; // rax
  __int128 v14; // xmm0
  unsigned __int16 v15; // cx
  unsigned __int16 v16; // r8
  unsigned __int16 v17; // r9
  bool v18; // zf
  __int16 v19; // ax
  _QWORD **v21; // [rsp+28h] [rbp-E0h]
  __int128 v22; // [rsp+38h] [rbp-D0h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+48h] [rbp-C0h] BYREF
  UNICODE_STRING PerformanceCounter_8; // [rsp+50h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString_8; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD *v26; // [rsp+70h] [rbp-98h] BYREF
  int v27; // [rsp+78h] [rbp-90h]
  char v28[8]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v29; // [rsp+90h] [rbp-78h]
  __int64 v30; // [rsp+B0h] [rbp-58h]
  __int64 v31; // [rsp+B8h] [rbp-50h]
  int v32; // [rsp+D0h] [rbp-38h]
  ULONG v33; // [rsp+D8h] [rbp-30h]
  int v34; // [rsp+E0h] [rbp-28h]
  int v35; // [rsp+E8h] [rbp-20h]
  __int64 v36; // [rsp+F8h] [rbp-10h]
  __int64 v37; // [rsp+100h] [rbp-8h]
  int v38; // [rsp+108h] [rbp+0h]
  __int64 v39; // [rsp+110h] [rbp+8h]
  __int64 v40; // [rsp+118h] [rbp+10h]
  __int64 v41; // [rsp+128h] [rbp+20h]
  __int64 v42; // [rsp+138h] [rbp+30h]
  __int64 v43; // [rsp+140h] [rbp+38h]
  __int64 v44; // [rsp+148h] [rbp+40h]
  __int64 v45; // [rsp+150h] [rbp+48h]
  __int64 v46; // [rsp+158h] [rbp+50h]
  __int64 v47; // [rsp+160h] [rbp+58h]
  __int64 v48; // [rsp+168h] [rbp+60h]
  __int64 v49; // [rsp+170h] [rbp+68h]
  __int64 v50; // [rsp+178h] [rbp+70h]
  __int64 v51; // [rsp+180h] [rbp+78h]
  _BYTE v52[112]; // [rsp+188h] [rbp+80h] BYREF
  _QWORD v53[5]; // [rsp+1F8h] [rbp+F0h] BYREF
  int v54; // [rsp+220h] [rbp+118h]
  int v55; // [rsp+224h] [rbp+11Ch]
  __int64 v56; // [rsp+228h] [rbp+120h]
  __int64 v57; // [rsp+230h] [rbp+128h]
  __int64 v58; // [rsp+238h] [rbp+130h]
  __int64 v59; // [rsp+240h] [rbp+138h]
  __int64 v60; // [rsp+248h] [rbp+140h]
  int Blink; // [rsp+250h] [rbp+148h]
  int v62; // [rsp+254h] [rbp+14Ch]
  unsigned __int64 ContextSwitches; // [rsp+258h] [rbp+150h]
  ULONG Value; // [rsp+260h] [rbp+158h]
  int v65; // [rsp+264h] [rbp+15Ch]
  __int64 v66; // [rsp+268h] [rbp+160h]
  __int64 v67; // [rsp+270h] [rbp+168h]
  __int64 v68; // [rsp+278h] [rbp+170h]
  __int64 v69; // [rsp+280h] [rbp+178h]
  __int64 v70; // [rsp+288h] [rbp+180h]
  __int64 v71; // [rsp+290h] [rbp+188h]
  __int64 v72; // [rsp+298h] [rbp+190h]
  __int64 v73; // [rsp+2A0h] [rbp+198h]
  __int64 v74; // [rsp+2A8h] [rbp+1A0h]
  __int64 v75; // [rsp+2B0h] [rbp+1A8h]
  __int64 v76; // [rsp+2B8h] [rbp+1B0h]
  __int64 v77; // [rsp+2C0h] [rbp+1B8h]
  LARGE_INTEGER v78; // [rsp+2C8h] [rbp+1C0h]
  char v79; // [rsp+2D8h] [rbp+1D0h] BYREF
  char v80; // [rsp+2F8h] [rbp+1F0h] BYREF

  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( (unsigned int)(a1 - 2) > 1 )
    return 0LL;
  v6 = *(_QWORD *)(a2 + 24);
  LOBYTE(v4) = 1;
  ExIsRestrictedCaller(v4, 0LL);
  LOBYTE(v7) = 1;
  KeFlushProcessWriteBuffers(v7);
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
  NextProcess = (PEPROCESS)PsIdleProcess;
  v10 = InterruptTimePrecise;
  v11 = 0;
  if ( PsIdleProcess )
  {
    do
    {
      memset_0(v53, 0, 0xD8uLL);
      memset_0(v28, 0, 0x100uLL);
      memset_0(v52, 0, 0x68uLL);
      PerformanceCounter.QuadPart = 0LL;
      v22 = 0LL;
      PerformanceCounter_8 = 0LL;
      DestinationString_8 = 0LL;
      if ( !(unsigned __int8)ExpSysInfoShouldSkipProcess(NextProcess)
        && PsIsProcessInSilo(NextProcess, CurrentServerSilo) )
      {
        v11 = ExpCopyProcessInfo(v28, NextProcess, 0LL, v52, v21);
        if ( v11 < 0 )
          break;
        v53[1] = v30;
        v53[2] = v31;
        v53[0] = v30 + v31;
        v53[3] = v36;
        v53[4] = v37;
        v54 = v38;
        v55 = v35;
        v56 = v39;
        v57 = v40;
        v58 = v44;
        v59 = v43;
        v60 = v45;
        Blink = (int)NextProcess[1].CpuPartitionList.Blink;
        v62 = v32;
        ContextSwitches = NextProcess[3].ContextSwitches;
        Value = v33;
        v65 = v34;
        v66 = v41;
        v67 = v42;
        v69 = v47;
        v70 = v46 + v47;
        v71 = v48;
        v73 = v50;
        v68 = v46;
        v72 = v49;
        v74 = v49 + v50;
        v75 = v51;
        v76 = v29;
        v77 = 10000000LL;
        v78 = v10;
        PerformanceCounter.QuadPart = 0LL;
        if ( NextProcess == PsIdleProcess )
        {
          v14 = *(_OWORD *)L"\b\n";
          v55 = 0;
        }
        else if ( NextProcess == PsInitialSystemProcess )
        {
          v14 = *(_OWORD *)ExpSystemProcessName;
        }
        else if ( NextProcess == (PEPROCESS)PsSecureSystemProcess )
        {
          v14 = *(_OWORD *)&ExpSecureSystemProcessName;
          v57 = qword_140E2D928 << 12;
          v76 = qword_140E2D928 << 12;
        }
        else if ( (NextProcess[3].ActiveGroupsMask.Masks[1] & 0x4000000000000000LL) != 0 )
        {
          v14 = *(_OWORD *)L"$&";
        }
        else
        {
          v12 = (int)PsGetAllocatedFullProcessImageNameEx(NextProcess, &PerformanceCounter) < 0;
          QuadPart = (__int128 *)PerformanceCounter.QuadPart;
          if ( v12 )
            QuadPart = (__int128 *)NextProcess[1].LastRebalanceQpc;
          v14 = *QuadPart;
        }
        v22 = v14;
        v15 = (unsigned __int16)v14 >> 1;
        if ( (unsigned __int16)((unsigned __int16)v14 >> 1) >= 4u
          && *(_WORD *)(*((_QWORD *)&v14 + 1) + 2LL * v15 - 8) == 46
          && (*(_WORD *)(*((_QWORD *)&v14 + 1) + 2LL * v15 - 6) | 0x20) == 0x65
          && (*(_WORD *)(*((_QWORD *)&v14 + 1) + 2LL * v15 - 4) | 0x20) == 0x78
          && (*(_WORD *)(*((_QWORD *)&v14 + 1) + 2LL * v15 - 2) | 0x20) == 0x65 )
        {
          v15 -= 4;
        }
        v16 = v15;
        v17 = v15;
        if ( v15 )
        {
          do
          {
            if ( *(_WORD *)(*((_QWORD *)&v14 + 1) + 2LL * v16 - 2) == 92 )
              break;
            v18 = v16-- == 1;
            v17 = v16;
          }
          while ( !v18 );
        }
        *(_DWORD *)&PerformanceCounter_8.Length = 1310720;
        LOWORD(v22) = 2 * (v15 - v17);
        WORD1(v22) = v22;
        *((_QWORD *)&v22 + 1) = *((_QWORD *)&v14 + 1) + 2LL * v16;
        PerformanceCounter_8.Buffer = (wchar_t *)&v79;
        RtlIntegerToUnicodeString(Value, 0xAu, &PerformanceCounter_8);
        v19 = v22;
        *(_DWORD *)&DestinationString_8.Length = 0x800000;
        if ( (unsigned __int16)(126 - PerformanceCounter_8.Length) < (unsigned __int16)v22 )
          v19 = 126 - PerformanceCounter_8.Length;
        LOWORD(v22) = v19;
        DestinationString_8.Buffer = (wchar_t *)&v80;
        RtlUnicodeStringPrintf(&DestinationString_8, L"%wZ:%wZ", &v22, &PerformanceCounter_8);
        v26 = v53;
        v27 = 216;
        if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost) )
        {
          v21 = &v26;
          v11 = guard_dispatch_icall_no_overrides(v6, (__int64)&DestinationString_8);
          ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost);
        }
        else
        {
          v11 = ExpPcwDisabledStatus();
        }
        if ( PerformanceCounter.QuadPart )
          ExFreePoolWithTag((PVOID)PerformanceCounter.QuadPart, 0);
        if ( v11 < 0 )
          break;
      }
      if ( NextProcess == PsIdleProcess )
        NextProcess = 0LL;
      NextProcess = (PEPROCESS)ExGetNextProcess(NextProcess);
    }
    while ( NextProcess );
    if ( NextProcess )
    {
      if ( NextProcess != PsIdleProcess )
        ObfDereferenceObjectWithTag(NextProcess, 0x6E457350u);
    }
  }
  return (unsigned int)v11;
}
