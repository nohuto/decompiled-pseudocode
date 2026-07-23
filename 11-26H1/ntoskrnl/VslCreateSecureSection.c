/*
 * XREFs of VslCreateSecureSection @ 0x140AFD3C0
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     VslpLockPagesForTransfer @ 0x14040F6A8 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x140410294 (VslpUnlockPagesForTransfer.c)
 *     MmSizeOfMdl @ 0x140481EB0 (MmSizeOfMdl.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall VslCreateSecureSection(_QWORD *a1, __int64 a2, struct _MDL *a3, int a4, int a5)
{
  SIZE_T v9; // rax
  __int64 result; // rax
  unsigned __int64 v11; // rax
  int v12; // ebx
  __int64 *v13[10]; // [rsp+30h] [rbp-A1h] BYREF
  _BYTE v14[8]; // [rsp+80h] [rbp-51h] BYREF
  unsigned __int64 v15; // [rsp+88h] [rbp-49h]
  int v16; // [rsp+90h] [rbp-41h]
  __int64 *v17; // [rsp+98h] [rbp-39h]
  __int64 v18; // [rsp+A0h] [rbp-31h]
  __int64 *v19; // [rsp+A8h] [rbp-29h]

  memset_0(v14, 0, 0x68uLL);
  memset_0(v13, 0, 0x48uLL);
  *a1 = 0LL;
  if ( (a5 & 0xFFFFFFFE) != 0 )
    return 3221225716LL;
  if ( (a5 & 1) == 0 && ((a3->ByteCount & 0xFFF) != 0 || a3->ByteOffset) )
    return 3221225713LL;
  v9 = MmSizeOfMdl((PVOID)a3->ByteOffset, a3->ByteCount);
  if ( v9 > 0xFFFFFFFF )
    return 3221225713LL;
  result = VslpLockPagesForTransfer((__int64)v13, a3, v9, 0, 0);
  if ( (int)result >= 0 )
  {
    v17 = v13[0];
    v19 = v13[7];
    v11 = *(_QWORD *)(a2 + 368) & 0xFFFFFFFFFFFFFFFCuLL;
    v16 = a4;
    v15 = v11;
    v12 = VslpEnterIumSecureMode(2u, 0x45u, 0, (__int64)v14);
    VslpUnlockPagesForTransfer(v13);
    if ( v12 >= 0 )
      *a1 = v18;
    return (unsigned int)v12;
  }
  return result;
}
