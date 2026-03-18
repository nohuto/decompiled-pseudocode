/*
 * XREFs of ?sPacketCallback@CIVChannel@@CAJPEAU_IVSRContext@@@Z @ 0x14021EF50
 * Callers:
 *     <none>
 * Callees:
 *     ?PacketCallback@CIVChannel@@AEAAJPEAU_IVSRContext@@@Z @ 0x14021EBBC (-PacketCallback@CIVChannel@@AEAAJPEAU_IVSRContext@@@Z.c)
 */

__int64 __fastcall CIVChannel::sPacketCallback(struct _IVSRContext *a1, __int64 a2)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  return CIVChannel::PacketCallback(*(CIVChannel **)(UserSessionState + 8LL * *((unsigned int *)a1 + 44) + 19456), a1);
}
