/*
 * XREFs of VslCapturePgoData @ 0x140794B40
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     VslpLockPagesForTransfer @ 0x14040F6A8 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x140410294 (VslpUnlockPagesForTransfer.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall VslCapturePgoData(size_t Size, struct _MDL *a2)
{
  __int64 v4; // rbp
  int v5; // ebx
  unsigned int v6; // r14d
  __int64 *v8[10]; // [rsp+30h] [rbp-E8h] BYREF
  _BYTE v9[8]; // [rsp+80h] [rbp-98h] BYREF
  __int64 v10; // [rsp+88h] [rbp-90h]
  __int64 *v11; // [rsp+90h] [rbp-88h]
  __int64 *v12; // [rsp+98h] [rbp-80h]

  memset_0(v9, 0, 0x68uLL);
  memset_0(v8, 0, 0x48uLL);
  v4 = 0LL;
  v5 = 0;
  memset_0(a2, 0, Size);
  while ( Size )
  {
    v6 = Size;
    if ( 2072576 - ((unsigned __int16)a2 & 0xFFFu) < Size )
      v6 = 2072576 - ((unsigned __int16)a2 & 0xFFF);
    v5 = VslpLockPagesForTransfer((__int64)v8, a2, v6, 1, 0);
    if ( v5 < 0 )
      break;
    v11 = v8[0];
    v12 = v8[7];
    v10 = v4;
    v5 = VslpEnterIumSecureMode(2u, 0x51u, 0, (__int64)v9);
    VslpUnlockPagesForTransfer(v8);
    if ( v5 == -2147483622 )
      return 0;
    if ( v5 < 0 )
      return (unsigned int)v5;
    a2 = (struct _MDL *)((char *)a2 + v6);
    v4 += v6;
    Size -= v6;
  }
  return (unsigned int)v5;
}
