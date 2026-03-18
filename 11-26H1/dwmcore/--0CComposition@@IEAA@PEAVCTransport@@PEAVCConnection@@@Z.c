/*
 * XREFs of ??0CComposition@@IEAA@PEAVCTransport@@PEAVCConnection@@@Z @ 0x18020D338
 * Callers:
 *     ??0CGlobalComposition@@AEAA@PEAVCTransport@@PEAVCConnection@@@Z @ 0x18020E2D8 (--0CGlobalComposition@@AEAA@PEAVCTransport@@PEAVCConnection@@@Z.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUIUnknown@@@std@@@std@@U_Iterator_base0@2@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUIUnknown@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1800E8884 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List_s.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??0CMmcssTask@@QEAA@XZ @ 0x1801DB3E4 (--0CMmcssTask@@QEAA@XZ.c)
 */

CComposition *__fastcall CComposition::CComposition(CComposition *this, struct CTransport *a2, struct CConnection *a3)
{
  LARGE_INTEGER v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rax
  CComposition *result; // rax

  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CComposition::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = (char *)this + 48;
  *((_QWORD *)this + 4) = (char *)this + 48;
  *((_QWORD *)this + 5) = (char *)this + 64;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_DWORD *)this + 34) = 0;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_DWORD *)this + 56) = 0;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_DWORD *)this + 62) = -1;
  *((_DWORD *)this + 63) = 0;
  *((_OWORD *)this + 16) = 0LL;
  *((_OWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  CScheduler::s_vBlankWaitTimeoutMonitorOffMs = CCommonRegistryData::vBlankWaitTimeoutMonitorOffMs;
  v6 = g_qpcFrequency;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 40) = (char *)this + 344;
  *((_QWORD *)this + 41) = (char *)this + 344;
  *((_QWORD *)this + 42) = (char *)this + 360;
  CScheduler::s_maxVBlankTimeQPC.QuadPart = 80 * v6.QuadPart / 1000;
  InitializeCriticalSection((LPCRITICAL_SECTION)this + 9);
  *((_QWORD *)this + 50) = (char *)this + 424;
  *((_QWORD *)this + 51) = (char *)this + 424;
  *((_QWORD *)this + 52) = (char *)this + 552;
  *((_QWORD *)this + 69) = (char *)this + 576;
  *((_QWORD *)this + 70) = (char *)this + 576;
  *((_QWORD *)this + 71) = (char *)this + 608;
  *((_QWORD *)this + 76) = 0LL;
  *((_QWORD *)this + 82) = 0LL;
  *((_QWORD *)this + 83) = 0LL;
  *((_QWORD *)this + 84) = 0LL;
  *((_QWORD *)this + 86) = 0LL;
  *((_QWORD *)this + 87) = 0LL;
  *((_QWORD *)this + 88) = 0LL;
  *((_QWORD *)this + 89) = 0LL;
  *((_QWORD *)this + 90) = 0LL;
  CMmcssTask::CMmcssTask((CComposition *)((char *)this + 728));
  *((_QWORD *)this + 104) = 0LL;
  *((_QWORD *)this + 105) = 0LL;
  *((_QWORD *)this + 106) = 0LL;
  *((_DWORD *)this + 214) = 0;
  *((_QWORD *)this + 110) = 0LL;
  *((_DWORD *)this + 216) = 1;
  *((_QWORD *)this + 111) = 0LL;
  *((_QWORD *)this + 112) = 0LL;
  *((_QWORD *)this + 113) = 0LL;
  *((_QWORD *)this + 114) = 0LL;
  *((_DWORD *)this + 230) = 0;
  *((_QWORD *)this + 116) = 0LL;
  *((_QWORD *)this + 117) = 0LL;
  *((_QWORD *)this + 118) = 0LL;
  *((_DWORD *)this + 238) = 0;
  *((_QWORD *)this + 120) = 0LL;
  *((_QWORD *)this + 121) = 0LL;
  *((_QWORD *)this + 122) = 0LL;
  *((_DWORD *)this + 246) = 0;
  *((_DWORD *)this + 1287) = -1;
  *((_DWORD *)this + 1286) = -1;
  *((_DWORD *)this + 251) = -1;
  *((_DWORD *)this + 250) = -1;
  *((_QWORD *)this + 642) = g_qpcFrequency.QuadPart / 60;
  *((_BYTE *)this + 5656) = 0;
  *((_QWORD *)this + 708) = a2;
  *((_QWORD *)this + 709) = a3;
  *((_QWORD *)this + 710) = 0LL;
  *((_QWORD *)this + 711) = 0LL;
  *((_QWORD *)this + 712) = 0LL;
  *((_DWORD *)this + 1426) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)((char *)this + 5712));
  *((_QWORD *)this + 719) = 0LL;
  *((_QWORD *)this + 720) = 0LL;
  *((_QWORD *)this + 721) = 0LL;
  *((_QWORD *)this + 722) = 0LL;
  *((_QWORD *)this + 723) = (char *)this + 5808;
  *((_QWORD *)this + 724) = (char *)this + 5808;
  *((_QWORD *)this + 725) = (char *)this + 5872;
  *((_QWORD *)this + 734) = 0LL;
  *((_QWORD *)this + 735) = 0LL;
  *((_QWORD *)this + 736) = 0LL;
  *((_DWORD *)this + 1474) = 0;
  *((_QWORD *)this + 738) = (char *)this + 5936;
  *((_QWORD *)this + 739) = (char *)this + 5936;
  *((_DWORD *)this + 1480) = 1;
  *(_QWORD *)((char *)this + 5924) = 1LL;
  *((_QWORD *)this + 743) = 0LL;
  *((_QWORD *)this + 744) = 0LL;
  *((_QWORD *)this + 745) = 0LL;
  *((_QWORD *)this + 746) = (char *)this + 6000;
  *((_QWORD *)this + 747) = (char *)this + 6000;
  *((_DWORD *)this + 1496) = 16;
  *(_QWORD *)((char *)this + 5988) = 16LL;
  *((_QWORD *)this + 766) = 0LL;
  *((_QWORD *)this + 767) = 0LL;
  *((_QWORD *)this + 768) = 0LL;
  *((_QWORD *)this + 769) = 0LL;
  *((_QWORD *)this + 770) = 0LL;
  *((_QWORD *)this + 771) = 0LL;
  *((_QWORD *)this + 772) = 0LL;
  *((_QWORD *)this + 773) = 0LL;
  *((_DWORD *)this + 1548) = 0;
  *((_QWORD *)this + 775) = 0LL;
  *((_QWORD *)this + 776) = 0LL;
  v8 = std::_Allocate<16,std::_Default_allocate_traits>(0x38uLL, v7);
  *v8 = v8;
  v8[1] = v8;
  *((_QWORD *)this + 775) = v8;
  *((_QWORD *)this + 777) = 0LL;
  *((_QWORD *)this + 778) = 0LL;
  *((_QWORD *)this + 779) = 0LL;
  *((_QWORD *)this + 780) = 7LL;
  *((_QWORD *)this + 781) = 8LL;
  *((_DWORD *)this + 1548) = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<IUnknown *>>,std::_Iterator_base0>>>::_Assign_grow(
    (__int64)this + 6216,
    0x10uLL,
    *((_QWORD *)this + 775));
  *((_QWORD *)this + 784) = 0LL;
  *((_QWORD *)this + 783) = 0LL;
  *((_QWORD *)this + 785) = 0LL;
  *((_DWORD *)this + 1593) = 0;
  *((_QWORD *)this + 799) = 0LL;
  *((_QWORD *)this + 800) = 0LL;
  *((_BYTE *)this + 6408) = 0;
  *((_QWORD *)this + 802) = 0LL;
  *((_QWORD *)this + 803) = 0LL;
  *((_QWORD *)this + 804) = 0LL;
  *((_QWORD *)this + 805) = 0LL;
  *((_DWORD *)this + 1612) = 0;
  *(_QWORD *)((char *)this + 6452) = 1LL;
  *((_DWORD *)this + 1615) = 0;
  *((_WORD *)this + 3232) = 0;
  *((_BYTE *)this + 6466) = 0;
  *((_DWORD *)this + 1617) = 37120;
  *((_QWORD *)this + 809) = 37120LL;
  *((_QWORD *)this + 810) = 0LL;
  *((_QWORD *)this + 811) = 0LL;
  *((_QWORD *)this + 812) = 0LL;
  *((_QWORD *)this + 813) = 0LL;
  *((_QWORD *)this + 814) = 0LL;
  CComposition::s_compositionThreadId = GetCurrentThreadId();
  CMILRefCountImpl::AddReference((CComposition *)((char *)this + 8));
  result = this;
  g_pFrameId = (unsigned __int64 *)((char *)this + 880);
  return result;
}
