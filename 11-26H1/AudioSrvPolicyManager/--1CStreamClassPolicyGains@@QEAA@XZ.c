/*
 * XREFs of ??1CStreamClassPolicyGains@@QEAA@XZ @ 0x180042404
 * Callers:
 *     ??R?$default_delete@VCStreamClassPolicyGains@@@std@@QEBAXPEAVCStreamClassPolicyGains@@@Z @ 0x1800424DC (--R-$default_delete@VCStreamClassPolicyGains@@@std@@QEBAXPEAVCStreamClassPolicyGains@@@Z.c)
 *     ??1CStreamClassPolicyGainsWrapper@@QEAA@XZ @ 0x18004339C (--1CStreamClassPolicyGainsWrapper@@QEAA@XZ.c)
 * Callees:
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18002F844 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

void __fastcall CStreamClassPolicyGains::~CStreamClassPolicyGains(CStreamClassPolicyGains *this)
{
  `eh vector destructor iterator'(
    (char *)this + 232,
    8LL,
    24LL,
    (void (__fastcall *)(char *))std::forward_list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>::~forward_list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>);
  `eh vector destructor iterator'(
    (char *)this + 40,
    8LL,
    24LL,
    (void (__fastcall *)(char *))std::forward_list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>::~forward_list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>);
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
}
