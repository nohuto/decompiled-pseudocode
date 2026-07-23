/*
 * XREFs of RtlpWalkFrameChain @ 0x18005BC74
 * Callers:
 *     RtlWalkFrameChain @ 0x18005BC30 (RtlWalkFrameChain.c)
 * Callees:
 *     RtlpGetStackLimits @ 0x1800CAF10 (RtlpGetStackLimits.c)
 *     RtlpLookupFunctionEntryForStackWalks @ 0x1800E1644 (RtlpLookupFunctionEntryForStackWalks.c)
 *     RtlpCaptureContextForStackWalk @ 0x180127360 (RtlpCaptureContextForStackWalk.c)
 *     ??$RtlpxVirtualUnwind@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT_FOR_STACKWALK@@@@YAJK_K0VCDirectFnEnt@@PEAU_CONTEXT_FOR_STACKWALK@@PEAEPEAPEAXPEA_KPEAP6A?AW4_EXCEPTION_DISPOSITION@@PEAU_EXCEPTION_RECORD@@PEAXPEAU_CONTEXT@@7@ZPEAU_AMD64_UNWIND_PARAMS@@KPEAK@Z @ 0x18014C2F0 (--$RtlpxVirtualUnwind@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT_F.c)
 *     ZwQueryVirtualMemory @ 0x18015F2A0 (ZwQueryVirtualMemory.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpWalkFrameChain(__int64 a1, unsigned int a2, int a3, unsigned int a4, unsigned __int64 a5)
{
  __int64 v8; // rdx
  void (*v9)(void); // r14
  unsigned int v10; // ebx
  char v11; // al
  __int64 v12; // rsi
  NTSTATUS VirtualMemory; // eax
  __int64 v14; // rcx
  int v15; // edi
  unsigned __int64 v17; // [rsp+68h] [rbp-100h] BYREF
  __int64 v18; // [rsp+70h] [rbp-F8h] BYREF
  __int64 v19; // [rsp+78h] [rbp-F0h] BYREF
  __int128 v20; // [rsp+80h] [rbp-E8h]
  __int64 v21; // [rsp+90h] [rbp-D8h]
  _QWORD v22[3]; // [rsp+98h] [rbp-D0h] BYREF
  PVOID BaseAddress; // [rsp+B0h] [rbp-B8h] BYREF
  unsigned __int64 v24; // [rsp+B8h] [rbp-B0h]
  __int64 v25; // [rsp+F0h] [rbp-78h]
  __int64 v26; // [rsp+100h] [rbp-68h]
  _OWORD MemoryInformation[2]; // [rsp+110h] [rbp-58h] BYREF
  __int128 v28; // [rsp+130h] [rbp-38h]
  int v29; // [rsp+180h] [rbp+18h] BYREF

  v29 = a3;
  memset_thunk_772440563353939046(&BaseAddress, 0, 0x50uLL);
  v18 = 0LL;
  v17 = 0LL;
  a5 = 0LL;
  memset(MemoryInformation, 0, sizeof(MemoryInformation));
  v28 = 0LL;
  v9 = RtlRaiseExceptionForReturnAddressHijack;
  if ( ((LdrSystemDllInitBlock.MitigationOptionsMap.Map[1] >> 60) & 3) != 1 )
    v9 = 0LL;
  LOBYTE(v8) = v9 != 0LL;
  RtlpCaptureContextForStackWalk(&BaseAddress, v8);
  LOBYTE(v29) = 0;
  if ( !(unsigned __int8)RtlpGetStackLimits(&a5, &v17) )
    return 0LL;
  v10 = 0;
  v20 = xmmword_1801DF450;
  v21 = qword_1801DF460;
  do
  {
    if ( (v24 & 7) != 0 )
      break;
    if ( v24 < a5 || (v11 = 1, v24 >= v17) )
      v11 = 0;
    if ( !v11 )
      break;
    v12 = RtlpLookupFunctionEntryForStackWalks(BaseAddress);
    if ( v12 )
    {
      VirtualMemory = 0;
      v14 = *(unsigned int *)(v12 + 8);
      v15 = DWORD2(v20);
      if ( !*(_WORD *)(v14 + *((_QWORD *)&v20 + 1) + 1) && (*(_BYTE *)(v14 + *((_QWORD *)&v20 + 1)) & 0x20) == 0 )
      {
        VirtualMemory = ZwQueryVirtualMemory(
                          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                          BaseAddress,
                          MemoryBasicInformation,
                          MemoryInformation,
                          0x30uLL,
                          0LL);
        if ( VirtualMemory < 0 )
          return v10;
        if ( (BYTE4(v28) & 0x40) != 0 )
          VirtualMemory = -1073741823;
      }
      if ( VirtualMemory < 0 )
        return v10;
    }
    else
    {
      v15 = DWORD2(v20);
      if ( !*((_QWORD *)&v20 + 1) )
        return v10;
    }
    v22[2] = 0LL;
    v19 = 0LL;
    v22[0] = &a5;
    v22[1] = &v17;
    v26 = v12;
    if ( (int)RtlpxVirtualUnwind<CDirectFnEnt,CDirectUnwindInfo,CDirectMemoryAccessors,_CONTEXT_FOR_STACKWALK *>(
                0,
                v15,
                (_DWORD)BaseAddress,
                v12,
                (__int64)&BaseAddress,
                (__int64)&v29,
                (__int64)&v19,
                (__int64)&v18,
                0,
                (__int64)v22,
                0,
                0LL) < 0 )
      break;
    if ( v10 && v9 && BaseAddress == v9 )
      BaseAddress = *(PVOID *)(v25 - 8);
    if ( !BaseAddress )
      break;
    if ( v10 >= a4 )
      *(_QWORD *)(a1 + 8LL * (v10 - a4)) = BaseAddress;
    ++v10;
  }
  while ( v10 < a2 );
  return v10;
}
