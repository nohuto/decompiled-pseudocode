/*
 * XREFs of ?ProcessSetContentOffset@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPRENDERTARGET_SETCONTENTOFFSET@@@Z @ 0x18021E9A8
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CRemoteAppRenderTarget::ProcessSetContentOffset(
        CRemoteAppRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_REMOTEAPPRENDERTARGET_SETCONTENTOFFSET *a3)
{
  if ( *((_DWORD *)a3 + 2) != *((_DWORD *)this + 544) || *((_DWORD *)a3 + 3) != *((_DWORD *)this + 545) )
  {
    *((_QWORD *)this + 272) = *((_QWORD *)a3 + 1);
    *((_BYTE *)this + 2188) = 1;
  }
  return 0LL;
}
