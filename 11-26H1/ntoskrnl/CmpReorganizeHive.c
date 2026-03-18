/*
 * XREFs of CmpReorganizeHive @ 0x140AE35CC
 * Callers:
 *     CmpCreateHive @ 0x1408B5E6C (CmpCreateHive.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14044F850 (_tlgKeywordOn.c)
 *     CmpAllocatePool @ 0x140474870 (CmpAllocatePool.c)
 *     CmSiFreeMemory @ 0x140495010 (CmSiFreeMemory.c)
 *     CmSiQuerySystemTime @ 0x1404F1700 (CmSiQuerySystemTime.c)
 *     ExIsSoftBoot @ 0x14052A6C0 (ExIsSoftBoot.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     CmpLogReorganizeEvent @ 0x140851360 (CmpLogReorganizeEvent.c)
 *     CmpCreateEmptyHiveClone @ 0x14085C094 (CmpCreateEmptyHiveClone.c)
 *     CmpSwapHiveStorage @ 0x14085C304 (CmpSwapHiveStorage.c)
 *     CmpDestroyHive @ 0x1408B6DC4 (CmpDestroyHive.c)
 *     HvLockHiveFlusherShared @ 0x1408C3818 (HvLockHiveFlusherShared.c)
 *     HvUnlockHiveFlusherShared @ 0x1408CFFE8 (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveWriter @ 0x1408DAEB0 (HvLockHiveWriter.c)
 *     HvUnlockHiveWriter @ 0x1408DAF14 (HvUnlockHiveWriter.c)
 *     CmpCopyKeyPartial @ 0x1408DDBFC (CmpCopyKeyPartial.c)
 *     CmpClearKeyAccessBits @ 0x1408DEFA8 (CmpClearKeyAccessBits.c)
 *     CmpCopySyncTree @ 0x14098709C (CmpCopySyncTree.c)
 *     HvMarkBaseBlockDirty @ 0x140AE37FC (HvMarkBaseBlockDirty.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x140B363D8 (CmpUpdateReorganizeRegistryValues.c)
 *     CmCheckRegistry @ 0x140B7E7A0 (CmCheckRegistry.c)
 *     CmpLockRegistry @ 0x140C58850 (CmpLockRegistry.c)
 *     CmpReleaseShutdownRundown @ 0x140C58900 (CmpReleaseShutdownRundown.c)
 *     CmpUnlockRegistry @ 0x140C58970 (CmpUnlockRegistry.c)
 *     CmpAcquireShutdownRundown @ 0x140C58AB0 (CmpAcquireShutdownRundown.c)
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
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  struct _KLOCK_ENTRIES *v20; // r9
  __int64 v21; // rdx
  __int64 v22; // r8
  struct _KLOCK_ENTRIES *v23; // r9
  __int64 v24; // rcx
  int EmptyHiveClone; // eax
  ULONG_PTR v26; // rsi
  int v27; // ebx
  int v28; // edx
  int v29; // r9d
  int v30; // r10d
  __int64 v31; // rdx
  __int64 v32; // r8
  struct _KLOCK_ENTRIES *v33; // r9
  __int64 v34; // rdx
  __int64 v35; // r8
  struct _KLOCK_ENTRIES *v36; // r9
  __int64 v37; // rcx
  __int64 v38; // rcx
  int v39; // r8d
  int v40; // r9d
  __int64 v41; // rdx
  __int64 v42; // r8
  struct _KLOCK_ENTRIES *v43; // r9
  __int64 v44; // rdx
  __int64 v45; // r8
  struct _KLOCK_ENTRIES *v46; // r9
  __int64 v47; // rcx
  unsigned int v48; // r15d
  unsigned int v49; // r14d
  __int64 v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // r8
  struct _KLOCK_ENTRIES *v54; // r9
  __int64 v55; // rdx
  __int64 v56; // r8
  struct _KLOCK_ENTRIES *v57; // r9
  _DISPATCHER_HEADER *v58; // rbx
  __int64 v59; // rcx
  __int64 v60; // [rsp+28h] [rbp-D8h]
  __int64 v61; // [rsp+40h] [rbp-C0h] BYREF
  ULONG_PTR BugCheckParameter3a; // [rsp+48h] [rbp-B8h] BYREF
  _DISPATCHER_HEADER *v63; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v64; // [rsp+58h] [rbp-A8h] BYREF
  __int16 v65; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v66; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v67; // [rsp+68h] [rbp-98h] BYREF
  __int128 v68; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v69[2]; // [rsp+80h] [rbp-80h] BYREF
  ULONG_PTR *p_BugCheckParameter3a; // [rsp+A0h] [rbp-60h]
  __int64 v71; // [rsp+A8h] [rbp-58h]
  __int64 *v72; // [rsp+B0h] [rbp-50h]
  __int64 v73; // [rsp+B8h] [rbp-48h]
  __int64 *v74; // [rsp+C0h] [rbp-40h]
  __int64 v75; // [rsp+C8h] [rbp-38h]
  __int64 *v76; // [rsp+D0h] [rbp-30h]
  __int64 v77; // [rsp+D8h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR v78; // [rsp+E0h] [rbp-20h] BYREF
  ULONG_PTR *v79; // [rsp+100h] [rbp+0h]
  __int64 v80; // [rsp+108h] [rbp+8h]
  __int16 *v81; // [rsp+110h] [rbp+10h]
  __int64 v82; // [rsp+118h] [rbp+18h]
  __int16 *v83; // [rsp+120h] [rbp+20h]
  __int64 v84; // [rsp+128h] [rbp+28h]
  __int64 *v85; // [rsp+130h] [rbp+30h]
  __int64 v86; // [rsp+138h] [rbp+38h]
  __int64 v87; // [rsp+140h] [rbp+40h]
  __int64 v88; // [rsp+148h] [rbp+48h]
  __int64 v89; // [rsp+150h] [rbp+50h]
  int v90; // [rsp+158h] [rbp+58h]
  int v91; // [rsp+15Ch] [rbp+5Ch]
  __int64 v92; // [rsp+160h] [rbp+60h]
  __int64 v93; // [rsp+168h] [rbp+68h]
  __int64 v94; // [rsp+170h] [rbp+70h]
  int v95; // [rsp+178h] [rbp+78h]
  int v96; // [rsp+17Ch] [rbp+7Ch]
  __int64 v97; // [rsp+180h] [rbp+80h]
  __int64 v98; // [rsp+188h] [rbp+88h]
  __int64 v99; // [rsp+190h] [rbp+90h]
  int v100; // [rsp+198h] [rbp+98h]
  int v101; // [rsp+19Ch] [rbp+9Ch]
  __int64 *v102; // [rsp+1A0h] [rbp+A0h]
  __int64 v103; // [rsp+1A8h] [rbp+A8h]

  v3 = (__int64 *)(BugCheckParameter3 + 64);
  v4 = *(_QWORD *)(BugCheckParameter3 + 64);
  LODWORD(v61) = 0;
  v63 = 0LL;
  BugCheckParameter3a = 0LL;
  v7 = *(unsigned int *)(v4 + 144);
  v8 = a2;
  Pool = 0LL;
  v68 = 0LL;
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
      v71 = 4LL;
      v72 = &v67;
      v67 = 0x1000000LL;
      v73 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E09EE8, (unsigned __int8 *)word_140056992, 0LL, 0LL, 4u, v69);
    }
    return (unsigned int)v15;
  }
  if ( (a3 & 0x400000) != 0 && ExIsSoftBoot() )
  {
    v11 = *(_QWORD *)(*v3 + 168);
    if ( v11 != 1 && v11 != 2 )
      goto LABEL_10;
  }
  CmSiQuerySystemTime(&v63);
  v12 = *v3;
  v13 = (unsigned int)v63 & 0xFFFFFFFC;
  LODWORD(v63) = (unsigned int)v63 & 0xFFFFFFFC;
  v14 = *(_QWORD *)(v12 + 168);
  if ( v14 <= (unsigned __int64)v63 )
  {
    v11 = 864000000000LL * (unsigned int)CmpReorganizeDelayDays;
    if ( (unsigned __int64)v63 - v14 < v11 )
      goto LABEL_10;
  }
  if ( !v8 )
  {
    v11 = 0LL;
    *((_QWORD *)&v68 + 1) = v12 + 48;
    do
    {
      if ( !*(_WORD *)(v12 + 48 + 2LL * (unsigned __int16)v11) )
        break;
      LOWORD(v11) = v11 + 1;
    }
    while ( (unsigned __int16)v11 < 0x1Fu );
    LOWORD(v11) = 2 * v11;
    v8 = (unsigned __int16 *)&v68;
    LOWORD(v68) = v11;
  }
  if ( v14 == 2 || v14 != 1 && (*(_DWORD *)(BugCheckParameter3 + 4120) & 0x400) == 0 )
  {
    LODWORD(v63) = v13 | 2;
    CmpClearKeyAccessBits(BugCheckParameter3, (__int64)v8);
    CmpLockRegistry(v17);
    HvLockHiveFlusherShared(BugCheckParameter3, v18, v19, v20);
    HvLockHiveWriter(BugCheckParameter3, v21, v22, v23);
    HvMarkBaseBlockDirty(BugCheckParameter3);
    *(_QWORD *)(*v3 + 168) = v63;
    HvUnlockHiveWriter(BugCheckParameter3);
    HvUnlockHiveFlusherShared(BugCheckParameter3);
    CmpUnlockRegistry(v24);
    goto LABEL_10;
  }
  if ( *(_DWORD *)(v12 + 36) == -1 )
  {
LABEL_10:
    v15 = 0;
    goto LABEL_11;
  }
  LODWORD(v63) = v13 | 1;
  EmptyHiveClone = CmpCreateEmptyHiveClone((__int64 *)&BugCheckParameter3a, BugCheckParameter3);
  v26 = BugCheckParameter3a;
  v15 = EmptyHiveClone;
  if ( EmptyHiveClone >= 0 )
  {
    v15 = CmpCopyKeyPartial(
            BugCheckParameter3,
            *(unsigned int *)(*v3 + 36),
            BugCheckParameter3a,
            0xFFFFFFFF,
            6,
            v60,
            0,
            (unsigned int *)&v61);
    if ( v15 >= 0 )
    {
      v27 = v61;
      *(_DWORD *)(*(_QWORD *)(v26 + 64) + 36LL) = v61;
      HvMarkBaseBlockDirty(v26);
      v15 = CmpCopySyncTree(
              BugCheckParameter3,
              *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 36LL),
              v26,
              v27,
              66,
              0);
      if ( v15 >= 0 )
      {
        Pool = CmpAllocatePool(0x100uLL);
        if ( Pool )
        {
          v15 = CmCheckRegistry(v26);
          if ( v15 >= 0 )
          {
            v38 = *(unsigned int *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL);
            if ( (v38 & 4) != 0 || *(_DWORD *)(BugCheckParameter3 + 4772) == *(_DWORD *)(v26 + 4772) )
            {
              *(_QWORD *)(v26 + 56) = 0LL;
              v48 = *(_DWORD *)(v26 + 280);
              v49 = *(_DWORD *)(BugCheckParameter3 + 280);
              CmpSwapHiveStorage(BugCheckParameter3, v26);
              if ( (unsigned int)dword_140E09EE8 > 5 && tlgKeywordOn((__int64)&dword_140E09EE8, 0x400000000000LL) )
              {
                v51 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 168LL);
                p_BugCheckParameter3a = (ULONG_PTR *)&v66;
                v72 = (__int64 *)&BugCheckParameter3a;
                v74 = &v61;
                v76 = &v67;
                v66 = v51;
                v71 = 8LL;
                LODWORD(BugCheckParameter3a) = v49;
                v73 = 4LL;
                LODWORD(v61) = v48;
                v75 = 4LL;
                v67 = 0x1000000LL;
                v77 = 8LL;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_140E09EE8,
                  (unsigned __int8 *)&dword_140056A3C,
                  0LL,
                  0LL,
                  6u,
                  v69);
              }
              CmpLockRegistry(v50);
              HvLockHiveFlusherShared(BugCheckParameter3, v52, v53, v54);
              HvLockHiveWriter(BugCheckParameter3, v55, v56, v57);
              HvMarkBaseBlockDirty(BugCheckParameter3);
              v58 = v63;
              *(_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 168LL) = v63;
              HvUnlockHiveWriter(BugCheckParameter3);
              HvUnlockHiveFlusherShared(BugCheckParameter3);
              CmpUnlockRegistry(v59);
              CmpLogReorganizeEvent(v8, v49, v48);
              if ( v48 < v49 )
              {
                if ( CmpFirstReorganize )
                {
                  WheapPfaLock.Teb = 0LL;
                  WheapPfaLock.Queue = v58;
                  CmpFirstReorganize = 0;
                }
                WheapPfaLock.Teb = (char *)WheapPfaLock.Teb + v49 - v48;
                CmpUpdateReorganizeRegistryValues();
              }
              v15 = 0;
            }
            else
            {
              if ( (unsigned int)dword_140E09EE8 > 5 && tlgKeywordOn((__int64)&dword_140E09EE8, 0x400000000000LL) )
              {
                LODWORD(BugCheckParameter3a) = v40;
                p_BugCheckParameter3a = &BugCheckParameter3a;
                LODWORD(v61) = v39;
                v72 = &v61;
                v71 = 4LL;
                v74 = &v66;
                v73 = 4LL;
                v66 = 0x1000000LL;
                v75 = 8LL;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_140E09EE8,
                  (unsigned __int8 *)&dword_1400569D4,
                  0LL,
                  0LL,
                  5u,
                  v69);
              }
              CmpLockRegistry(v38);
              HvLockHiveFlusherShared(BugCheckParameter3, v41, v42, v43);
              HvLockHiveWriter(BugCheckParameter3, v44, v45, v46);
              HvMarkBaseBlockDirty(BugCheckParameter3);
              *(_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 168LL) = v63;
              HvUnlockHiveWriter(BugCheckParameter3);
              HvUnlockHiveFlusherShared(BugCheckParameter3);
              CmpUnlockRegistry(v47);
              v15 = -1073741492;
            }
          }
          else
          {
            if ( (unsigned int)dword_140E09EE8 > 5 && tlgKeywordOn((__int64)&dword_140E09EE8, 0x400000000000LL) )
            {
              LODWORD(BugCheckParameter3a) = v15;
              v79 = &BugCheckParameter3a;
              v81 = &v64;
              v28 = *(unsigned __int16 *)(Pool + 8);
              v29 = *(unsigned __int16 *)(Pool + 10);
              v87 = Pool + 8;
              v83 = &v65;
              v89 = Pool + 12;
              v30 = *(unsigned __int8 *)(Pool + 394);
              v90 = 12 * v28;
              v94 = Pool + 108;
              v95 = 12 * v29;
              v99 = Pool + 396;
              v102 = &v66;
              LOWORD(v61) = v30;
              v64 = v28;
              v65 = v29;
              v92 = Pool + 10;
              v97 = Pool + 394;
              v80 = 4LL;
              v82 = 2LL;
              v84 = 2LL;
              v85 = &v61;
              v86 = 2LL;
              v88 = 2LL;
              v91 = 0;
              v93 = 2LL;
              v96 = 0;
              v98 = 2LL;
              v100 = 8 * v30;
              v101 = 0;
              v66 = 0x1000000LL;
              v103 = 8LL;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_140E09EE8,
                (unsigned __int8 *)word_140056A92,
                0LL,
                0LL,
                0xDu,
                &v78);
            }
            if ( v15 == -1073741492 || v15 == -2147483606 )
            {
              CmpLockRegistry(v11);
              HvLockHiveFlusherShared(BugCheckParameter3, v31, v32, v33);
              HvLockHiveWriter(BugCheckParameter3, v34, v35, v36);
              HvMarkBaseBlockDirty(BugCheckParameter3);
              *(_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 168LL) = v63;
              HvUnlockHiveWriter(BugCheckParameter3);
              HvUnlockHiveFlusherShared(BugCheckParameter3);
              CmpUnlockRegistry(v37);
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
  if ( v26 )
    CmpDestroyHive((_QWORD *)v26);
LABEL_11:
  CmpReleaseShutdownRundown(v11);
  if ( Pool )
    CmSiFreeMemory((PPRIVILEGE_SET)Pool);
  if ( v15 < 0 )
    goto LABEL_60;
  return (unsigned int)v15;
}
