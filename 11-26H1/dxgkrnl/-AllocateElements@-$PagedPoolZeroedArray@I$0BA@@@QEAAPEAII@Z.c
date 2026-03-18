/*
 * XREFs of ?AllocateElements@?$PagedPoolZeroedArray@I$0BA@@@QEAAPEAII@Z @ 0x140306B70
 * Callers:
 *     ?IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z @ 0x140306F50 (-IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z.c)
 *     ?DxgkSignalSynchronizationObjectFromGpu2Impl@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU2@@PEAX@Z @ 0x14034C578 (-DxgkSignalSynchronizationObjectFromGpu2Impl@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU2.c)
 *     DxgkSignalSynchronizationObjectInternal @ 0x1403B6D4C (DxgkSignalSynchronizationObjectInternal.c)
 * Callees:
 *     memset @ 0x1400A5E00 (memset.c)
 */

__int64 __fastcall PagedPoolZeroedArray<unsigned int,16>::AllocateElements(__int64 a1, unsigned int a2)
{
  void *v4; // rcx
  __int64 result; // rax

  if ( a2 > 0x10 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / a2 < 4 )
    {
      return 0LL;
    }
    else
    {
      result = ExAllocatePool2(256LL, 4LL * a2, 1265072196LL);
      *(_QWORD *)a1 = result;
      *(_DWORD *)(a1 + 72) = a2;
    }
  }
  else
  {
    v4 = (void *)(a1 + 8);
    *(_QWORD *)a1 = v4;
    if ( a2 )
      memset(v4, 0, 4LL * a2);
    result = *(_QWORD *)a1;
    *(_DWORD *)(a1 + 72) = a2;
  }
  return result;
}
