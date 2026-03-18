/*
 * XREFs of ?ProcessSetHoverSource@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_SETHOVERSOURCE@@@Z @ 0x18014B9A8
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18014CFD0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInteraction::ProcessSetHoverSource(
        CInteraction *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INTERACTION_SETHOVERSOURCE *a3)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 Resource; // rax
  __int64 v8; // rax

  v4 = 0LL;
  v5 = *((unsigned int *)a3 + 2);
  if ( (_DWORD)v5 )
  {
    Resource = CResourceTable::GetResource(a2, v5, 60LL);
    if ( Resource )
      v4 = Resource - 8;
  }
  if ( v4 != *((_QWORD *)this + 36) )
  {
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v4 + 8) + 8LL))(v4 + 8);
    v8 = *((_QWORD *)this + 36);
    *((_QWORD *)this + 36) = v4;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v8 + 8) + 16LL))(v8 + 8);
  }
  return 0LL;
}
