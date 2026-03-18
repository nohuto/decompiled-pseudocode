/*
 * XREFs of VidSchSubmitCommand @ 0x14010A830
 * Callers:
 *     <none>
 * Callees:
 *     ?IsMockDriverStateEnabled@DXGADAPTER@@QEAA_NXZ @ 0x1400038B0 (-IsMockDriverStateEnabled@DXGADAPTER@@QEAA_NXZ.c)
 *     ?VidSchValidatePresentFlags@@YAJPEAUVIDSCH_SUBMIT_DATA2@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_SUBMIT_FLAGS@@@Z @ 0x140004C00 (-VidSchValidatePresentFlags@@YAJPEAUVIDSCH_SUBMIT_DATA2@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_SUBMIT_.c)
 *     ?VidSchiAcquirePrivateDataReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@@Z @ 0x140005D20 (-VidSchiAcquirePrivateDataReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@.c)
 *     ?VidSchiAcquireFlipFencesReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@@Z @ 0x14000BCAC (-VidSchiAcquireFlipFencesReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@.c)
 *     VidSchiSubmitCommandPacketToQueue @ 0x140011854 (VidSchiSubmitCommandPacketToQueue.c)
 *     VidSchiPropagatePresentHistoryToken @ 0x1400177B0 (VidSchiPropagatePresentHistoryToken.c)
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x140026470 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     VidSchiFreeQueuePacket @ 0x14002E4FC (VidSchiFreeQueuePacket.c)
 *     VidSchiInterlockedInsertTailList @ 0x14002E870 (VidSchiInterlockedInsertTailList.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     VidSchiInterlockedRemoveEntryList @ 0x140035C50 (VidSchiInterlockedRemoveEntryList.c)
 *     VidSchiConvertDeferredWaits @ 0x1400392D0 (VidSchiConvertDeferredWaits.c)
 *     VidSchiSetPriorityContext @ 0x140046788 (VidSchiSetPriorityContext.c)
 *     memmove @ 0x14005B8C0 (memmove.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     VidSchWaitForCompletionEvent @ 0x1400EA1E8 (VidSchWaitForCompletionEvent.c)
 *     VidSchRegisterCompletionEvent @ 0x1400EA5D8 (VidSchRegisterCompletionEvent.c)
 *     VidSchiAllocateHistoryBufferStorage @ 0x14010B080 (VidSchiAllocateHistoryBufferStorage.c)
 *     VidSchiEnsureHwFlipQueueLog @ 0x140115FCC (VidSchiEnsureHwFlipQueueLog.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VidSchSubmitCommand(struct _VIDSCH_CONTEXT *a1, struct VIDSCH_SUBMIT_DATA2 *a2)
{
  struct VIDSCH_SUBMIT_DATA2 *v2; // rsi
  __int64 v4; // r13
  __int64 v5; // r15
  __int64 v6; // rbx
  __int64 result; // rax
  unsigned int v8; // edi
  _QWORD *v9; // rax
  size_t v10; // rcx
  _DWORD *Pool2; // rdi
  KSPIN_LOCK *v12; // rcx
  void *v13; // rcx
  __int64 v14; // rcx
  char *v15; // rbx
  struct _VIDSCH_CONTEXT *v16; // rdi
  struct _VIDSCH_CONTEXT **v17; // rax
  int v18; // eax
  const void *v19; // rbx
  unsigned int v20; // eax
  unsigned int v21; // edi
  __int64 *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned int v27; // ebx
  int v28; // eax
  __int64 v29; // rax
  __int64 v30; // r9
  unsigned int i; // r8d
  bool v32; // zf
  int v33; // eax
  unsigned int v34; // ecx
  __int64 v35; // r11
  __int64 v36; // rcx
  __int64 v37; // r13
  _QWORD *v38; // rax
  __int64 v39; // r8
  KPRIORITY PriorityThread; // eax
  __int64 v41; // rcx
  size_t v42; // [rsp+60h] [rbp-A0h]
  KSPIN_LOCK *v43; // [rsp+68h] [rbp-98h]
  _QWORD v44[28]; // [rsp+70h] [rbp-90h] BYREF
  KSPIN_LOCK *v45; // [rsp+160h] [rbp+60h] BYREF
  struct VIDSCH_SUBMIT_DATA2 *v46; // [rsp+168h] [rbp+68h]
  unsigned int v47; // [rsp+170h] [rbp+70h]
  __int64 v48; // [rsp+178h] [rbp+78h]

  v46 = a2;
  v2 = a2;
  if ( !a1 || !a2 )
  {
    v27 = -1073741811;
    WdLogSingleEntry1(1LL, -1073741811LL);
    WdLogGlobalForLineNumber = 6623;
    DxgkLogInternalTriageEvent(v41, 0x40000LL);
    return v27;
  }
  v4 = *((_QWORD *)a1 + 13);
  v48 = v4;
  v5 = *(_QWORD *)(v4 + 40);
  if ( *(_BYTE *)(v4 + 212) || _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 208), 0, 0) )
  {
    v27 = -1071775232;
    WdLogSingleEntry2(3LL, v4, -1071775232LL);
    WdLogGlobalForLineNumber = 6648;
    return v27;
  }
  v6 = *(_QWORD *)a2;
  v45 = (KSPIN_LOCK *)v6;
  if ( (v6 & 0x20) != 0 )
  {
    result = VidSchValidatePresentFlags(a2, (struct _VIDSCH_DEVICE *)v4, (struct _VIDSCH_SUBMIT_FLAGS *)&v45);
    if ( (int)result < 0 )
      return result;
    v6 = (__int64)v45;
  }
  else if ( (v6 & 0x40000) != 0
         && !*((_DWORD *)a1 + 110)
         && !*((_DWORD *)a1 + 198)
         && (*(_DWORD *)a2 & 0x1000000) == 0
         && (*((_DWORD *)a2 + 1) & 4) == 0 )
  {
    VidSchiPropagatePresentHistoryToken(
      v5,
      *((union _SLIST_HEADER **)a2 + 12),
      *((struct _D3DKMT_PRESENTHISTORYTOKEN **)a2 + 13),
      0,
      0,
      0,
      0,
      0LL,
      0LL,
      (__int64)a2,
      0LL,
      0);
    return 0LL;
  }
  if ( (v6 & 0x800004) == 4 && *(_BYTE *)(v5 + 67) )
  {
    v39 = *((_BYTE *)v2 + 356) != 0 ? 0x68 : 0;
    *(_DWORD *)((char *)v2 + v39 + 496) = *(_DWORD *)((_BYTE *)v2 + v39 + 496) & 0xFFF003FF | ((((unsigned __int16)(1 << *(_DWORD *)(v5 + 160))
                                                                                               - 1) & 0x3FE) << 10);
  }
  v8 = 1136;
  v45 = *(KSPIN_LOCK **)(*((_QWORD *)a1 + 12) + 24LL);
  v43 = v45 + 253;
  if ( (unsigned int)(*((_DWORD *)v45 + 40) * (72 * *((_DWORD *)v45 + 21) + 224) + 8 * (*((_DWORD *)v45 + 21) + 113)) > 0x470 )
    v8 = *((_DWORD *)v45 + 40) * (72 * *((_DWORD *)v45 + 21) + 224) + 8 * (*((_DWORD *)v45 + 21) + 113);
  v9 = VidSchiInterlockedRemoveHeadListIfExist(v45 + 253, (_QWORD **)a1 + 90, (_DWORD *)a1 + 184);
  v10 = v8;
  v42 = v8;
  if ( !v9 )
  {
    Pool2 = (_DWORD *)ExAllocatePool2(64LL, v8, 895576406LL);
    if ( Pool2 )
      goto LABEL_14;
    memset(v44, 0, 0xA0uLL);
    v36 = *((_QWORD *)a1 + 12);
    LODWORD(v44[4]) |= 0x40u;
    v37 = (__int64)v45;
    LODWORD(v44[2]) = 1;
    LODWORD(v44[6]) = *(unsigned __int16 *)(v36 + 4);
    VidSchRegisterCompletionEvent((__int64)v45, (__int64)v44);
    do
    {
      v38 = VidSchiInterlockedRemoveHeadListIfExist((KSPIN_LOCK *)(v37 + 2024), (_QWORD **)a1 + 90, (_DWORD *)a1 + 184);
      if ( v38 )
        Pool2 = v38 - 1;
      else
        VidSchWaitForCompletionEvent(v37, (__int64)v44, 19LL);
    }
    while ( !Pool2 );
    VidSchiInterlockedRemoveEntryList((KSPIN_LOCK *)(v37 + 2032), v44, 0LL);
    v10 = v42;
    v2 = v46;
    v4 = v48;
LABEL_13:
    memset(Pool2, 0, v10);
LABEL_14:
    *((_QWORD *)Pool2 + 7) = MEMORY[0xFFFFF78000000320];
    v45 = (KSPIN_LOCK *)(Pool2 + 14);
    Pool2[13] = 1;
    VidSchiInterlockedInsertTailList(v43, (__int64)a1 + 768, (_QWORD *)Pool2 + 1, (_DWORD *)a1 + 196);
    v12 = v45;
    goto LABEL_15;
  }
  Pool2 = v9 - 1;
  if ( v9 != (_QWORD *)8 )
    goto LABEL_13;
  v12 = (KSPIN_LOCK *)(Pool2 + 14);
LABEL_15:
  *Pool2 = 895576406;
  *v12 = MEMORY[0xFFFFF78000000320];
  Pool2[13] = 2;
  Pool2[16] = 0;
  if ( (v6 & 0x40000) != 0 )
  {
    Pool2[12] = 7;
    goto LABEL_17;
  }
  v18 = *((_DWORD *)v2 + 30);
  if ( v18 != 5 && v18 != 3 )
  {
    Pool2[12] = 0;
    goto LABEL_17;
  }
  Pool2[12] = 3;
  LODWORD(v30) = *((_DWORD *)v2 + 29);
  if ( (_DWORD)v30 == -1 )
  {
LABEL_17:
    *((_QWORD *)Pool2 + 11) = a1;
    *((_QWORD *)Pool2 + 13) = KeGetCurrentThread();
    *((_QWORD *)Pool2 + 9) = v6;
    *((_QWORD *)Pool2 + 19) = *((_QWORD *)v2 + 12);
    *((_QWORD *)Pool2 + 20) = *((_QWORD *)v2 + 13);
    Pool2[42] = *((_DWORD *)v2 + 29);
    if ( (v6 & 4) != 0 )
    {
      Pool2[16] ^= ((unsigned __int8)Pool2[16] ^ (unsigned __int8)(*(_DWORD *)(v5 + 2824) >> 4)) & 4;
      v28 = *((_DWORD *)v2 + 30);
      if ( v28 == 5 || v28 == 3 )
      {
        if ( (v6 & 0x400) != 0 )
          goto LABEL_96;
        goto LABEL_68;
      }
    }
    else if ( (v6 & 0x20) != 0 )
    {
      Pool2[16] ^= ((unsigned __int8)Pool2[16] ^ (unsigned __int8)(*(_DWORD *)(v5 + 2824) >> 5)) & 4;
    }
    else if ( Pool2[12] != 7 )
    {
      Pool2[16] |= 4u;
    }
    goto LABEL_20;
  }
  for ( i = ((unsigned __int16)*((_DWORD *)v2 + 150) | (unsigned __int16)(*((_DWORD *)v2 + 150) >> 10)) & 0x3FF;
        ;
        i &= ~(1 << v34) )
  {
    LODWORD(v45) = i;
    if ( !i )
      goto LABEL_17;
    v32 = !_BitScanForward((unsigned int *)&v33, i);
    LOBYTE(v34) = -1;
    v47 = 0;
    if ( !v32 )
      LOBYTE(v34) = v33;
    v32 = *(_BYTE *)(v5 + 67) == 0;
    v34 = (char)v34;
    v47 = (char)v34;
    if ( !v32 )
    {
      LODWORD(v48) = VidSchiEnsureHwFlipQueueLog((struct _VIDSCH_GLOBAL *)v5, v30, (char)v34);
      if ( (int)v48 < 0 )
      {
        VidSchiFreeQueuePacket((__int64)a1, (__int64)Pool2);
        return (unsigned int)v48;
      }
      i = (unsigned int)v45;
      v34 = v47;
    }
    v30 = *((unsigned int *)v2 + 29);
    v35 = *(int *)(*(_QWORD *)(v5 + 8 * v30 + 3448) + 304LL * v34 + 188);
    if ( (int)v35 > -1 && *(_DWORD *)(160 * v35 + *(_QWORD *)(v5 + 3576) + 112) == 2 )
      break;
  }
  g_DxgMmsBugcheckExportIndex = 1;
  WdLogSingleEntry5(0LL, 281LL, 0x100000LL, v34, v30, v5);
  WdLogGlobalForLineNumber = 916;
LABEL_96:
  if ( (v6 & 0x800) != 0 )
  {
LABEL_68:
    v29 = *((unsigned int *)v2 + 29);
    *((_QWORD *)v2 + 16) = ++*(_QWORD *)(v4 + 8 * v29 + 256);
  }
LABEL_20:
  memmove(Pool2 + 70, v2, *((unsigned int *)v2 + 139));
  *((_DWORD *)v2 + 84) = 0;
  *((_DWORD *)v2 + 154) = 0;
  if ( !*((_BYTE *)a1 + 917) )
    VidSchiAcquirePrivateDataReference(
      (struct _VIDSCH_GLOBAL *)v5,
      (struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *)(Pool2 + 220));
  if ( *((_QWORD *)v2 + 4) && !*((_BYTE *)a1 + 917) )
    _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)Pool2 + 39) + 12LL), 1u);
  v13 = (void *)*((_QWORD *)Pool2 + 46);
  if ( v13 )
    ObfReferenceObject(v13);
  VidSchiAcquireFlipFencesReference(
    (struct _VIDSCH_GLOBAL *)v5,
    (struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *)(Pool2 + 220));
  v14 = *((_QWORD *)Pool2 + 36);
  if ( v14 && (Pool2[70] & 0x8000000) != 0 && !*((_QWORD *)Pool2 + 40) )
    *((_QWORD *)Pool2 + 40) = *(_QWORD *)(v14 + 88);
  if ( (Pool2[155] & 1) != 0 )
    VidSchiConvertDeferredWaits((__int64)a1);
  if ( Pool2[120] )
  {
    if ( DXGADAPTER::IsMockDriverStateEnabled(*(DXGADAPTER **)(v5 + 16)) )
    {
      v25 = (unsigned int)Pool2[42];
      if ( (unsigned int)v25 < *(_DWORD *)(v5 + 48) )
      {
        v26 = *(_QWORD *)(*(_QWORD *)(v5 + 8 * v25 + 3448) + 16LL);
        if ( v26 )
        {
          if ( v26 != v4 )
            Pool2[16] |= 0x80u;
        }
      }
    }
  }
  if ( !*((_DWORD *)v2 + 88) )
  {
LABEL_30:
    if ( (*(_DWORD *)(v5 + 2824) & 4) != 0 )
    {
      PriorityThread = KeQueryPriorityThread(KeGetCurrentThread());
      VidSchiSetPriorityContext(a1, PriorityThread);
    }
    v15 = (char *)a1 + 688;
    *((_QWORD *)Pool2 + 7) = MEMORY[0xFFFFF78000000320];
    Pool2[13] = 3;
    v16 = (struct _VIDSCH_CONTEXT *)(Pool2 + 8);
    v17 = (struct _VIDSCH_CONTEXT **)*((_QWORD *)a1 + 87);
    if ( *v17 != (struct _VIDSCH_CONTEXT *)((char *)a1 + 688) )
      goto LABEL_33;
    *((_QWORD *)v16 + 1) = v17;
    *(_QWORD *)v16 = v15;
    *v17 = v16;
    *((_QWORD *)a1 + 87) = v16;
    v20 = *((_DWORD *)a1 + 110) + 1;
    *((_DWORD *)a1 + 110) = v20;
    v21 = (*(_DWORD *)v2 >> 6) & 1;
    if ( v20 > v21 )
    {
      while ( 1 )
      {
        v22 = *(__int64 **)v15;
        if ( *(char **)(*(_QWORD *)v15 + 8LL) != v15 )
          break;
        v23 = *v22;
        if ( *(__int64 **)(*v22 + 8) != v22 )
          break;
        *(_QWORD *)v15 = v23;
        *(_QWORD *)(v23 + 8) = v15;
        --*((_DWORD *)a1 + 110);
        VidSchiSubmitCommandPacketToQueue((__int64)(v22 - 4));
        if ( *((_DWORD *)a1 + 110) <= v21 )
          goto LABEL_46;
      }
LABEL_33:
      __fastfail(3u);
    }
LABEL_46:
    v24 = *((unsigned int *)v2 + 29);
    if ( (unsigned int)v24 < *(_DWORD *)(v5 + 48) && (*(_BYTE *)v2 & 5) == 5 )
      _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(v5 + 8 * v24 + 3448) + 78944LL), 2, 1);
    return 0LL;
  }
  v19 = (const void *)*((_QWORD *)v2 + 43);
  result = VidSchiAllocateHistoryBufferStorage(Pool2);
  if ( (int)result >= 0 )
  {
    memmove(*((void **)Pool2 + 78), v19, 8LL * *((unsigned int *)v2 + 88));
    goto LABEL_30;
  }
  return result;
}
