/*
 * XREFs of CmpVEExecuteOpenLogic @ 0x1408D9360
 * Callers:
 *     CmpDoParseKey @ 0x1408CBC90 (CmpDoParseKey.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     HvpGetCellFlat @ 0x14085EB00 (HvpGetCellFlat.c)
 *     CmpFindPathByNameEx @ 0x1408B1924 (CmpFindPathByNameEx.c)
 *     CmpGetNextHive @ 0x1408B30D0 (CmpGetNextHive.c)
 *     CmpIsKeyDeleted @ 0x1408C1E30 (CmpIsKeyDeleted.c)
 *     HvLockHiveFlusherShared @ 0x1408C3818 (HvLockHiveFlusherShared.c)
 *     CmpDereferenceHive @ 0x1408C6580 (CmpDereferenceHive.c)
 *     CmpReferenceHive @ 0x1408C8740 (CmpReferenceHive.c)
 *     CmpLockKcbExclusive @ 0x1408CEB50 (CmpLockKcbExclusive.c)
 *     HvpMarkCellDirty @ 0x1408D4AB0 (HvpMarkCellDirty.c)
 *     HvpReleaseCellFlat @ 0x1408D51E0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408D73B0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408D7410 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408D9320 (HvpGetCellContextInitialize.c)
 *     CmpIsSystemEntity @ 0x1408F4110 (CmpIsSystemEntity.c)
 *     CmVirtualKCBToRealPath @ 0x140AF49A0 (CmVirtualKCBToRealPath.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 *     CmpUnlockKcb @ 0x140C582B0 (CmpUnlockKcb.c)
 *     CmpAttachToRegistryProcess @ 0x140C58930 (CmpAttachToRegistryProcess.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140C58D14 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x140C58D30 (HvLockHiveFlusherExclusive.c)
 */

__int64 __fastcall CmpVEExecuteOpenLogic(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        char a3,
        __m128i *a4,
        unsigned __int8 a5)
{
  char *v9; // r14
  int v10; // ebx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  char *i; // rcx
  volatile signed __int32 *NextHive; // rax
  char *v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  char PathByName; // r12
  char *v23; // rcx
  volatile signed __int32 *v24; // rax
  char *v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // r8
  struct _KLOCK_ENTRIES *v28; // r9
  ULONG_PTR v29; // rbp
  __int64 v30; // rdx
  __int64 CellFlat; // rax
  __int64 v32; // r14
  __int64 v33; // rcx
  void *v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // r8
  struct _KLOCK_ENTRIES *v37; // r9
  unsigned int v38; // [rsp+30h] [rbp-58h] BYREF
  __int64 v39; // [rsp+38h] [rbp-50h] BYREF
  ULONG_PTR v40; // [rsp+40h] [rbp-48h] BYREF
  __m128i P; // [rsp+48h] [rbp-40h] BYREF

  v38 = 0;
  v40 = 0LL;
  v39 = 0LL;
  v9 = 0LL;
  P = 0LL;
  RtlInitUnicodeString((PUNICODE_STRING)&P, 0LL);
  HvpGetCellContextInitialize(&v39);
  if ( !CmpVEEnabled
    || (*(_DWORD *)(a2 + 24) & 0x10) != 0
    || *(_WORD *)(BugCheckParameter2 + 66)
    || (*(_DWORD *)(BugCheckParameter2 + 184) & 0x2000000) == 0
    || *(_WORD *)(BugCheckParameter2 + 12) <= 5u
    || (unsigned __int8)CmpIsSystemEntity(a5)
    || CmpVEEnabled && (*(_DWORD *)(BugCheckParameter2 + 184) & 0x1000000) != 0 )
  {
    v10 = -1073741199;
  }
  else
  {
    if ( (*(_DWORD *)(a2 + 160) & 1) == 0 )
    {
      CmpAttachToRegistryProcess((PRKAPC_STATE)(a2 + 168));
      *(_DWORD *)(a2 + 160) |= 1u;
    }
    v10 = CmVirtualKCBToRealPath(BugCheckParameter2, &P);
    if ( v10 >= 0 )
    {
      for ( i = 0LL; ; i = v17 )
      {
        NextHive = CmpGetNextHive(i, v12, v13, v14);
        v17 = (char *)NextHive;
        if ( !NextHive )
          break;
        if ( (NextHive[1030] & 0x10) != 0 || NextHive == (volatile signed __int32 *)CmpMasterHive )
        {
          CmpReferenceHive((__int64)NextHive);
          v9 = v17;
          HvLockHiveFlusherExclusive(v18);
        }
      }
      PathByName = CmpFindPathByNameEx(0LL, &P, 0LL, 16, &v38, &v40);
      v23 = 0LL;
      do
      {
        v24 = CmpGetNextHive(v23, v19, v20, v21);
        v25 = (char *)v24;
        if ( (v24[1030] & 0x10) != 0 || v24 == (volatile signed __int32 *)CmpMasterHive )
        {
          HvUnlockHiveFlusherExclusive(v24);
          CmpDereferenceHive(v25);
        }
        v23 = v25;
      }
      while ( v25 != v9 );
      CmpDereferenceHive(v25);
      if ( PathByName )
      {
        v34 = (void *)a4->m128i_i64[1];
        if ( v34 )
          ExFreePoolWithTag(v34, 0);
        *a4 = P;
        RtlInitUnicodeString((PUNICODE_STRING)&P, 0LL);
        *(_DWORD *)a2 |= 8u;
        v10 = 260;
      }
      else if ( a3
             || (CmpUnlockKcb(BugCheckParameter2),
                 CmpLockKcbExclusive(BugCheckParameter2, v35, v36, v37),
                 !CmpIsKeyDeleted(BugCheckParameter2, 0LL)) )
      {
        HvLockHiveFlusherShared(*(_QWORD *)(BugCheckParameter2 + 32), v26, v27, v28);
        v29 = *(_QWORD *)(BugCheckParameter2 + 32);
        v30 = *(unsigned int *)(BugCheckParameter2 + 40);
        if ( (*(_BYTE *)(v29 + 140) & 1) != 0 )
          CellFlat = HvpGetCellFlat(v29, v30, (unsigned int *)&v39);
        else
          CellFlat = HvpGetCellPaged(v29, v30);
        v32 = CellFlat;
        if ( CellFlat )
        {
          v10 = HvpMarkCellDirty(*(_QWORD *)(BugCheckParameter2 + 32), *(_DWORD *)(BugCheckParameter2 + 40), 1);
          if ( v10 >= 0 )
          {
            v10 = 260;
            *(_WORD *)(v32 + 2) |= 0x100u;
            *(_WORD *)(BugCheckParameter2 + 186) |= 0x100u;
            *(_DWORD *)a2 |= 8u;
          }
          v33 = *(_QWORD *)(BugCheckParameter2 + 32);
          if ( (*(_BYTE *)(v33 + 140) & 1) != 0 )
            HvpReleaseCellFlat(v33, (__int64)&v39);
          else
            HvpReleaseCellPaged(v33, (unsigned int *)&v39);
        }
        else
        {
          v10 = -1073741670;
        }
        if ( v29 )
        {
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v29 + 72), 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)(v29 + 72));
          KeAbPostRelease(v29 + 72);
        }
      }
      else
      {
        v10 = -1073741772;
      }
    }
  }
  if ( P.m128i_i64[1] )
    ExFreePoolWithTag((PVOID)P.m128i_i64[1], 0);
  return (unsigned int)v10;
}
