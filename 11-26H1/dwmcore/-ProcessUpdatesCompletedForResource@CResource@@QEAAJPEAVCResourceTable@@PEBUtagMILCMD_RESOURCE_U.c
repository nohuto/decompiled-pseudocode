/*
 * XREFs of ?ProcessUpdatesCompletedForResource@CResource@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RESOURCE_UPDATESCOMPLETEDFORRESOURCE@@@Z @ 0x1801B7290
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CResource::ProcessUpdatesCompletedForResource(
        CResource *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_RESOURCE_UPDATESCOMPLETEDFORRESOURCE *a3)
{
  return (*(__int64 (__fastcall **)(CResource *, _QWORD))(*(_QWORD *)this + 128LL))(this, *((unsigned int *)a3 + 2));
}
