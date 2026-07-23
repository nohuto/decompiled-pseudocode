/*
 * XREFs of VslGetEtwDebugId @ 0x1405C56E8
 * Callers:
 *     EtwpLocateDbgIdForRegEntry @ 0x140A35768 (EtwpLocateDbgIdForRegEntry.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     VslpLockPagesForTransfer @ 0x14040F6A8 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x140410294 (VslpUnlockPagesForTransfer.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VslGetEtwDebugId(__int64 a1, __int64 a2, struct _MDL **a3, unsigned int *a4)
{
  struct _MDL *Pool2; // rbx
  int v9; // edi
  unsigned __int64 v10; // rax
  __int64 *v12[10]; // [rsp+30h] [rbp-99h] BYREF
  _BYTE v13[8]; // [rsp+80h] [rbp-49h] BYREF
  unsigned __int64 v14; // [rsp+88h] [rbp-41h]
  __int64 v15; // [rsp+90h] [rbp-39h]
  __int64 *v16; // [rsp+98h] [rbp-31h]
  __int64 *v17; // [rsp+A0h] [rbp-29h]
  unsigned int v18; // [rsp+A8h] [rbp-21h]

  memset_0(v13, 0, 0x68uLL);
  memset_0(v12, 0, 0x48uLL);
  Pool2 = *a3;
  while ( 1 )
  {
    v9 = VslpLockPagesForTransfer((__int64)v12, Pool2, *a4, 2, 0);
    if ( v9 < 0 )
      break;
    v10 = *(_QWORD *)(a1 + 368) & 0xFFFFFFFFFFFFFFFCuLL;
    v15 = a2;
    v14 = v10;
    v17 = v12[7];
    v16 = v12[0];
    v9 = VslpEnterIumSecureMode(2u, 0x11u, 0, (__int64)v13);
    VslpUnlockPagesForTransfer(v12);
    *a4 = v18;
    if ( v9 >= 0 )
    {
      *a3 = Pool2;
      return (unsigned int)v9;
    }
    if ( v9 != -1073741789 )
      break;
    if ( Pool2 != *a3 )
      ExFreePoolWithTag(Pool2, 0);
    Pool2 = (struct _MDL *)ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
    {
      v9 = -1073741670;
      break;
    }
  }
  if ( Pool2 != *a3 && Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)v9;
}
