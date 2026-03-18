/*
 * XREFs of ??1CShapeVisualMarshaler@DirectComposition@@UEAA@XZ @ 0x1401C111C
 * Callers:
 *     ??_GCShapeVisualMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x140143210 (--_GCShapeVisualMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CMarshaledArray@I$0HAGJEDEE@$0CBG@$0CBH@$0A@@DirectComposition@@QEAA@XZ @ 0x1401BA478 (--1-$CMarshaledArray@I$0HAGJEDEE@$0CBG@$0CBH@$0A@@DirectComposition@@QEAA@XZ.c)
 *     ??1CVisualMarshaler@DirectComposition@@UEAA@XZ @ 0x1401C1150 (--1CVisualMarshaler@DirectComposition@@UEAA@XZ.c)
 */

void __fastcall DirectComposition::CShapeVisualMarshaler::~CShapeVisualMarshaler(
        char **this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  *this = (char *)&DirectComposition::CShapeVisualMarshaler::`vftable';
  DirectComposition::CMarshaledArray<unsigned int,1885946692,534,535,0>::~CMarshaledArray<unsigned int,1885946692,534,535,0>(
    this + 43,
    a2,
    a3,
    a4);
  DirectComposition::CVisualMarshaler::~CVisualMarshaler((DirectComposition::CVisualMarshaler *)this);
}
