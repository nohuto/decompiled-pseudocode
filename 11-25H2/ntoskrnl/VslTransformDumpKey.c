/*
 * XREFs of VslTransformDumpKey @ 0x1407045EC
 * Callers:
 *     ExpQuerySystemInformation @ 0x1409DB5B0 (ExpQuerySystemInformation.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140282F50 (VslpEnterIumSecureMode.c)
 *     VslpLockPagesForTransfer @ 0x1402D3E38 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x1402D45D0 (VslpUnlockPagesForTransfer.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     SeSinglePrivilegeCheck @ 0x140858330 (SeSinglePrivilegeCheck.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VslTransformDumpKey(
        void *Src,
        size_t Size,
        void *a3,
        unsigned int a4,
        unsigned int *a5,
        KPROCESSOR_MODE PreviousMode)
{
  size_t v8; // rbx
  struct _MDL *v10; // rdi
  int v11; // ebx
  unsigned int v12; // esi
  struct _MDL *Pool2; // rax
  int v15; // [rsp+30h] [rbp-118h]
  __int64 *v16[10]; // [rsp+40h] [rbp-108h] BYREF
  _BYTE v17[8]; // [rsp+90h] [rbp-B8h] BYREF
  __int64 *v18; // [rsp+98h] [rbp-B0h]
  __int64 *v19; // [rsp+A0h] [rbp-A8h]

  v8 = (unsigned int)Size;
  memset_0(v17, 0, 0x68uLL);
  v10 = 0LL;
  memset_0(v16, 0, 0x48uLL);
  v15 = 0;
  if ( VslVsmEnabled )
  {
    if ( SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
    {
      if ( (_DWORD)v8 )
      {
        v12 = 4096;
        if ( a4 <= 0x1000 )
          v12 = a4;
        Pool2 = (struct _MDL *)ExAllocatePool2(0x40uLL);
        v10 = Pool2;
        if ( Pool2 )
        {
          memmove(Pool2, Src, v8);
          v11 = VslpLockPagesForTransfer((__int64)v16, v10, v8, IoModifyAccess, 2u);
          if ( v11 >= 0 )
          {
            v15 = 1;
            v18 = v16[0];
            v19 = v16[7];
            v11 = VslpEnterIumSecureMode(2u, 0x59u, 0, (__int64)v17);
            if ( v11 >= 0 )
            {
              memmove(a3, v10, v12);
              *a5 = v12;
              v11 = 0;
            }
          }
        }
        else
        {
          v11 = -1073741670;
        }
      }
      else
      {
        v11 = -1073741820;
      }
    }
    else
    {
      v11 = -1073741727;
    }
  }
  else
  {
    v11 = -1073741667;
  }
  if ( v15 )
    VslpUnlockPagesForTransfer(v16);
  if ( v10 )
    ExFreePoolWithTag(v10, 0x54736D56u);
  return (unsigned int)v11;
}
