/*
 * XREFs of VslGetOnDemandDebugChallenge @ 0x140B0AE88
 * Callers:
 *     PsIumGetOnDemandDebugChallenge @ 0x140B0ADD8 (PsIumGetOnDemandDebugChallenge.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1403685AC (VslpEnterIumSecureMode.c)
 *     VslpLockPagesForTransfer @ 0x14040FF88 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x140410B74 (VslpUnlockPagesForTransfer.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
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
