/*
 * XREFs of ?VidSchiPacketBlockedOnWaitCondition@@YA_NPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x14000A3C0
 * Callers:
 *     ?VidSchiInsertCommandToHwQueue@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x140009F10 (-VidSchiInsertCommandToHwQueue@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@PEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x14000A150 (-ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@PEAU_KLOCK_QUEUE_HANDLE@@@Z.c)
 * Callees:
 *     ?HasOutstandingPresentReferences@VIDMM_GLOBAL_ALLOC_NONPAGED@@QEBA_NXZ @ 0x140008B38 (-HasOutstandingPresentReferences@VIDMM_GLOBAL_ALLOC_NONPAGED@@QEBA_NXZ.c)
 *     ?VidSchiHwQueueFull@@YA_NPEAUVIDSCH_HW_QUEUE@@@Z @ 0x14000AE70 (-VidSchiHwQueueFull@@YA_NPEAUVIDSCH_HW_QUEUE@@@Z.c)
 *     McTemplateK0pp_EtwWriteTransfer @ 0x14001BA24 (McTemplateK0pp_EtwWriteTransfer.c)
 */

bool __fastcall VidSchiPacketBlockedOnWaitCondition(struct _VIDSCH_QUEUE_PACKET *a1)
{
  _QWORD *v1; // rbp
  __int64 v3; // rdi
  __int64 v4; // rsi
  int v5; // eax
  int v6; // r10d
  unsigned int i; // r9d
  _QWORD *v8; // rax
  __int64 v9; // rcx
  struct VIDSCH_HW_QUEUE *v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rcx
  VIDMM_GLOBAL_ALLOC_NONPAGED *v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r11
  __int64 *v19; // rdx
  __int64 v20; // rax
  __int64 **v21; // rcx
  __int64 v22; // rax
  _QWORD *v23; // rdx
  _QWORD *v24; // rdx

  v1 = (_QWORD *)*((_QWORD *)a1 + 12);
  v3 = *(_QWORD *)(v1[5] + 8LL);
  v4 = *(_QWORD *)(v3 + 40);
  if ( *(_BYTE *)(v3 + 212)
    || _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 208), 0, 0)
    || *(_DWORD *)(v4 + 3260) )
  {
    v11 = v1 + 3;
    v12 = v1[3];
    if ( v12 )
    {
      if ( *(_QWORD **)(v12 + 8) != v11 )
        goto LABEL_35;
      v24 = (_QWORD *)v1[4];
      if ( (_QWORD *)*v24 != v11 )
        goto LABEL_35;
      *v24 = v12;
      *(_QWORD *)(v12 + 8) = v24;
      *v11 = 0LL;
      v1[4] = 0LL;
    }
    return 0;
  }
  v5 = *((_DWORD *)a1 + 12);
  if ( !v5 )
  {
    if ( (*((_DWORD *)a1 + 16) & 8) != 0 )
    {
LABEL_11:
      v10 = (struct VIDSCH_HW_QUEUE *)*((_QWORD *)a1 + 12);
      return VidSchiHwQueueFull(v10);
    }
    v6 = *(_DWORD *)(v3 + 1840);
    if ( *((_DWORD *)a1 + 120) <= 0x10u )
    {
      for ( i = 0; ; ++i )
      {
        if ( i >= *((_DWORD *)a1 + 120) )
          goto LABEL_9;
        v14 = *(VIDMM_GLOBAL_ALLOC_NONPAGED **)(*((_QWORD *)a1 + i + 61) + 96LL);
        if ( (*((_DWORD *)v14 + 1) & 2) == 0 )
        {
          if ( v6
            || (v15 = *(_DWORD *)v14, (*(_DWORD *)v14 & 0x20000000) != 0) && v15 < 0
            || (v15 & 0x80000) != 0
            || (v15 & 0x100) != 0 )
          {
            if ( VIDMM_GLOBAL_ALLOC_NONPAGED::HasOutstandingPresentReferences(v14) )
              break;
          }
        }
      }
      if ( (byte_14008A201 & 1) != 0 )
        McTemplateK0pp_EtwWriteTransfer(
          *((_QWORD *)a1 + i + 61),
          &EventPrimaryAllocationBusy,
          v17,
          *(_QWORD *)(v18 + 24),
          *((_QWORD *)a1 + i + 61));
      if ( !*(_BYTE *)(v4 + 7083) || !*(_BYTE *)(*(_QWORD *)(v3 + 48) + 2632LL) || *(_DWORD *)(v3 + 1840) )
      {
        if ( !v1[4] )
        {
          v19 = v1 + 3;
          v20 = *(_QWORD *)(*(_QWORD *)(v1[5] + 16LL) + 24LL) + 3784LL;
          v21 = *(__int64 ***)(*(_QWORD *)(*(_QWORD *)(v1[5] + 16LL) + 24LL) + 3792LL);
          if ( *v21 != (__int64 *)v20 )
            goto LABEL_35;
          *v19 = v20;
          v1[4] = v21;
          *v21 = v19;
          *(_QWORD *)(v20 + 8) = v19;
        }
        return 1;
      }
      if ( (byte_14008A201 & 1) != 0 )
      {
        v22 = *(_QWORD *)(v3 + 8);
        if ( !v22 )
          v22 = v3;
        McTemplateK0pp_EtwWriteTransfer(v16, &EventFrontBufferRenderingAllowed, v17, *(_QWORD *)(v4 + 16), v22);
      }
      ++*(_QWORD *)(v4 + 7088);
    }
LABEL_9:
    v8 = v1 + 3;
    v9 = v1[3];
    if ( !v9 )
    {
LABEL_10:
      *((_DWORD *)a1 + 16) |= 8u;
      goto LABEL_11;
    }
    if ( *(_QWORD **)(v9 + 8) == v8 )
    {
      v23 = (_QWORD *)v1[4];
      if ( (_QWORD *)*v23 == v8 )
      {
        *v23 = v9;
        *(_QWORD *)(v9 + 8) = v23;
        *v8 = 0LL;
        v1[4] = 0LL;
        goto LABEL_10;
      }
    }
LABEL_35:
    __fastfail(3u);
  }
  if ( v5 != 4 )
  {
    if ( v5 == 8 )
    {
      v10 = (struct VIDSCH_HW_QUEUE *)*((_QWORD *)a1 + 12);
      return VidSchiHwQueueFull(v10);
    }
    return 0;
  }
  return (*((_BYTE *)a1 + 280) & 1) == 0;
}
