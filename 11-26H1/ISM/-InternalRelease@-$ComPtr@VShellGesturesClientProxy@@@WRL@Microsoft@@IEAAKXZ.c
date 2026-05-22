/*
 * XREFs of ?InternalRelease@?$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180073DA4
 * Callers:
 *     ??1ShellGesturesContext@ShellGesturesProcessor@@QEAA@XZ @ 0x180073D60 (--1ShellGesturesContext@ShellGesturesProcessor@@QEAA@XZ.c)
 *     ?OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180086670 (-OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRe.c)
 *     ??0DeviceInputHost@@AEAA@XZ @ 0x180088C68 (--0DeviceInputHost@@AEAA@XZ.c)
 *     ??1?$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x1800982E8 (--1-$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1OneCoreUAPInputHost@@MEAA@XZ @ 0x1800A18EC (--1OneCoreUAPInputHost@@MEAA@XZ.c)
 *     ??1DeviceInputHost@@UEAA@XZ @ 0x1800A1FFC (--1DeviceInputHost@@UEAA@XZ.c)
 *     ??1InputObserverClientProxy@@UEAA@XZ @ 0x18013AAEC (--1InputObserverClientProxy@@UEAA@XZ.c)
 *     ?OnDisconnected@InputObserverClientProxy@@UEAAJXZ @ 0x18013AC80 (-OnDisconnected@InputObserverClientProxy@@UEAAJXZ.c)
 *     ??1EdgyControllerClientProxy@@UEAA@XZ @ 0x180159680 (--1EdgyControllerClientProxy@@UEAA@XZ.c)
 *     ?CreateEdgyControllerClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoEdgyControllerClientProxy@@@Z @ 0x18015974C (-CreateEdgyControllerClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoEdgyControllerC.c)
 *     ?OnDisconnected@EdgyControllerClientProxy@@MEAAJXZ @ 0x18015A010 (-OnDisconnected@EdgyControllerClientProxy@@MEAAJXZ.c)
 *     ??4?$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18015C68C (--4-$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?CreateShellHandwritingClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoShellHandwritingHostClientProxy@@@Z @ 0x18015EB0C (-CreateShellHandwritingClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoShellHandwrit.c)
 *     ?OnDisconnected@ShellHandwritingClientProxy@@MEAAJXZ @ 0x18015EC60 (-OnDisconnected@ShellHandwritingClientProxy@@MEAAJXZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@0@@Z @ 0x1801AC3D8 (--$_Destroy_range@V-$allocator@V-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@.c)
 *     ??1Edge@@QEAA@XZ @ 0x1801AC454 (--1Edge@@QEAA@XZ.c)
 *     ??1EdgyConnection@@UEAA@XZ @ 0x1801AC484 (--1EdgyConnection@@UEAA@XZ.c)
 *     ?Initialize@EdgyConnection@@QEAAJXZ @ 0x1801AC6C0 (-Initialize@EdgyConnection@@QEAAJXZ.c)
 *     ??4?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1801ADE2C (--4-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?Remove@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801AED50 (-Remove@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 *     ?Set@Edge@@AEAAXPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801AEFDC (-Set@Edge@@AEAAXPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 *     ??1ShellHandwritingProcessor@@UEAA@XZ @ 0x1801B3878 (--1ShellHandwritingProcessor@@UEAA@XZ.c)
 *     ?RuntimeClassInitialize@ShellHandwritingProcessor@@QEAAJXZ @ 0x1801B3FC0 (-RuntimeClassInitialize@ShellHandwritingProcessor@@QEAAJXZ.c)
 *     _dynamic_atexit_destructor_for__MPCManager::s_instance__ @ 0x1801DDA80 (_dynamic_atexit_destructor_for__MPCManager--s_instance__.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::InternalRelease(__int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  result = 0LL;
  v2 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v2 + 16) + 8LL))(v2 + 16);
  }
  return result;
}
