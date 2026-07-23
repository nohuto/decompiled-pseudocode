/*
 * XREFs of InitSkuSessionParameters @ 0x140CB1770
 * Callers:
 *     Phase1InitializationDiscard @ 0x140CB1D40 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExIsMultiSessionSku @ 0x14083D87C (ExIsMultiSessionSku.c)
 */

__int64 InitSkuSessionParameters()
{
  __int64 result; // rax
  char v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  result = ExIsMultiSessionSku(&v1);
  if ( (int)result >= 0 && v1 )
  {
    result = MmWriteableSharedUserData;
    *(_DWORD *)(MmWriteableSharedUserData + 752) |= 0x100u;
  }
  if ( RtlpMultiUsersInSessionSupported )
  {
    result = MmWriteableSharedUserData;
    *(_DWORD *)(MmWriteableSharedUserData + 752) |= 0x200u;
  }
  if ( HIDWORD(WheapPfaLock.KernelStack) )
  {
    result = MmWriteableSharedUserData;
    *(_DWORD *)(MmWriteableSharedUserData + 752) |= 0x400u;
  }
  return result;
}
