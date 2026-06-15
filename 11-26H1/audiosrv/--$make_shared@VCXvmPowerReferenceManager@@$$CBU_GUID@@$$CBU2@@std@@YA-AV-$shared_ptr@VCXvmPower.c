/*
 * XREFs of ??$make_shared@VCXvmPowerReferenceManager@@$$CBU_GUID@@$$CBU2@@std@@YA?AV?$shared_ptr@VCXvmPowerReferenceManager@@@0@$$QEBU_GUID@@0@Z @ 0x18010EB30
 * Callers:
 *     ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x180011774 (-AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA-AV-$shared_ptr@VCPowerReference@@@s.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001E210 (--2@YAPEAX_K@Z.c)
 *     ??0CXvmPowerReferenceManager@@QEAA@U_GUID@@0@Z @ 0x18010ECF8 (--0CXvmPowerReferenceManager@@QEAA@U_GUID@@0@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::make_shared<CXvmPowerReferenceManager,_GUID const,_GUID const>(
        _QWORD *a1,
        struct _GUID *a2,
        struct _GUID *a3)
{
  _DWORD *v6; // rax
  _DWORD *v7; // rbx
  struct _GUID v9; // [rsp+30h] [rbp-28h] BYREF
  struct _GUID v10; // [rsp+40h] [rbp-18h] BYREF

  v6 = operator new(0xA0uLL);
  v7 = v6;
  if ( v6 )
  {
    *(_OWORD *)v6 = 0LL;
    v6[2] = 1;
    v6[3] = 1;
    *(_QWORD *)v6 = &std::_Ref_count_obj2<CXvmPowerReferenceManager>::`vftable';
    v9 = *a3;
    v10 = *a2;
    CXvmPowerReferenceManager::CXvmPowerReferenceManager(v6 + 4, &v10, &v9);
  }
  else
  {
    v7 = 0LL;
  }
  *a1 = v7 + 4;
  a1[1] = v7;
  return a1;
}
