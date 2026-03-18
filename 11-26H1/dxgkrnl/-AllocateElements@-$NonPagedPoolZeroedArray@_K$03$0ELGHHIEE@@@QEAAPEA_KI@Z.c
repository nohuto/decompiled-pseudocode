/*
 * XREFs of ?AllocateElements@?$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z @ 0x1400334E0
 * Callers:
 *     ?DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@HPEAX1@Z @ 0x14034BD5C (-DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 *     DxgkSignalSynchronizationObjectFromCpu @ 0x14034D2A0 (DxgkSignalSynchronizationObjectFromCpu.c)
 * Callees:
 *     memset @ 0x1400A5E00 (memset.c)
 */

__int64 __fastcall NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::AllocateElements(
        __int64 a1,
        unsigned int a2)
{
  void *v4; // rcx
  __int64 result; // rax

  if ( a2 > 4 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / a2 < 8 )
    {
      return 0LL;
    }
    else
    {
      result = ExAllocatePool2(64LL, 8LL * a2, 1265072196LL);
      *(_QWORD *)a1 = result;
      *(_DWORD *)(a1 + 40) = a2;
    }
  }
  else
  {
    v4 = (void *)(a1 + 8);
    *(_QWORD *)a1 = v4;
    if ( a2 )
      memset(v4, 0, 8LL * a2);
    result = *(_QWORD *)a1;
    *(_DWORD *)(a1 + 40) = a2;
  }
  return result;
}
