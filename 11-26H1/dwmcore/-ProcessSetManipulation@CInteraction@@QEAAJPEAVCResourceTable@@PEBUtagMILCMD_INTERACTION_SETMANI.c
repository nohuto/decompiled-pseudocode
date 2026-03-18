/*
 * XREFs of ?ProcessSetManipulation@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_SETMANIPULATION@@@Z @ 0x18014CA9C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18014CFD0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInteraction::ProcessSetManipulation(
        CInteraction *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INTERACTION_SETMANIPULATION *a3)
{
  __int64 Resource; // rbx
  __int64 v5; // rdx
  __int64 v7; // rcx

  Resource = 0LL;
  v5 = *((unsigned int *)a3 + 2);
  if ( (_DWORD)v5 )
    Resource = CResourceTable::GetResource(a2, v5, 82LL);
  if ( Resource != *((_QWORD *)this + 35) )
  {
    if ( Resource )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)Resource + 8LL))(Resource);
    v7 = *((_QWORD *)this + 35);
    *((_QWORD *)this + 35) = Resource;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return 0LL;
}
