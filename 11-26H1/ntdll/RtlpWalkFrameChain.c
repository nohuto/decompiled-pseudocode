/*
 * XREFs of RtlpWalkFrameChain @ 0x180010544
 * Callers:
 *     RtlWalkFrameChain @ 0x180010500 (RtlWalkFrameChain.c)
 * Callees:
 *     RtlpGetStackLimits @ 0x1800CD7A0 (RtlpGetStackLimits.c)
 *     RtlpLookupFunctionEntryForStackWalks @ 0x1800E2DE4 (RtlpLookupFunctionEntryForStackWalks.c)
 *     RtlpCaptureContextForStackWalk @ 0x1801275F0 (RtlpCaptureContextForStackWalk.c)
 *     ??$RtlpxVirtualUnwind@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT_FOR_STACKWALK@@@@YAJK_K0VCDirectFnEnt@@PEAU_CONTEXT_FOR_STACKWALK@@PEAEPEAPEAXPEA_KPEAP6A?AW4_EXCEPTION_DISPOSITION@@PEAU_EXCEPTION_RECORD@@PEAXPEAU_CONTEXT@@7@ZPEAU_AMD64_UNWIND_PARAMS@@KPEAK@Z @ 0x18014C440 (--$RtlpxVirtualUnwind@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT_F.c)
 *     ZwQueryVirtualMemory @ 0x18015F3A0 (ZwQueryVirtualMemory.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpWalkFrameChain(__int64 a1, unsigned int a2, int a3, unsigned int a4, unsigned __int64 a5)
{
  __int64 v8; // rdx
  __int64 (__fastcall *v9)(); // r14
  unsigned int v10; // ebx
  char v11; // al
  __int64 v12; // rsi
  int VirtualMemory; // eax
  __int64 v14; // rcx
  int v15; // edi
  unsigned __int64 v17; // [rsp+68h] [rbp-100h] BYREF
  __int64 v18; // [rsp+70h] [rbp-F8h] BYREF
  __int64 v19; // [rsp+78h] [rbp-F0h] BYREF
  __int128 v20; // [rsp+80h] [rbp-E8h] BYREF
  __int64 v21; // [rsp+90h] [rbp-D8h]
  _QWORD v22[3]; // [rsp+98h] [rbp-D0h] BYREF
  __int64 (__fastcall *v23)(); // [rsp+B0h] [rbp-B8h] BYREF
  unsigned __int64 v24; // [rsp+B8h] [rbp-B0h]
  __int64 v25; // [rsp+F0h] [rbp-78h]
  __int64 v26; // [rsp+100h] [rbp-68h]
  _OWORD v27[2]; // [rsp+110h] [rbp-58h] BYREF
  __int128 v28; // [rsp+130h] [rbp-38h]
  int v29; // [rsp+180h] [rbp+18h] BYREF

  v29 = a3;
  memset_thunk_772440563353939046(&v23, 0, 0x50uLL);
  v18 = 0LL;
  v17 = 0LL;
  a5 = 0LL;
  memset(v27, 0, sizeof(v27));
  v28 = 0LL;
  v9 = RtlRaiseExceptionForReturnAddressHijack;
  if ( (((unsigned __int64)qword_1801E3508 >> 60) & 3) != 1 )
    v9 = 0LL;
  LOBYTE(v8) = v9 != 0LL;
  RtlpCaptureContextForStackWalk(&v23, v8);
  LOBYTE(v29) = 0;
  if ( !(unsigned __int8)RtlpGetStackLimits(&a5, &v17) )
    return 0LL;
  v10 = 0;
  v20 = xmmword_1801E0450;
  v21 = qword_1801E0460;
  do
  {
    if ( (v24 & 7) != 0 )
      break;
    if ( v24 < a5 || (v11 = 1, v24 >= v17) )
      v11 = 0;
    if ( !v11 )
      break;
    v12 = RtlpLookupFunctionEntryForStackWalks(v23, &v20);
    if ( v12 )
    {
      VirtualMemory = 0;
      v14 = *(unsigned int *)(v12 + 8);
      v15 = DWORD2(v20);
      if ( !*(_WORD *)(v14 + *((_QWORD *)&v20 + 1) + 1) && (*(_BYTE *)(v14 + *((_QWORD *)&v20 + 1)) & 0x20) == 0 )
      {
        VirtualMemory = ZwQueryVirtualMemory(-1LL, v23, 0LL, v27, 48LL, 0LL);
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
                (_DWORD)v23,
                v12,
                (__int64)&v23,
                (__int64)&v29,
                (__int64)&v19,
                (__int64)&v18,
                0,
                (__int64)v22,
                0,
                0LL) < 0 )
      break;
    if ( v10 && v9 && v23 == v9 )
      v23 = *(__int64 (__fastcall **)())(v25 - 8);
    if ( !v23 )
      break;
    if ( v10 >= a4 )
      *(_QWORD *)(a1 + 8LL * (v10 - a4)) = v23;
    ++v10;
  }
  while ( v10 < a2 );
  return v10;
}
