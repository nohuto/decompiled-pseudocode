/*
 * XREFs of ??$make_shared@V?$com_ptr_t@UICapabilityUsageSession@Management@CapabilityAccess@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@$$V@std@@YA?AV?$shared_ptr@V?$com_ptr_t@UICapabilityUsageSession@Management@CapabilityAccess@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@@0@XZ @ 0x18007DD40
 * Callers:
 *     ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x180011774 (-AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA-AV-$shared_ptr@VCPowerReference@@@s.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001E210 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_shared<wil::com_ptr_t<Windows::Internal::CapabilityAccess::Management::ICapabilityUsageSession,wil::err_returncode_policy>,>(
        _QWORD *a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rdx

  v2 = operator new(0x18uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 0LL;
    *((_DWORD *)v2 + 2) = 1;
    *((_DWORD *)v2 + 3) = 1;
    *v2 = &std::_Ref_count_obj2<wil::com_ptr_t<Windows::Internal::CapabilityAccess::Management::ICapabilityUsageSession,wil::err_returncode_policy>>::`vftable';
  }
  else
  {
    v3 = 0LL;
  }
  a1[1] = v3;
  *a1 = v3 + 2;
  return a1;
}
