/*
 * XREFs of CmpReorganizeHive @ 0x140AE10D4
 * Callers:
 *     CmpCreateHive @ 0x1408BC440 (CmpCreateHive.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     CmpAllocatePool @ 0x14046DFF0 (CmpAllocatePool.c)
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     CmSiQuerySystemTime @ 0x1404EACE0 (CmSiQuerySystemTime.c)
 *     ExIsSoftBoot @ 0x14052CBE0 (ExIsSoftBoot.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     CmpLogReorganizeEvent @ 0x140857670 (CmpLogReorganizeEvent.c)
 *     CmpCreateEmptyHiveClone @ 0x140862384 (CmpCreateEmptyHiveClone.c)
 *     CmpSwapHiveStorage @ 0x1408625F4 (CmpSwapHiveStorage.c)
 *     CmpDestroyHive @ 0x1408BD394 (CmpDestroyHive.c)
 *     HvLockHiveFlusherShared @ 0x1408C9DE8 (HvLockHiveFlusherShared.c)
 *     HvUnlockHiveFlusherShared @ 0x1408D65AC (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveWriter @ 0x1408E1470 (HvLockHiveWriter.c)
 *     HvUnlockHiveWriter @ 0x1408E14D4 (HvUnlockHiveWriter.c)
 *     CmpCopyKeyPartial @ 0x1408E41BC (CmpCopyKeyPartial.c)
 *     CmpClearKeyAccessBits @ 0x1408E5568 (CmpClearKeyAccessBits.c)
 *     CmpCopySyncTree @ 0x140948D9C (CmpCopySyncTree.c)
 *     HvMarkBaseBlockDirty @ 0x140AE1304 (HvMarkBaseBlockDirty.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x140B385E8 (CmpUpdateReorganizeRegistryValues.c)
 *     CmCheckRegistry @ 0x140B87680 (CmCheckRegistry.c)
 *     CmpLockRegistry @ 0x140C5E850 (CmpLockRegistry.c)
 *     CmpReleaseShutdownRundown @ 0x140C5E900 (CmpReleaseShutdownRundown.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 *     CmpAcquireShutdownRundown @ 0x140C5EAB0 (CmpAcquireShutdownRundown.c)
 */

