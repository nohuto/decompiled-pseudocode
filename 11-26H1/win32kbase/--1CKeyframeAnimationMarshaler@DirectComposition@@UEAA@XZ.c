/*
 * XREFs of ??1CKeyframeAnimationMarshaler@DirectComposition@@UEAA@XZ @ 0x1401C39C4
 * Callers:
 *     ??_GCKeyframeAnimationMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x14013F400 (--_GCKeyframeAnimationMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CBaseExpressionMarshaler@DirectComposition@@UEAA@XZ @ 0x140137118 (--1CBaseExpressionMarshaler@DirectComposition@@UEAA@XZ.c)
 *     ??1?$CMarshaledArray@I$0HAGJEDEE@$0CBG@$0CBH@$0A@@DirectComposition@@QEAA@XZ @ 0x1401BA478 (--1-$CMarshaledArray@I$0HAGJEDEE@$0CBG@$0CBH@$0A@@DirectComposition@@QEAA@XZ.c)
 */

void __fastcall DirectComposition::CKeyframeAnimationMarshaler::~CKeyframeAnimationMarshaler(
        char **this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9

  *this = (char *)&DirectComposition::CKeyframeAnimationMarshaler::`vftable';
  DirectComposition::CMarshaledArray<unsigned int,1885946692,534,535,0>::~CMarshaledArray<unsigned int,1885946692,534,535,0>(
    this + 19,
    a2,
    a3,
    a4);
  DirectComposition::CBaseExpressionMarshaler::~CBaseExpressionMarshaler(
    (DirectComposition::CBaseExpressionMarshaler *)this,
    v5,
    v6,
    v7);
}
