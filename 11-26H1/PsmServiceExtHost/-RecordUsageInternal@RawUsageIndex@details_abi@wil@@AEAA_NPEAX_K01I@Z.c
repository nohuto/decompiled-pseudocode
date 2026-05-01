/*
 * XREFs of ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x180060514
 * Callers:
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x18006031C (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     ?GetSize@UsageIndexProperty@details_abi@wil@@QEBA_KXZ @ 0x180060034 (-GetSize@UsageIndexProperty@details_abi@wil@@QEBA_KXZ.c)
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x18006080C (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     ?SkipValues@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAE@Z @ 0x180060914 (-SkipValues@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAE@Z.c)
 *     ?FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAEPEAX_KI@Z @ 0x180060A6C (-FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@.c)
 *     ?UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z @ 0x180073978 (-UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z.c)
 *     ?Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z @ 0x180073C28 (-Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z.c)
 *     memcmp_0 @ 0x1800A28B6 (memcmp_0.c)
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
  unsigned __int8 *v10; // rdi
  char v11; // si
  int v12; // ecx
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // r14
  unsigned __int8 *v19; // r8
  unsigned __int8 *InsertionPointOrIncrement; // [rsp+30h] [rbp-50h] BYREF
  __int16 v21; // [rsp+38h] [rbp-48h] BYREF
  char v22; // [rsp+3Ah] [rbp-46h]
  int v23; // [rsp+3Ch] [rbp-44h]
  unsigned __int16 v24; // [rsp+40h] [rbp-40h]
  void *Buf2[2]; // [rsp+48h] [rbp-38h]
  __int16 v26; // [rsp+58h] [rbp-28h] BYREF
  char v27; // [rsp+5Ah] [rbp-26h]
  unsigned int v28; // [rsp+5Ch] [rbp-24h]
  __int16 v29; // [rsp+60h] [rbp-20h]
  __int64 v30; // [rsp+68h] [rbp-18h]
  void *v31; // [rsp+70h] [rbp-10h]

  v6 = *((_QWORD *)this + 3);
  if ( !v6 )
    return 0;
  v10 = (unsigned __int8 *)(v6 + 10);
  v21 = *((_WORD *)this + 1);
  v11 = 0;
  v22 = *((_BYTE *)this + 4);
  InsertionPointOrIncrement = v10;
  v23 = 0;
  v24 = 0;
  *(_OWORD *)Buf2 = 0LL;
  while ( 1 )
  {
    if ( !wil::details_abi::UsageIndexProperty::Read(
            (wil::details_abi::UsageIndexProperty *)&v21,
            &InsertionPointOrIncrement,
            *((unsigned __int8 **)this + 4)) )
    {
      v10 = InsertionPointOrIncrement;
      *((_QWORD *)this + 4) = InsertionPointOrIncrement;
LABEL_18:
      v23 = 1;
      v24 = Size;
      Buf2[0] = 0LL;
      Buf2[1] = Buf1;
      wil::details_abi::UsageIndexProperty::GetSize((wil::details_abi::UsageIndexProperty *)&v21);
      goto LABEL_19;
    }
    v12 = Size == v24 ? memcmp_0(Buf1, Buf2[1], Size) : Size - v24;
    if ( v12 < 0 )
      break;
    if ( !v12 )
    {
      InsertionPointOrIncrement = wil::details_abi::RawUsageIndex::FindInsertionPointOrIncrement(
                                    this,
                                    (struct wil::details_abi::UsageIndexProperty *)&v21,
                                    InsertionPointOrIncrement,
                                    a4,
                                    a5,
                                    a6);
      v10 = InsertionPointOrIncrement;
      if ( InsertionPointOrIncrement )
      {
        v11 = 1;
        goto LABEL_15;
      }
      return 1;
    }
    v10 = wil::details_abi::RawUsageIndex::SkipValues(
            this,
            (struct wil::details_abi::UsageIndexProperty *)&v21,
            InsertionPointOrIncrement);
    InsertionPointOrIncrement = v10;
  }
  InsertionPointOrIncrement = v10;
LABEL_15:
  if ( !v11 )
    goto LABEL_18;
LABEL_19:
  v26 = *((_WORD *)this + 3);
  v27 = *((_BYTE *)this + 8);
  v28 = a6;
  v29 = a5;
  v30 = 0LL;
  v31 = a4;
  v14 = wil::details_abi::UsageIndexProperty::GetSize((wil::details_abi::UsageIndexProperty *)&v26);
  v15 = *((_QWORD *)this + 5);
  v16 = *((_QWORD *)this + 4);
  v18 = v14 + v17;
  if ( ((v15 - v16) & -(__int64)(v16 < v15)) >= v14 + v17 )
  {
    memmove_s(&v10[v18], v15 - v18 - (_QWORD)v10, v10, v16 - (_QWORD)v10);
    v19 = (unsigned __int8 *)(v18 + *((_QWORD *)this + 4));
    *((_QWORD *)this + 4) = v19;
    if ( v11 )
    {
      if ( v22 )
        wil::details_abi::UsageIndexProperty::UpdateCount((wil::details_abi::UsageIndexProperty *)&v21, v23 + 1);
    }
    else
    {
      wil::details_abi::UsageIndexProperty::Write(
        (wil::details_abi::UsageIndexProperty *)&v21,
        &InsertionPointOrIncrement,
        v19);
    }
    wil::details_abi::UsageIndexProperty::Write(
      (wil::details_abi::UsageIndexProperty *)&v26,
      &InsertionPointOrIncrement,
      *((unsigned __int8 **)this + 4));
    *((_BYTE *)this + 56) = 1;
    return 1;
  }
  return 0;
}
