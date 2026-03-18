/*
 * XREFs of ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x180165634
 * Callers:
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x1801655BC (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     ?FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAEPEAX_KI@Z @ 0x1801659C4 (-FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@.c)
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x180165C00 (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     memmove_s @ 0x180165CF8 (memmove_s.c)
 *     ?GetSize@UsageIndexProperty@details_abi@wil@@QEBA_KXZ @ 0x180165D68 (-GetSize@UsageIndexProperty@details_abi@wil@@QEBA_KXZ.c)
 *     ?Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z @ 0x180216B54 (-Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z.c)
 *     ?UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z @ 0x18021FF70 (-UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z.c)
 *     memcmp_0 @ 0x1802215A8 (memcmp_0.c)
 *     ?SkipValues@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAE@Z @ 0x1802241A8 (-SkipValues@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAE@Z.c)
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
  unsigned __int8 *v11; // rdi
  char v12; // r14
  bool v13; // al
  __int64 v14; // r9
  int v15; // esi
  unsigned __int64 v16; // r8
  int v17; // ecx
  unsigned __int8 *InsertionPointOrIncrement; // rax
  unsigned int v19; // edx
  char v20; // cl
  __int64 v21; // rax
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // r15
  unsigned __int64 v24; // r9
  unsigned __int8 *v25; // r8
  void *Source; // [rsp+30h] [rbp-50h] BYREF
  __int16 v28; // [rsp+38h] [rbp-48h] BYREF
  char v29; // [rsp+3Ah] [rbp-46h]
  int v30; // [rsp+3Ch] [rbp-44h]
  unsigned __int16 v31; // [rsp+40h] [rbp-40h]
  void *Buf2[2]; // [rsp+48h] [rbp-38h]
  __int16 v33; // [rsp+58h] [rbp-28h] BYREF
  char v34; // [rsp+5Ah] [rbp-26h]
  unsigned int v35; // [rsp+5Ch] [rbp-24h]
  __int16 v36; // [rsp+60h] [rbp-20h]
  __int64 v37; // [rsp+68h] [rbp-18h]
  void *v38; // [rsp+70h] [rbp-10h]

  v6 = *((_QWORD *)this + 3);
  if ( !v6 )
    return 0;
  v11 = (unsigned __int8 *)(v6 + 10);
  v28 = *((_WORD *)this + 1);
  v12 = 0;
  v29 = *((_BYTE *)this + 4);
  Source = v11;
  v30 = 0;
  v31 = 0;
  *(_OWORD *)Buf2 = 0LL;
  while ( 1 )
  {
    v13 = wil::details_abi::UsageIndexProperty::Read(
            (wil::details_abi::UsageIndexProperty *)&v28,
            (unsigned __int8 **)&Source,
            *((unsigned __int8 **)this + 4));
    v14 = 0LL;
    if ( !v13 )
    {
      v11 = (unsigned __int8 *)Source;
      *((_QWORD *)this + 4) = Source;
LABEL_5:
      v15 = 1;
      v31 = Size;
      v30 = 1;
      Buf2[0] = 0LL;
      Buf2[1] = Buf1;
      v16 = wil::details_abi::UsageIndexProperty::GetSize((wil::details_abi::UsageIndexProperty *)&v28);
      goto LABEL_14;
    }
    if ( Size == v31 )
    {
      v17 = memcmp_0(Buf1, Buf2[1], Size);
      v14 = 0LL;
    }
    else
    {
      v17 = Size - v31;
    }
    if ( v17 < 0 )
      break;
    if ( !v17 )
    {
      InsertionPointOrIncrement = wil::details_abi::RawUsageIndex::FindInsertionPointOrIncrement(
                                    this,
                                    (struct wil::details_abi::UsageIndexProperty *)&v28,
                                    (unsigned __int8 *)Source,
                                    a4,
                                    a5,
                                    a6);
      v14 = 0LL;
      Source = InsertionPointOrIncrement;
      v11 = InsertionPointOrIncrement;
      if ( InsertionPointOrIncrement )
      {
        v12 = 1;
        goto LABEL_12;
      }
      return 1;
    }
    v11 = wil::details_abi::RawUsageIndex::SkipValues(
            this,
            (struct wil::details_abi::UsageIndexProperty *)&v28,
            (unsigned __int8 *)Source);
    Source = v11;
  }
  Source = v11;
LABEL_12:
  v16 = 0LL;
  if ( !v12 )
    goto LABEL_5;
  v15 = v30;
LABEL_14:
  v19 = *((unsigned __int16 *)this + 3);
  v20 = *((_BYTE *)this + 8);
  v35 = a6;
  v38 = a4;
  v33 = v19;
  v34 = v20;
  v36 = a5;
  v37 = v14;
  if ( (_WORD)v19 )
    v21 = v19;
  else
    v21 = (unsigned __int16)a5 + 2LL;
  if ( v20 == 1 )
  {
    v21 += 2LL;
  }
  else if ( v20 == 2 )
  {
    v21 += 4LL;
  }
  v22 = *((_QWORD *)this + 5);
  v23 = v21 + v16;
  v24 = *((_QWORD *)this + 4);
  if ( ((v22 - v24) & -(__int64)(v24 < v22)) >= v21 + v16 )
  {
    memmove_s(&v11[v23], v22 - v23 - (_QWORD)v11, v11, v24 - (_QWORD)v11);
    v25 = (unsigned __int8 *)(v23 + *((_QWORD *)this + 4));
    *((_QWORD *)this + 4) = v25;
    if ( v12 )
    {
      if ( v29 )
        wil::details_abi::UsageIndexProperty::UpdateCount((wil::details_abi::UsageIndexProperty *)&v28, v15 + 1);
    }
    else
    {
      wil::details_abi::UsageIndexProperty::Write(
        (wil::details_abi::UsageIndexProperty *)&v28,
        (unsigned __int8 **)&Source,
        v25);
    }
    wil::details_abi::UsageIndexProperty::Write(
      (wil::details_abi::UsageIndexProperty *)&v33,
      (unsigned __int8 **)&Source,
      *((unsigned __int8 **)this + 4));
    *((_BYTE *)this + 56) = 1;
    return 1;
  }
  return 0;
}
