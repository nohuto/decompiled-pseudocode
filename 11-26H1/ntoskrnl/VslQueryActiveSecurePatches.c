/*
 * XREFs of VslQueryActiveSecurePatches @ 0x1405C6160
 * Callers:
 *     MiLogHotPatchRundownForProcess @ 0x14070101C (MiLogHotPatchRundownForProcess.c)
 *     MiQueryProcessActivePatches @ 0x14087A690 (MiQueryProcessActivePatches.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     VslpLockPagesForTransfer @ 0x14040F6A8 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x140410294 (VslpUnlockPagesForTransfer.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VslQueryActiveSecurePatches(__int64 a1, struct _MDL **a2, unsigned int *a3)
{
  struct _MDL *v6; // rbx
  unsigned int v7; // esi
  int v8; // edi
  unsigned int v9; // r14d
  struct _MDL *Pool2; // rax
  __int64 *v13[10]; // [rsp+40h] [rbp-C0h] BYREF
  char v14[8]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v15; // [rsp+98h] [rbp-68h]
  __int128 v16; // [rsp+A0h] [rbp-60h]
  struct _MDL *v17; // [rsp+B0h] [rbp-50h]

  memset_0(v14, 0, 0x68uLL);
  v6 = 0LL;
  v7 = 0;
  memset_0(v13, 0, 0x48uLL);
  v15 = a1;
  v16 = 0LL;
  v8 = VslpEnterIumSecureMode(2u, 0x4Au, 0, (__int64)v14);
  if ( v8 >= 0 )
  {
    while ( 1 )
    {
      v9 = v16;
      v7 = DWORD2(v16);
      v6 = 0LL;
      if ( !(_DWORD)v16 || !DWORD2(v16) )
        break;
      if ( (unsigned int)v16 > 0x1FA000 )
      {
        v8 = -1073741811;
        break;
      }
      Pool2 = (struct _MDL *)ExAllocatePool2(0x40uLL);
      v6 = Pool2;
      if ( !Pool2 )
      {
        v8 = -1073741670;
        break;
      }
      v8 = VslpLockPagesForTransfer((__int64)v13, Pool2, v9, 1, 0);
      if ( v8 < 0 )
        break;
      v15 = a1;
      *(__int64 **)&v16 = v13[0];
      *((__int64 **)&v16 + 1) = v13[7];
      v17 = v6;
      v8 = VslpEnterIumSecureMode(2u, 0x4Au, 0, (__int64)v14);
      VslpUnlockPagesForTransfer(v13);
      if ( v8 < 0 )
        break;
      if ( v9 >= (unsigned __int64)v16 && (unsigned __int64)v7 >= *((_QWORD *)&v16 + 1) )
      {
        *a2 = v6;
        v6 = 0LL;
        break;
      }
      ExFreePoolWithTag(v6, 0);
    }
  }
  if ( v8 < 0 )
    v7 = 0;
  *a3 = v7;
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)v8;
}
