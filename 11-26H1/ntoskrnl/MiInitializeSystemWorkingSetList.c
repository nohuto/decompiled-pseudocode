/*
 * XREFs of MiInitializeSystemWorkingSetList @ 0x14086DAB4
 * Callers:
 *     MiInitializeSystemCache @ 0x140870CF8 (MiInitializeSystemCache.c)
 *     MiInitNucleus @ 0x140CF903C (MiInitNucleus.c)
 *     MiBuildPagedPool @ 0x140CFFE1C (MiBuildPagedPool.c)
 *     MiInitializeNonPagedPool @ 0x140CFFF28 (MiInitializeNonPagedPool.c)
 *     MiBuildSystemDataViews @ 0x140D002A8 (MiBuildSystemDataViews.c)
 *     MiInitializeSystemPtes @ 0x140D053C0 (MiInitializeSystemPtes.c)
 * Callees:
 *     MiChargeCommit @ 0x1402D8520 (MiChargeCommit.c)
 *     MiChargeResident @ 0x14031A5D0 (MiChargeResident.c)
 *     MiReturnCommit @ 0x14036F050 (MiReturnCommit.c)
 *     MiTranslateWsType @ 0x1404A8B64 (MiTranslateWsType.c)
 *     MiInitializeWorkingSetList @ 0x1404CD360 (MiInitializeWorkingSetList.c)
 *     MiAllowWorkingSetExpansion @ 0x1404D1810 (MiAllowWorkingSetExpansion.c)
 */

__int64 __fastcall MiInitializeSystemWorkingSetList(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v8; // eax
  __int64 v9; // rdx
  int v10; // r10d
  int v11; // r11d
  char v12; // al
  char *v14; // r14
  __int64 v15; // rsi
  int v16; // edi

  v8 = MiTranslateWsType(a3);
  v10 = *(_DWORD *)(v9 + 184);
  v11 = v8;
  if ( v8 > 3 )
  {
    v12 = a3 & 0xF | v10 & 0xF0 | 0x40;
    if ( v11 != 8 )
      v12 = a3 & 0xF | v10 & 0xF0;
    *(_BYTE *)(a2 + 184) = v12;
    *(_DWORD *)a2 = 0;
    *(_WORD *)(a2 + 174) = *(_WORD *)a1;
    return 0LL;
  }
  if ( v8 == 1 )
    *(_BYTE *)(v9 + 184) = v10 | 0x40;
  v14 = (char *)&unk_140E2DFF8 + 272 * v8;
  v15 = v8;
  if ( !(unsigned int)MiChargeCommit((ULONG *)a1, 0x19uLL, 0) )
    return 3221225626LL;
  if ( !(unsigned int)MiChargeResident((ULONG *)a1, 0x19uLL, 20LL) )
  {
    MiReturnCommit(a1, 25LL, 0);
    return 3221225626LL;
  }
  if ( (ULONG *)a1 != &MiSystemPartition )
  {
    v14 = (char *)((v15 << 9) + a1 + 22784);
    a4 = *((_QWORD *)&unk_140E36EC0 + 40 * v15);
  }
  *(_QWORD *)(a2 + 120) = (-(__int64)(*(_QWORD *)(a1 + 22288) < 0x4000uLL) & 0xFFFFFFFFFFFFFF20uLL) + 256;
  *(_DWORD *)a2 = 0;
  *(_WORD *)(a2 + 174) = *(_WORD *)a1;
  v16 = MiInitializeWorkingSetList(a2, (__int64)v14, a3, a4);
  if ( v16 >= 0 )
    MiAllowWorkingSetExpansion(a2);
  return (unsigned int)v16;
}
