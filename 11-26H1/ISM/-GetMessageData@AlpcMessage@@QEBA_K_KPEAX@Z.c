/*
 * XREFs of ?GetMessageData@AlpcMessage@@QEBA_K_KPEAX@Z @ 0x18009512C
 * Callers:
 *     ?GetPortEvent@AlpcPort@@UEAAJPEAUSipcPortEvent@@@Z @ 0x18006A1F0 (-GetPortEvent@AlpcPort@@UEAAJPEAUSipcPortEvent@@@Z.c)
 *     ?AcceptClientConnection@AlpcPort@@UEAAJIPEAXPEAPEAX1PEAPEAVSipcPort@@@Z @ 0x18010FB00 (-AcceptClientConnection@AlpcPort@@UEAAJIPEAXPEAPEAX1PEAPEAVSipcPort@@@Z.c)
 *     ?CreateClientPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@EEAEBUSipcPrivateNamespaceAttributes@@_KGPEAXPEAIPEAPEAVSipcPort@@@Z @ 0x180110D1C (-CreateClientPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@EEAEBUSipcPrivateNamespaceAtt.c)
 * Callees:
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     memcpy_0 @ 0x18009CC62 (memcpy_0.c)
 */

size_t __fastcall AlpcMessage::GetMessageData(AlpcMessage *this, size_t a2, char *a3)
{
  size_t v3; // rdi
  size_t v4; // rbx

  v3 = *(__int16 *)this;
  v4 = a2;
  if ( *(__int16 *)this < 0 )
    v3 = 0LL;
  if ( v3 < a2 )
    v4 = v3;
  memcpy_0(a3, (char *)this + 40, v4);
  memset_0(&a3[v4], 0, a2 - v4);
  return v3;
}
