/*
 * XREFs of ??1CProcessAttribution@@UEAA@XZ @ 0x180162FAC
 * Callers:
 *     ??_GCProcessAttribution@@UEAAPEAXI@Z @ 0x180162F60 (--_GCProcessAttribution@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?erase@?$vector@PEAVCLight@@V?$allocator@PEAVCLight@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCLight@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCLight@@@std@@@std@@@2@@Z @ 0x1800FC340 (-erase@-$vector@PEAVCLight@@V-$allocator@PEAVCLight@@@std@@@std@@QEAA-AV-$_Vector_iterator@V-$_V.c)
 *     ??$lower_bound@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAURecord@CProcessAttributionManager@@@std@@@std@@@std@@_KP6A_NPEBUProcessAttributionRecord@CProcessAttributionManager@@_J@Z@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAURecord@CProcessAttributionManager@@@std@@@std@@@0@V10@V10@AEB_KP6A_NPEBUProcessAttributionRecord@CProcessAttributionManager@@_J@Z@Z @ 0x180163FCC (--$lower_bound@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@PEAURecord@CProcessAttributio.c)
 *     ??_GRecord@CProcessAttributionManager@@QEAAPEAXI@Z @ 0x1801C4828 (--_GRecord@CProcessAttributionManager@@QEAAPEAXI@Z.c)
 */

void __fastcall CProcessAttribution::~CProcessAttribution(CProcessAttribution *this)
{
  CProcessAttributionManager *v1; // rsi
  unsigned int v3; // edx
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v1 = qword_1803DEAE0;
  *(_QWORD *)this = &CProcessAttribution::`vftable';
  std::lower_bound<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<CProcessAttributionManager::Record *>>>,unsigned __int64,bool (*)(CProcessAttributionManager::ProcessAttributionRecord const *,__int64)>(
    &v6,
    *(_QWORD *)v1,
    *((_QWORD *)v1 + 1),
    (char *)this + 16);
  v4 = v6;
  v5 = *(_QWORD *)v6;
  if ( *(_DWORD *)(*(_QWORD *)v6 + 160LL) )
  {
    *(_OWORD *)(v5 + 8) = *(_OWORD *)((char *)this + 24);
    *(_DWORD *)(v5 + 24) = *((_DWORD *)this + 10);
    *(_QWORD *)(v5 + 112) = 0LL;
  }
  else
  {
    CProcessAttributionManager::Record::`scalar deleting destructor'((CProcessAttributionManager::Record *)v5, v3);
    std::vector<CLight *>::erase((__int64)v1, &v6, v4);
  }
}
