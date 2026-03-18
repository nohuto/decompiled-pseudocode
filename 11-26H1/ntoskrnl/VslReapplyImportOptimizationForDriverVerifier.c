/*
 * XREFs of VslReapplyImportOptimizationForDriverVerifier @ 0x140792F08
 * Callers:
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x1406FB178 (MiReapplyImportOptimizationForDriverVerifier.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1403685AC (VslpEnterIumSecureMode.c)
 *     VslpLockPagesForTransfer @ 0x14040FF88 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x140410B74 (VslpUnlockPagesForTransfer.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall VslReapplyImportOptimizationForDriverVerifier(__int64 a1, struct _MDL *a2, int a3)
{
  __int64 v6; // r8
  __int64 result; // rax
  unsigned int v8; // ebx
  __int64 *v9[10]; // [rsp+30h] [rbp-D8h] BYREF
  _BYTE v10[8]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v11; // [rsp+88h] [rbp-80h]
  __int64 *v12; // [rsp+90h] [rbp-78h]
  __int64 *v13; // [rsp+98h] [rbp-70h]

  memset_0(v10, 0, 0x68uLL);
  memset_0(v9, 0, 0x48uLL);
  v6 = (unsigned int)(24 * a3);
  if ( ((v6 + ((unsigned __int16)a2 & 0xFFF) + 4095LL) & 0xFFFFFFFFFFFFF000uLL) > 0x1FA000 )
    return 3221225485LL;
  result = VslpLockPagesForTransfer((__int64)v9, a2, v6, 0, 0);
  if ( (int)result >= 0 )
  {
    v11 = *(_QWORD *)(a1 + 48);
    v12 = v9[0];
    v13 = v9[7];
    v8 = VslpEnterIumSecureMode(2u, 0xE3u, 0, (__int64)v10);
    VslpUnlockPagesForTransfer(v9);
    return v8;
  }
  return result;
}
