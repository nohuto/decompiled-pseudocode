/*
 * XREFs of ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x180006990
 * Callers:
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x180006700 (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 *     ?RecordUsage@?$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil_details_ServiceReportingKind@@II@Z @ 0x180006878 (-RecordUsage@-$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil.c)
 * Callees:
 *     ?SkipValues@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAE@Z @ 0x18000611C (-SkipValues@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAE@Z.c)
 *     ?FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAEPEAX_KI@Z @ 0x180006290 (-FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@.c)
 *     ?UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z @ 0x1800176F8 (-UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z.c)
 *     memcmp_0 @ 0x18001C036 (memcmp_0.c)
 */

char __fastcall wil::details_abi::RawUsageIndex::RecordUsageInternal(
        wil::details_abi::RawUsageIndex *this,
        void *Buf1,
        size_t Size,
        void *a4,
        size_t a5,
        unsigned int a6)
{
  __int64 v6; // rdi
  unsigned __int8 *InsertionPointOrIncrement; // rdi
  unsigned __int64 v12; // r15
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
  __int16 v35; // [rsp+30h] [rbp-39h] BYREF
  unsigned __int64 v36; // [rsp+38h] [rbp-31h]
  unsigned __int8 *v37; // [rsp+40h] [rbp-29h]
  unsigned __int16 v38; // [rsp+48h] [rbp-21h] BYREF
  char v39; // [rsp+4Ah] [rbp-1Fh]
  int v40; // [rsp+4Ch] [rbp-1Dh] BYREF
  unsigned __int16 v41; // [rsp+50h] [rbp-19h] BYREF
  void *Source[2]; // [rsp+58h] [rbp-11h]
  __int16 v43; // [rsp+68h] [rbp-1h]
  char v44; // [rsp+6Ah] [rbp+1h]
  unsigned int v45; // [rsp+6Ch] [rbp+3h] BYREF
  unsigned __int16 v46; // [rsp+70h] [rbp+7h] BYREF
  __int64 v47; // [rsp+78h] [rbp+Fh]
  void *v48; // [rsp+80h] [rbp+17h]
  unsigned __int8 *Destination; // [rsp+C0h] [rbp+57h] BYREF

  v6 = *((_QWORD *)this + 3);
  if ( !v6 )
    return 0;
  InsertionPointOrIncrement = (unsigned __int8 *)(v6 + 10);
  v12 = 0LL;
  v38 = *((_WORD *)this + 1);
  v39 = *((_BYTE *)this + 4);
  v40 = 0;
  v41 = 0;
  *(_OWORD *)Source = 0LL;
  while ( 1 )
  {
    v13 = InsertionPointOrIncrement;
    v14 = *((_QWORD *)this + 4);
    v36 = v14;
    v37 = InsertionPointOrIncrement;
    if ( v39 == 1 )
    {
      v13 = InsertionPointOrIncrement + 2;
      if ( (unsigned __int64)(InsertionPointOrIncrement + 2) > v14 )
        goto LABEL_14;
      Source[0] = InsertionPointOrIncrement;
      LOWORD(Destination) = 0;
      memcpy_s(&Destination, 2uLL, InsertionPointOrIncrement, 2uLL);
      v40 = (unsigned __int16)Destination;
    }
    else
    {
      if ( v39 != 2 )
        goto LABEL_5;
      v13 = InsertionPointOrIncrement + 4;
      if ( (unsigned __int64)(InsertionPointOrIncrement + 4) > v14 )
        goto LABEL_14;
      Source[0] = InsertionPointOrIncrement;
      memcpy_s(&v40, 4uLL, InsertionPointOrIncrement, 4uLL);
    }
    v14 = v36;
LABEL_5:
    v15 = v38;
    v41 = v38;
    if ( !v38 )
    {
      Destination = v13 + 2;
      if ( (unsigned __int64)(v13 + 2) > v14 )
      {
LABEL_14:
        *((_QWORD *)this + 4) = InsertionPointOrIncrement;
        goto LABEL_15;
      }
      memcpy_s(&v41, 2uLL, v13, 2uLL);
      v15 = v41;
      v14 = v36;
      v13 = Destination;
    }
    v16 = &v13[v15];
    Destination = v16;
    if ( (unsigned __int64)v16 > v14 )
      goto LABEL_14;
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
      break;
    if ( !v18 )
    {
      InsertionPointOrIncrement = wil::details_abi::RawUsageIndex::FindInsertionPointOrIncrement(
                                    this,
                                    (struct wil::details_abi::UsageIndexProperty *)&v38,
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
                                  (struct wil::details_abi::UsageIndexProperty *)&v38,
                                  v16);
  }
  InsertionPointOrIncrement = v37;
LABEL_15:
  v40 = 1;
  v41 = Size;
  Source[0] = 0LL;
  Source[1] = Buf1;
  if ( v38 )
    v20 = v38;
  else
    v20 = (unsigned __int16)Size + 2LL;
  if ( v39 == 1 )
  {
    v20 += 2LL;
  }
  else if ( v39 == 2 )
  {
    v20 += 4LL;
  }
  v19 = 0;
LABEL_21:
  v21 = *((unsigned __int16 *)this + 3);
  v22 = *((_BYTE *)this + 8);
  v45 = a6;
  v46 = a5;
  v43 = v21;
  v44 = v22;
  v47 = 0LL;
  v48 = a4;
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
      if ( v39 )
        wil::details_abi::UsageIndexProperty::UpdateCount((wil::details_abi::UsageIndexProperty *)&v38, v40 + 1);
      goto LABEL_36;
    }
    v28 = InsertionPointOrIncrement;
    if ( v39 == 1 )
    {
      v28 = InsertionPointOrIncrement + 2;
      if ( (unsigned __int64)(InsertionPointOrIncrement + 2) > v27 )
        goto LABEL_36;
      p_Destination = (int *)&Destination;
      LOWORD(Destination) = v40;
      v31 = 2LL;
    }
    else
    {
      if ( v39 != 2 )
      {
LABEL_33:
        if ( !v38 )
        {
          if ( (unsigned __int64)(v28 + 2) > v27 )
            goto LABEL_36;
          memcpy_s(v28, v27 - (_QWORD)v28, &v41, 2uLL);
          v28 += 2;
        }
        if ( (unsigned __int64)&v28[v41] <= v27 )
        {
          memcpy_s(v28, v27 - (_QWORD)v28, Source[1], v41);
          InsertionPointOrIncrement = &v28[v41];
        }
LABEL_36:
        v29 = *((_QWORD *)this + 4);
        if ( v44 == 1 )
        {
          v32 = InsertionPointOrIncrement + 2;
          if ( (unsigned __int64)(InsertionPointOrIncrement + 2) > v29 )
            goto LABEL_41;
          v33 = (unsigned int *)&v35;
          v35 = v45;
          v34 = 2LL;
        }
        else
        {
          if ( v44 != 2 )
          {
LABEL_38:
            if ( v43 )
              goto LABEL_39;
            if ( (unsigned __int64)(InsertionPointOrIncrement + 2) <= v29 )
            {
              memcpy_s(InsertionPointOrIncrement, v29 - (_QWORD)InsertionPointOrIncrement, &v46, 2uLL);
              InsertionPointOrIncrement += 2;
LABEL_39:
              if ( (unsigned __int64)&InsertionPointOrIncrement[v46] <= v29 )
                memcpy_s(InsertionPointOrIncrement, v29 - (_QWORD)InsertionPointOrIncrement, v48, v46);
            }
LABEL_41:
            *((_BYTE *)this + 56) = 1;
            return 1;
          }
          v32 = InsertionPointOrIncrement + 4;
          if ( (unsigned __int64)(InsertionPointOrIncrement + 4) > v29 )
            goto LABEL_41;
          v34 = 4LL;
          v33 = &v45;
        }
        memcpy_s(InsertionPointOrIncrement, v34, v33, v34);
        InsertionPointOrIncrement = v32;
        goto LABEL_38;
      }
      v28 = InsertionPointOrIncrement + 4;
      if ( (unsigned __int64)(InsertionPointOrIncrement + 4) > v27 )
        goto LABEL_36;
      v31 = 4LL;
      p_Destination = &v40;
    }
    memcpy_s(InsertionPointOrIncrement, v31, p_Destination, v31);
    goto LABEL_33;
  }
  return 0;
}
