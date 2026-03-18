/*
 * XREFs of ??1CConditionalExpressionMarshaler@DirectComposition@@UEAA@XZ @ 0x1401C201C
 * Callers:
 *     ??_ECConditionalExpressionMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x14016EA40 (--_ECConditionalExpressionMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CBaseExpressionMarshaler@DirectComposition@@UEAA@XZ @ 0x140137118 (--1CBaseExpressionMarshaler@DirectComposition@@UEAA@XZ.c)
 *     ??1?$CMarshaledArray@I$0HAGJEDEE@$0CBG@$0CBH@$0A@@DirectComposition@@QEAA@XZ @ 0x1401BA478 (--1-$CMarshaledArray@I$0HAGJEDEE@$0CBG@$0CBH@$0A@@DirectComposition@@QEAA@XZ.c)
 */

void __fastcall DirectComposition::CConditionalExpressionMarshaler::~CConditionalExpressionMarshaler(
        char **this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9

  *this = (char *)&DirectComposition::CConditionalExpressionMarshaler::`vftable';
  DirectComposition::CMarshaledArray<unsigned int,1885946692,534,535,0>::~CMarshaledArray<unsigned int,1885946692,534,535,0>(
    this + 20,
    a2,
    a3,
    a4);
  DirectComposition::CMarshaledArray<unsigned int,1885946692,534,535,0>::~CMarshaledArray<unsigned int,1885946692,534,535,0>(
    this + 17,
    v5,
    v6,
    v7);
  DirectComposition::CBaseExpressionMarshaler::~CBaseExpressionMarshaler(
    (DirectComposition::CBaseExpressionMarshaler *)this,
    v8,
    v9,
    v10);
}
