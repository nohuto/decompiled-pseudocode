/*
 * XREFs of HvlpGetEncryptedDataFromSecureKernel @ 0x1405C323C
 * Callers:
 *     HvlGetEncryptedData @ 0x1405C2D80 (HvlGetEncryptedData.c)
 * Callees:
 *     HvlpEndSecurePageListIteration @ 0x1405C49F8 (HvlpEndSecurePageListIteration.c)
 *     HvlpStartSecurePageListIteration @ 0x1405C4CF4 (HvlpStartSecurePageListIteration.c)
 *     VslGetSecurePageList @ 0x1405C583C (VslGetSecurePageList.c)
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
  v9 = BYTE5(VslpReservedTransferLock.Queue) != 0 ? 1 : 16;
  if ( (HvlpFlags & 2) != 0 )
    v9 |= BYTE4(VslpReservedTransferLock.Queue) != 0 ? 2 : 8;
  v10 = a5;
  *a5 = 0;
  if ( BYTE3(VslpReservedTransferLock.QueueListEntry.Flink) != v9 )
  {
    HvlpEndSecurePageListIteration(1LL, 0LL, 0LL);
    LOBYTE(VslpReservedTransferLock.QueueListEntry.Flink) = 0;
  }
  if ( !LOBYTE(VslpReservedTransferLock.QueueListEntry.Flink) )
  {
    result = HvlpStartSecurePageListIteration(1LL, v9, a2, a4, a3, v13);
    if ( (int)result < 0 )
      return result;
    *(_QWORD *)&VslpReservedTransferLock.UserAffinityPrimaryGroup = v13[0];
    LOBYTE(VslpReservedTransferLock.QueueListEntry.Flink) = 1;
    BYTE3(VslpReservedTransferLock.QueueListEntry.Flink) = v9;
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
