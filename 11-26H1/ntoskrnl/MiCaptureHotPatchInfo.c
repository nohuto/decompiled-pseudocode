/*
 * XREFs of MiCaptureHotPatchInfo @ 0x1408758FC
 * Callers:
 *     MiApplyImageHotPatchRequest @ 0x140874C78 (MiApplyImageHotPatchRequest.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404DEB18 (MiModeCopyExceptionFilterEx.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     RtlFindHotPatchBaseMachine @ 0x1408B147C (RtlFindHotPatchBaseMachine.c)
 *     RtlFindHotPatchInformation @ 0x1408B14E4 (RtlFindHotPatchInformation.c)
 *     RtlValidateHotPatchBase @ 0x1408B17C8 (RtlValidateHotPatchBase.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCaptureHotPatchInfo(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        unsigned __int16 a5,
        _QWORD *a6,
        _QWORD *a7)
{
  char *v9; // rdi
  unsigned __int64 v10; // r14
  unsigned int v11; // ebx
  __int64 HotPatchInformation; // rax
  const void *v13; // rbx
  ULONG_PTR v14; // rsi
  int CurrentProcessorColor; // eax
  char *PoolMm; // rax
  _DWORD *HotPatchBaseMachine; // rsi

  *a7 = 0LL;
  v9 = 0LL;
  v10 = (unsigned __int64)*(unsigned int *)(a1 + 8) << 12;
  if ( v10 > 0xFFFFFFFF )
  {
LABEL_2:
    v11 = -1073741701;
    goto LABEL_12;
  }
  HotPatchInformation = RtlFindHotPatchInformation(*(PVOID *)a1);
  v13 = (const void *)HotPatchInformation;
  if ( HotPatchInformation )
  {
    v14 = *(unsigned int *)(HotPatchInformation + 4);
    CurrentProcessorColor = MmGetCurrentProcessorColor();
    PoolMm = (char *)ExAllocatePoolMm(64LL, v14, 1313427528, CurrentProcessorColor | 0x80000000);
    v9 = PoolMm;
    if ( PoolMm )
    {
      memmove(PoolMm, v13, v14);
      HotPatchBaseMachine = (_DWORD *)RtlFindHotPatchBaseMachine(v9, a5);
      if ( (unsigned __int8)RtlValidateHotPatchBase((_DWORD)v9, (_DWORD)HotPatchBaseMachine, a2, v10) )
      {
        if ( HotPatchBaseMachine[3] == a3 && HotPatchBaseMachine[2] == a4 )
        {
          *a7 = &v9[HotPatchBaseMachine[6]];
          *a6 = v9;
          v9 = 0LL;
          v11 = 0;
        }
        else
        {
          v11 = -1073741735;
        }
        goto LABEL_12;
      }
      goto LABEL_2;
    }
    v11 = -1073741670;
  }
  else
  {
    v11 = -1073741701;
  }
LABEL_12:
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  return v11;
}
