/*
 * XREFs of ?OnInputDelegated@BamoInputDelegationInputObjectProxy@@UEAAJII_N@Z @ 0x180136860
 * Callers:
 *     ?SetDelegateInformation@InputDelegationInputObjectProxy@@UEAAXIII@Z @ 0x180136BD0 (-SetDelegateInformation@InputDelegationInputObjectProxy@@UEAAXIII@Z.c)
 *     ?SetProcessIDDelegation@InputDelegationInputObjectProxy@@MEAAJIW4DelegateInputMode@Input@Internal@UI@Windows@@@Z @ 0x180136CE0 (-SetProcessIDDelegation@InputDelegationInputObjectProxy@@MEAAJIW4DelegateInputMode@Input@Interna.c)
 *     ?SetViewIDDelegation@InputDelegationInputObjectProxy@@MEAAJIW4DelegateInputMode@Input@Internal@UI@Windows@@@Z @ 0x180136DC0 (-SetViewIDDelegation@InputDelegationInputObjectProxy@@MEAAJIW4DelegateInputMode@Input@Internal@U.c)
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x18002A260 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180036FD0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?OnInputDelegated@BamoInputDelegationInputObjectProxyImpl@BamoImpl@@QEAAJII_N@Z @ 0x1801368CC (-OnInputDelegated@BamoInputDelegationInputObjectProxyImpl@BamoImpl@@QEAAJII_N@Z.c)
 */

__int64 __fastcall BamoInputDelegationInputObjectProxy::OnInputDelegated(
        BamoInputDelegationInputObjectProxy *this,
        unsigned int a2,
        unsigned int a3,
        bool a4)
{
  BamoInputDelegationInputObjectProxy *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  Microsoft::BamoImpl::BamoImplObject *v11; // [rsp+30h] [rbp+8h] BYREF

  v7 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v11,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v7) = BamoImpl::BamoInputDelegationInputObjectProxyImpl::OnInputDelegated(
                  (BamoInputDelegationInputObjectProxy *)((char *)v7 + 8),
                  a2,
                  a3,
                  a4);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v11, v8, v9);
  return (unsigned int)v7;
}
