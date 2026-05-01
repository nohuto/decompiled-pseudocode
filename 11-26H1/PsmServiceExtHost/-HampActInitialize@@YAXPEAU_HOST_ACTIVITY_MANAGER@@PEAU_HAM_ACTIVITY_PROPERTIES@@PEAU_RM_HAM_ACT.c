/*
 * XREFs of ?HampActInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_ACTIVITY_PROPERTIES@@PEAU_RM_HAM_ACTIVITY_HOST@@_KPEAU_HAM_ACTIVITY@@@Z @ 0x180029864
 * Callers:
 *     ?HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K@Z @ 0x180011730 (-HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@P.c)
 * Callees:
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180028550 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800285D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z @ 0x1800299BC (-HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z.c)
 *     ?RmHamHostReference@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x180029A08 (-RmHamHostReference@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003DE80 (-HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003DF14 (-HampHostReleaseLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 */

void __fastcall HampActInitialize(
        struct _HOST_ACTIVITY_MANAGER *a1,
        struct _HAM_ACTIVITY_PROPERTIES *a2,
        struct _RM_HAM_ACTIVITY_HOST *a3,
        __int64 a4,
        struct _HAM_ACTIVITY *a5)
{
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rdx
  _OWORD *v14; // rcx
  struct _HAM_ACTIVITY_PROPERTIES *v15; // rax
  __int128 v16; // xmm1
  struct _RM_HAM_ACTIVITY_HOST *v17; // rcx
  unsigned int v18; // edx

  memset_0((char *)a5 + 40, 0, 0x210uLL);
  *(_QWORD *)a5 = 0LL;
  *((_QWORD *)a5 + 1) = 0LL;
  *((_QWORD *)a5 + 4) = (char *)a1 + 440;
  *((_QWORD *)a5 + 3) = 1LL;
  *((_QWORD *)a5 + 2) = -1LL;
  v12 = HamObjectIdGenerate(5LL, v9, v10, v11);
  v13 = 3LL;
  *((_QWORD *)a5 + 5) = v12;
  *((_WORD *)a5 + 281) = 1536;
  v14 = (_OWORD *)((char *)a5 + 112);
  v15 = a2;
  do
  {
    *v14 = *(_OWORD *)v15;
    v14[1] = *((_OWORD *)v15 + 1);
    v14[2] = *((_OWORD *)v15 + 2);
    v14[3] = *((_OWORD *)v15 + 3);
    v14[4] = *((_OWORD *)v15 + 4);
    v14[5] = *((_OWORD *)v15 + 5);
    v14[6] = *((_OWORD *)v15 + 6);
    v14 += 8;
    v16 = *((_OWORD *)v15 + 7);
    v15 = (struct _HAM_ACTIVITY_PROPERTIES *)((char *)v15 + 128);
    *(v14 - 1) = v16;
    --v13;
  }
  while ( v13 );
  *(_QWORD *)v14 = *(_QWORD *)v15;
  RmpAcquireGlobalLock();
  *((_QWORD *)a5 + 10) = RmHamHostReference(a3);
  RmpReleaseGlobalLock();
  *((_QWORD *)a5 + 64) = 0LL;
  if ( a4 || (*(_DWORD *)a2 & 0x40000) == 0 )
  {
    *((_QWORD *)a5 + 65) = a4;
  }
  else
  {
    HampHostAcquireLockSharedEx(*((struct _RM_HAM_ACTIVITY_HOST **)a5 + 10), 0);
    v17 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)a5 + 10);
    *((_QWORD *)a5 + 65) = *((_QWORD *)a3 + 101);
    HampHostReleaseLockSharedEx(v17, v18);
  }
}
