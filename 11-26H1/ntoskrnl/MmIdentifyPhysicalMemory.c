/*
 * XREFs of MmIdentifyPhysicalMemory @ 0x14086E774
 * Callers:
 *     EtwpSetMark @ 0x140778508 (EtwpSetMark.c)
 *     EtwpKernelTraceRundown @ 0x140A99DCC (EtwpKernelTraceRundown.c)
 * Callees:
 *     MiReferencePageRuns @ 0x14028E44C (MiReferencePageRuns.c)
 *     MiPfnsWorthTrying @ 0x140290280 (MiPfnsWorthTrying.c)
 *     MiIdentifyPfnWrapper @ 0x1402D2DA0 (MiIdentifyPfnWrapper.c)
 *     PsDereferencePartition @ 0x1403836F0 (PsDereferencePartition.c)
 *     MiDereferencePageRuns @ 0x1403D34E4 (MiDereferencePageRuns.c)
 *     EtwTraceSiloDcEvent @ 0x1404B4AA4 (EtwTraceSiloDcEvent.c)
 *     MiReferencePagePartition @ 0x1406F56DC (MiReferencePagePartition.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall MmIdentifyPhysicalMemory(__int64 a1, unsigned int a2, unsigned __int16 a3, int a4)
{
  unsigned int v4; // edi
  __int64 v5; // rbx
  __int64 v6; // rsi
  char v7; // r15
  unsigned int *v8; // r13
  unsigned int v9; // eax
  unsigned __int64 v10; // r14
  __int64 v11; // rbx
  unsigned __int64 v12; // rcx
  __int64 v13; // r13
  int v14; // r12d
  __int64 v15; // rdi
  unsigned __int64 v16; // rax
  __int16 v17; // cx
  __int64 v18; // r14
  unsigned __int64 v20; // [rsp+30h] [rbp-69h]
  unsigned int v22; // [rsp+3Ch] [rbp-5Dh]
  __int128 v24; // [rsp+48h] [rbp-51h] BYREF
  char *v25; // [rsp+58h] [rbp-41h]
  int v26; // [rsp+60h] [rbp-39h] BYREF
  int v27; // [rsp+64h] [rbp-35h]
  __int64 v28; // [rsp+68h] [rbp-31h] BYREF
  __int64 v29; // [rsp+70h] [rbp-29h]
  __int128 v30; // [rsp+78h] [rbp-21h] BYREF
  __int64 v31; // [rsp+88h] [rbp-11h]
  unsigned __int64 v32; // [rsp+90h] [rbp-9h]
  unsigned int *v33; // [rsp+98h] [rbp-1h]
  __int128 v34; // [rsp+A0h] [rbp+7h] BYREF

  v29 = a1;
  v4 = a2;
  v25 = 0LL;
  v5 = a1;
  v31 = 0LL;
  v26 = 0;
  v6 = 0LL;
  v27 = a4;
  v28 = 0LL;
  v24 = 0LL;
  v7 = a4;
  v34 = 0LL;
  v30 = 0LL;
  v8 = (unsigned int *)MiReferencePageRuns((__int64)&MiSystemPartition, 0);
  v33 = v8;
  v9 = 0;
  v22 = 0;
  if ( *v8 )
  {
    while ( 1 )
    {
      v10 = *(_QWORD *)&v8[4 * v9 + 6];
      v11 = 48LL * *(_QWORD *)&v8[4 * v9 + 4] - 0x220000000000LL;
      v32 = v10;
      v20 = 0LL;
      if ( !v10 )
        goto LABEL_40;
      v12 = 0LL;
      v13 = v29;
      v14 = v7 & 1;
      do
      {
        v15 = 1LL;
        if ( !v14 || (*(_QWORD *)(v11 + 40) & 0x10000000000LL) != 0 || (*(_BYTE *)(v11 + 34) & 7) == 6 || (v7 & 4) != 0 )
        {
          v25 = 0LL;
          v24 = 0LL;
          v16 = MiIdentifyPfnWrapper(v11, 0LL, &v24);
          v15 = v16;
          if ( !v16 )
          {
            v15 = 1LL;
LABEL_37:
            v12 = v20;
            goto LABEL_38;
          }
          if ( v16 > v10 )
            v15 = v10;
          if ( (v7 & 2) == 0 )
            goto LABEL_20;
          if ( !v6 )
            goto LABEL_16;
          if ( *(_WORD *)v6 != ((*(_QWORD *)(v11 + 40) >> 43) & 0x3FF) )
          {
            PsDereferencePartition(*(_QWORD *)(v6 + 256));
LABEL_16:
            MiReferencePagePartition(v11, 0, &v28);
            v6 = v28;
          }
          if ( !v6 || MiPfnsWorthTrying((__int16 *)v6, v11, 1LL, 0, &v26) )
          {
            v17 = v24;
            *(_QWORD *)&v24 = v24 | 0x1000000000000000LL;
          }
          else
          {
LABEL_20:
            v17 = v24;
          }
          if ( ((v7 & 5) == 0
             || v14 && (v17 & 0x70) == 0x60
             || (v7 & 4) != 0 && (v17 & 0x100) != 0 && ((*(_BYTE *)(v11 + 34) & 8) == 0 || (v17 & 0x70) != 0x30))
            && v15 )
          {
            v18 = v15;
            do
            {
              *(_QWORD *)&v34 = &v24;
              *((_QWORD *)&v34 + 1) = 24LL;
              EtwTraceSiloDcEvent((__int64)&v34, 1u, v13, a2, a3, 0x501804u);
              ++*((_QWORD *)&v24 + 1);
              if ( (v24 & 0xF) == 2 )
              {
                v25 += 8;
              }
              else if ( v25 && v25 != MmBadPointer )
              {
                v25 += 4096;
              }
              --v18;
            }
            while ( v18 );
            v6 = v28;
            v7 = v27;
            v10 = v32;
          }
          goto LABEL_37;
        }
LABEL_38:
        v12 += v15;
        v11 += 48 * v15;
        v20 = v12;
      }
      while ( v12 < v10 );
      v8 = v33;
LABEL_40:
      v9 = v22 + 1;
      v22 = v9;
      if ( v9 >= *v8 )
      {
        v5 = v29;
        v4 = a2;
        break;
      }
    }
  }
  MiDereferencePageRuns((__int64)v8);
  if ( (v7 & 1) == 0 )
  {
    LODWORD(v30) = v30 & 0xFFFFFFE0;
    *((_QWORD *)&v30 + 1) = MmPfnDatabase;
    v31 = qword_140E2D880;
    *(_QWORD *)&v34 = &v30;
    *((_QWORD *)&v34 + 1) = 24LL;
    EtwTraceSiloDcEvent((__int64)&v34, 1u, v5, v4, 0x27Bu, 0x501804u);
  }
  if ( v6 )
    PsDereferencePartition(*(_QWORD *)(v6 + 256));
  return 0LL;
}
