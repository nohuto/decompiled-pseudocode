/*
 * XREFs of HvlpGetEncryptedDataFromSecureKernel @ 0x1405C09CC
 * Callers:
 *     HvlGetEncryptedData @ 0x1405C0510 (HvlGetEncryptedData.c)
 * Callees:
 *     HvlpEndSecurePageListIteration @ 0x1405C2188 (HvlpEndSecurePageListIteration.c)
 *     HvlpStartSecurePageListIteration @ 0x1405C2484 (HvlpStartSecurePageListIteration.c)
 *     VslGetSecurePageList @ 0x1405C2FCC (VslGetSecurePageList.c)
 */

__int64 __fastcall HvlpGetEncryptedDataFromSecureKernel(__int64 a1, __int64 a2, int a3, __int64 a4, _DWORD *a5)
{
  unsigned __int8 v9; // bl
  _DWORD *v10; // rdi
  __int64 result; // rax
  int v12; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v13[4]; // [rsp+38h] [rbp-20h] BYREF

  v13[0] = 0LL;
  v12 = 0;
  v9 = VslpReservedTransferLock.ApcStateFill[36] != 0 ? 1 : 16;
  if ( (HvlpFlags & 2) != 0 )
    v9 |= BYTE4(VslpReservedTransferLock.WaitStatus) != 0 ? 2 : 8;
  v10 = a5;
  *a5 = 0;
  if ( VslpReservedTransferLock.WaitBlockFill7[155] != v9 )
  {
    HvlpEndSecurePageListIteration(1LL, 0LL, 0LL);
    VslpReservedTransferLock.WaitBlockFill7[152] = 0;
  }
  if ( !VslpReservedTransferLock.WaitBlockFill7[152] )
  {
    result = HvlpStartSecurePageListIteration(1LL, v9, a2, a4, a3, v13);
    if ( (int)result < 0 )
      return result;
    *(_QWORD *)&VslpReservedTransferLock.ThreadFlags2 = v13[0];
    VslpReservedTransferLock.WaitBlockFill7[152] = 1;
    VslpReservedTransferLock.WaitBlockFill7[155] = v9;
  }
  LOBYTE(a5) = 0;
  result = VslGetSecurePageList(0LL, a1, &v12, &a5);
  if ( (int)result >= 0 )
  {
    *v10 = v12 << 12;
    return 0LL;
  }
  else if ( (_DWORD)result == -2147483622 )
  {
    HvlpEndSecurePageListIteration(1LL, 0LL, 0LL);
    return 3221226021LL;
  }
  return result;
}
