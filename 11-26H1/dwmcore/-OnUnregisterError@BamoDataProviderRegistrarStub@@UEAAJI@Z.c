/*
 * XREFs of ?OnUnregisterError@BamoDataProviderRegistrarStub@@UEAAJI@Z @ 0x180241A30
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180162998 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180162B54 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?OnUnregisterError@BamoDataProviderRegistrarStubImpl@BamoImpl@@QEAAJI@Z @ 0x180241A7C (-OnUnregisterError@BamoDataProviderRegistrarStubImpl@BamoImpl@@QEAAJI@Z.c)
 */

__int64 __fastcall BamoDataProviderRegistrarStub::OnUnregisterError(
        BamoDataProviderRegistrarStub *this,
        unsigned int a2)
{
  BamoDataProviderRegistrarStub *v3; // rbx
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v3 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    (Microsoft::BamoImpl::InternalLock *)&v5,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 5) + 24LL));
  LODWORD(v3) = BamoImpl::BamoDataProviderRegistrarStubImpl::OnUnregisterError(
                  (BamoDataProviderRegistrarStub *)((char *)v3 + 8),
                  a2);
  Microsoft::BamoImpl::InternalLock::~InternalLock((Microsoft::BamoImpl::InternalLock *)&v5);
  return (unsigned int)v3;
}
