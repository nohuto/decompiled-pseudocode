/*
 * XREFs of MiApplyDebuggerPatches @ 0x14038C7F8
 * Callers:
 *     MiValidateInPageEntries @ 0x14038C410 (MiValidateInPageEntries.c)
 *     MiWalkImageRemoveDebuggerPatchesFromPage @ 0x1406E7AA0 (MiWalkImageRemoveDebuggerPatchesFromPage.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14026CEE0 (ExReleaseSpinLockShared.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140287EE0 (MiMapPageInHyperSpaceWorker.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402DC6D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1402EDF10 (ExAcquireSpinLockShared.c)
 *     MiGetPagePrivilege @ 0x1402F9878 (MiGetPagePrivilege.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14040DF60 (MiUnmapPageInHyperSpaceWorker.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     MiDbgCompactPatchTable @ 0x1406FD354 (MiDbgCompactPatchTable.c)
 *     MiDbgCopyPrivilegedData @ 0x1406FDCAC (MiDbgCopyPrivilegedData.c)
 *     MiDbgFindFirstPatch @ 0x1406FDF60 (MiDbgFindFirstPatch.c)
 */

void __fastcall MiApplyDebuggerPatches(__int64 a1, unsigned __int64 a2, unsigned int a3, ULONG_PTR a4, int a5)
{
  int v9; // ebp
  KIRQL v10; // r15
  __int64 v11; // rdx
  int PagePrivilege; // r13d
  __int64 v13; // rsi
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // r12
  int v17; // eax
  int v18; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v19; // [rsp+34h] [rbp-54h] BYREF
  _OWORD v20[5]; // [rsp+38h] [rbp-50h] BYREF

  v18 = 0;
  v19 = 0;
  v20[0] = 0LL;
  if ( !dword_140E347A0 )
    return;
  v9 = 1;
  v10 = ExAcquireSpinLockShared(&dword_140E34798);
  MiDbgCompactPatchTable(1LL);
  if ( !(unsigned int)MiDbgFindFirstPatch(a1, a3, 1LL, &v19) )
    goto LABEL_19;
  if ( a2 )
    v9 = 0;
  else
    a2 = MiMapPageInHyperSpaceWorker(a4, 0LL, 0x80000000);
  if ( (*(_DWORD *)(a1 + 92) & 0xC0000) != 0 )
    PagePrivilege = MiGetPagePrivilege((_QWORD *)(48 * a4 - 0x220000000000LL), 0LL, (unsigned __int64)v20);
  else
    PagePrivilege = 0;
  LODWORD(v13) = v19;
  v14 = *((_QWORD *)&MiState + v19 + 3651);
  do
  {
    v15 = *(_DWORD *)((-(__int64)(a5 != 0) & 0xFFFFFFFFFFFFFFFCuLL) + v14 + 16);
    v16 = (*(_DWORD *)(v14 + 8) >> 2) & 0x3FF;
    v18 = v15;
    if ( !PagePrivilege )
      goto LABEL_13;
    v17 = MiDbgCopyPrivilegedData(a4, (unsigned int)v20, 4 * (int)v16, (unsigned int)&v18, 4);
    if ( v17 == -1073741802 )
    {
      v15 = v18;
      PagePrivilege = 0;
LABEL_13:
      *(_DWORD *)(a2 + 4 * v16) = v15;
      goto LABEL_14;
    }
    if ( v17 < 0 )
      KeBugCheckEx(0x1Au, 0x51513uLL, a4, v17, 0LL);
LABEL_14:
    v13 = (unsigned int)(v13 + 1);
    if ( (unsigned int)v13 >= dword_140E347A0 )
      break;
    v14 = *((_QWORD *)&MiState + v13 + 3651);
    if ( *(_QWORD *)v14 != a1 )
      break;
  }
  while ( *(_DWORD *)(v14 + 8) >> 12 == a3 );
  if ( v9 )
  {
    LOBYTE(v11) = 17;
    MiUnmapPageInHyperSpaceWorker(a2, v11, 0x80000000LL);
  }
LABEL_19:
  if ( v10 == 17 )
    ExReleaseSpinLockSharedFromDpcLevel(&dword_140E34798);
  else
    ExReleaseSpinLockShared(&dword_140E34798, v10);
}
