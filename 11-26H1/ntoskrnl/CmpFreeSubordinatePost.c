/*
 * XREFs of CmpFreeSubordinatePost @ 0x1408D6E80
 * Callers:
 *     CmpPostApcRunDown @ 0x1408572F0 (CmpPostApcRunDown.c)
 *     CmpReportNotifyHelper @ 0x1408D6A50 (CmpReportNotifyHelper.c)
 *     CmNotifyRunDown @ 0x14094BC20 (CmNotifyRunDown.c)
 *     CmpPostApc @ 0x140AE20D0 (CmpPostApc.c)
 * Callees:
 *     CmpFreePostBlock @ 0x1408D75E0 (CmpFreePostBlock.c)
 */

_QWORD *__fastcall CmpFreeSubordinatePost(__int64 a1)
{
  _QWORD **v1; // rcx
  _QWORD *result; // rax
  __int64 v3; // rdx
  _QWORD *v4; // r9
  _QWORD *v5; // rcx
  __int64 v6; // r8
  _QWORD *v7; // rax

  v1 = (_QWORD **)(a1 + 32);
  result = *v1;
  if ( *v1 != v1 )
  {
    v3 = *result;
    v4 = result - 4;
    if ( *(_QWORD **)(*result + 8LL) != result
      || (v5 = (_QWORD *)result[1], (_QWORD *)*v5 != result)
      || (*v5 = v3, *(_QWORD *)(v3 + 8) = v5, v6 = v4[2], *(_QWORD **)(v6 + 8) != v4 + 2)
      || (v7 = (_QWORD *)v4[3], (_QWORD *)*v7 != v4 + 2) )
    {
      __fastfail(3u);
    }
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    return (_QWORD *)CmpFreePostBlock(v4);
  }
  return result;
}
