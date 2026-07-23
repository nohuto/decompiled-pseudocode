/*
 * XREFs of VslQueryRuntimeAttestationReport @ 0x1407951E0
 * Callers:
 *     ExpQueryRuntimeAttestationReport @ 0x1408391DC (ExpQueryRuntimeAttestationReport.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     VslpLockPagesForTransfer @ 0x14040F6A8 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x140410294 (VslpUnlockPagesForTransfer.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VslQueryRuntimeAttestationReport(__int16 *a1, void *a2, unsigned int *a3, char a4)
{
  __int16 v7; // bx
  struct _MDL *v8; // rsi
  __int64 v9; // r12
  __int16 v10; // ax
  struct _MDL *Pool2; // rax
  int v12; // ebx
  unsigned int v13; // eax
  __int16 v15; // [rsp+30h] [rbp-118h]
  __int64 *v16[10]; // [rsp+40h] [rbp-108h] BYREF
  _BYTE v17[8]; // [rsp+90h] [rbp-B8h] BYREF
  __int16 v18; // [rsp+98h] [rbp-B0h]
  __int64 v19; // [rsp+A0h] [rbp-A8h]
  __int128 v20; // [rsp+A8h] [rbp-A0h]
  __int128 v21; // [rsp+B8h] [rbp-90h]
  __int64 *v22; // [rsp+C8h] [rbp-80h]
  __int64 *v23; // [rsp+D0h] [rbp-78h]
  size_t Size; // [rsp+D8h] [rbp-70h]

  v7 = *a1;
  v8 = 0LL;
  v15 = a1[1];
  memset_0(v16, 0, 0x48uLL);
  v9 = *((_QWORD *)a1 + 1);
  memset_0(v17, 0, 0x68uLL);
  if ( v7 != 1 )
    goto LABEL_22;
  v10 = v15;
  if ( v15 != 1 || !a3 || !v9 || (v9 & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
    goto LABEL_22;
  if ( !a2 )
  {
    if ( !*a3 )
      goto LABEL_15;
LABEL_22:
    v12 = -1073741811;
    goto LABEL_23;
  }
  if ( !*a3 )
    goto LABEL_22;
  Pool2 = (struct _MDL *)ExAllocatePool2(0x40uLL);
  v8 = Pool2;
  if ( !Pool2 )
  {
    v12 = -1073741670;
    goto LABEL_23;
  }
  v12 = VslpLockPagesForTransfer((__int64)v16, Pool2, *a3, 1, 2u);
  if ( v12 >= 0 )
  {
    v10 = v15;
LABEL_15:
    v18 = v10;
    v19 = v9;
    if ( a2 )
    {
      v20 = *((_OWORD *)a1 + 1);
      v21 = *((_OWORD *)a1 + 2);
      v22 = v16[0];
      v23 = v16[7];
    }
    v12 = VslpEnterIumSecureMode(2u, 0x124u, 0, (__int64)v17);
    v13 = Size;
    *a3 = Size;
    if ( v12 >= 0 && a2 )
    {
      if ( a4 )
        RtlCopyToUser(a2, v8, v13);
      else
        RtlCopyVolatileMemory(a2, v8, v13);
    }
  }
LABEL_23:
  if ( v16[0] )
    VslpUnlockPagesForTransfer(v16);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return (unsigned int)v12;
}
