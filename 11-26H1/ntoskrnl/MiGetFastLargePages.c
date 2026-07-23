/*
 * XREFs of MiGetFastLargePages @ 0x1403D0A5C
 * Callers:
 *     MiAllocateLargeZeroPages @ 0x1403D0630 (MiAllocateLargeZeroPages.c)
 * Callees:
 *     MiGetPfnPageSizeIndex @ 0x14028A7F0 (MiGetPfnPageSizeIndex.c)
 *     MiSimpleUnlinkPageEx @ 0x14028D6D0 (MiSimpleUnlinkPageEx.c)
 *     MiChangePageAttribute @ 0x1402BA420 (MiChangePageAttribute.c)
 *     MiProtectionToCacheAttribute @ 0x140374020 (MiProtectionToCacheAttribute.c)
 *     MiSimpleInsertPage @ 0x1403CF00C (MiSimpleInsertPage.c)
 *     MiUpdateLargePageBitMap @ 0x1403CF324 (MiUpdateLargePageBitMap.c)
 *     MiGetLargePageDemoteAsNeeded @ 0x1403D1EE0 (MiGetLargePageDemoteAsNeeded.c)
 *     MiInitializeLargePfnList @ 0x14045A7B0 (MiInitializeLargePfnList.c)
 *     MiNextPhysicallyContiguousPfnWorthTrying @ 0x1404D94C0 (MiNextPhysicallyContiguousPfnWorthTrying.c)
 *     MiTryUnlinkNodeLargePages @ 0x140520D5C (MiTryUnlinkNodeLargePages.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall MiGetFastLargePages(int *a1, __int64 a2)
{
  int v2; // r12d
  int v3; // eax
  unsigned int v5; // esi
  unsigned __int64 v6; // rbx
  __int64 v7; // r9
  __int64 v8; // rdi
  unsigned __int64 v9; // rdx
  int v10; // r8d
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  int v14; // edi
  __int64 v15; // rcx
  __int64 *v16; // rax
  unsigned int i; // r15d
  unsigned __int64 v18; // rax
  unsigned int v19; // ecx
  unsigned __int64 v20; // rdx
  char v21; // r12
  unsigned __int64 v22; // rdx
  unsigned int v23; // r13d
  int v24; // ebx
  __int64 LargePageDemoteAsNeeded; // rax
  __int64 v26; // rsi
  int PfnPageSizeIndex; // eax
  __int64 v28; // rdx
  __int64 v29; // rax
  unsigned __int64 v30; // rbx
  int v31; // edi
  __int64 result; // rax
  unsigned int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // r13
  unsigned __int64 v36; // rsi
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // rax
  unsigned int v39; // [rsp+30h] [rbp-50h]
  int PhysicallyContiguousPfnWorthTrying; // [rsp+34h] [rbp-4Ch]
  char v41; // [rsp+38h] [rbp-48h]
  __int64 v42; // [rsp+40h] [rbp-40h]
  unsigned int v43; // [rsp+40h] [rbp-40h]
  unsigned __int64 v44; // [rsp+48h] [rbp-38h]
  __int128 v46; // [rsp+58h] [rbp-28h] BYREF
  __int64 v47; // [rsp+68h] [rbp-18h]

  v2 = 0;
  v47 = 0LL;
  v3 = *a1;
  v41 = 0;
  v46 = 0LL;
  if ( (v3 & 0x10) != 0 || KeGetCurrentIrql() >= 2u || (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
  {
    v2 = 1;
    v41 = 1;
  }
  MiInitializeLargePfnList(a2, a2);
  v5 = MiProtectionToCacheAttribute(a1[9]);
  v6 = *((_QWORD *)a1 + 2) - *((_QWORD *)a1 + 9);
  v7 = *((_QWORD *)a1 + 5);
  v47 = 0LL;
  v39 = v5;
  *(_QWORD *)&v46 = 0x3FFFFFFFFFLL;
  *((_QWORD *)&v46 + 1) = 0x3FFFFFFFFFLL;
  PhysicallyContiguousPfnWorthTrying = 0;
  if ( v7 != -1 )
  {
    v8 = (unsigned int)a1[12];
    PhysicallyContiguousPfnWorthTrying = MiNextPhysicallyContiguousPfnWorthTrying(a1, v8, v5);
    if ( PhysicallyContiguousPfnWorthTrying )
    {
      v9 = *((_QWORD *)a1 + 7);
      v10 = MiLargePageShifts[v8];
      if ( v9 )
      {
        v11 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( (unsigned int)v8 < 2 )
        {
          v12 = (unsigned int)(2 - v8);
          do
          {
            v11 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            --v12;
          }
          while ( v12 );
        }
        v13 = (v11 >> 3) & 0x1FF;
        if ( v6 > (512 - v13) << v10 )
          v6 = (512 - v13) << v10;
      }
      MiTryUnlinkNodeLargePages(*((_QWORD *)a1 + 1), *((_QWORD *)a1 + 5), (unsigned int)v8, v6 >> v10, v2, &v46);
      if ( v47 )
        goto LABEL_39;
      PhysicallyContiguousPfnWorthTrying = 0;
      *((_QWORD *)a1 + 5) = -1LL;
    }
  }
  v14 = v2;
  if ( (*a1 & 4) == 0 )
    v14 = v2 | 0x10;
  v15 = *((_QWORD *)a1 + 3);
  *((_QWORD *)a1 + 5) = -1LL;
  v16 = MiPageSizes;
  for ( i = 0; i < 3; ++i )
  {
    if ( *v16 == v15 )
      break;
    ++v16;
  }
  v18 = *((_QWORD *)a1 + 9);
  v19 = 0;
  v20 = *((_QWORD *)a1 + 2);
  v44 = v18;
  if ( v18 < v20 )
  {
    v21 = 0;
    do
    {
      if ( v19 > i )
        break;
      v22 = v20 - v18;
      while ( 1 )
      {
        v23 = v19;
        if ( MiPageSizes[v19] <= v22 )
          break;
        if ( ++v19 > i )
          goto LABEL_38;
      }
      v24 = (a1[8] & 0x3F | ((v21 & 1 | (2 * (v19 & 3 | (4 * (v5 & 3))))) << 6)) << 9;
      LargePageDemoteAsNeeded = MiGetLargePageDemoteAsNeeded(
                                  *((_QWORD *)a1 + 1),
                                  v24,
                                  v14,
                                  i,
                                  *((_QWORD *)a1 + 7),
                                  *((_QWORD *)a1 + 8));
      v42 = LargePageDemoteAsNeeded;
      if ( LargePageDemoteAsNeeded )
      {
        v26 = (LargePageDemoteAsNeeded + 0x220000000000LL) / 48;
        MiSimpleInsertPage((__int64)&v46, v26, 6);
        PfnPageSizeIndex = MiGetPfnPageSizeIndex(v42);
        v28 = MiPageSizes[PfnPageSizeIndex];
        v44 += v28;
        if ( (unsigned __int64)(v28 + v26) < 0x100000 || (v24 & 0x8000) == 0 )
        {
          a1[12] = PfnPageSizeIndex;
          *((_QWORD *)a1 + 5) = v28 + v26;
        }
        v29 = *((_QWORD *)a1 + 7);
        v19 = v23;
        LOBYTE(v5) = v39;
        if ( v29 )
          *((_QWORD *)a1 + 7) = v29 + (v28 << 12);
      }
      else if ( (v24 & 0x8000) != 0 || (*a1 & 1) != 0 )
      {
        v19 = v23 + 1;
        v21 = 0;
      }
      else
      {
        v21 = 1;
        v19 = v23;
      }
      v20 = *((_QWORD *)a1 + 2);
      v18 = v44;
    }
    while ( v44 < v20 );
LABEL_38:
    LOBYTE(v2) = v41;
  }
LABEL_39:
  v30 = v46;
  v31 = 0;
  result = 0x3FFFFFFFFFLL;
  if ( (_QWORD)v46 != 0x3FFFFFFFFFLL )
  {
    do
    {
      MiSimpleUnlinkPageEx((__int64)&v46, v30);
      v33 = MiGetPfnPageSizeIndex(48 * v30 - 0x220000000000LL);
      v34 = 48 * v30 - 0x220000000000LL;
      v35 = v33;
      v43 = v33;
      v36 = MiPageSizes[v33];
      if ( ((*(_DWORD *)(v34 + 32) >> 22) & 3) != v39 )
        MiChangePageAttribute(v34, v39);
      MiSimpleInsertPage(a2 + 24 * v35, v30, 2);
      v37 = *((_QWORD *)a1 + 7);
      *((_QWORD *)a1 + 9) += v36;
      if ( v37 )
      {
        v37 += v36 << 12;
        *((_QWORD *)a1 + 7) = v37;
      }
      if ( PhysicallyContiguousPfnWorthTrying )
      {
        v38 = *((_QWORD *)a1 + 5);
        if ( v38 + v36 > v38 )
        {
          if ( v37 && v43 && ((v37 >> 12) & MiPageSizes[v43 - 1]) == 0 )
            v31 = 1;
        }
        else
        {
          v31 = 1;
        }
        *((_QWORD *)a1 + 5) = v38 + v36;
      }
      MiUpdateLargePageBitMap(*((_QWORD *)a1 + 1), v30, v36, (2 * v2 + 2) | 1);
      v30 = v46;
      result = 0x3FFFFFFFFFLL;
    }
    while ( (_QWORD)v46 != 0x3FFFFFFFFFLL );
    if ( v31 )
      *((_QWORD *)a1 + 5) = -1LL;
  }
  return result;
}
