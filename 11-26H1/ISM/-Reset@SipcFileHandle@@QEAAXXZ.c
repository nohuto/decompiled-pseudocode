/*
 * XREFs of ?Reset@SipcFileHandle@@QEAAXXZ @ 0x180098FA4
 * Callers:
 *     ?Share@AlpcSection@@QEAAJG_NPEA_K@Z @ 0x180080244 (-Share@AlpcSection@@QEAAJG_NPEA_K@Z.c)
 *     ?Attach@SipcFileHandle@@QEAAXPEAX@Z @ 0x180110354 (-Attach@SipcFileHandle@@QEAAXPEAX@Z.c)
 *     ?Create@AlpcSection@@SAJPEBVAlpcPort@@_KAEBVSipcSectionId@@PEAXPEAPEAV1@@Z @ 0x180110540 (-Create@AlpcSection@@SAJPEBVAlpcPort@@_KAEBVSipcSectionId@@PEAXPEAPEAV1@@Z.c)
 *     ?CreateClientPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@EEAEBUSipcPrivateNamespaceAttributes@@_KGPEAXPEAIPEAPEAVSipcPort@@@Z @ 0x180110D1C (-CreateClientPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@EEAEBUSipcPrivateNamespaceAtt.c)
 *     ?CreateProxyEvents@SipcSignalFactory@@SAJGAEBVSipcPrivateNamespace@@@Z @ 0x1801111B4 (-CreateProxyEvents@SipcSignalFactory@@SAJGAEBVSipcPrivateNamespace@@@Z.c)
 *     ?SendXvmmDisconnect@AlpcSection@@CAJ_K@Z @ 0x1801131E8 (-SendXvmmDisconnect@AlpcSection@@CAJ_K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SipcFileHandle::Reset(HANDLE *this)
{
  if ( *this != (HANDLE)-1LL )
  {
    CloseHandle(*this);
    *this = (HANDLE)-1LL;
  }
}
