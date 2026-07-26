/*
 * XREFs of ?ndisPDCleanupPDBlock@@YAXPEAU_NDIS_PD_BLOCK@@@Z @ 0x1401402EC
 * Callers:
 *     ?ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x14017E510 (-ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x14000D540 (WPP_RECORDER_SF_qqL.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 *     ?Deref@NDIS_PD_BM_DOMAIN@@QEAAXXZ @ 0x14013C650 (-Deref@NDIS_PD_BM_DOMAIN@@QEAAXXZ.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x14015C3D0 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015C650 (--1KLockHolder@@QEAA@XZ.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x14015C6A0 (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 */

void __fastcall ndisPDCleanupPDBlock(struct _NDIS_PD_BLOCK *a1)
{
  void *v2; // rcx
  __int64 v3; // rdi
  _QWORD *v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  __int64 v7; // rcx
  char v8[4]; // [rsp+38h] [rbp-30h]
  KLockHolder v9; // [rsp+40h] [rbp-28h] BYREF

  v2 = (void *)*((_QWORD *)a1 + 3);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *((_QWORD *)a1 + 3) = 0LL;
    *((_QWORD *)a1 + 4) = 0LL;
  }
  v3 = *((_QWORD *)a1 + 9);
  if ( v3 )
  {
    KLockThisExclusive::KLockThisExclusive((KLockThisExclusive *)&v9, qword_14011EE98);
    v4 = (_QWORD *)((char *)a1 + 56);
    v5 = *((_QWORD *)a1 + 7);
    if ( *(struct _NDIS_PD_BLOCK **)(v5 + 8) != (struct _NDIS_PD_BLOCK *)((char *)a1 + 56)
      || (v6 = (_QWORD *)*((_QWORD *)a1 + 8), (_QWORD *)*v6 != v4) )
    {
      __fastfail(3u);
    }
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    *v4 = 0LL;
    KLockHolder::ReleaseExclusive(&v9);
    v7 = *((_QWORD *)a1 + 10);
    *((_QWORD *)a1 + 9) = 0LL;
    (*(void (__fastcall **)(__int64))(v3 + 72))(v7);
    *((_QWORD *)a1 + 10) = 0LL;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v8 = *(_DWORD *)(v3 + 24);
      WPP_RECORDER_SF_qqL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x1Du,
        0xAu,
        (struct _GUID *)&WPP_bb899958c3b83c4be5ffe2f3031e3faa_Traceguids,
        *(_QWORD *)a1,
        v3,
        *(_DWORD *)v8);
    }
    NDIS_PD_BM_DOMAIN::Deref((NDIS_PD_BM_DOMAIN *)v3);
    KLockHolder::~KLockHolder(&v9);
  }
  *(_WORD *)((char *)a1 + 13) = 0;
  *((_DWORD *)a1 + 5) = 0;
}
