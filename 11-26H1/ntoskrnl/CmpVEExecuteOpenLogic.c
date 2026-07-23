/*
 * XREFs of CmpVEExecuteOpenLogic @ 0x1408DF920
 * Callers:
 *     CmpDoParseKey @ 0x1408D2240 (CmpDoParseKey.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     CmpFindPathByNameEx @ 0x1408B7F30 (CmpFindPathByNameEx.c)
 *     CmpGetNextHive @ 0x1408B9680 (CmpGetNextHive.c)
 *     CmpIsKeyDeleted @ 0x1408C8400 (CmpIsKeyDeleted.c)
 *     HvLockHiveFlusherShared @ 0x1408C9DE8 (HvLockHiveFlusherShared.c)
 *     CmpDereferenceHive @ 0x1408CCB50 (CmpDereferenceHive.c)
 *     CmpReferenceHive @ 0x1408CECF0 (CmpReferenceHive.c)
 *     CmpLockKcbExclusive @ 0x1408D5100 (CmpLockKcbExclusive.c)
 *     HvpMarkCellDirty @ 0x1408DB070 (HvpMarkCellDirty.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408DF8E0 (HvpGetCellContextInitialize.c)
 *     CmpIsSystemEntity @ 0x1408FA6D0 (CmpIsSystemEntity.c)
 *     CmVirtualKCBToRealPath @ 0x140AF7040 (CmVirtualKCBToRealPath.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     CmpUnlockKcb @ 0x140C5E2B0 (CmpUnlockKcb.c)
 *     CmpAttachToRegistryProcess @ 0x140C5E930 (CmpAttachToRegistryProcess.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140C5ED14 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x140C5ED30 (HvLockHiveFlusherExclusive.c)
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
  struct _KTHREAD **i; // rcx
  volatile signed __int32 *NextHive; // rax
  struct _KTHREAD **v14; // rbx
  __int64 v15; // rcx
  char PathByName; // r12
  struct _KTHREAD **v17; // rcx
  volatile signed __int32 *v18; // rax
  char *v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // r8
  struct _KLOCK_ENTRIES *v22; // r9
  ULONG_PTR v23; // rbp
  __int64 v24; // rdx
  __int64 CellFlat; // rax
  __int64 v26; // r14
  __int64 v27; // rcx
  void *v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // r8
  struct _KLOCK_ENTRIES *v31; // r9
  unsigned int v32; // [rsp+30h] [rbp-58h] BYREF
  __int64 v33; // [rsp+38h] [rbp-50h] BYREF
  ULONG_PTR v34; // [rsp+40h] [rbp-48h] BYREF
  __m128i P; // [rsp+48h] [rbp-40h] BYREF

  v32 = 0;
  v34 = 0LL;
  v33 = 0LL;
  v9 = 0LL;
  P = 0LL;
  RtlInitUnicodeString((PUNICODE_STRING)&P, 0LL);
  HvpGetCellContextInitialize(&v33);
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
      for ( i = 0LL; ; i = v14 )
      {
        NextHive = CmpGetNextHive(i);
        v14 = (struct _KTHREAD **)NextHive;
        if ( !NextHive )
          break;
        if ( (NextHive[1030] & 0x10) != 0 || NextHive == (volatile signed __int32 *)CmpMasterHive )
        {
          CmpReferenceHive((__int64)NextHive);
          v9 = (char *)v14;
          HvLockHiveFlusherExclusive(v15);
        }
      }
      PathByName = CmpFindPathByNameEx(0LL, &P, 0LL, 16, &v32, &v34);
      v17 = 0LL;
      do
      {
        v18 = CmpGetNextHive(v17);
        v19 = (char *)v18;
        if ( (v18[1030] & 0x10) != 0 || v18 == (volatile signed __int32 *)CmpMasterHive )
        {
          HvUnlockHiveFlusherExclusive(v18);
          CmpDereferenceHive(v19);
        }
        v17 = (struct _KTHREAD **)v19;
      }
      while ( v19 != v9 );
      CmpDereferenceHive(v19);
      if ( PathByName )
      {
        v28 = (void *)a4->m128i_i64[1];
        if ( v28 )
          ExFreePoolWithTag(v28, 0);
        *a4 = P;
        RtlInitUnicodeString((PUNICODE_STRING)&P, 0LL);
        *(_DWORD *)a2 |= 8u;
        v10 = 260;
      }
      else if ( a3
             || (CmpUnlockKcb(BugCheckParameter2),
                 CmpLockKcbExclusive(BugCheckParameter2, v29, v30, v31),
                 !CmpIsKeyDeleted(BugCheckParameter2, 0LL)) )
      {
        HvLockHiveFlusherShared(*(_QWORD *)(BugCheckParameter2 + 32), v20, v21, v22);
        v23 = *(_QWORD *)(BugCheckParameter2 + 32);
        v24 = *(unsigned int *)(BugCheckParameter2 + 40);
        if ( (*(_BYTE *)(v23 + 140) & 1) != 0 )
          CellFlat = HvpGetCellFlat(v23, v24, (unsigned int *)&v33);
        else
          CellFlat = HvpGetCellPaged(v23, v24);
        v26 = CellFlat;
        if ( CellFlat )
        {
          v10 = HvpMarkCellDirty(*(_QWORD *)(BugCheckParameter2 + 32), *(_DWORD *)(BugCheckParameter2 + 40), 1);
          if ( v10 >= 0 )
          {
            v10 = 260;
            *(_WORD *)(v26 + 2) |= 0x100u;
            *(_WORD *)(BugCheckParameter2 + 186) |= 0x100u;
            *(_DWORD *)a2 |= 8u;
          }
          v27 = *(_QWORD *)(BugCheckParameter2 + 32);
          if ( (*(_BYTE *)(v27 + 140) & 1) != 0 )
            HvpReleaseCellFlat(v27, (__int64)&v33);
          else
            HvpReleaseCellPaged(v27, (unsigned int *)&v33);
        }
        else
        {
          v10 = -1073741670;
        }
        if ( v23 )
        {
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v23 + 72), 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)(v23 + 72));
          KeAbPostRelease(v23 + 72);
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
