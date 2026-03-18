/*
 * XREFs of ?Update@CVector3Force@@QEAA?AUD2DVector3@@MPEAVCExpressionValueStack@@@Z @ 0x1801A6C68
 * Callers:
 *     ?CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@PEAUCalculateValueResult@@@Z @ 0x180044E70 (-CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@PEAUCalculateValueResult@@@Z.c)
 * Callees:
 *     ?AdvanceToTime@CVector3ForceEvaluator@@QEAA?AUD2DVector3@@MPEAUIAccelerator@@00@Z @ 0x1801A6D70 (-AdvanceToTime@CVector3ForceEvaluator@@QEAA-AUD2DVector3@@MPEAUIAccelerator@@00@Z.c)
 *     ?Reset@CVector3ForceEvaluator@@QEAAXUD2DVector3@@0PEAUIAccelerator@@11@Z @ 0x18028EB3C (-Reset@CVector3ForceEvaluator@@QEAAXUD2DVector3@@0PEAUIAccelerator@@11@Z.c)
 */

__int64 __fastcall CVector3Force::Update(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rdi
  _QWORD *v4; // rsi
  _QWORD *v5; // r14
  __int64 v9; // xmm0_8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // [rsp+28h] [rbp-50h]
  __int64 v13; // [rsp+30h] [rbp-48h] BYREF
  int v14; // [rsp+38h] [rbp-40h]
  __int64 v15; // [rsp+40h] [rbp-38h] BYREF
  int v16; // [rsp+48h] [rbp-30h]

  v3 = (_QWORD *)(a1 + 304);
  v4 = (_QWORD *)(a1 + 296);
  v5 = (_QWORD *)(a1 + 288);
  if ( (*(_BYTE *)(a1 + 352) & 1) == 0 )
  {
    v9 = *(_QWORD *)(a1 + 328);
    v10 = *v5;
    v14 = *(_DWORD *)(a1 + 336);
    v16 = *(_DWORD *)(a1 + 324);
    v12 = *v3;
    v11 = *v4;
    v13 = v9;
    v15 = *(_QWORD *)(a1 + 316);
    ((void (__fastcall *)(__int64, __int64 *, __int64 *, __int64, __int64, __int64))CVector3ForceEvaluator::Reset)(
      a1 + 16,
      &v15,
      &v13,
      v10,
      v11,
      v12);
    *(_BYTE *)(a1 + 352) |= 1u;
  }
  CVector3ForceEvaluator::AdvanceToTime(a1 + 16, a2, a3, *v5, *v4, *v3);
  return a2;
}
