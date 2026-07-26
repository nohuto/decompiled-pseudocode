/*
 * XREFs of ?ndisOidPostIovCreateVPort@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E16D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14001BE20 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisCaptureIovOidContext@@YA?AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z @ 0x1400DF7BC (-ndisCaptureIovOidContext@@YA-AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z.c)
 */

void __fastcall ndisOidPostIovCreateVPort(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rbp
  __int64 v3; // rax
  struct _NDIS_MINIPORT_BLOCK *v4; // rdi
  __int64 v5; // rbx
  void *v6; // rcx
  struct _NDIS_MINIPORT_BLOCK *i; // rax
  unsigned int v8; // edx
  _NDIS_MINIPORT_BLOCK *NextMiniport; // rcx
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 *j; // rax
  __int64 *v13; // rcx
  _QWORD *v14; // rdx
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 *k; // rax
  __int64 *v18; // rcx
  _QWORD *v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 *m; // rax
  __int64 *v23; // rdx
  _QWORD *v24; // rbx
  __int64 v25; // rax
  __int64 *n; // rax
  __int64 *v27; // rdx
  _QWORD *v28; // rbx
  __int64 v29; // rax
  KIRQL v30; // dl
  __int128 v31; // [rsp+40h] [rbp-98h]
  __int64 v32; // [rsp+80h] [rbp-58h] BYREF
  KIRQL NewIrql; // [rsp+E0h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  NewIrql = 0;
  v3 = ndisCaptureIovOidContext((__int64)&v32, a1);
  v31 = *(_OWORD *)v3;
  v4 = *(struct _NDIS_MINIPORT_BLOCK **)(v3 + 8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x38u,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)v4,
      v1);
  if ( (_BYTE)v31 )
  {
    v5 = *(_QWORD *)(v1 + 152);
    if ( v5 )
    {
      if ( *((_DWORD *)a1 + 10) )
      {
        v6 = *(void **)(v1 + 152);
        v4->AllocatedVPortIndices[(unsigned __int64)*(unsigned int *)(v5 + 124) >> 3] &= ~(1 << (*(_BYTE *)(v5 + 124) & 7));
        ExFreePoolWithTag(v6, 0);
        goto LABEL_7;
      }
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v4, &NewIrql);
      for ( i = (struct _NDIS_MINIPORT_BLOCK *)v4->VPortList.Flink;
            i != (struct _NDIS_MINIPORT_BLOCK *)&v4->VPortList;
            i = *(struct _NDIS_MINIPORT_BLOCK **)&i->Header.Type )
      {
        v8 = *(_DWORD *)(v5 + 124);
        if ( i->PnPFlags == v8 )
          goto LABEL_17;
        if ( i->PnPFlags > v8 )
          break;
      }
      NextMiniport = i->NextMiniport;
      v10 = *(_QWORD *)&NextMiniport->Header.Type;
      if ( *(_NDIS_MINIPORT_BLOCK **)(*(_QWORD *)&NextMiniport->Header.Type + 8LL) == NextMiniport )
      {
        *(_QWORD *)v5 = v10;
        *(_QWORD *)(v5 + 8) = NextMiniport;
        *(_QWORD *)(v10 + 8) = v5;
        *(_QWORD *)&NextMiniport->Header.Type = v5;
        ++v4->NumActiveVPorts;
LABEL_17:
        v11 = *(_QWORD *)(v5 + 80);
        for ( j = *(__int64 **)(v11 + 832); j != (__int64 *)(v11 + 832); j = (__int64 *)*j )
        {
          if ( *((_DWORD *)j + 27) > *(_DWORD *)(v5 + 124) )
            break;
        }
        v13 = (__int64 *)j[1];
        v14 = (_QWORD *)(v5 + 16);
        v15 = *v13;
        if ( *(__int64 **)(*v13 + 8) == v13 )
        {
          *(_QWORD *)(v5 + 24) = v13;
          *v14 = v15;
          *(_QWORD *)(v15 + 8) = v14;
          *v13 = (__int64)v14;
          ++*(_DWORD *)(v11 + 824);
          v16 = *(_QWORD *)(v5 + 88);
          for ( k = *(__int64 **)(v16 + 56); k != (__int64 *)(v16 + 56); k = (__int64 *)*k )
          {
            if ( *((_DWORD *)k + 23) > *(_DWORD *)(v5 + 124) )
              break;
          }
          v18 = (__int64 *)k[1];
          v19 = (_QWORD *)(v5 + 32);
          v20 = *v18;
          if ( *(__int64 **)(*v18 + 8) == v18 )
          {
            *v19 = v20;
            *(_QWORD *)(v5 + 40) = v18;
            *(_QWORD *)(v20 + 8) = v19;
            *v18 = (__int64)v19;
            ++*(_DWORD *)(v16 + 48);
            *(_DWORD *)(v16 + 96) += *(_DWORD *)(v5 + 648);
            v21 = *(_QWORD *)(v5 + 96);
            if ( (*(_DWORD *)(v5 + 64) & 2) != 0 )
            {
              for ( m = *(__int64 **)(v21 + 80); m != (__int64 *)(v21 + 80); m = (__int64 *)*m )
              {
                if ( *((_DWORD *)m + 19) > *(_DWORD *)(v5 + 124) )
                  break;
              }
              v23 = (__int64 *)m[1];
              v24 = (_QWORD *)(v5 + 48);
              v25 = *v23;
              if ( *(__int64 **)(*v23 + 8) == v23 )
              {
                *v24 = v25;
                v24[1] = v23;
                *(_QWORD *)(v25 + 8) = v24;
                *v23 = (__int64)v24;
                ++*(_DWORD *)(v21 + 76);
LABEL_36:
                v30 = NewIrql;
                v4->MiniportThread = 0LL;
                KeReleaseSpinLock(&v4->Lock, v30);
                goto LABEL_7;
              }
            }
            else
            {
              for ( n = *(__int64 **)(v21 + 32); n != (__int64 *)(v21 + 32); n = (__int64 *)*n )
              {
                if ( *((_DWORD *)n + 19) > *(_DWORD *)(v5 + 124) )
                  break;
              }
              v27 = (__int64 *)n[1];
              v28 = (_QWORD *)(v5 + 48);
              v29 = *v27;
              if ( *(__int64 **)(*v27 + 8) == v27 )
              {
                *v28 = v29;
                v28[1] = v27;
                *(_QWORD *)(v29 + 8) = v28;
                *v27 = (__int64)v28;
                ++*(_DWORD *)(v21 + 28);
                goto LABEL_36;
              }
            }
          }
        }
      }
      __fastfail(3u);
    }
  }
LABEL_7:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x39u,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)v4,
      v1);
}
