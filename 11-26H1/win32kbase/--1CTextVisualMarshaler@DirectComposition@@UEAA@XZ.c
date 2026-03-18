/*
 * XREFs of ??1CTextVisualMarshaler@DirectComposition@@UEAA@XZ @ 0x14023B70C
 * Callers:
 *     ??_ECTextVisualMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x14023BB10 (--_ECTextVisualMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CMarshaledArray@I$0HAGJEDEE@$0CBG@$0CBH@$0A@@DirectComposition@@QEAA@XZ @ 0x1401BA478 (--1-$CMarshaledArray@I$0HAGJEDEE@$0CBG@$0CBH@$0A@@DirectComposition@@QEAA@XZ.c)
 *     ??1CVisualMarshaler@DirectComposition@@UEAA@XZ @ 0x1401C1150 (--1CVisualMarshaler@DirectComposition@@UEAA@XZ.c)
 */

void __fastcall DirectComposition::CTextVisualMarshaler::~CTextVisualMarshaler(
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

  DirectComposition::CMarshaledArray<unsigned int,1885946692,534,535,0>::~CMarshaledArray<unsigned int,1885946692,534,535,0>(
    this + 48,
    a2,
    a3,
    a4);
  DirectComposition::CMarshaledArray<unsigned int,1885946692,534,535,0>::~CMarshaledArray<unsigned int,1885946692,534,535,0>(
    this + 45,
    v5,
    v6,
    v7);
  DirectComposition::CMarshaledArray<unsigned int,1885946692,534,535,0>::~CMarshaledArray<unsigned int,1885946692,534,535,0>(
    this + 42,
    v8,
    v9,
    v10);
  DirectComposition::CVisualMarshaler::~CVisualMarshaler((DirectComposition::CVisualMarshaler *)this);
}
