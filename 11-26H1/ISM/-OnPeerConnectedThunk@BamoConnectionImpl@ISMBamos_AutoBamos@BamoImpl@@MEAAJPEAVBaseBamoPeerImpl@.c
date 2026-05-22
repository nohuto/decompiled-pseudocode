/*
 * XREFs of ?OnPeerConnectedThunk@BamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@MEAAJPEAVBaseBamoPeerImpl@3Microsoft@@PEA_NPEAPEAVBamoPrincipal@Bamo@5@@Z @ 0x180042870
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CalloutWrapper@VBamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800383AC (--1-$CalloutWrapper@VBamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@@BamoImpl@Microsoft@@QEAA@X.c)
 *     ??0?$CalloutWrapper@VBamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoConnectionImpl@ISMBamos_AutoBamos@1@W4PrologEpilogConfig@12@@Z @ 0x1800429A0 (--0-$CalloutWrapper@VBamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@@BamoImpl@Micr_ea_1800429A0.c)
 *     ?LogOnPeerConnected@BamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@AEAAXPEAVBamoPeer@2@@Z @ 0x18008E758 (-LogOnPeerConnected@BamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@AEAAXPEAVBamoPeer@2@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::ISMBamos_AutoBamos::BamoConnectionImpl::OnPeerConnectedThunk(
        BamoImpl::ISMBamos_AutoBamos::BamoConnectionImpl *this,
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a2,
        bool *a3,
        struct Microsoft::Bamo::BamoPrincipal **a4)
{
  __int64 v6; // rdi
  struct ISMBamos_AutoBamos::BamoPeer *v7; // rbx
  BamoImpl::ISMBamos_AutoBamos::BamoConnectionImpl *v8; // rcx
  _BYTE v10[40]; // [rsp+30h] [rbp-28h] BYREF

  v6 = *((_QWORD *)this + 2);
  v7 = (struct ISMBamos_AutoBamos::BamoPeer *)*((_QWORD *)a2 + 2);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::ISMBamos_AutoBamos::BamoConnectionImpl>::CalloutWrapper<BamoImpl::ISMBamos_AutoBamos::BamoConnectionImpl>(
    v10,
    this,
    this,
    this != 0LL ? 3 : 0);
  BamoImpl::ISMBamos_AutoBamos::BamoConnectionImpl::LogOnPeerConnected(v8, v7);
  LODWORD(v7) = (*(__int64 (__fastcall **)(__int64, struct ISMBamos_AutoBamos::BamoPeer *, bool *, struct Microsoft::Bamo::BamoPrincipal **))(*(_QWORD *)v6 + 112LL))(
                  v6,
                  v7,
                  a3,
                  a4);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::ISMBamos_AutoBamos::BamoConnectionImpl>::~CalloutWrapper<BamoImpl::ISMBamos_AutoBamos::BamoConnectionImpl>((__int64)v10);
  return (unsigned int)v7;
}
