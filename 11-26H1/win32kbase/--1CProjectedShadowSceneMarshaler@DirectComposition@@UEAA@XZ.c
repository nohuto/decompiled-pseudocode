/*
 * XREFs of ??1CProjectedShadowSceneMarshaler@DirectComposition@@UEAA@XZ @ 0x1401C3A2C
 * Callers:
 *     ??_GCProjectedShadowSceneMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x140192A00 (--_GCProjectedShadowSceneMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CMarshaledArray@I$0HAGJEDEE@$0CBG@$0CBH@$0A@@DirectComposition@@QEAA@XZ @ 0x1401BA478 (--1-$CMarshaledArray@I$0HAGJEDEE@$0CBG@$0CBH@$0A@@DirectComposition@@QEAA@XZ.c)
 */

void __fastcall DirectComposition::CProjectedShadowSceneMarshaler::~CProjectedShadowSceneMarshaler(
        char **this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9

  *this = (char *)&DirectComposition::CProjectedShadowSceneMarshaler::`vftable';
  DirectComposition::CMarshaledArray<unsigned int,1885946692,534,535,0>::~CMarshaledArray<unsigned int,1885946692,534,535,0>(
    this + 12,
    a2,
    a3,
    a4);
  DirectComposition::CMarshaledArray<unsigned int,1885946692,534,535,0>::~CMarshaledArray<unsigned int,1885946692,534,535,0>(
    this + 9,
    v5,
    v6,
    v7);
}
