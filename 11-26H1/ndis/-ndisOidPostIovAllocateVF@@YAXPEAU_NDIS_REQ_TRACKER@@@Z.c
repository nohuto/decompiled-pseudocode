/*
 * XREFs of ?ndisOidPostIovAllocateVF@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E12C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14001BE20 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisCaptureIovOidContext@@YA?AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z @ 0x1400DF7BC (-ndisCaptureIovOidContext@@YA-AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z.c)
 */

void __fastcall ndisOidPostIovAllocateVF(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rbp
  __int64 v3; // rax
  struct _NDIS_MINIPORT_BLOCK *v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rsi
  _WORD *v7; // rcx
  _LIST_ENTRY *i; // rax
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *Flink; // rax
  __int64 v11; // r8
  __int64 *j; // rax
  __int64 *v13; // rcx
  _QWORD *v14; // rdx
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 *k; // rax
  __int64 *v18; // rcx
  _QWORD *v19; // rbx
  __int64 v20; // rax
  KIRQL v21; // dl
  __int128 v22; // [rsp+40h] [rbp-98h]
  __int64 v23; // [rsp+80h] [rbp-58h] BYREF
  KIRQL NewIrql; // [rsp+E0h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  NewIrql = 0;
  v3 = ndisCaptureIovOidContext((__int64)&v23, a1);
  v22 = *(_OWORD *)v3;
  v4 = *(struct _NDIS_MINIPORT_BLOCK **)(v3 + 8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x28u,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)v4,
      v1);
  if ( (_BYTE)v22 )
  {
    v5 = *(_QWORD *)(v1 + 144);
    if ( *((_DWORD *)a1 + 10) )
    {
      if ( v5 )
        ExFreePoolWithTag(*(PVOID *)(v1 + 144), 0);
    }
    else
    {
      v6 = *(_QWORD *)(v1 + 40);
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v4, &NewIrql);
      v7 = (_WORD *)(v5 + 1722);
      if ( v5 )
      {
        *v7 = *(_WORD *)(v6 + 1626);
        *(_DWORD *)(v5 + 1724) = *(_DWORD *)(v6 + 1628);
      }
      for ( i = v4->VFList.Flink; i != &v4->VFList; i = i->Flink )
      {
        if ( WORD1(i[107].Blink) == *v7 )
          goto LABEL_19;
        if ( WORD1(i[107].Blink) > *v7 )
          break;
      }
      Blink = i->Blink;
      Flink = Blink->Flink;
      if ( Blink->Flink->Blink != Blink )
        goto LABEL_28;
      *(_QWORD *)v5 = Flink;
      *(_QWORD *)(v5 + 8) = Blink;
      Flink->Blink = (_LIST_ENTRY *)v5;
      Blink->Flink = (_LIST_ENTRY *)v5;
      ++v4->NumAllocatedVFs;
LABEL_19:
      v11 = *(_QWORD *)(v5 + 56);
      for ( j = *(__int64 **)(v11 + 808); j != (__int64 *)(v11 + 808); j = (__int64 *)*j )
      {
        if ( *((_WORD *)j + 853) > *(_WORD *)(v5 + 1722) )
          break;
      }
      v13 = (__int64 *)j[1];
      v14 = (_QWORD *)(v5 + 16);
      v15 = *v13;
      if ( *(__int64 **)(*v13 + 8) != v13 )
        goto LABEL_28;
      *(_QWORD *)(v5 + 24) = v13;
      *v14 = v15;
      *(_QWORD *)(v15 + 8) = v14;
      *v13 = (__int64)v14;
      ++*(_DWORD *)(v11 + 800);
      v16 = *(_QWORD *)(v5 + 64);
      for ( k = *(__int64 **)(v16 + 80); k != (__int64 *)(v16 + 80); k = (__int64 *)*k )
      {
        if ( *((_WORD *)k + 845) > *(_WORD *)(v5 + 1722) )
          break;
      }
      v18 = (__int64 *)k[1];
      v19 = (_QWORD *)(v5 + 32);
      v20 = *v18;
      if ( *(__int64 **)(*v18 + 8) != v18 )
LABEL_28:
        __fastfail(3u);
      v21 = NewIrql;
      v19[1] = v18;
      *v19 = v20;
      *(_QWORD *)(v20 + 8) = v19;
      *v18 = (__int64)v19;
      ++*(_DWORD *)(v16 + 72);
      v4->MiniportThread = 0LL;
      KeReleaseSpinLock(&v4->Lock, v21);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x29u,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)v4,
      v1);
}
