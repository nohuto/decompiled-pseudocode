/*
 * XREFs of RtlpHpSegWalk @ 0x180094C1C
 * Callers:
 *     RtlpHpHeapWalk @ 0x180094AEC (RtlpHpHeapWalk.c)
 * Callees:
 *     RtlpHpSegReportSegment @ 0x180095938 (RtlpHpSegReportSegment.c)
 *     RtlpHpLfhSubsegmentWalk @ 0x1800BC668 (RtlpHpLfhSubsegmentWalk.c)
 *     RtlpHpSegReportBusyBlock @ 0x1800E0BDC (RtlpHpSegReportBusyBlock.c)
 *     RtlpHpVsSubsegmentWalk @ 0x180110458 (RtlpHpVsSubsegmentWalk.c)
 *     RtlpHpSegReportPageRange @ 0x18011D164 (RtlpHpSegReportPageRange.c)
 *     RtlpHpPgSubsegmentWalk @ 0x180158514 (RtlpHpPgSubsegmentWalk.c)
 */

__int64 __fastcall RtlpHpSegWalk(__int64 *a1, __int64 a2, char a3)
{
  unsigned __int64 v3; // r10
  unsigned int v4; // ebx
  __int64 v5; // r14
  __int64 *v6; // rsi
  __int64 **v7; // rax
  __int64 *v8; // r8
  char v9; // r9
  __int64 **v10; // r12
  unsigned __int64 v11; // rdi
  __int64 v12; // r12
  char v13; // cl
  __int64 v14; // r8
  signed __int64 v15; // rdi
  char v16; // r8
  unsigned __int8 v17; // r8
  char v18; // cl
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // r10
  int v21; // edx
  __int64 v22; // rax
  int v23; // eax
  int v24; // edx
  __int64 v25; // rax
  __int16 v26; // r15
  __int16 v27; // r10
  _QWORD v29[2]; // [rsp+40h] [rbp-10h] BYREF
  int v30; // [rsp+98h] [rbp+48h] BYREF
  int v31; // [rsp+A8h] [rbp+58h] BYREF

  v3 = *(_QWORD *)a2;
  v4 = 0;
  v29[0] = 0LL;
  v5 = a2;
  v30 = 0;
  v6 = a1;
  v31 = 0;
  if ( !v3 )
  {
    v7 = (__int64 **)(a1 + 9);
    if ( *v7 != (__int64 *)v7 )
    {
      v8 = *v7;
LABEL_4:
      RtlpHpSegReportSegment(a1, a2, v8);
      return v4;
    }
    return (unsigned int)-2147483622;
  }
  v9 = 2;
  if ( (*(_BYTE *)(a2 + 18) & 2) != 0 )
  {
    v10 = (__int64 **)v3;
    if ( a3 )
    {
      v11 = v3 + 32LL * *((unsigned __int8 *)a1 + 10);
      goto LABEL_14;
    }
    if ( *(__int64 **)v3 != a1 + 9 )
    {
      v8 = *(__int64 **)v3;
      goto LABEL_4;
    }
    return (unsigned int)-2147483622;
  }
  if ( !a3 )
    return (unsigned int)-2147483622;
  v12 = *a1;
  v13 = *((_BYTE *)a1 + 8);
  v14 = v12;
  v10 = (__int64 **)(v3 & v12);
  v15 = (signed __int64)&v10[4 * ((unsigned __int64)(unsigned int)(v3 - (_DWORD)v10) >> v13)];
  if ( (v3 & 0xFFF) != 0 )
  {
    if ( (*(_BYTE *)(v15 + 24) & 2) != 0 )
      goto LABEL_23;
  }
  else if ( (*(_BYTE *)(v15 + 24) & 2) != 0 )
  {
LABEL_13:
    v11 = 32LL * *(unsigned __int8 *)(v15 + 31) + v15;
LABEL_14:
    while ( v11 < (unsigned __int64)(v10 + 1024) )
    {
      v16 = *(_BYTE *)(v11 + 24);
      if ( (v16 & 1) != 0 && (v16 & 0x20) == 0 )
      {
        v17 = v16 & 0x1C;
        if ( v17 != 4 )
        {
          v18 = *((_BYTE *)v6 + 8);
          v19 = *v6 & v11;
          v20 = v19 + ((unsigned int)((__int64)(v11 - v19) >> 5) << v18);
          if ( v17 < 8u )
          {
            *(_QWORD *)v5 = v20;
            RtlpHpSegReportPageRange(v6, v5);
            return v4;
          }
          v21 = v19 + ((unsigned int)((__int64)(v11 - v19) >> 5) << v18);
          if ( v17 == 8 )
          {
            v22 = RtlpHpLfhSubsegmentWalk(v6[3], v21, v20, v9, (__int64)v29, (__int64)&v30, (__int64)&v31);
          }
          else if ( v17 == 12 )
          {
            v22 = RtlpHpVsSubsegmentWalk(v6[4], v21, v20, (unsigned int)v29, (__int64)&v30, (__int64)&v31);
          }
          else
          {
            v22 = RtlpHpPgSubsegmentWalk(
                    v6[18],
                    v21,
                    (*(unsigned __int8 *)(v11 + 31) << v18) - *(_DWORD *)(v11 + 4),
                    v20,
                    (__int64)v29,
                    (__int64)&v30,
                    (__int64)&v31);
          }
          *(_QWORD *)v5 = v22;
          if ( v22 )
          {
            RtlpHpSegReportBusyBlock((_DWORD)v6, v5, v29[0], v30, v31);
            *(_WORD *)(v5 + 18) |= v27;
            return v4;
          }
        }
      }
      v11 += 32LL * *(unsigned __int8 *)(v11 + 31);
    }
    if ( *v10 != v6 + 9 )
    {
      v8 = *v10;
      a2 = v5;
      a1 = v6;
      goto LABEL_4;
    }
    return (unsigned int)-2147483622;
  }
  v15 += -32LL * *(unsigned __int8 *)(v15 + 26);
LABEL_23:
  v23 = *(_BYTE *)(v15 + 24) & 0x1C;
  v24 = (v15 & v14) + ((unsigned int)((v15 - (v15 & v14)) >> 5) << v13);
  if ( v23 == 8 )
  {
    v25 = RtlpHpLfhSubsegmentWalk(v6[3], v24, v3, 2, (__int64)v29, (__int64)&v30, (__int64)&v31);
  }
  else if ( v23 == 12 )
  {
    v25 = RtlpHpVsSubsegmentWalk(v6[4], v24, v3, (unsigned int)v29, (__int64)&v30, (__int64)&v31);
  }
  else
  {
    v25 = RtlpHpPgSubsegmentWalk(
            v6[18],
            v24,
            (*(unsigned __int8 *)(v15 + 31) << v13) - *(_DWORD *)(v15 + 4),
            v3,
            (__int64)v29,
            (__int64)&v30,
            (__int64)&v31);
  }
  *(_QWORD *)v5 = v25;
  if ( !v25 )
    goto LABEL_13;
  RtlpHpSegReportBusyBlock((_DWORD)v6, v5, v29[0], v30, v31);
  v26 = 0x8000;
  if ( (*(_BYTE *)(v15 + 24) & 0x1C) != 8 )
    v26 = 0;
  *(_WORD *)(v5 + 18) |= v26;
  return v4;
}
