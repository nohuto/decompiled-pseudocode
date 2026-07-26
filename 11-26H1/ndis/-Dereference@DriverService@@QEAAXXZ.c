/*
 * XREFs of ?Dereference@DriverService@@QEAAXXZ @ 0x140148958
 * Callers:
 *     ?ReferenceModule@KLoader@@QEAAJPEBU_KLOADER_REFERENCE_MODULE_CONFIG@@PEBU_IRP@@PEAPEAUKLOADER_MODULE_REFERENCE__@@@Z @ 0x140138430 (-ReferenceModule@KLoader@@QEAAJPEBU_KLOADER_REFERENCE_MODULE_CONFIG@@PEBU_IRP@@PEAPEAUKLOADER_MO.c)
 *     ?DereferenceModule@KLoader@@QEAAXPEAUKLOADER_MODULE_REFERENCE__@@@Z @ 0x140148208 (-DereferenceModule@KLoader@@QEAAXPEAUKLOADER_MODULE_REFERENCE__@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     ?Close@DriverService@@QEAAXXZ @ 0x140148924 (-Close@DriverService@@QEAAXXZ.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x14015C3D0 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015C650 (--1KLockHolder@@QEAA@XZ.c)
 */

void __fastcall DriverService::Dereference(struct KPushLockBase *this)
{
  int v2; // eax
  int v3; // eax
  KLockThisExclusive v4; // [rsp+40h] [rbp-28h] BYREF

  KLockThisExclusive::KLockThisExclusive(&v4, this + 1);
  v2 = (int)this[2].m_Lock.0;
  if ( !v2 )
    NT_ASSERT("m_referenceCount > 0");
  v3 = v2 - 1;
  *(_DWORD *)&this[2].m_Lock.0 = v3;
  if ( !v3 )
    DriverService::Close((void **)this);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xFu,
      (struct _GUID *)&WPP_ab835b9d52e13f34949e286b28d58b38_Traceguids,
      (char)this,
      *(_DWORD *)&this[2].m_Lock.0);
  KLockHolder::~KLockHolder(&v4);
}
