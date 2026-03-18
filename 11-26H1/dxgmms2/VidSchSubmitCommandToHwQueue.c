/*
 * XREFs of VidSchSubmitCommandToHwQueue @ 0x14000AED0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsMockDriverStateEnabled@DXGADAPTER@@QEAA_NXZ @ 0x1400038B0 (-IsMockDriverStateEnabled@DXGADAPTER@@QEAA_NXZ.c)
 *     ?VidSchValidatePresentFlags@@YAJPEAUVIDSCH_SUBMIT_DATA2@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_SUBMIT_FLAGS@@@Z @ 0x140004C00 (-VidSchValidatePresentFlags@@YAJPEAUVIDSCH_SUBMIT_DATA2@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_SUBMIT_.c)
 *     VidSchiSubmitCommandPacketToHwQueue @ 0x140009B58 (VidSchiSubmitCommandPacketToHwQueue.c)
 *     ?VidSchiAcquireFlipFencesReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@@Z @ 0x14000BCAC (-VidSchiAcquireFlipFencesReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@.c)
 *     ?VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x140039044 (-VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiSuppressVSyncsForAllPresents@@YAJPEAU_VIDSCH_DEVICE@@U_LUID@@@Z @ 0x14005A254 (-VidSchiSuppressVSyncsForAllPresents@@YAJPEAU_VIDSCH_DEVICE@@U_LUID@@@Z.c)
 *     memmove @ 0x14005B8C0 (memmove.c)
 *     VidSchiEnsureRootPageTableUpdated @ 0x140106870 (VidSchiEnsureRootPageTableUpdated.c)
 *     VidSchiAllocateHwQueuePacket @ 0x140109138 (VidSchiAllocateHwQueuePacket.c)
 *     VidSchiEnsureHwFlipQueueLog @ 0x140115FCC (VidSchiEnsureHwFlipQueueLog.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VidSchSubmitCommandToHwQueue(struct VIDSCH_HW_QUEUE *a1, struct VIDSCH_SUBMIT_DATA2 *a2)
{
  __int64 v2; // r12
  struct VIDSCH_SUBMIT_DATA2 *v3; // rsi
  __int64 v5; // r14
  __int64 v6; // rbp
  _DWORD *v7; // rbx
  __int64 HwQueuePacket; // rdi
  _DWORD *v9; // rcx
  int v10; // eax
  unsigned __int64 v11; // r15
  _DWORD *v12; // rdx
  unsigned int i; // ecx
  __int64 v14; // rdx
  void *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 result; // rax
  _DWORD *v19; // r8
  unsigned int v20; // r9d
  unsigned int j; // r12d
  bool v22; // zf
  int v23; // eax
  unsigned int v24; // ecx
  int v25; // eax
  __int64 v26; // r8
  __int64 v27; // r10
  int v28; // eax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // r8
  unsigned int v33; // [rsp+70h] [rbp+8h]
  _DWORD *v34; // [rsp+80h] [rbp+18h] BYREF
  __int64 v35; // [rsp+88h] [rbp+20h]

  v2 = *((_QWORD *)a1 + 5);
  v3 = a2;
  v35 = v2;
  v5 = *(_QWORD *)(v2 + 8);
  v6 = *(_QWORD *)(v5 + 40);
  if ( *(_BYTE *)(v5 + 212) || _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 208), 0, 0) )
  {
    WdLogSingleEntry2(3LL, v5, -1071775232LL);
    result = 3223192064LL;
    WdLogGlobalForLineNumber = 5793;
    return result;
  }
  v34 = *(_DWORD **)a2;
  v7 = v34;
  if ( ((unsigned __int8)v34 & 0x20) != 0 )
  {
    result = VidSchValidatePresentFlags(a2, (struct _VIDSCH_DEVICE *)v5, (struct _VIDSCH_SUBMIT_FLAGS *)&v34);
    if ( (int)result < 0 )
      return result;
    v7 = v34;
  }
  if ( ((unsigned int)v7 & 0x800004) == 4 && *(_BYTE *)(v6 + 67) )
  {
    v32 = *((_BYTE *)v3 + 356) != 0 ? 0x68 : 0;
    a2 = (struct VIDSCH_SUBMIT_DATA2 *)(*(_DWORD *)((_BYTE *)v3 + v32 + 496) & 0xFFF003FF | ((((unsigned __int16)(1 << *(_DWORD *)(v6 + 160))
                                                                                             - 1) & 0x3FE) << 10));
    *(_DWORD *)((char *)v3 + v32 + 496) = (_DWORD)a2;
  }
  LOBYTE(a2) = 1;
  HwQueuePacket = VidSchiAllocateHwQueuePacket(a1, a2);
  *(_DWORD *)HwQueuePacket = 895576406;
  *(_QWORD *)(HwQueuePacket + 56) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(HwQueuePacket + 52) = 2;
  *(_DWORD *)(HwQueuePacket + 64) = 0;
  if ( ((unsigned int)v7 & 0x40000) != 0 )
  {
    v11 = HwQueuePacket + 48;
    *(_DWORD *)(HwQueuePacket + 48) = 7;
    goto LABEL_10;
  }
  v9 = (_DWORD *)((char *)v3 + 120);
  v10 = *((_DWORD *)v3 + 30);
  if ( v10 != 5 && v10 != 3 )
  {
    v11 = HwQueuePacket + 48;
    *(_DWORD *)(HwQueuePacket + 48) = 0;
    VidSchiEnsureRootPageTableUpdated((void *)v2);
LABEL_10:
    v12 = (_DWORD *)((char *)v3 + 120);
    goto LABEL_11;
  }
  v19 = (_DWORD *)(HwQueuePacket + 48);
  v12 = (_DWORD *)((char *)v3 + 120);
  *(_DWORD *)(HwQueuePacket + 48) = 3;
  v11 = HwQueuePacket + 48;
  v20 = *((_DWORD *)v3 + 29);
  if ( v20 == -1 )
  {
LABEL_11:
    *(_QWORD *)(HwQueuePacket + 96) = a1;
    *(_QWORD *)(HwQueuePacket + 104) = KeGetCurrentThread();
    *(_QWORD *)(HwQueuePacket + 72) = v7;
    *(_QWORD *)(HwQueuePacket + 152) = *((_QWORD *)v3 + 12);
    *(_QWORD *)(HwQueuePacket + 160) = *((_QWORD *)v3 + 13);
    *(_DWORD *)(HwQueuePacket + 168) = *((_DWORD *)v3 + 29);
    if ( ((unsigned __int8)v7 & 4) != 0 )
    {
      *(_DWORD *)(HwQueuePacket + 64) ^= ((unsigned __int8)*(_DWORD *)(HwQueuePacket + 64) ^ (unsigned __int8)(*(_DWORD *)(v6 + 2824) >> 4)) & 4;
      if ( (*v12 == 5 || *v12 == 3) && (((unsigned __int16)v7 & 0x400) == 0 || ((unsigned __int16)v7 & 0x800) != 0) )
      {
        v31 = *((unsigned int *)v3 + 29);
        *((_QWORD *)v3 + 16) = ++*(_QWORD *)(v5 + 8 * v31 + 256);
      }
    }
    else if ( ((unsigned __int8)v7 & 0x20) != 0 )
    {
      *(_DWORD *)(HwQueuePacket + 64) ^= ((unsigned __int8)*(_DWORD *)(HwQueuePacket + 64) ^ (unsigned __int8)(*(_DWORD *)(v6 + 2824) >> 5)) & 4;
    }
    else if ( *(_DWORD *)v11 != 7 )
    {
      *(_DWORD *)(HwQueuePacket + 64) |= 4u;
    }
    v7 = (_DWORD *)(HwQueuePacket + 280);
    memmove((void *)(HwQueuePacket + 280), v3, *((unsigned int *)v3 + 139));
    v11 = 0LL;
    *((_DWORD *)v3 + 84) = 0;
    *((_DWORD *)v3 + 154) = 0;
    if ( !*(_BYTE *)(v2 + 149) )
    {
      for ( i = 0; i < *(_DWORD *)(v6 + 160); ++i )
      {
        v14 = *(_QWORD *)(8 * i * (*(_DWORD *)(HwQueuePacket + 888) + 28) + HwQueuePacket + 1088);
        if ( v14 )
          _InterlockedIncrement((volatile signed __int32 *)(v14 + 12));
      }
    }
    if ( *((_QWORD *)v3 + 4) )
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(HwQueuePacket + 312) + 12LL));
    v15 = *(void **)(HwQueuePacket + 368);
    if ( !v15 )
      goto LABEL_23;
    goto LABEL_62;
  }
  for ( j = ((unsigned __int16)*((_DWORD *)v3 + 150) | (unsigned __int16)(*((_DWORD *)v3 + 150) >> 10)) & 0x3FF; ; j &= v28 )
  {
    v12 = v9;
    v11 = (unsigned __int64)v19;
    if ( !j )
    {
      v2 = v35;
      goto LABEL_11;
    }
    v22 = !_BitScanForward((unsigned int *)&v23, j);
    LOBYTE(v24) = -1;
    if ( !v22 )
      LOBYTE(v24) = v23;
    v24 = (char)v24;
    v33 = (char)v24;
    if ( *(_BYTE *)(v6 + 67) )
    {
      v25 = VidSchiEnsureHwFlipQueueLog((struct _VIDSCH_GLOBAL *)v6, v20, (char)v24);
      v11 = (unsigned int)v25;
      if ( v25 < 0 )
      {
        VidSchiFreeQueuePacket(a1, (struct _VIDSCH_QUEUE_PACKET *)HwQueuePacket);
        return (unsigned int)v11;
      }
      v24 = v33;
    }
    v26 = *((unsigned int *)v3 + 29);
    v27 = *(int *)(*(_QWORD *)(v6 + 8 * v26 + 3448) + 304LL * v24 + 188);
    if ( (int)v27 > -1 && *(_DWORD *)(160 * v27 + *(_QWORD *)(v6 + 3576) + 112) == 2 )
      break;
    v20 = *((_DWORD *)v3 + 29);
    v19 = (_DWORD *)(HwQueuePacket + 48);
    v28 = ~(1 << v24);
    v9 = (_DWORD *)((char *)v3 + 120);
  }
  g_DxgMmsBugcheckExportIndex = 1;
  WdLogSingleEntry5(0LL, 281LL, 0x100000LL, v24, v26, v6);
  WdLogGlobalForLineNumber = 916;
LABEL_62:
  ObfReferenceObject(v15);
LABEL_23:
  VidSchiAcquireFlipFencesReference(
    (struct _VIDSCH_GLOBAL *)v6,
    (struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *)(HwQueuePacket + 880));
  if ( *(_DWORD *)(HwQueuePacket + 480) > (unsigned int)v11
    && DXGADAPTER::IsMockDriverStateEnabled(*(DXGADAPTER **)(v6 + 16)) )
  {
    v29 = *(unsigned int *)(HwQueuePacket + 168);
    if ( (unsigned int)v29 < *(_DWORD *)(v6 + 48) )
    {
      v30 = *(_QWORD *)(*(_QWORD *)(v6 + 8 * v29 + 3448) + 16LL);
      if ( v30 )
      {
        if ( v30 != v5 )
          *(_DWORD *)(HwQueuePacket + 64) |= 0x80u;
      }
    }
  }
  v16 = *(_QWORD *)(HwQueuePacket + 288);
  if ( v16 && (*v7 & 0x8000000) != 0 && *(_QWORD *)(HwQueuePacket + 320) == v11 )
    *(_QWORD *)(HwQueuePacket + 320) = *(_QWORD *)(v16 + 88);
  if ( *(_BYTE *)(v6 + 7084) != (_BYTE)v11 && (WORD2(v34) & 0x200) != 0 )
    VidSchiSuppressVSyncsForAllPresents((struct _VIDSCH_DEVICE *)v5, *(struct _LUID *)((char *)v3 + 156));
  VidSchiSubmitCommandPacketToHwQueue((struct _VIDSCH_QUEUE_PACKET *)HwQueuePacket);
  v17 = *((unsigned int *)v3 + 29);
  if ( (unsigned int)v17 < *(_DWORD *)(v6 + 48) && (*(_BYTE *)v3 & 5) == 5 )
    _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(v6 + 8 * v17 + 3448) + 78944LL), 2, 1);
  return 0LL;
}
