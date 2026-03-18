/*
 * XREFs of ?sPacketCallback@CIVChannel@@CAJPEAU_IVSRContext@@@Z @ 0x140222740
 * Callers:
 *     <none>
 * Callees:
 *     ?PacketCallback@CIVChannel@@AEAAJPEAU_IVSRContext@@@Z @ 0x140222344 (-PacketCallback@CIVChannel@@AEAAJPEAU_IVSRContext@@@Z.c)
 */

__int64 __fastcall CIVChannel::sPacketCallback(struct _IVSRContext *a1, int a2, int a3)
{
  __int64 UserSessionState; // rax
  int v5; // r8d

  UserSessionState = W32GetUserSessionState((_DWORD)a1, a2, a3);
  return CIVChannel::PacketCallback(
           *(CIVChannel **)(UserSessionState + 8LL * *((unsigned int *)a1 + 44) + 19488),
           a1,
           v5);
}
