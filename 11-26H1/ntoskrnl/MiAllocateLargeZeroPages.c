/*
 * XREFs of MiAllocateLargeZeroPages @ 0x1403D0630
 * Callers:
 *     MiCreateSlabEntry @ 0x140206364 (MiCreateSlabEntry.c)
 *     MiCreateLargePfnList @ 0x1402F23FC (MiCreateLargePfnList.c)
 *     MiAllocateFastLargePagesForMdl @ 0x1406F2C10 (MiAllocateFastLargePagesForMdl.c)
 *     MiCreatePagingFileCommit @ 0x1409894E4 (MiCreatePagingFileCommit.c)
 *     MiGetLargePagesForSystemMapping @ 0x140B4E990 (MiGetLargePagesForSystemMapping.c)
 * Callees:
 *     MiUpdatePageFileHighInPte @ 0x14028B570 (MiUpdatePageFileHighInPte.c)
 *     MiSimpleUnlinkPageEx @ 0x14028D6D0 (MiSimpleUnlinkPageEx.c)
 *     MiZeroAndConvertPage @ 0x1402A0A00 (MiZeroAndConvertPage.c)
 *     MiPfnBestZeroAttribute @ 0x1402A0DFC (MiPfnBestZeroAttribute.c)
 *     MiChangePageAttribute @ 0x1402BA420 (MiChangePageAttribute.c)
 *     MiIssuePageHeatList @ 0x1402D58BC (MiIssuePageHeatList.c)
 *     RtlAvlRemoveNode @ 0x1402EE660 (RtlAvlRemoveNode.c)
 *     MiProtectionToCacheAttribute @ 0x140374020 (MiProtectionToCacheAttribute.c)
 *     MiCreatePageChains @ 0x1403CD4B8 (MiCreatePageChains.c)
 *     MiProcessPageGroupInfo @ 0x1403CDA40 (MiProcessPageGroupInfo.c)
 *     MiInsertMdlPageNeedsZero @ 0x1403CE638 (MiInsertMdlPageNeedsZero.c)
 *     MiSimpleInsertPage @ 0x1403CF00C (MiSimpleInsertPage.c)
 *     MiGetFastLargePages @ 0x1403D0A5C (MiGetFastLargePages.c)
 *     MiAddPageToHeatList @ 0x14048AF80 (MiAddPageToHeatList.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MiFindLargePageMemory @ 0x140B64898 (MiFindLargePageMemory.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

unsigned __int64 __fastcall MiAllocateLargeZeroPages(unsigned int *a1)
{
  BOOL v2; // edi
  _DWORD *v3; // r14
  int v4; // ebx
  unsigned int v5; // ecx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx
  __int64 *v9; // rcx
  __int64 *v10; // rax
  __int64 v11; // r13
  __int64 v12; // r12
  unsigned __int64 result; // rax
  __int64 v14; // rsi
  __int64 v15; // rax
  _QWORD *v16; // r14
  _QWORD **v17; // rcx
  __int64 *v18; // r12
  __int64 v19; // rdx
  _QWORD *v20; // rax
  _QWORD *i; // rcx
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rbx
  __int64 v25; // rax
  unsigned int v26; // eax
  unsigned int v27; // ebx
  __int64 PageChains; // rax
  unsigned int v29; // [rsp+30h] [rbp-D0h]
  __int64 *v30; // [rsp+38h] [rbp-C8h] BYREF
  int v31; // [rsp+40h] [rbp-C0h]
  __int64 *v32; // [rsp+48h] [rbp-B8h]
  __int64 v33; // [rsp+50h] [rbp-B0h]
  __int128 v34; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v35[128]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v36[96]; // [rsp+F0h] [rbp-10h] BYREF

  memset_0(v35, 0, sizeof(v35));
  memset_0(v36, 0, sizeof(v36));
  v2 = 0;
  v3 = 0LL;
  v4 = 1;
  if ( (*a1 & 0x10) == 0 )
    v2 = (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0;
  v5 = a1[9];
  v34 = 0LL;
  LODWORD(v34) = 129;
  v29 = MiProtectionToCacheAttribute(v5);
  do
  {
    v7 = *((_QWORD *)a1 + 2);
    v8 = *((_QWORD *)a1 + 9);
    if ( v8 >= v7 || v7 - v8 < *((_QWORD *)a1 + 3) )
      break;
    MiGetFastLargePages(a1, v36);
    v9 = MiPageSizes;
    v31 = 0;
    v10 = (__int64 *)v36;
    v30 = MiPageSizes;
    v32 = (__int64 *)v36;
    v11 = 0LL;
    do
    {
      v12 = *v10;
      if ( *v10 == 0x3FFFFFFFFFLL )
        goto LABEL_8;
      v31 = 1;
      do
      {
        MiSimpleUnlinkPageEx((__int64)v10, v12);
        v14 = 48 * v12 - 0x220000000000LL;
        if ( (*a1 & 4) != 0 || (*(_QWORD *)(v14 + 16) & 0x3E0LL) == 0 )
          v4 = 0;
        v33 = *v30;
        v15 = *(_QWORD *)(v14 + 16);
        if ( qword_140E2D8C0 && (v15 & 0x10) == 0 )
          HIDWORD(v15) &= HIDWORD(qword_140E2D8C8);
        if ( HIDWORD(v15) == -3 && (stru_140E366D8.WaitRegister.Flags & 1) != 0 )
        {
          MiAddPageToHeatList(&v34, 48 * v12 / 48, (unsigned int)v11);
          *(_QWORD *)(v14 + 16) = MiUpdatePageFileHighInPte(*(_QWORD *)(v14 + 16), 0);
        }
        if ( !v4 )
          goto LABEL_24;
        if ( (*(_DWORD *)(v14 + 32) & 0xC00000) == 0xC00000 )
        {
          v26 = MiPfnBestZeroAttribute(48 * v12 - 0x220000000000LL, v29);
          MiChangePageAttribute(48 * v12 - 0x220000000000LL, v26);
        }
        if ( !v3 )
        {
          v27 = (*a1 & 0x10 | 4) >> 2;
          if ( !v2
            || (PageChains = MiCreatePageChains(*((_QWORD *)a1 + 1), a1[8], v29, 0LL, 1),
                (v3 = (_DWORD *)PageChains) == 0LL) )
          {
            MiZeroAndConvertPage(0LL, 48 * v12 - 0x220000000000LL, v11, v29, v27);
LABEL_24:
            MiSimpleInsertPage(*((_QWORD *)a1 + 10) + 24 * v11, v12, 2);
            goto LABEL_25;
          }
          *(_DWORD *)(PageChains + 16) = v27;
        }
        MiInsertMdlPageNeedsZero(v3, 48 * v12 - 0x220000000000LL, v33);
LABEL_25:
        v10 = v32;
        v4 = 1;
        v12 = *v32;
      }
      while ( *v32 != 0x3FFFFFFFFFLL );
      v9 = v30;
LABEL_8:
      v10 += 3;
      ++v9;
      v11 = (unsigned int)(v11 + 1);
      v32 = v10;
      v30 = v9;
    }
    while ( (unsigned int)v11 < 4 );
  }
  while ( v31 );
  if ( DWORD1(v34) )
    MiIssuePageHeatList(&v34, v6);
  if ( v3 )
    MiProcessPageGroupInfo((__int64)v3, *((_QWORD *)a1 + 10));
  result = *((_QWORD *)a1 + 2);
  if ( *((_QWORD *)a1 + 9) != result )
  {
    if ( v2 )
    {
      result = *a1;
      if ( (result & 8) == 0 )
      {
        v30 = 0LL;
        MiFindLargePageMemory(a1, &v30);
        result = (unsigned __int64)v30;
        v16 = 0LL;
        while ( result )
        {
          v16 = (_QWORD *)result;
          result = *(_QWORD *)result;
        }
        for ( ; v16; result = MiSimpleInsertPage(v25 + 24 * v22, v23, 2) )
        {
          v17 = (_QWORD **)v16[1];
          v18 = v16 - 2;
          v19 = (__int64)v16;
          v20 = v16;
          if ( v17 )
          {
            v16 = (_QWORD *)v16[1];
            for ( i = *v17; i; i = (_QWORD *)*i )
              v16 = i;
          }
          else
          {
            while ( 1 )
            {
              v16 = (_QWORD *)(v16[2] & 0xFFFFFFFFFFFFFFFCuLL);
              if ( !v16 || (_QWORD *)*v16 == v20 )
                break;
              v20 = v16;
            }
          }
          RtlAvlRemoveNode((unsigned __int64 *)&v30, v19);
          v22 = *((unsigned int *)v18 + 2);
          v23 = *v18;
          v24 = MiPageSizes[v22];
          ExFreePoolWithTag(v18, 0);
          v25 = *((_QWORD *)a1 + 10);
          *((_QWORD *)a1 + 9) += v24;
        }
      }
    }
  }
  return result;
}
