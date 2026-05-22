/*
 * XREFs of ?OnDisconnectedThunk@BamoInputProcessStubImpl@BamoImpl@@UEAAJXZ @ 0x1800CC0B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CalloutWrapper@VBamoInputProcessPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoInputProcessPrincipalImpl@1@@Z @ 0x1800CB864 (--0-$CalloutWrapper@VBamoInputProcessPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseB.c)
 *     ??1?$CalloutWrapper@VBamoInputProcessPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800CBAD0 (--1-$CalloutWrapper@VBamoInputProcessPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoInputProcessStubImpl::OnDisconnectedThunk(BamoImpl::BamoInputProcessStubImpl *this)
{
  unsigned int v2; // ebx
  __int64 v3; // rdi
  _BYTE v5[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  v3 = *((_QWORD *)this + 3);
  if ( *(_QWORD *)(v3 + 40) )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputProcessPrincipalImpl>::CalloutWrapper<BamoImpl::BamoInputProcessPrincipalImpl>(
      (__int64)v5,
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
      *((_QWORD *)this + 3));
    v2 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(**(_QWORD **)(v3 + 40) + 24LL))(
           *(_QWORD *)(v3 + 40),
           v3 - 16,
           (char *)this - 16);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputProcessPrincipalImpl>::~CalloutWrapper<BamoImpl::BamoInputProcessPrincipalImpl>((__int64)v5);
  }
  return v2;
}
