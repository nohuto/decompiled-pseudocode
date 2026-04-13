/*
 * XREFs of ??1ExtendedExecutionRequested@CDMUtilsUnlockTelemetry@@QEAA@XZ @ 0x18008EB94
 * Callers:
 *     ?RuntimeClassInitialize@UniqueExtendedExecutionSession@@QEAAJXZ @ 0x180090858 (-RuntimeClassInitialize@UniqueExtendedExecutionSession@@QEAAJXZ.c)
 *     _UniqueExtendedExecutionSession::RuntimeClassInitialize_::_1_::dtor$0 @ 0x1800BD506 (_UniqueExtendedExecutionSession--RuntimeClassInitialize_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18008F0CC (-Destroy@-$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 */

void __fastcall CDMUtilsUnlockTelemetry::ExtendedExecutionRequested::~ExtendedExecutionRequested(
        CDMUtilsUnlockTelemetry::ExtendedExecutionRequested *this)
{
  *(_QWORD *)this = &CDMUtilsUnlockTelemetry::ExtendedExecutionRequested::`vftable';
  wil::ActivityBase<CDMUtilsUnlockLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<CDMUtilsUnlockLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CDMUtilsUnlockLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
