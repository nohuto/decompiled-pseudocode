/*
 * XREFs of ?OnGamepadInput@BamoInputDelegationInputObjectProxy@@UEAAJG_N@Z @ 0x1801363E0
 * Callers:
 *     ?InterceptGamepadInput@InputDelegationInputObjectProxy@@UEAAXG_N@Z @ 0x180135DB0 (-InterceptGamepadInput@InputDelegationInputObjectProxy@@UEAAXG_N@Z.c)
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x18002A260 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180036FD0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?OnGamepadInput@BamoInputDelegationInputObjectProxyImpl@BamoImpl@@QEAAJG_N@Z @ 0x180136440 (-OnGamepadInput@BamoInputDelegationInputObjectProxyImpl@BamoImpl@@QEAAJG_N@Z.c)
 */

__int64 __fastcall BamoInputDelegationInputObjectProxy::OnGamepadInput(
        BamoInputDelegationInputObjectProxy *this,
        unsigned __int16 a2,
        bool a3)
{
  BamoInputDelegationInputObjectProxy *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  Microsoft::BamoImpl::BamoImplObject *v9; // [rsp+30h] [rbp+8h] BYREF

  v5 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v9,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v5) = BamoImpl::BamoInputDelegationInputObjectProxyImpl::OnGamepadInput(
                  (BamoInputDelegationInputObjectProxy *)((char *)v5 + 8),
                  a2,
                  a3);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v9, v6, v7);
  return (unsigned int)v5;
}
