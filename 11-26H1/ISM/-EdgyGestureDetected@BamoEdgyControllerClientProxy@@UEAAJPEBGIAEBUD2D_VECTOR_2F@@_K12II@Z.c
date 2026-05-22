/*
 * XREFs of ?EdgyGestureDetected@BamoEdgyControllerClientProxy@@UEAAJPEBGIAEBUD2D_VECTOR_2F@@_K12II@Z @ 0x180159800
 * Callers:
 *     ?NotifyClientOfEdgyDetected@EdgyConnection@@QEAAJPEBUCandidateIdentity@@PEAUCandidateEdgyDetectedInfo@@PEBUEdgyPointerInfo@@2@Z @ 0x1801AC8F4 (-NotifyClientOfEdgyDetected@EdgyConnection@@QEAAJPEBUCandidateIdentity@@PEAUCandidateEdgyDetecte.c)
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x18002A260 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180036FD0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?EdgyGestureDetected@BamoEdgyControllerClientProxyImpl@BamoImpl@@QEAAJPEBGIAEBUD2D_VECTOR_2F@@_K12II@Z @ 0x1801598AC (-EdgyGestureDetected@BamoEdgyControllerClientProxyImpl@BamoImpl@@QEAAJPEBGIAEBUD2D_VECTOR_2F@@_K.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoEdgyControllerClientProxy::EdgyGestureDetected(
        BamoEdgyControllerClientProxy *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        const struct D2D_VECTOR_2F *a4,
        unsigned __int64 a5,
        const struct D2D_VECTOR_2F *a6,
        unsigned __int64 a7,
        unsigned int a8,
        unsigned int a9)
{
  BamoEdgyControllerClientProxy *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // r8
  Microsoft::BamoImpl::BamoImplObject *v16; // [rsp+60h] [rbp+8h] BYREF

  v12 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v16,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v12) = BamoImpl::BamoEdgyControllerClientProxyImpl::EdgyGestureDetected(
                   (BamoEdgyControllerClientProxy *)((char *)v12 + 8),
                   a2,
                   a3,
                   a4,
                   a5,
                   a6,
                   a7,
                   a8,
                   a9);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v16, v13, v14);
  return (unsigned int)v12;
}
