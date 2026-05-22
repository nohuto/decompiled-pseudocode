/*
 * XREFs of ?StartOperation@BamoGestureServicesProxy@@UEAAJI_N_K1PEAVBamoDragManagerClientPrincipal@@W4GestureProcessorType@@@Z @ 0x1801285F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x18002A260 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180036FD0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?StartOperation@BamoGestureServicesProxyImpl@BamoImpl@@QEAAJI_N_K1PEAVBamoDragManagerClientPrincipal@@W4GestureProcessorType@@@Z @ 0x18012867C (-StartOperation@BamoGestureServicesProxyImpl@BamoImpl@@QEAAJI_N_K1PEAVBamoDragManagerClientPrinc.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoGestureServicesProxy::StartOperation(
        __int64 a1,
        unsigned int a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7)
{
  __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // r8
  Microsoft::BamoImpl::BamoImplObject *v15; // [rsp+50h] [rbp+8h] BYREF

  v10 = a1;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v15,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*(_QWORD *)(a1 + 24) + 24LL));
  LOBYTE(v11) = a3;
  LODWORD(v10) = BamoImpl::BamoGestureServicesProxyImpl::StartOperation(v10 + 8, a2, v11, a4, a5, a6, a7);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v15, v12, v13);
  return (unsigned int)v10;
}
