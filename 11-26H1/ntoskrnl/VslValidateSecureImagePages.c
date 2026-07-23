/*
 * XREFs of VslValidateSecureImagePages @ 0x14040F550
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     VslpLockPagesForTransfer @ 0x14040F6A8 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x140410294 (VslpUnlockPagesForTransfer.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall VslValidateSecureImagePages(__int64 a1, int a2, unsigned __int64 a3, int a4, __int64 a5, int a6)
{
  int i; // edi
  unsigned __int64 v11; // rbx
  _QWORD v14[10]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v15[8]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v16; // [rsp+98h] [rbp-68h]
  int v17; // [rsp+A0h] [rbp-60h]
  unsigned int v18; // [rsp+A4h] [rbp-5Ch]
  __int64 v19; // [rsp+A8h] [rbp-58h]
  __int64 v20; // [rsp+B0h] [rbp-50h]
  __int64 v21; // [rsp+B8h] [rbp-48h]
  int v22; // [rsp+C0h] [rbp-40h]

  memset_0(v15, 0, 0x68uLL);
  memset_0(v14, 0, 0x48uLL);
  for ( i = 0; a3; a3 -= v11 )
  {
    v11 = a3;
    if ( (-(__int64)((a4 & 0xFFF) != 0) & 0xFFFFFFFFFFFFF000uLL) + 2072576 <= a3 )
      v11 = (-(__int64)((a4 & 0xFFF) != 0) & 0xFFFFFFFFFFFFF000uLL) + 2072576;
    i = VslpLockPagesForTransfer((unsigned int)v14, a4, (((v11 & 0xFFF) != 0) + (unsigned int)(v11 >> 12)) << 12, 0, 16);
    if ( i < 0 )
      break;
    v16 = a1;
    v19 = v14[0];
    v20 = v14[7];
    v22 = a6;
    v17 = a2;
    v18 = ((v11 & 0xFFF) != 0) + (unsigned int)(v11 >> 12);
    v21 = a5;
    i = VslpEnterIumSecureMode(2u, 0xC1u, 0, (__int64)v15);
    VslpUnlockPagesForTransfer(v14);
    if ( i < 0 )
      break;
    a4 += v11;
    a5 += v11;
    a2 += ((v11 & 0xFFF) != 0) + (unsigned int)(v11 >> 12);
  }
  return (unsigned int)i;
}