__int64 __fastcall CmpReorganizeHive(ULONG_PTR BugCheckParameter3, unsigned __int16 *a2, int a3)
{
  __int64 *v3; // r14
  __int64 v4; // rax
  __int64 v7; // rcx
  unsigned __int16 *v8; // r12
  __int64 Pool; // r13
  int v10; // eax
  unsigned __int64 v11; // rcx
  __int64 v12; // r9
  unsigned int v13; // edx
  unsigned __int64 v14; // r8
  int v15; // ebx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // r8
  struct _KLOCK_ENTRIES *v23; // r9
  __int64 v24; // rdx
  __int64 v25; // r8
  struct _KLOCK_ENTRIES *v26; // r9
  __int64 v27; // rcx
  int EmptyHiveClone; // eax
  ULONG_PTR v29; // rsi
  int v30; // ebx
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  int v34; // edx
  int v35; // r9d
  int v36; // r10d
  __int64 v37; // rdx
  __int64 v38; // r8
  struct _KLOCK_ENTRIES *v39; // r9
  __int64 v40; // rdx
  __int64 v41; // r8
  struct _KLOCK_ENTRIES *v42; // r9
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rdx
  __int64 v48; // r8
  struct _KLOCK_ENTRIES *v49; // r9
  __int64 v50; // rdx
  __int64 v51; // r8
  struct _KLOCK_ENTRIES *v52; // r9
  __int64 v53; // rcx
  unsigned int v54; // r15d
  unsigned int v55; // r14d
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rcx
  __int64 v61; // rdx
  __int64 v62; // r8
  struct _KLOCK_ENTRIES *v63; // r9
  __int64 v64; // rdx
  __int64 v65; // r8
  struct _KLOCK_ENTRIES *v66; // r9
  struct _LIST_ENTRY *v67; // rbx
  __int64 v68; // rcx
  __int64 v69; // [rsp+28h] [rbp-D8h]
  __int64 v70; // [rsp+40h] [rbp-C0h] BYREF
  ULONG_PTR BugCheckParameter3a; // [rsp+48h] [rbp-B8h] BYREF
  struct _LIST_ENTRY *v72; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v73; // [rsp+58h] [rbp-A8h] BYREF
  __int16 v74; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v75; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v76; // [rsp+68h] [rbp-98h] BYREF
  __int128 v77; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v78[2]; // [rsp+80h] [rbp-80h] BYREF
  ULONG_PTR *p_BugCheckParameter3a; // [rsp+A0h] [rbp-60h]
  __int64 v80; // [rsp+A8h] [rbp-58h]
  __int64 *v81; // [rsp+B0h] [rbp-50h]
  __int64 v82; // [rsp+B8h] [rbp-48h]
  __int64 *v83; // [rsp+C0h] [rbp-40h]
  __int64 v84; // [rsp+C8h] [rbp-38h]
  __int64 *v85; // [rsp+D0h] [rbp-30h]
  __int64 v86; // [rsp+D8h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR v87; // [rsp+E0h] [rbp-20h] BYREF
  ULONG_PTR *v88; // [rsp+100h] [rbp+0h]
  __int64 v89; // [rsp+108h] [rbp+8h]
  __int16 *v90; // [rsp+110h] [rbp+10h]
  __int64 v91; // [rsp+118h] [rbp+18h]
  __int16 *v92; // [rsp+120h] [rbp+20h]
  __int64 v93; // [rsp+128h] [rbp+28h]
  __int64 *v94; // [rsp+130h] [rbp+30h]
  __int64 v95; // [rsp+138h] [rbp+38h]
  __int64 v96; // [rsp+140h] [rbp+40h]
  __int64 v97; // [rsp+148h] [rbp+48h]
  __int64 v98; // [rsp+150h] [rbp+50h]
  int v99; // [rsp+158h] [rbp+58h]
  int v100; // [rsp+15Ch] [rbp+5Ch]
  __int64 v101; // [rsp+160h] [rbp+60h]
  __int64 v102; // [rsp+168h] [rbp+68h]
  __int64 v103; // [rsp+170h] [rbp+70h]
  int v104; // [rsp+178h] [rbp+78h]
  int v105; // [rsp+17Ch] [rbp+7Ch]
  __int64 v106; // [rsp+180h] [rbp+80h]
  __int64 v107; // [rsp+188h] [rbp+88h]
  __int64 v108; // [rsp+190h] [rbp+90h]
  int v109; // [rsp+198h] [rbp+98h]
  int v110; // [rsp+19Ch] [rbp+9Ch]
  __int64 *v111; // [rsp+1A0h] [rbp+A0h]
  __int64 v112; // [rsp+1A8h] [rbp+A8h]

  v3 = (__int64 *)(BugCheckParameter3 + 64);
  v4 = *(_QWORD *)(BugCheckParameter3 + 64);
  LODWORD(v70) = 0;
  v72 = 0LL;
  BugCheckParameter3a = 0LL;
  v7 = *(unsigned int *)(v4 + 144);
  v8 = a2;
  Pool = 0LL;
  v77 = 0LL;
  if ( (v7 & 1) != 0 )
    return 0;
  v10 = *(_DWORD *)(BugCheckParameter3 + 160);
  if ( (v10 & 0x10) == 0 && !*(_QWORD *)(BugCheckParameter3 + 1544) )
    return 0;
  if ( (v10 & 0x8001) != 0 || !*(_DWORD *)(BugCheckParameter3 + 168) )
    return 0;
  if ( !(unsigned __int8)CmpAcquireShutdownRundown(v7, a2) )
  {
    v15 = -1073741431;
LABEL_60:
    if ( (unsigned int)dword_140E09EE8 > 5 && tlgKeywordOn((__int64)&dword_140E09EE8, 0x400000000000LL) )
    {
      LODWORD(BugCheckParameter3a) = v15;
      p_BugCheckParameter3a = &BugCheckParameter3a;
      v80 = 4LL;
      v81 = &v76;
      v76 = 0x1000000LL;
      v82 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E09EE8, (unsigned __int8 *)word_140057B5A, 0LL, 0LL, 4u, v78);
    }
    return (unsigned int)v15;
  }
  if ( (a3 & 0x400000) != 0 && ExIsSoftBoot() )
  {
    v11 = *(_QWORD *)(*v3 + 168);
    if ( v11 != 1 && v11 != 2 )
      goto LABEL_10;
  }
  CmSiQuerySystemTime(&v72);
  v12 = *v3;
  v13 = (unsigned int)v72 & 0xFFFFFFFC;
  LODWORD(v72) = (unsigned int)v72 & 0xFFFFFFFC;
  v14 = *(_QWORD *)(v12 + 168);
  if ( v14 <= (unsigned __int64)v72 )
  {
    v11 = 864000000000LL * (unsigned int)CmpReorganizeDelayDays;
    if ( (unsigned __int64)v72 - v14 < v11 )
      goto LABEL_10;
  }
  if ( !v8 )
  {
    v11 = 0LL;
    *((_QWORD *)&v77 + 1) = v12 + 48;
    do
    {
      if ( !*(_WORD *)(v12 + 48 + 2LL * (unsigned __int16)v11) )
        break;
      LOWORD(v11) = v11 + 1;
    }
    while ( (unsigned __int16)v11 < 0x1Fu );
    LOWORD(v11) = 2 * v11;
    v8 = (unsigned __int16 *)&v77;
    LOWORD(v77) = v11;
  }
  if ( v14 == 2 || v14 != 1 && (*(_DWORD *)(BugCheckParameter3 + 4120) & 0x400) == 0 )
  {
    LODWORD(v72) = v13 | 2;
    CmpClearKeyAccessBits(BugCheckParameter3, (__int64)v8);
    CmpLockRegistry(v18, v17, v19, v20);
    HvLockHiveFlusherShared(BugCheckParameter3, v21, v22, v23);
    HvLockHiveWriter(BugCheckParameter3, v24, v25, v26);
    HvMarkBaseBlockDirty(BugCheckParameter3);
    *(_QWORD *)(*v3 + 168) = v72;
    HvUnlockHiveWriter(BugCheckParameter3);
    HvUnlockHiveFlusherShared(BugCheckParameter3);
    CmpUnlockRegistry(v27);
    goto LABEL_10;
  }
  if ( *(_DWORD *)(v12 + 36) == -1 )
  {
LABEL_10:
    v15 = 0;
    goto LABEL_11;
  }
  LODWORD(v72) = v13 | 1;
  EmptyHiveClone = CmpCreateEmptyHiveClone((__int64 *)&BugCheckParameter3a, BugCheckParameter3);
  v29 = BugCheckParameter3a;
  v15 = EmptyHiveClone;
  if ( EmptyHiveClone >= 0 )
  {
    v15 = CmpCopyKeyPartial(
            BugCheckParameter3,
            *(unsigned int *)(*v3 + 36),
            BugCheckParameter3a,
            0xFFFFFFFF,
            6,
            v69,
            0,
            (unsigned int *)&v70);
    if ( v15 >= 0 )
    {
      v30 = v70;
      *(_DWORD *)(*(_QWORD *)(v29 + 64) + 36LL) = v70;
      HvMarkBaseBlockDirty(v29);
      v15 = CmpCopySyncTree(
              BugCheckParameter3,
              *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 36LL),
              v29,
              v30,
              66,
              0);
      if ( v15 >= 0 )
      {
        Pool = CmpAllocatePool(0x100uLL);
        if ( Pool )
        {
          v15 = CmCheckRegistry(v29);
          if ( v15 >= 0 )
          {
            v44 = *(unsigned int *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL);
            if ( (v44 & 4) != 0
              || (v45 = *(unsigned int *)(v29 + 4772),
                  v46 = *(unsigned int *)(BugCheckParameter3 + 4772),
                  (_DWORD)v46 == (_DWORD)v45) )
            {
              *(_QWORD *)(v29 + 56) = 0LL;
              v54 = *(_DWORD *)(v29 + 280);
              v55 = *(_DWORD *)(BugCheckParameter3 + 280);
              CmpSwapHiveStorage(BugCheckParameter3, v29);
              if ( (unsigned int)dword_140E09EE8 > 5 && tlgKeywordOn((__int64)&dword_140E09EE8, 0x400000000000LL) )
              {
                v60 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 168LL);
                p_BugCheckParameter3a = (ULONG_PTR *)&v75;
                v81 = (__int64 *)&BugCheckParameter3a;
                v83 = &v70;
                v85 = &v76;
                v75 = v60;
                v80 = 8LL;
                LODWORD(BugCheckParameter3a) = v55;
                v82 = 4LL;
                LODWORD(v70) = v54;
                v84 = 4LL;
                v76 = 0x1000000LL;
                v86 = 8LL;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_140E09EE8,
                  (unsigned __int8 *)&dword_140057B9C,
                  0LL,
                  0LL,
                  6u,
                  v78);
              }
              CmpLockRegistry(v57, v56, v58, v59);
              HvLockHiveFlusherShared(BugCheckParameter3, v61, v62, v63);
              HvLockHiveWriter(BugCheckParameter3, v64, v65, v66);
              HvMarkBaseBlockDirty(BugCheckParameter3);
              v67 = v72;
              *(_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 168LL) = v72;
              HvUnlockHiveWriter(BugCheckParameter3);
              HvUnlockHiveFlusherShared(BugCheckParameter3);
              CmpUnlockRegistry(v68);
              CmpLogReorganizeEvent(v8, v55, v54);
              if ( v54 < v55 )
              {
                if ( CmpFirstReorganize )
                {
                  WheapPfaLock.Timer.TimerListEntry.Blink = 0LL;
                  WheapPfaLock.Timer.TimerListEntry.Flink = v67;
                  CmpFirstReorganize = 0;
                }
                WheapPfaLock.Timer.TimerListEntry.Blink = (struct _LIST_ENTRY *)((char *)WheapPfaLock.Timer.TimerListEntry.Blink
                                                                               + v55
                                                                               - v54);
                CmpUpdateReorganizeRegistryValues();
              }
              v15 = 0;
            }
            else
            {
              if ( (unsigned int)dword_140E09EE8 > 5 && tlgKeywordOn((__int64)&dword_140E09EE8, 0x400000000000LL) )
              {
                LODWORD(BugCheckParameter3a) = v46;
                p_BugCheckParameter3a = &BugCheckParameter3a;
                LODWORD(v70) = v45;
                v81 = &v70;
                v80 = 4LL;
                v83 = &v75;
                v82 = 4LL;
                v75 = 0x1000000LL;
                v84 = 8LL;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_140E09EE8,
                  (unsigned __int8 *)byte_140057985,
                  0LL,
                  0LL,
                  5u,
                  v78);
              }
              CmpLockRegistry(v44, v31, v45, v46);
              HvLockHiveFlusherShared(BugCheckParameter3, v47, v48, v49);
              HvLockHiveWriter(BugCheckParameter3, v50, v51, v52);
              HvMarkBaseBlockDirty(BugCheckParameter3);
              *(_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 168LL) = v72;
              HvUnlockHiveWriter(BugCheckParameter3);
              HvUnlockHiveFlusherShared(BugCheckParameter3);
              CmpUnlockRegistry(v53);
              v15 = -1073741492;
            }
          }
          else
          {
            if ( (unsigned int)dword_140E09EE8 > 5 && tlgKeywordOn((__int64)&dword_140E09EE8, 0x400000000000LL) )
            {
              LODWORD(BugCheckParameter3a) = v15;
              v88 = &BugCheckParameter3a;
              v90 = &v73;
              v34 = *(unsigned __int16 *)(Pool + 8);
              v35 = *(unsigned __int16 *)(Pool + 10);
              v96 = Pool + 8;
              v92 = &v74;
              v98 = Pool + 12;
              v36 = *(unsigned __int8 *)(Pool + 394);
              v99 = 12 * v34;
              v103 = Pool + 108;
              v104 = 12 * v35;
              v108 = Pool + 396;
              v111 = &v75;
              LOWORD(v70) = v36;
              v73 = v34;
              v74 = v35;
              v101 = Pool + 10;
              v106 = Pool + 394;
              v89 = 4LL;
              v91 = 2LL;
              v93 = 2LL;
              v94 = &v70;
              v95 = 2LL;
              v97 = 2LL;
              v100 = 0;
              v102 = 2LL;
              v105 = 0;
              v107 = 2LL;
              v109 = 8 * v36;
              v110 = 0;
              v75 = 0x1000000LL;
              v112 = 8LL;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_140E09EE8,
                (unsigned __int8 *)byte_1400579ED,
                0LL,
                0LL,
                0xDu,
                &v87);
            }
            if ( v15 == -1073741492 || v15 == -2147483606 )
            {
              CmpLockRegistry(v11, v31, v32, v33);
              HvLockHiveFlusherShared(BugCheckParameter3, v37, v38, v39);
              HvLockHiveWriter(BugCheckParameter3, v40, v41, v42);
              HvMarkBaseBlockDirty(BugCheckParameter3);
              *(_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 168LL) = v72;
              HvUnlockHiveWriter(BugCheckParameter3);
              HvUnlockHiveFlusherShared(BugCheckParameter3);
              CmpUnlockRegistry(v43);
            }
          }
        }
        else
        {
          v15 = -1073741670;
        }
      }
    }
  }
  if ( v29 )
    CmpDestroyHive((_QWORD *)v29);
LABEL_11:
  CmpReleaseShutdownRundown(v11);
  if ( Pool )
    CmSiFreeMemory((PPRIVILEGE_SET)Pool);
  if ( v15 < 0 )
    goto LABEL_60;
  return (unsigned int)v15;
}
