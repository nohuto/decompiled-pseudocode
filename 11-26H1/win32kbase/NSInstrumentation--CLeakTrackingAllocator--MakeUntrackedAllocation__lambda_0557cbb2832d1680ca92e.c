/*
 * XREFs of NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_0557cbb2832d1680ca92e9237d413628__unsigned___int64_&_ @ 0x1401FC648
 * Callers:
 *     NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_0557cbb2832d1680ca92e9237d413628___ @ 0x1401FC098 (NSInstrumentation--CLeakTrackingAllocator--AllocateCommon__lambda_0557cbb2832d1680ca92e9237d4136.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_0557cbb2832d1680ca92e9237d413628__unsigned___int64___(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  int *v3; // rax
  unsigned int *v5; // r8
  int v7; // r9d
  _QWORD *v8; // rax
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 result; // rax
  __int64 v12; // [rsp+30h] [rbp-18h] BYREF
  int v13; // [rsp+38h] [rbp-10h]
  int v14; // [rsp+3Ch] [rbp-Ch]

  v3 = *(int **)(a2 + 16);
  v5 = *(unsigned int **)(a2 + 8);
  v14 = 0;
  v12 = 1LL;
  v7 = *v3;
  v8 = *(_QWORD **)a2;
  v9 = *v5;
  v10 = *a3;
  v13 = v7;
  result = ExAllocatePool3(*v8 | 2LL, v10, v9, &v12, 1);
  if ( result )
    _InterlockedIncrement64((volatile signed __int64 *)(a1 + 112));
  return result;
}
