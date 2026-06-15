/*
 * XREFs of ??1CProcessingModeParameters@@QEAA@XZ @ 0x18002B6BC
 * Callers:
 *     ??1StreamGroupParams@@QEAA@XZ @ 0x18002B66C (--1StreamGroupParams@@QEAA@XZ.c)
 *     ??1CBaseStreamGroupProxy@@MEAA@XZ @ 0x180046420 (--1CBaseStreamGroupProxy@@MEAA@XZ.c)
 *     ??1CAudioStream@@UEAA@XZ @ 0x18006DCDC (--1CAudioStream@@UEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180044828 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CProcessingModeParameters::~CProcessingModeParameters(CProcessingModeParameters *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 3);
  if ( v2 )
    CoTaskMemFree(v2);
  if ( *(_QWORD *)this )
  {
    std::_Deallocate<16>(*(_QWORD *)this, 4 * ((__int64)(*((_QWORD *)this + 2) - *(_QWORD *)this) >> 2));
    *(_QWORD *)this = 0LL;
    *((_QWORD *)this + 1) = 0LL;
    *((_QWORD *)this + 2) = 0LL;
  }
}
