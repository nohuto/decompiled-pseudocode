/*
 * XREFs of ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x180005DF0
 * Callers:
 *     ?RecordUsage@?$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil_details_ServiceReportingKind@@II@Z @ 0x180005A84 (-RecordUsage@-$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil.c)
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x180005C00 (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     ?SkipValues@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAE@Z @ 0x180005478 (-SkipValues@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAE@Z.c)
 *     ?FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAEPEAX_KI@Z @ 0x180006E50 (-FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@.c)
 *     ?UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z @ 0x180016678 (-UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z.c)
 *     memcmp_0 @ 0x18001A5A6 (memcmp_0.c)
 */

char __fastcall wil::details_abi::RawUsageIndex::RecordUsageInternal(
        wil::details_abi::RawUsageIndex *this,
        void *Buf1,
        size_t Size,
        void *a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  __int64 v6; // rdi
  unsigned __int8 *InsertionPointOrIncrement; // rdi
  unsigned __int64 v12; // r12
  unsigned __int8 *v13; // r13
  unsigned __int64 v14; // rcx
  unsigned __int16 v15; // ax
  unsigned __int8 *v16; // r8
  int v17; // eax
  int v18; // ecx
  char v19; // r13
  __int64 v20; // rdx
  __int64 v21; // rax
  char v22; // cl
  unsigned __int64 v23; // r9
  unsigned __int64 v24; // rsi
  unsigned __int64 v25; // rdx
  unsigned __int64 v27; // r14
  unsigned __int8 *v28; // rsi
  unsigned __int64 v29; // rsi
  int *p_Destination; // r8
  rsize_t v31; // r9
  unsigned __int8 *v32; // r14
  unsigned int *v33; // r8
  rsize_t v34; // r9
  unsigned __int64 v35; // [rsp+30h] [rbp-50h]
  unsigned __int16 v36; // [rsp+40h] [rbp-40h] BYREF
  char v37; // [rsp+42h] [rbp-3Eh]
  int v38; // [rsp+44h] [rbp-3Ch] BYREF
  unsigned __int16 v39; // [rsp+48h] [rbp-38h] BYREF
  void *Source[2]; // [rsp+50h] [rbp-30h]
  __int16 v41; // [rsp+60h] [rbp-20h]
  char v42; // [rsp+62h] [rbp-1Eh]
  unsigned int v43; // [rsp+64h] [rbp-1Ch] BYREF
  unsigned __int16 v44; // [rsp+68h] [rbp-18h] BYREF
  __int64 v45; // [rsp+70h] [rbp-10h]
  void *v46; // [rsp+78h] [rbp-8h]
  unsigned __int8 *Destination; // [rsp+B0h] [rbp+30h] BYREF

  v6 = *((_QWORD *)this + 3);
  if ( !v6 )
    return 0;
  InsertionPointOrIncrement = (unsigned __int8 *)(v6 + 10);
  v12 = 0LL;
  v36 = *((_WORD *)this + 1);
  v37 = *((_BYTE *)this + 4);
  v38 = 0;
  v39 = 0;
  *(_OWORD *)Source = 0LL;
  while ( 1 )
  {
    v13 = InsertionPointOrIncrement;
    v14 = *((_QWORD *)this + 4);
    v35 = v14;
    if ( v37 == 1 )
    {
      v13 = InsertionPointOrIncrement + 2;
      if ( (unsigned __int64)(InsertionPointOrIncrement + 2) > v14 )
        break;
      Source[0] = InsertionPointOrIncrement;
      LOWORD(Destination) = 0;
      memcpy_s(&Destination, 2uLL, InsertionPointOrIncrement, 2uLL);
      v38 = (unsigned __int16)Destination;
    }
    else
    {
      if ( v37 != 2 )
        goto LABEL_5;
      v13 = InsertionPointOrIncrement + 4;
      if ( (unsigned __int64)(InsertionPointOrIncrement + 4) > v14 )
        break;
      Source[0] = InsertionPointOrIncrement;
      memcpy_s(&v38, 4uLL, InsertionPointOrIncrement, 4uLL);
    }
    v14 = v35;
LABEL_5:
    v15 = v36;
    v39 = v36;
    if ( v36 )
      goto LABEL_6;
    Destination = v13 + 2;
    if ( (unsigned __int64)(v13 + 2) > v14 )
      break;
    memcpy_s(&v39, 2uLL, v13, 2uLL);
    v15 = v39;
    v14 = v35;
    v13 = Destination;
LABEL_6:
    v16 = &v13[v15];
    Destination = v16;
    if ( (unsigned __int64)v16 > v14 )
      break;
    Source[1] = v13;
    if ( Size == v15 )
    {
      v17 = memcmp_0(Buf1, v13, Size);
      v16 = Destination;
      v18 = v17;
    }
    else
    {
      v18 = Size - v15;
    }
    if ( v18 < 0 )
      goto LABEL_15;
    if ( !v18 )
    {
      InsertionPointOrIncrement = wil::details_abi::RawUsageIndex::FindInsertionPointOrIncrement(
                                    this,
                                    (struct wil::details_abi::UsageIndexProperty *)&v36,
                                    v16,
                                    a4,
                                    a5,
                                    a6);
      if ( InsertionPointOrIncrement )
      {
        v19 = 1;
        v20 = 0LL;
        goto LABEL_21;
      }
      return 1;
    }
    InsertionPointOrIncrement = wil::details_abi::RawUsageIndex::SkipValues(
                                  this,
                                  (struct wil::details_abi::UsageIndexProperty *)&v36,
                                  v16);
  }
  *((_QWORD *)this + 4) = InsertionPointOrIncrement;
LABEL_15:
  v38 = 1;
  v39 = Size;
  Source[0] = 0LL;
  Source[1] = Buf1;
  if ( v36 )
    v20 = v36;
  else
    v20 = (unsigned __int16)Size + 2LL;
  if ( v37 == 1 )
  {
    v20 += 2LL;
  }
  else if ( v37 == 2 )
  {
    v20 += 4LL;
  }
  v19 = 0;
LABEL_21:
  v21 = *((unsigned __int16 *)this + 3);
  v22 = *((_BYTE *)this + 8);
  v43 = a6;
  v44 = a5;
  v41 = v21;
  v42 = v22;
  v45 = 0LL;
  v46 = a4;
  if ( !(_WORD)v21 )
    v21 = (unsigned __int16)a5 + 2LL;
  if ( v22 == 1 )
  {
    v21 += 2LL;
  }
  else if ( v22 == 2 )
  {
    v21 += 4LL;
  }
  v23 = *((_QWORD *)this + 4);
  v24 = v21 + v20;
  v25 = *((_QWORD *)this + 5);
  if ( v23 < v25 )
    v12 = *((_QWORD *)this + 5) - v23;
  if ( v12 >= v24 )
  {
    memmove_s(
      &InsertionPointOrIncrement[v24],
      v25 - v24 - (_QWORD)InsertionPointOrIncrement,
      InsertionPointOrIncrement,
      v23 - (_QWORD)InsertionPointOrIncrement);
    v27 = v24 + *((_QWORD *)this + 4);
    *((_QWORD *)this + 4) = v27;
    if ( v19 )
    {
      if ( v37 )
        wil::details_abi::UsageIndexProperty::UpdateCount((wil::details_abi::UsageIndexProperty *)&v36, v38 + 1);
      goto LABEL_36;
    }
    v28 = InsertionPointOrIncrement;
    if ( v37 == 1 )
    {
      v28 = InsertionPointOrIncrement + 2;
      if ( (unsigned __int64)(InsertionPointOrIncrement + 2) > v27 )
        goto LABEL_36;
      p_Destination = (int *)&Destination;
      LOWORD(Destination) = v38;
      v31 = 2LL;
    }
    else
    {
      if ( v37 != 2 )
      {
LABEL_33:
        if ( !v36 )
        {
          if ( (unsigned __int64)(v28 + 2) > v27 )
            goto LABEL_36;
          memcpy_s(v28, v27 - (_QWORD)v28, &v39, 2uLL);
          v28 += 2;
        }
        if ( (unsigned __int64)&v28[v39] <= v27 )
        {
          memcpy_s(v28, v27 - (_QWORD)v28, Source[1], v39);
          InsertionPointOrIncrement = &v28[v39];
        }
LABEL_36:
        v29 = *((_QWORD *)this + 4);
        if ( v42 == 1 )
        {
          v32 = InsertionPointOrIncrement + 2;
          if ( (unsigned __int64)(InsertionPointOrIncrement + 2) > v29 )
            goto LABEL_41;
          v33 = (unsigned int *)&Destination;
          LOWORD(Destination) = v43;
          v34 = 2LL;
        }
        else
        {
          if ( v42 != 2 )
          {
LABEL_38:
            if ( v41 )
              goto LABEL_39;
            if ( (unsigned __int64)(InsertionPointOrIncrement + 2) <= v29 )
            {
              memcpy_s(InsertionPointOrIncrement, v29 - (_QWORD)InsertionPointOrIncrement, &v44, 2uLL);
              InsertionPointOrIncrement += 2;
LABEL_39:
              if ( (unsigned __int64)&InsertionPointOrIncrement[v44] <= v29 )
                memcpy_s(InsertionPointOrIncrement, v29 - (_QWORD)InsertionPointOrIncrement, v46, v44);
            }
LABEL_41:
            *((_BYTE *)this + 56) = 1;
            return 1;
          }
          v32 = InsertionPointOrIncrement + 4;
          if ( (unsigned __int64)(InsertionPointOrIncrement + 4) > v29 )
            goto LABEL_41;
          v34 = 4LL;
          v33 = &v43;
        }
        memcpy_s(InsertionPointOrIncrement, v34, v33, v34);
        InsertionPointOrIncrement = v32;
        goto LABEL_38;
      }
      v28 = InsertionPointOrIncrement + 4;
      if ( (unsigned __int64)(InsertionPointOrIncrement + 4) > v27 )
        goto LABEL_36;
      v31 = 4LL;
      p_Destination = &v38;
    }
    memcpy_s(InsertionPointOrIncrement, v31, p_Destination, v31);
    goto LABEL_33;
  }
  return 0;
}
