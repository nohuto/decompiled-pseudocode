/*
 * XREFs of ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x180037910
 * Callers:
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x180037800 (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     ?Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z @ 0x18002D848 (-Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z.c)
 *     ?FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAEPEAX_KI@Z @ 0x18002F384 (-FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@.c)
 *     ?GetSize@UsageIndexProperty@details_abi@wil@@QEBA_KXZ @ 0x180032FA8 (-GetSize@UsageIndexProperty@details_abi@wil@@QEBA_KXZ.c)
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x180036EC8 (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     ?SkipValues@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAE@Z @ 0x18003B910 (-SkipValues@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAE@Z.c)
 *     ?UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z @ 0x18003CD74 (-UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z.c)
 *     ?Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z @ 0x18003D394 (-Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z.c)
 */

char __fastcall wil::details_abi::RawUsageIndex::RecordUsageInternal(
        wil::details_abi::RawUsageIndex *this,
        void *a2,
        size_t a3,
        void *a4,
        size_t a5,
        unsigned int a6)
{
  __int64 v6; // rdi
  unsigned __int8 *v10; // rdi
  char v11; // si
  int v12; // eax
  __int64 Size; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // r14
  unsigned __int8 *v19; // r8
  unsigned __int8 *InsertionPointOrIncrement; // [rsp+30h] [rbp-50h] BYREF
  const void *v21; // [rsp+38h] [rbp-48h] BYREF
  __int16 v22; // [rsp+40h] [rbp-40h]
  __int128 v23; // [rsp+48h] [rbp-38h]
  __int16 v24; // [rsp+58h] [rbp-28h] BYREF
  char v25; // [rsp+5Ah] [rbp-26h]
  unsigned int v26; // [rsp+5Ch] [rbp-24h]
  __int16 v27; // [rsp+60h] [rbp-20h]
  __int64 v28; // [rsp+68h] [rbp-18h]
  void *v29; // [rsp+70h] [rbp-10h]

  v6 = *((_QWORD *)this + 3);
  if ( v6 )
  {
    v10 = (unsigned __int8 *)(v6 + 10);
    LOWORD(v21) = *((_WORD *)this + 1);
    v11 = 0;
    BYTE2(v21) = *((_BYTE *)this + 4);
    InsertionPointOrIncrement = v10;
    HIDWORD(v21) = 0;
    v22 = 0;
    v23 = 0LL;
    while ( 1 )
    {
      if ( !wil::details_abi::UsageIndexProperty::Read(
              (wil::details_abi::UsageIndexProperty *)&v21,
              &InsertionPointOrIncrement,
              *((unsigned __int8 **)this + 4)) )
      {
        v10 = InsertionPointOrIncrement;
        *((_QWORD *)this + 4) = InsertionPointOrIncrement;
        goto LABEL_14;
      }
      v12 = wil::details_abi::UsageIndexProperty::Compare(&v21, a2, a3);
      if ( v12 < 0 )
      {
        InsertionPointOrIncrement = v10;
        goto LABEL_11;
      }
      if ( !v12 )
        break;
      v10 = wil::details_abi::RawUsageIndex::SkipValues(
              this,
              (struct wil::details_abi::UsageIndexProperty *)&v21,
              InsertionPointOrIncrement);
      InsertionPointOrIncrement = v10;
    }
    InsertionPointOrIncrement = wil::details_abi::RawUsageIndex::FindInsertionPointOrIncrement(
                                  this,
                                  (struct wil::details_abi::UsageIndexProperty *)&v21,
                                  InsertionPointOrIncrement,
                                  a4,
                                  a5,
                                  a6);
    v10 = InsertionPointOrIncrement;
    if ( !InsertionPointOrIncrement )
      return 1;
    v11 = 1;
LABEL_11:
    if ( v11 )
      goto LABEL_15;
LABEL_14:
    HIDWORD(v21) = 1;
    v22 = a3;
    *(_QWORD *)&v23 = 0LL;
    *((_QWORD *)&v23 + 1) = a2;
    wil::details_abi::UsageIndexProperty::GetSize((wil::details_abi::UsageIndexProperty *)&v21);
LABEL_15:
    v24 = *((_WORD *)this + 3);
    v25 = *((_BYTE *)this + 8);
    v26 = a6;
    v27 = a5;
    v28 = 0LL;
    v29 = a4;
    Size = wil::details_abi::UsageIndexProperty::GetSize((wil::details_abi::UsageIndexProperty *)&v24);
    v15 = *((_QWORD *)this + 5);
    v16 = *((_QWORD *)this + 4);
    v18 = Size + v17;
    if ( ((v15 - v16) & -(__int64)(v16 < v15)) >= Size + v17 )
    {
      memmove_s(&v10[v18], v15 - v18 - (_QWORD)v10, v10, v16 - (_QWORD)v10);
      v19 = (unsigned __int8 *)(v18 + *((_QWORD *)this + 4));
      *((_QWORD *)this + 4) = v19;
      if ( v11 )
      {
        if ( BYTE2(v21) )
          wil::details_abi::UsageIndexProperty::UpdateCount(
            (wil::details_abi::UsageIndexProperty *)&v21,
            HIDWORD(v21) + 1);
      }
      else
      {
        wil::details_abi::UsageIndexProperty::Write(
          (wil::details_abi::UsageIndexProperty *)&v21,
          &InsertionPointOrIncrement,
          v19);
      }
      wil::details_abi::UsageIndexProperty::Write(
        (wil::details_abi::UsageIndexProperty *)&v24,
        &InsertionPointOrIncrement,
        *((unsigned __int8 **)this + 4));
      *((_BYTE *)this + 56) = 1;
      return 1;
    }
  }
  return 0;
}
