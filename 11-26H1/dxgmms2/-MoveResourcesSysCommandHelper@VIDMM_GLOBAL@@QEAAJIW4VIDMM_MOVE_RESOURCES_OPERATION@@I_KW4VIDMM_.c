/*
 * XREFs of ?MoveResourcesSysCommandHelper@VIDMM_GLOBAL@@QEAAJIW4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@11W4VIDMM_DEFRAGMENT_DIRECTION@@@Z @ 0x1400A1660
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400D09E8 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?GetActiveVprEnd@VIDMM_SEGMENT@@QEBA_KXZ @ 0x14004DBC8 (-GetActiveVprEnd@VIDMM_SEGMENT@@QEBA_KXZ.c)
 *     ?GetActiveVprStart@VIDMM_SEGMENT@@QEBA_KXZ @ 0x14004DBEC (-GetActiveVprStart@VIDMM_SEGMENT@@QEBA_KXZ.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?TrimMarkedForEvictionAllocations@VIDMM_SEGMENT@@QEAAXPEA_K@Z @ 0x14009B2F8 (-TrimMarkedForEvictionAllocations@VIDMM_SEGMENT@@QEAAXPEA_K@Z.c)
 *     ?EnsureFlipQueuesSuspendedForMove@VIDMM_GLOBAL@@QEAAXXZ @ 0x14009DCA0 (-EnsureFlipQueuesSuspendedForMove@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@33W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z @ 0x1400A1420 (-MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@PEAVVIDMM_S.c)
 *     ?TrimAllMarkedForEvictionAllocations@VIDMM_SEGMENT@@QEAAXXZ @ 0x140125754 (-TrimAllMarkedForEvictionAllocations@VIDMM_SEGMENT@@QEAAXXZ.c)
 */

__int64 __fastcall VIDMM_GLOBAL::MoveResourcesSysCommandHelper(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int64 a5,
        int a6,
        unsigned __int64 a7,
        unsigned __int64 a8,
        unsigned int a9)
{
  int v9; // r14d
  __int64 v12; // rax
  __int64 v13; // rbp
  unsigned __int64 *v14; // rbx
  __int64 v15; // rdx
  int v16; // eax
  unsigned int v17; // ebx
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rdi
  VIDMM_SEGMENT *v21; // rcx
  unsigned __int64 ActiveVprEnd; // rbx
  __int64 v23; // rcx
  void (__fastcall *v24)(__int64, unsigned __int64, _QWORD); // rax
  unsigned __int64 v25; // rdx
  VIDMM_SEGMENT *v26; // rcx
  __int64 v27; // [rsp+20h] [rbp-68h]
  __int64 v28; // [rsp+60h] [rbp-28h] BYREF
  char v29; // [rsp+90h] [rbp+8h] BYREF

  v9 = a3;
  if ( (*(_BYTE *)(a1 + 41065) & 0x20) != 0 )
    return 3221225659LL;
  v12 = *(_QWORD *)(a1 + 40320);
  v29 = 0;
  v28 = 0LL;
  v13 = *(_QWORD *)(v12 + 8LL * a2);
  if ( (unsigned int)(a3 - 3) > 1 )
  {
    v14 = *(unsigned __int64 **)(*(_QWORD *)(v13 + 1752) + 8LL * a4);
    a5 = v14[5];
    VIDMM_SEGMENT::TrimMarkedForEvictionAllocations((VIDMM_SEGMENT *)v14, &a5, a3);
    v16 = VIDMM_GLOBAL::MoveResources((VIDMM_GLOBAL *)a1, v15, v9, (__int64)v14, v27, a6, a7, a8, a9, &v29, &v28);
    v17 = v16;
    if ( v16 < 0 )
    {
      WdLogSingleEntry1(3LL, v16);
      WdLogGlobalForLineNumber = 28487;
    }
    return v17;
  }
  VIDMM_GLOBAL::EnsureFlipQueuesSuspendedForMove((VIDMM_GLOBAL *)a1);
  v18 = 0LL;
  if ( *(_DWORD *)(v13 + 136) )
  {
    while ( 1 )
    {
      v19 = *(_QWORD *)(v13 + 1752);
      v20 = *(_QWORD *)(v19 + 8 * v18);
      if ( v9 != 3 )
        break;
      VIDMM_SEGMENT::TrimAllMarkedForEvictionAllocations(*(VIDMM_SEGMENT **)(v19 + 8 * v18));
      if ( (*(_BYTE *)(v20 + 66) & 1) != 0 )
      {
        VIDMM_SEGMENT::GetActiveVprStart((VIDMM_SEGMENT *)v20);
        ActiveVprEnd = VIDMM_SEGMENT::GetActiveVprEnd(v21);
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v20 + 96LL))(v23, 0LL);
        v24 = *(void (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v20 + 96LL);
        goto LABEL_10;
      }
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v20 + 96LL))(v20, 0LL, *(_QWORD *)(v20 + 40));
LABEL_16:
      v18 = (unsigned int)(v18 + 1);
      if ( (unsigned int)v18 >= *(_DWORD *)(v13 + 136) )
        return 0;
    }
    if ( (*(_BYTE *)(v20 + 66) & 1) != 0 )
    {
      VIDMM_SEGMENT::GetActiveVprStart(*(VIDMM_SEGMENT **)(v19 + 8 * v18));
      ActiveVprEnd = VIDMM_SEGMENT::GetActiveVprEnd(v26);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v20 + 104LL))(v20, 0LL);
      v24 = *(void (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v20 + 104LL);
LABEL_10:
      v25 = ActiveVprEnd;
    }
    else
    {
      v25 = 0LL;
      v24 = *(void (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v20 + 104LL);
    }
    v24(v20, v25, *(_QWORD *)(v20 + 40));
    goto LABEL_16;
  }
  return 0;
}
