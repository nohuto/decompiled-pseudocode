/*
 * XREFs of Amd64RemoveProfileSource @ 0x1405A72D0
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140211F80 (KeQueryActiveProcessorCountEx.c)
 *     HalpReleaseHighLevelLock @ 0x14030FAAC (HalpReleaseHighLevelLock.c)
 *     HalpMmAllocCtxFree @ 0x14035ADA4 (HalpMmAllocCtxFree.c)
 *     KeCheckProcessorAffinityEx @ 0x140421930 (KeCheckProcessorAffinityEx.c)
 *     HalpAcquireHighLevelLock @ 0x140433FFC (HalpAcquireHighLevelLock.c)
 *     HalpRemoveProfileSourceFromList @ 0x140582CD8 (HalpRemoveProfileSourceFromList.c)
 *     Amd64IsProfileBeingUsed @ 0x1405A6C9C (Amd64IsProfileBeingUsed.c)
 */

__int64 __fastcall Amd64RemoveProfileSource(__int64 a1)
{
  unsigned int v1; // edi
  unsigned int v2; // esi
  __int64 result; // rax
  ULONG ActiveProcessorCount; // ebp
  unsigned int i; // ebx
  unsigned __int8 v7; // di
  __int64 v8; // rdx
  char v9; // bl
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_DWORD *)a1;
  v2 = 0;
  v13 = 0LL;
  if ( v1 <= 0x32 )
    return 3221225659LL;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  for ( i = 0; i < ActiveProcessorCount; ++i )
  {
    if ( (unsigned int)KeCheckProcessorAffinityEx((unsigned __int16 *)(a1 + 8), i) )
    {
      result = Amd64IsProfileBeingUsed(0, i, v1);
      if ( (int)result < 0 )
        return result;
      result = Amd64IsProfileBeingUsed(100, i, v1);
      if ( (int)result < 0 )
        return result;
      result = Amd64IsProfileBeingUsed(101, i, v1);
      v2 = result;
      if ( (int)result < 0 )
        return result;
    }
  }
  v7 = HalpAcquireHighLevelLock(&HalpProfileSourceDescriptorListLock);
  v9 = HalpRemoveProfileSourceFromList((int *)a1, v8, &v13);
  HalpReleaseHighLevelLock(&HalpProfileSourceDescriptorListLock, v7);
  if ( v9 )
  {
    v11 = v13;
    HalpMmAllocCtxFree(v10, *(_QWORD *)(v13 + 296));
    HalpMmAllocCtxFree(v12, v11);
    --HalpProfileSourceDescriptorCount;
  }
  else if ( !v13 )
  {
    return (unsigned int)-1073741823;
  }
  return v2;
}
