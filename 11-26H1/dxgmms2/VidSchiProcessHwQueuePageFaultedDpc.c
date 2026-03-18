/*
 * XREFs of VidSchiProcessHwQueuePageFaultedDpc @ 0x140057EA8
 * Callers:
 *     VidSchDdiNotifyDpcWorker @ 0x140028DF4 (VidSchDdiNotifyDpcWorker.c)
 * Callees:
 *     VidSchiMarkDeviceAsError @ 0x140007A8C (VidSchiMarkDeviceAsError.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x140007FB0 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x14000F3B0 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x14002BF80 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapperByVal@$03@@U2@U2@U4@U4@U4@U2@U4@U4@U4@U4@U4@U2@U?$_tlgWrapSz@D@@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapperByVal@$03@@446664666664AEBU?$_tlgWrapSz@D@@6@Z @ 0x14003FFA4 (--$Write@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapBuffer@U_UNIC_ea_14003FFA4.c)
 *     _tlgKeywordOn @ 0x1400411D8 (_tlgKeywordOn.c)
 *     ?VidMmProcessFaultAndStall@@YAJPEAVVIDMM_GLOBAL@@_KPEAXIII@Z @ 0x14004ED44 (-VidMmProcessFaultAndStall@@YAJPEAVVIDMM_GLOBAL@@_KPEAXIII@Z.c)
 *     ?VidSchiValidatePageFaultFlags@@YAXW4_DXGK_PAGE_FAULT_FLAGS@@@Z @ 0x14005785C (-VidSchiValidatePageFaultFlags@@YAXW4_DXGK_PAGE_FAULT_FLAGS@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VidSchiProcessHwQueuePageFaultedDpc(PSLIST_ENTRY ListEntry)
{
  struct _SLIST_ENTRY *Next; // rsi
  __int64 v2; // r15
  __int64 v3; // r13
  int v4; // ebx
  _BYTE *v5; // r12
  int v6; // edx
  __int64 v7; // r14
  __m128i v8; // xmm1
  unsigned __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rdi
  KSPIN_LOCK v12; // r11
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rax
  const void *v16; // rcx
  _BYTE *v17; // r8
  __int64 v18; // rcx
  _BYTE *v19; // rdx
  char v20; // al
  _BYTE *v21; // rax
  _BYTE *v22; // r8
  __int64 v23; // rcx
  _BYTE *v24; // rdx
  char v25; // al
  _BYTE *v26; // rax
  int v27; // eax
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r10
  __int16 v31; // r11
  __int64 v32; // rcx
  struct _SLIST_ENTRY *v33; // [rsp+B0h] [rbp-80h]
  int v34; // [rsp+B8h] [rbp-78h]
  int v35; // [rsp+BCh] [rbp-74h] BYREF
  int v36; // [rsp+C0h] [rbp-70h] BYREF
  int v37; // [rsp+C4h] [rbp-6Ch] BYREF
  int v38; // [rsp+C8h] [rbp-68h] BYREF
  __int32 v39; // [rsp+CCh] [rbp-64h] BYREF
  __int32 v40; // [rsp+D0h] [rbp-60h] BYREF
  int v41; // [rsp+D4h] [rbp-5Ch] BYREF
  int v42; // [rsp+D8h] [rbp-58h] BYREF
  int v43; // [rsp+DCh] [rbp-54h] BYREF
  int v44; // [rsp+E0h] [rbp-50h] BYREF
  unsigned __int64 v45; // [rsp+E8h] [rbp-48h]
  struct _KEVENT *v46; // [rsp+F0h] [rbp-40h] BYREF
  _QWORD v47[2]; // [rsp+F8h] [rbp-38h] BYREF
  char v48; // [rsp+108h] [rbp-28h]
  int v49; // [rsp+10Ch] [rbp-24h]
  __int64 v50; // [rsp+110h] [rbp-20h]
  void *v51; // [rsp+118h] [rbp-18h] BYREF
  __int64 v52; // [rsp+120h] [rbp-10h] BYREF
  unsigned __int64 v53; // [rsp+128h] [rbp-8h] BYREF
  __m128i v54; // [rsp+130h] [rbp+0h] BYREF
  __int128 v55; // [rsp+140h] [rbp+10h] BYREF
  __m128i v56; // [rsp+150h] [rbp+20h] BYREF
  __int128 v57; // [rsp+160h] [rbp+30h] BYREF
  __m128i v58; // [rsp+170h] [rbp+40h]
  __int128 v59; // [rsp+180h] [rbp+50h]
  __m128i v60; // [rsp+190h] [rbp+60h]
  __int128 v61; // [rsp+1A0h] [rbp+70h]
  _BYTE v62[112]; // [rsp+1B0h] [rbp+80h] BYREF
  __int16 v63; // [rsp+230h] [rbp+100h] BYREF
  int v64; // [rsp+238h] [rbp+108h]
  int v65; // [rsp+240h] [rbp+110h]
  int v66; // [rsp+248h] [rbp+118h]

  Next = ListEntry[2].Next;
  v54 = *(__m128i *)((char *)&ListEntry[2] + 8);
  v58 = v54;
  v55 = *(__int128 *)((char *)&ListEntry[3] + 8);
  v59 = v55;
  v56 = *(__m128i *)((char *)&ListEntry[4] + 8);
  v60 = v56;
  v57 = *(__int128 *)((char *)&ListEntry[5] + 8);
  v61 = v57;
  ExpInterlockedPushEntrySList((PSLIST_HEADER)&Next[720], ListEntry);
  v2 = (int)v57;
  v3 = *((_QWORD *)&Next[1].Next + 1);
  v65 = 0;
  VidSchiValidatePageFaultFlags((enum _DXGK_PAGE_FAULT_FLAGS)v57);
  AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)v62, (unsigned __int64 *)(v3 + 2016), 1, 1);
  v4 = DWORD2(v61);
  v47[1] = v47;
  v47[0] = v47;
  v5 = 0LL;
  v6 = _mm_cvtsi128_si32(_mm_srli_si128(v56, 12));
  v7 = 0LL;
  v8 = _mm_srli_si128(v56, 8);
  v46 = (struct _KEVENT *)v3;
  v9 = _mm_srli_si128(v54, 8).m128i_u64[0];
  v45 = v9;
  v48 = 0;
  v49 = 2;
  v33 = 0LL;
  v64 = 0;
  v66 = v6;
  v34 = _mm_cvtsi128_si32(v8);
  v50 = v55;
  if ( (v2 & 2) == 0 )
  {
    v10 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)&v59 + 1) + 48LL) + 40LL);
    goto LABEL_9;
  }
  if ( (v2 & 0x40) != 0 )
  {
    v10 = *(_QWORD *)(*((_QWORD *)&v59 + 1) + 8LL);
LABEL_9:
    v11 = *(_QWORD *)(v10 + 8);
    v12 = v45;
    v7 = *(_QWORD *)(v11 + 48);
    v65 = *(_DWORD *)(v11 + 208);
    v5 = *(_BYTE **)(v7 + 2648);
    v33 = *(struct _SLIST_ENTRY **)(v7 + 2656);
    v64 = *(_DWORD *)(v10 + 88);
    *(_QWORD *)(v11 + 216) = v55;
    *(_DWORD *)(v11 + 224) = _mm_cvtsi128_si32(v8);
    *(_DWORD *)(v11 + 228) = v6;
    *(_DWORD *)(v11 + 232) = v2;
    *(_QWORD *)(v11 + 240) = v12;
    *(_DWORD *)(v11 + 236) = v4;
    if ( (v2 & 0x100) != 0 )
    {
      v13 = WORD2(Next->Next);
      v14 = *(_QWORD *)(v3 + 696);
      v15 = v14 + 8 * v13;
      if ( (unsigned int)v13 < *(_DWORD *)(v3 + 768) )
        v14 += 8 * v13;
      else
        v15 = *(_QWORD *)(v3 + 696);
      *(_DWORD *)(v11 + 232) &= (((int)VidMmProcessFaultAndStall(
                                         *(KSPIN_LOCK **)(*(_QWORD *)(v3 + 8) + 768LL),
                                         v12,
                                         *(void **)(v7 + 2640),
                                         v13,
                                         *(unsigned __int16 *)(*(_QWORD *)v14 + 8LL),
                                         *(unsigned __int16 *)(*(_QWORD *)v15 + 6LL)) >> 31) & 0xC)
                              - 269;
    }
    else
    {
      VidSchiMarkDeviceAsError((struct HwQueueStagingList *)&v46, v11, 9, 0LL);
    }
    v9 = v45;
    goto LABEL_16;
  }
  if ( (v2 & 0xC) == 0 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 13LL, v2, *((_QWORD *)&v59 + 1), v58.m128i_i64[1]);
    WdLogGlobalForLineNumber = 916;
  }
  if ( (v2 & 0x80u) != 0LL )
  {
    v5 = *(_BYTE **)(*((_QWORD *)&v59 + 1) + 96LL);
    v7 = *(_QWORD *)(*((_QWORD *)&v59 + 1) + 24LL);
    v33 = *(struct _SLIST_ENTRY **)(*((_QWORD *)&v59 + 1) + 40LL);
  }
LABEL_16:
  if ( !g_PageFaultDebugMode && !KdRefreshDebuggerNotPresent() )
  {
    if ( v7 )
      v16 = *(const void **)(v7 + 2656);
    else
      v16 = 0LL;
    DbgPrintEx(
      0x65u,
      0,
      "\n"
      "The GPU Scheduler detected a HW queue page fault at GPU VA 0x%I64X.\n"
      "We broke into the debugger to allow a chance for debugging this issue.\n"
      "Run \"!dxgkdx.gpuva -a %d -p 0x%p -o %d 0x%I64X[ -h]\" command for more info.\n"
      "To disable debug breaks on page fault, run \"?? dxgmms2!g_PageFaultDebugMode=1\" command,\n"
      "or \"ed 0x%p 1\"\n"
      "\n",
      v9,
      HIWORD(Next->Next),
      v16,
      *(_DWORD *)(v3 + 4),
      v9,
      &g_PageFaultDebugMode);
    __debugbreak();
  }
  if ( (v2 & 4) != 0 )
  {
    if ( !*((_DWORD *)&Next[134].Next + 2) )
    {
      v17 = (_BYTE *)(v3 + 3285);
      if ( !v5 )
        goto LABEL_32;
      v18 = 15LL;
      v19 = (_BYTE *)(v3 + 3285);
      do
      {
        if ( v18 == -2147483631 )
          break;
        v20 = v19[v5 - v17];
        if ( !v20 )
          break;
        *v19++ = v20;
        --v18;
      }
      while ( v18 );
      v21 = v19 - 1;
      if ( v18 )
        v21 = v19;
      *v21 = 0;
      if ( !v18 )
LABEL_32:
        *v17 = 0;
      *(_DWORD *)(v3 + 3300) = v64;
      *((_DWORD *)&Next[134].Next + 2) = 1;
    }
  }
  else if ( (v2 & 8) != 0 && !HIDWORD(Next[134].Next) )
  {
    v22 = (char *)&Next[134].Next + 12;
    if ( !v5 )
      goto LABEL_45;
    v23 = 15LL;
    v24 = (char *)&Next[134].Next + 12;
    do
    {
      if ( v23 == -2147483631 )
        break;
      v25 = v24[v5 - v22];
      if ( !v25 )
        break;
      *v24++ = v25;
      --v23;
    }
    while ( v23 );
    v26 = v24 - 1;
    if ( v23 )
      v26 = v24;
    *v26 = 0;
    if ( !v23 )
LABEL_45:
      *v22 = 0;
    v27 = v64;
    Next[136].Next = v33;
    *((_DWORD *)&Next[135].Next + 3) = v27;
    HIDWORD(Next[134].Next) = 1;
  }
  if ( (unsigned int)dword_14008A048 > 5 && tlgKeywordOn((__int64)&dword_14008A048, 0x400000000010LL) )
  {
    v32 = *(_QWORD *)(v3 + 16);
    v35 = v65;
    v52 = v30;
    v36 = v4 & 1;
    v38 = DWORD1(v61);
    v39 = v60.m128i_i32[1];
    v40 = v60.m128i_i32[0];
    v42 = v66;
    v43 = v34;
    v54.m128i_i64[0] = v50;
    *(_QWORD *)&v55 = v58.m128i_i64[0];
    v53 = v9;
    v41 = v2;
    v44 = v29;
    v37 = v4 >> 1;
    v56.m128i_i64[0] = *(_QWORD *)(v32 + 1968);
    *(_QWORD *)&v57 = *(_QWORD *)(v32 + 412);
    v51 = v5;
    v63 = v31;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      v32,
      (__int64)&unk_14007E62B,
      v28,
      v29,
      (__int64)&v63,
      (__int64)&v57,
      (unsigned __int16 **)&v56,
      (__int64)&v44,
      (__int64)&v55,
      (__int64)&v54,
      (__int64)&v43,
      (__int64)&v42,
      (__int64)&v41,
      (__int64)&v53,
      (__int64)&v40,
      (__int64)&v39,
      (__int64)&v38,
      (__int64)&v37,
      (__int64)&v36,
      (__int64)&v52,
      &v51,
      (__int64)&v35);
  }
  *(_QWORD *)(v3 + 1496) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v3 + 1464), 0, 0);
  HwQueueStagingList::~HwQueueStagingList(&v46);
  AcquireSpinLock::Release((AcquireSpinLock *)v62);
}
