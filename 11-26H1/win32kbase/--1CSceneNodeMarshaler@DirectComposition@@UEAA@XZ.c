/*
 * XREFs of ??1CSceneNodeMarshaler@DirectComposition@@UEAA@XZ @ 0x14023B694
 * Callers:
 *     ??_GCSceneNodeMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x14023BA90 (--_GCSceneNodeMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CMarshaledArray@I$0HAGJEDEE@$0CBG@$0CBH@$0A@@DirectComposition@@QEAA@XZ @ 0x1401BA478 (--1-$CMarshaledArray@I$0HAGJEDEE@$0CBG@$0CBH@$0A@@DirectComposition@@QEAA@XZ.c)
 */

void __fastcall DirectComposition::CSceneNodeMarshaler::~CSceneNodeMarshaler(
        char **this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9

  DirectComposition::CMarshaledArray<unsigned int,1885946692,534,535,0>::~CMarshaledArray<unsigned int,1885946692,534,535,0>(
    this + 10,
    a2,
    a3,
    a4);
  DirectComposition::CMarshaledArray<unsigned int,1885946692,534,535,0>::~CMarshaledArray<unsigned int,1885946692,534,535,0>(
    this + 7,
    v5,
    v6,
    v7);
}
