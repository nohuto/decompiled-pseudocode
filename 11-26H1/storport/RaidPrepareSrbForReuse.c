/*
 * XREFs of RaidPrepareSrbForReuse @ 0x1401B3970
 * Callers:
 *     RaidBusEnumeratorGetLunList @ 0x14000A2D0 (RaidBusEnumeratorGetLunList.c)
 *     RaidAdapterEnumerateBus @ 0x14000B1B0 (RaidAdapterEnumerateBus.c)
 *     RaidBusEnumeratorGetUnit @ 0x14000C0F0 (RaidBusEnumeratorGetUnit.c)
 *     RaidBusEnumeratorIssueReportLuns @ 0x14000D450 (RaidBusEnumeratorIssueReportLuns.c)
 *     RaidBusEnumeratorGenericInquiry @ 0x14000D870 (RaidBusEnumeratorGenericInquiry.c)
 * Callees:
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

void *__fastcall RaidPrepareSrbForReuse(unsigned int *a1)
{
  __int64 v1; // rdi
  int v3; // esi
  unsigned int v4; // ebp
  __int64 v5; // rdi
  __int64 v6; // rsi
  void *result; // rax
  unsigned int v8; // r8d
  __int64 v9; // r12
  __int64 v10; // r13
  size_t v11; // r14
  unsigned int v12; // r15d
  __int64 v13; // rcx
  __int64 v14; // rdx
  int v15; // ecx
  int v16; // esi
  int v17; // esi
  int v18; // ecx

  v1 = 0LL;
  v3 = 0;
  v4 = 0;
  if ( *((_BYTE *)a1 + 2) != 40 )
  {
    v5 = *((_QWORD *)a1 + 4);
    v6 = *((_QWORD *)a1 + 7);
    result = memset_0(a1, 0, 0x58uLL);
    *((_QWORD *)a1 + 4) = v5;
    *((_QWORD *)a1 + 7) = v6;
    return result;
  }
  v8 = 0;
  v9 = a1[30];
  v10 = *((_QWORD *)a1 + 13);
  v11 = a1[4];
  v12 = a1[14];
  if ( !v12 )
    goto LABEL_11;
  while ( 1 )
  {
    v13 = a1[v8 + 30];
    if ( (unsigned int)v13 < 0x80 || (unsigned int)v13 > (unsigned int)v11 )
      goto LABEL_18;
    v14 = (unsigned int)v13;
    v15 = *(unsigned int *)((char *)a1 + v13);
    if ( v15 == 64 )
    {
      if ( v14 + 40 <= v11 )
      {
        v3 = 64;
LABEL_9:
        v1 = *(_QWORD *)((char *)a1 + v14 + 16);
        goto LABEL_10;
      }
      goto LABEL_18;
    }
    v18 = v15 - 65;
    if ( v18 )
      break;
    if ( v14 + 56 <= v11 )
    {
      v3 = 65;
      goto LABEL_9;
    }
LABEL_18:
    if ( ++v8 >= v12 )
      goto LABEL_11;
  }
  if ( v18 != 1 || v14 + 40 > v11 )
    goto LABEL_18;
  v1 = *(_QWORD *)((char *)a1 + v14 + 24);
  v3 = 66;
LABEL_10:
  v4 = *(unsigned int *)((char *)a1 + v14 + 4);
LABEL_11:
  result = memset_0(a1, 0, v11);
  a1[4] = v11;
  *((_QWORD *)a1 + 13) = v10;
  a1[14] = v12;
  *(_WORD *)a1 = 8;
  *((_BYTE *)a1 + 2) = 40;
  a1[30] = v9;
  v16 = v3 - 64;
  if ( !v16 )
  {
    *(unsigned int *)((char *)a1 + v9) = 64;
    goto LABEL_26;
  }
  v17 = v16 - 1;
  if ( !v17 )
  {
    *(unsigned int *)((char *)a1 + v9) = 65;
LABEL_26:
    *(unsigned int *)((char *)a1 + v9 + 4) = v4;
    *(_QWORD *)((char *)a1 + v9 + 16) = v1;
    return result;
  }
  if ( v17 == 1 )
  {
    *(unsigned int *)((char *)a1 + v9) = 66;
    *(unsigned int *)((char *)a1 + v9 + 4) = v4;
    *(_QWORD *)((char *)a1 + v9 + 24) = v1;
  }
  return result;
}
