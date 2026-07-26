/*
 * XREFs of ?DereferenceModule@KLoader@@QEAAXPEAUKLOADER_MODULE_REFERENCE__@@@Z @ 0x140148208
 * Callers:
 *     KLoaderDereferenceModule @ 0x1400DEF80 (KLoaderDereferenceModule.c)
 * Callees:
 *     ?Dereference@DriverService@@QEAAXXZ @ 0x140148958 (-Dereference@DriverService@@QEAAXXZ.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x14015C3D0 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015C650 (--1KLockHolder@@QEAA@XZ.c)
 *     ?DereferenceKModule@KLoader@@AEAAXPEAUKModule@@@Z @ 0x14016A9D0 (-DereferenceKModule@KLoader@@AEAAXPEAUKModule@@@Z.c)
 */

void __fastcall KLoader::DereferenceModule(KLoader *this, struct KPushLockBase **a2)
{
  struct KPushLockBase *v2; // rbx
  KLoader *v3; // rsi
  struct KPushLockBase *v5; // r9
  struct KLOADER_MODULE_REFERENCE__ **v6; // r8
  KLockThisExclusive v7; // [rsp+20h] [rbp-28h] BYREF

  v2 = *a2;
  v3 = (KLoader *)qword_14011EA40;
  KLockThisExclusive::KLockThisExclusive(&v7, *a2 + 14);
  v5 = a2[2];
  if ( (struct KPushLockBase **)v5[1].m_Lock.Value != a2 + 2
    || (v6 = (struct KLOADER_MODULE_REFERENCE__ **)a2[3], *v6 != (struct KLOADER_MODULE_REFERENCE__ *)(a2 + 2)) )
  {
    __fastfail(3u);
  }
  *v6 = (struct KLOADER_MODULE_REFERENCE__ *)v5;
  v5[1].m_Lock.Value = (unsigned __int64)v6;
  KLockHolder::~KLockHolder(&v7);
  ExFreePoolWithTag(a2, 0);
  DriverService::Dereference((DriverService *)&v2[6]);
  KLoader::DereferenceKModule(v3, (struct KModule *)v2);
}
