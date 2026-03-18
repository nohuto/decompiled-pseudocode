/*
 * XREFs of ??1CPropertySet@@UEAA@XZ @ 0x1800AD1AC
 * Callers:
 *     ??_GCPropertySet@@UEAAPEAXI@Z @ 0x1800AD110 (--_GCPropertySet@@UEAAPEAXI@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800982C0 (_tlgKeywordOn.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800AD250 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??1CAnimationDependencies@@QEAA@XZ @ 0x1800AD360 (--1CAnimationDependencies@@QEAA@XZ.c)
 *     ??1?$vector_facade@PEAVCResource@@V?$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@@detail@@QEAA@XZ @ 0x1800AD3A4 (--1-$vector_facade@PEAVCResource@@V-$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@@detail@@QE.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1801D594C (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 */

void __fastcall CPropertySet::~CPropertySet(CPropertySet *this)
{
  int v1; // r8d
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d
  int v6; // [rsp+40h] [rbp+8h] BYREF

  v1 = *((_DWORD *)this + 38);
  *(_QWORD *)this = &CPropertySet::`vftable';
  if ( v1 && (unsigned int)dword_1803DC880 > 5 && tlgKeywordOn((__int64)&dword_1803DC880, 1LL) )
  {
    v6 = v4;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
      v3,
      (unsigned int)&unk_1803B5D12,
      v4,
      v5,
      (__int64)&v6);
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 120);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 88);
  CAnimationDependencies::~CAnimationDependencies((CPropertySet *)((char *)this + 48));
  detail::vector_facade<CResource *,detail::pointer_buffer_impl<CResource *,0>>::~vector_facade<CResource *,detail::pointer_buffer_impl<CResource *,0>>((char *)this + 32);
  CMILCOMBaseWeakRefSource<CResourceDeleter>::~CMILCOMBaseWeakRefSource<CResourceDeleter>(this);
}
