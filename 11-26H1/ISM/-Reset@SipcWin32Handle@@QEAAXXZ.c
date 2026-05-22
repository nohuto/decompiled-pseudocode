/*
 * XREFs of ?Reset@SipcWin32Handle@@QEAAXXZ @ 0x180093550
 * Callers:
 *     ??1AlpcPort@@UEAA@XZ @ 0x180080C88 (--1AlpcPort@@UEAA@XZ.c)
 *     ??1SipcPort@@UEAA@XZ @ 0x1800934D8 (--1SipcPort@@UEAA@XZ.c)
 *     ?Attach@SipcWin32Handle@@QEAAXPEAX@Z @ 0x1800952F8 (-Attach@SipcWin32Handle@@QEAAXPEAX@Z.c)
 *     ??1AlpcSection@@UEAA@XZ @ 0x18010F7D0 (--1AlpcSection@@UEAA@XZ.c)
 *     ??1SipcEndpoint@@EEAA@XZ @ 0x18010F8BC (--1SipcEndpoint@@EEAA@XZ.c)
 *     ?AcceptClientConnection@AlpcPort@@UEAAJIPEAXPEAPEAX1PEAPEAVSipcPort@@@Z @ 0x18010FB00 (-AcceptClientConnection@AlpcPort@@UEAAJIPEAXPEAPEAX1PEAPEAVSipcPort@@@Z.c)
 *     ?Attach@AlpcSection@@CAJPEBVAlpcPort@@PEAX_K12AEAVSipcSectionId@@PEAPEAV1@@Z @ 0x180110154 (-Attach@AlpcSection@@CAJPEBVAlpcPort@@PEAX_K12AEAVSipcSectionId@@PEAPEAV1@@Z.c)
 *     ?Create@AlpcSection@@SAJPEBVAlpcPort@@_KAEBVSipcSectionId@@PEAXPEAPEAV1@@Z @ 0x180110540 (-Create@AlpcSection@@SAJPEBVAlpcPort@@_KAEBVSipcSectionId@@PEAXPEAPEAV1@@Z.c)
 *     ?CreateClientEvents@SipcSignalFactory@@SAJAEBVSipcPrivateNamespace@@PEAPEAX1@Z @ 0x180110AFC (-CreateClientEvents@SipcSignalFactory@@SAJAEBVSipcPrivateNamespace@@PEAPEAX1@Z.c)
 *     ?Disconnect@AlpcPort@@UEAAXXZ @ 0x1801116D0 (-Disconnect@AlpcPort@@UEAAXXZ.c)
 *     ?Disconnect@SipcEndpoint@@UEAAXXZ @ 0x1801117D0 (-Disconnect@SipcEndpoint@@UEAAXXZ.c)
 *     ?OpenServerEvents@SipcSignalFactory@@SAJGAEBVSipcPrivateNamespace@@PEAPEAX1@Z @ 0x1801125A8 (-OpenServerEvents@SipcSignalFactory@@SAJGAEBVSipcPrivateNamespace@@PEAPEAX1@Z.c)
 *     ?Reconnect@SipcEndpoint@@UEAAJ_K@Z @ 0x180112AE0 (-Reconnect@SipcEndpoint@@UEAAJ_K@Z.c)
 *     ?RejectClientConnection@AlpcPort@@UEAAJXZ @ 0x180112D50 (-RejectClientConnection@AlpcPort@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall SipcWin32Handle::Reset(void **this)
{
  void *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    CloseHandle(v2);
    *this = 0LL;
  }
}
