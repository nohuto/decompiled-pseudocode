/*
 * XREFs of VslSendDebugAttachNotifications @ 0x14079573C
 * Callers:
 *     DbgkpPostModuleMessages @ 0x140B290F8 (DbgkpPostModuleMessages.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall VslSendDebugAttachNotifications(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v6; // rax
  _BYTE v8[8]; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int64 v9; // [rsp+28h] [rbp-80h]
  __int64 v10; // [rsp+30h] [rbp-78h]
  __int64 v11; // [rsp+38h] [rbp-70h]

  memset_0(v8, 0, 0x68uLL);
  v6 = *(_QWORD *)(a1 + 368) & 0xFFFFFFFFFFFFFFFCuLL;
  v10 = a2;
  v9 = v6;
  v11 = a3;
  return VslpEnterIumSecureMode(2u, 0x10u, 0, (__int64)v8);
}
