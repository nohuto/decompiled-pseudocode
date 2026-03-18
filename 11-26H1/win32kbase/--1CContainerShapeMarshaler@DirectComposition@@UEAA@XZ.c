/*
 * XREFs of ??1CContainerShapeMarshaler@DirectComposition@@UEAA@XZ @ 0x1401C5888
 * Callers:
 *     ??_GCContainerShapeMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x140159420 (--_GCContainerShapeMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CMarshaledArray@I$0HAGJEDEE@$0CBG@$0CBH@$0A@@DirectComposition@@QEAA@XZ @ 0x1401BA478 (--1-$CMarshaledArray@I$0HAGJEDEE@$0CBG@$0CBH@$0A@@DirectComposition@@QEAA@XZ.c)
 */

void __fastcall DirectComposition::CContainerShapeMarshaler::~CContainerShapeMarshaler(
        char **this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  *this = (char *)&DirectComposition::CContainerShapeMarshaler::`vftable';
  DirectComposition::CMarshaledArray<unsigned int,1885946692,534,535,0>::~CMarshaledArray<unsigned int,1885946692,534,535,0>(
    this + 8,
    a2,
    a3,
    a4);
}
