/*
 * XREFs of VslGetOnDemandDebugChallenge @ 0x140B0C5D4
 * Callers:
 *     PsIumGetOnDemandDebugChallenge @ 0x140B0C524 (PsIumGetOnDemandDebugChallenge.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     VslpLockPagesForTransfer @ 0x14040F6A8 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x140410294 (VslpUnlockPagesForTransfer.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 */

__int64 __fastcall VslGetOnDemandDebugChallenge(__int64 a1, void *a2, unsigned int a3, _DWORD *a4)
{
  char PreviousMode; // r14
  __int64 result; // rax
  int v10; // ebx
  unsigned int v11; // edi
  __int64 *v12[10]; // [rsp+40h] [rbp-10F8h] BYREF
  _BYTE v13[8]; // [rsp+90h] [rbp-10A8h] BYREF
  unsigned __int64 v14; // [rsp+98h] [rbp-10A0h]
  size_t Size; // [rsp+A0h] [rbp-1098h]
  __int64 *v16; // [rsp+A8h] [rbp-1090h]
  struct _MDL Src[85]; // [rsp+100h] [rbp-1038h] BYREF

  memset_0(v13, 0, 0x68uLL);
  memset_0(v12, 0, 0x48uLL);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  result = VslpLockPagesForTransfer((__int64)v12, Src, 0x1000u, 1, 0);
  if ( (int)result >= 0 )
  {
    v14 = *(_QWORD *)(a1 + 368) & 0xFFFFFFFFFFFFFFFCuLL;
    Size = (size_t)v12[0];
    v16 = v12[7];
    v10 = VslpEnterIumSecureMode(2u, 0x12u, 0, (__int64)v13);
    VslpUnlockPagesForTransfer(v12);
    if ( v10 >= 0 )
    {
      v11 = Size;
      if ( PreviousMode )
        RtlWriteULongToUser(a4, Size);
      else
        *a4 = Size;
      if ( v11 <= a3 )
      {
        if ( a2 )
        {
          if ( PreviousMode )
            RtlCopyToUser(a2, Src, v11);
          else
            RtlCopyVolatileMemory(a2, Src, v11);
        }
      }
      else
      {
        return (unsigned int)-1073741789;
      }
    }
    return (unsigned int)v10;
  }
  return result;
}
