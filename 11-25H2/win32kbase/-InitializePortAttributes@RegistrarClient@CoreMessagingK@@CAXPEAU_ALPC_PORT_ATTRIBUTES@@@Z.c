/*
 * XREFs of ?InitializePortAttributes@RegistrarClient@CoreMessagingK@@CAXPEAU_ALPC_PORT_ATTRIBUTES@@@Z @ 0x1400FCB64
 * Callers:
 *     ?Connect@RegistrarClient@CoreMessagingK@@CAJXZ @ 0x1400FC964 (-Connect@RegistrarClient@CoreMessagingK@@CAJXZ.c)
 * Callees:
 *     memset @ 0x140243000 (memset.c)
 */

void __fastcall CoreMessagingK::RegistrarClient::InitializePortAttributes(struct _ALPC_PORT_ATTRIBUTES *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 UserCoreMessagingSessionState; // rax
  unsigned __int16 v6; // r8

  memset(a1, 0, 0x48uLL);
  *(_DWORD *)a1 = 1114112;
  *((_DWORD *)a1 + 1) = 12;
  *((_DWORD *)a1 + 2) = 1;
  *((_BYTE *)a1 + 13) = 1;
  UserCoreMessagingSessionState = W32GetUserCoreMessagingSessionState(v3, v2, v4);
  v6 = *(_WORD *)(UserCoreMessagingSessionState + 48);
  if ( v6 <= *(_WORD *)(UserCoreMessagingSessionState + 50) )
    v6 = *(_WORD *)(UserCoreMessagingSessionState + 50);
  *((_QWORD *)a1 + 2) = v6 + 80LL;
}
