/*
 * XREFs of ?AddHead@?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCApplication@@@Z @ 0x180027530
 * Callers:
 *     ?GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z @ 0x180019EE0 (-GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z.c)
 * Callees:
 *     ?GetFreeNode@?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@AEAAXXZ @ 0x1800275A0 (-GetFreeNode@-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@AEAAXX.c)
 */

_QWORD *__fastcall ATL::CAtlList<CApplication *,ATL::CElementTraits<CApplication *>>::AddHead(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rdi
  _QWORD *v5; // rdx
  __int64 v6; // r8
  _QWORD *result; // rax

  v2 = *a1;
  ATL::CAtlList<CApplication *,ATL::CElementTraits<CApplication *>>::GetFreeNode();
  v5 = (_QWORD *)a1[4];
  v6 = *v5;
  v5[2] = *a2;
  a1[4] = v6;
  v5[1] = 0LL;
  *v5 = v2;
  ++a1[2];
  if ( *a1 )
    *(_QWORD *)(*a1 + 8LL) = v5;
  else
    a1[1] = v5;
  result = v5;
  *a1 = v5;
  return result;
}
