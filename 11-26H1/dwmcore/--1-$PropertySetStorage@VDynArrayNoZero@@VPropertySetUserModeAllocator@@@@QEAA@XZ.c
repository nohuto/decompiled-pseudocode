/*
 * XREFs of ??1?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA@XZ @ 0x1800AD0AC
 * Callers:
 *     ??1DataSourcePropertySet@@QEAA@XZ @ 0x180242BE0 (--1DataSourcePropertySet@@QEAA@XZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800AD250 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

__int64 __fastcall PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::~PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>(
        __int64 a1)
{
  DynArrayImpl<1>::~DynArrayImpl<1>(a1 + 32);
  return DynArrayImpl<1>::~DynArrayImpl<1>(a1);
}
