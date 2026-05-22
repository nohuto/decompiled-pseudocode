/*
 * XREFs of ??1SipcPrivateNamespace@@QEAA@XZ @ 0x18010F914
 * Callers:
 *     ?AcceptClientConnection@AlpcPort@@UEAAJIPEAXPEAPEAX1PEAPEAVSipcPort@@@Z @ 0x18010FB00 (-AcceptClientConnection@AlpcPort@@UEAAJIPEAXPEAPEAX1PEAPEAVSipcPort@@@Z.c)
 *     ?Reconnect@SipcEndpoint@@UEAAJ_K@Z @ 0x180112AE0 (-Reconnect@SipcEndpoint@@UEAAJ_K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SipcPrivateNamespace::~SipcPrivateNamespace(void **this)
{
  void *v1; // rcx

  v1 = *this;
  if ( v1 )
    ClosePrivateNamespace(v1, 1u);
}
