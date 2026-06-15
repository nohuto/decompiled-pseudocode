/*
 * XREFs of ??1?$unique_ptr@VCPowerReferenceManager@@U?$default_delete@VCPowerReferenceManager@@@std@@@std@@QEAA@XZ @ 0x1800B0E24
 * Callers:
 *     ?Initialize@CAudioSrv@@UEAAJJ@Z @ 0x1800D9110 (-Initialize@CAudioSrv@@UEAAJJ@Z.c)
 * Callees:
 *     ??R?$default_delete@VCPowerReferenceManager@@@std@@QEBAXPEAVCPowerReferenceManager@@@Z @ 0x1800D777C (--R-$default_delete@VCPowerReferenceManager@@@std@@QEBAXPEAVCPowerReferenceManager@@@Z.c)
 */

__int64 __fastcall std::unique_ptr<CPowerReferenceManager>::~unique_ptr<CPowerReferenceManager>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<CPowerReferenceManager>::operator()();
  return result;
}
