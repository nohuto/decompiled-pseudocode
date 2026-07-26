/*
 * XREFs of ?ndisOidPreSetPortAuthentication@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140072860
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     ?ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x14001B4C0 (-ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14001BE20 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ndisOidPreSetPortAuthentication(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  unsigned __int8 v3; // r14
  int v5; // eax
  _DWORD *v6; // r13
  __int64 v7; // r15
  unsigned __int8 v8; // r8
  KIRQL v9; // dl
  KIRQL v10; // cl
  __int64 v11; // rcx
  __int64 v13; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v14[16]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v15; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v16; // [rsp+60h] [rbp-A0h]
  __int128 v17; // [rsp+70h] [rbp-90h]
  __int128 v18; // [rsp+80h] [rbp-80h]
  __int128 v19; // [rsp+90h] [rbp-70h]
  __int128 v20; // [rsp+A0h] [rbp-60h]
  __int128 v21; // [rsp+B0h] [rbp-50h]
  __int128 v22; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v23; // [rsp+D0h] [rbp-30h]
  __int128 v24; // [rsp+E0h] [rbp-20h]

  v1 = *(_QWORD *)a1;
  v2 = *((_QWORD *)a1 + 4);
  v3 = 0;
  v15 = 0LL;
  v14[0] = 0;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xA2u,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      v1,
      *(_DWORD *)(v2 + 8));
  if ( *(_QWORD *)a1 )
  {
    v5 = *(_DWORD *)(v2 + 4);
    if ( !v5 || v5 == 2 )
    {
      *(_DWORD *)(v2 + 56) = 20;
      *(_DWORD *)(v2 + 52) = 0;
      *((_DWORD *)a1 + 10) = -1073741637;
    }
    else if ( *(_DWORD *)(v2 + 48) >= 0x14u )
    {
      v6 = *(_DWORD **)(v2 + 40);
      if ( *(_DWORD *)(v2 + 8) )
        goto LABEL_18;
      if ( (*(_DWORD *)(v1 + 124) & 0x8000000) != 0 )
      {
        v7 = *(_QWORD *)(v1 + 16);
        NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)v7, v14);
        if ( (*(_DWORD *)(v7 + 124) & 0x80u) == 0 )
        {
          v8 = v14[0];
          *(_DWORD *)(v7 + 3320) = v6[1];
          *(_DWORD *)(v7 + 3324) = v6[2];
          *(_DWORD *)(v7 + 3328) = v6[3];
          *(_DWORD *)(v7 + 3332) = v6[4];
          ndisIfSetInterfaceState((struct _NDIS_MINIPORT_BLOCK *)v7, 1, v8);
        }
        v9 = v14[0];
        *(_QWORD *)(v7 + 520) = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 96), v9);
      }
      v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 96));
      *(_QWORD *)(v1 + 520) = KeGetCurrentThread();
      if ( (*(_DWORD *)(v1 + 124) & 0x80u) != 0 )
      {
        *(_QWORD *)(v1 + 520) = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v10);
        goto LABEL_18;
      }
      *(_DWORD *)(v1 + 3320) = v6[1];
      *(_DWORD *)(v1 + 3324) = v6[2];
      *(_DWORD *)(v1 + 3328) = v6[3];
      *(_DWORD *)(v1 + 3332) = v6[4];
      LODWORD(v22) = 3146112;
      DWORD1(v22) = *(_DWORD *)(v1 + 480);
      *((_QWORD *)&v22 + 1) = *(_QWORD *)(v1 + 792);
      *(_QWORD *)&v23 = *(_QWORD *)(v1 + 800);
      DWORD2(v23) = *(_DWORD *)(*(_QWORD *)(v1 + 4040) + 532LL);
      HIDWORD(v23) = *(_DWORD *)(v1 + 3320);
      *(_QWORD *)&v24 = *(_QWORD *)(v1 + 3324);
      DWORD2(v24) = *(_DWORD *)(v1 + 3332);
      *(_QWORD *)(v1 + 520) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v10);
      LODWORD(v15) = 7340440;
      *(_QWORD *)&v18 = &v22;
      *((_QWORD *)&v15 + 1) = v1;
      DWORD1(v16) = 1073807394;
      DWORD2(v18) = 48;
      v11 = (__int64)*(int *)(*(_QWORD *)(v1 + 3760) + 896LL) << 7;
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int128 *))((char *)g_MiniportHookDrivers + v11 + 64))(
        *(_QWORD *)((char *)g_MiniportHookDrivers + v11 + 24),
        *(_QWORD *)(v1 + 5288),
        v1,
        &v15);
      *(_QWORD *)(v2 + 52) = 20LL;
      *((_DWORD *)a1 + 10) = 0;
    }
    else
    {
      *(_DWORD *)(v2 + 56) = 20;
      *(_DWORD *)(v2 + 52) = 0;
      *((_DWORD *)a1 + 10) = -1073676268;
    }
    v3 = 1;
  }
LABEL_18:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v13) = *(_DWORD *)(v2 + 8);
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xA3u,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      v1,
      v13);
  }
  return v3;
}
