/*
 * XREFs of ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x180034310
 * Callers:
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x180034200 (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x180030966 (_invalid_parameter_noinfo.c)
 *     ?Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z @ 0x1800325A4 (-Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z.c)
 *     ?FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAEPEAX_KI@Z @ 0x180032958 (-FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@.c)
 *     ?GetSize@UsageIndexProperty@details_abi@wil@@QEBA_KXZ @ 0x180032FC4 (-GetSize@UsageIndexProperty@details_abi@wil@@QEBA_KXZ.c)
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x180033C6C (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     ?SkipValues@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAE@Z @ 0x180035008 (-SkipValues@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAE@Z.c)
 *     ?UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z @ 0x18003595C (-UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z.c)
 *     ?Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z @ 0x180035D38 (-Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z.c)
 *     memmove_0 @ 0x18004B850 (memmove_0.c)
 */

char __fastcall wil::details_abi::RawUsageIndex::RecordUsageInternal(
        wil::details_abi::RawUsageIndex *this,
        void *a2,
        size_t a3,
        void *a4,
        size_t a5,
        unsigned int a6)
{
  __int64 v6; // rbx
  unsigned __int8 *v11; // rbx
  char v12; // si
  int v13; // eax
  int v15; // r14d
  char v16; // cl
  __int64 Size; // rax
  unsigned __int64 v18; // rdx
  __int64 v19; // r8
  unsigned __int64 v20; // r15
  unsigned __int64 v21; // r8
  unsigned __int8 *v22; // rcx
  size_t v23; // rdx
  size_t v24; // r8
  unsigned __int8 *v25; // r8
  unsigned __int8 *InsertionPointOrIncrement; // [rsp+30h] [rbp-50h] BYREF
  const void *v27; // [rsp+38h] [rbp-48h] BYREF
  __int16 v28; // [rsp+40h] [rbp-40h]
  __int128 v29; // [rsp+48h] [rbp-38h]
  __int16 v30; // [rsp+58h] [rbp-28h] BYREF
  char v31; // [rsp+5Ah] [rbp-26h]
  unsigned int v32; // [rsp+5Ch] [rbp-24h]
  __int16 v33; // [rsp+60h] [rbp-20h]
  __int64 v34; // [rsp+68h] [rbp-18h]
  void *v35; // [rsp+70h] [rbp-10h]

  v6 = *((_QWORD *)this + 3);
  if ( v6 )
  {
    v11 = (unsigned __int8 *)(v6 + 10);
    LOWORD(v27) = *((_WORD *)this + 1);
    v12 = 0;
    BYTE2(v27) = *((_BYTE *)this + 4);
    InsertionPointOrIncrement = v11;
    HIDWORD(v27) = 0;
    v28 = 0;
    v29 = 0LL;
    while ( 1 )
    {
      if ( !wil::details_abi::UsageIndexProperty::Read(
              (wil::details_abi::UsageIndexProperty *)&v27,
              &InsertionPointOrIncrement,
              *((unsigned __int8 **)this + 4)) )
      {
        v11 = InsertionPointOrIncrement;
        *((_QWORD *)this + 4) = InsertionPointOrIncrement;
        goto LABEL_14;
      }
      v13 = wil::details_abi::UsageIndexProperty::Compare(&v27, a2, a3);
      if ( v13 < 0 )
      {
        InsertionPointOrIncrement = v11;
        goto LABEL_11;
      }
      if ( !v13 )
        break;
      v11 = wil::details_abi::RawUsageIndex::SkipValues(
              this,
              (struct wil::details_abi::UsageIndexProperty *)&v27,
              InsertionPointOrIncrement);
      InsertionPointOrIncrement = v11;
    }
    InsertionPointOrIncrement = wil::details_abi::RawUsageIndex::FindInsertionPointOrIncrement(
                                  this,
                                  (struct wil::details_abi::UsageIndexProperty *)&v27,
                                  InsertionPointOrIncrement,
                                  a4,
                                  a5,
                                  a6);
    v11 = InsertionPointOrIncrement;
    if ( !InsertionPointOrIncrement )
      return 1;
    v12 = 1;
LABEL_11:
    if ( v12 )
    {
      v15 = HIDWORD(v27);
      goto LABEL_15;
    }
LABEL_14:
    v15 = 1;
    v28 = a3;
    HIDWORD(v27) = 1;
    *(_QWORD *)&v29 = 0LL;
    *((_QWORD *)&v29 + 1) = a2;
    wil::details_abi::UsageIndexProperty::GetSize((wil::details_abi::UsageIndexProperty *)&v27);
LABEL_15:
    v30 = *((_WORD *)this + 3);
    v16 = *((_BYTE *)this + 8);
    v33 = a5;
    v31 = v16;
    v32 = a6;
    v34 = 0LL;
    v35 = a4;
    Size = wil::details_abi::UsageIndexProperty::GetSize((wil::details_abi::UsageIndexProperty *)&v30);
    v18 = *((_QWORD *)this + 5);
    v20 = Size + v19;
    v21 = *((_QWORD *)this + 4);
    if ( ((v18 - v21) & -(__int64)(v21 < v18)) >= v20 )
    {
      v22 = &v11[v20];
      v23 = v18 - v20 - (_QWORD)v11;
      v24 = v21 - (_QWORD)v11;
      if ( v24 )
      {
        if ( v22 && v11 )
        {
          if ( v23 >= v24 )
          {
            memmove_0(v22, v11, v24);
            goto LABEL_24;
          }
          *(_DWORD *)_o__errno(v22, v23) = 34;
        }
        else
        {
          *(_DWORD *)_o__errno(v22, v23) = 22;
        }
        invalid_parameter_noinfo();
      }
LABEL_24:
      v25 = (unsigned __int8 *)(v20 + *((_QWORD *)this + 4));
      *((_QWORD *)this + 4) = v25;
      if ( v12 )
      {
        if ( BYTE2(v27) )
          wil::details_abi::UsageIndexProperty::UpdateCount((wil::details_abi::UsageIndexProperty *)&v27, v15 + 1);
      }
      else
      {
        wil::details_abi::UsageIndexProperty::Write(
          (wil::details_abi::UsageIndexProperty *)&v27,
          &InsertionPointOrIncrement,
          v25);
      }
      wil::details_abi::UsageIndexProperty::Write(
        (wil::details_abi::UsageIndexProperty *)&v30,
        &InsertionPointOrIncrement,
        *((unsigned __int8 **)this + 4));
      *((_BYTE *)this + 56) = 1;
      return 1;
    }
  }
  return 0;
}
