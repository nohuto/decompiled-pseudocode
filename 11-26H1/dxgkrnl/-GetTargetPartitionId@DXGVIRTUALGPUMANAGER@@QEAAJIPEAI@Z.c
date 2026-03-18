/*
 * XREFs of ?GetTargetPartitionId@DXGVIRTUALGPUMANAGER@@QEAAJIPEAI@Z @ 0x1403D9950
 * Callers:
 *     ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z @ 0x14021CF60 (-CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z.c)
 *     ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_PARAV@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z @ 0x1403D9410 (-CreateVirtualGpu@DXGVIRTUALGPUMANAGER_PARAV@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGVIRTUALGPUMANAGER::GetTargetPartitionId(DXGVIRTUALGPUMANAGER *this, __int64 a2, unsigned int *a3)
{
  unsigned int v3; // r9d
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // [rsp+28h] [rbp-30h]

  v3 = *((_DWORD *)this + 3);
  if ( (_DWORD)a2 == 0xFFFF )
  {
    a2 = 0LL;
    if ( v3 )
    {
      v7 = *((_QWORD *)this + 3);
      do
      {
        if ( !*(_QWORD *)(v7 + 8 * a2) )
          break;
        a2 = (unsigned int)(a2 + 1);
      }
      while ( (unsigned int)a2 < v3 );
    }
    if ( (_DWORD)a2 == v3 )
    {
      WdLogSingleEntry0(4LL);
      result = 2147483674LL;
      WdLogGlobalForLineNumber = 3032;
      return result;
    }
  }
  else if ( (unsigned int)a2 >= v3 )
  {
    v5 = (unsigned int)a2;
    WdLogSingleEntry2(2LL, (unsigned int)a2, v3);
    v8 = *((unsigned int *)this + 3);
    WdLogGlobalForLineNumber = 3014;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"PartitionId is greater that the number of available GPU partitions: 0x%I64x 0x%I64x",
      v5,
      v8,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  *a3 = a2;
  return 0LL;
}
