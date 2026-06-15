/*
 * XREFs of ?RemoveAt@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x18005494C
 * Callers:
 *     ??1CVADServer@@UEAA@XZ @ 0x180011374 (--1CVADServer@@UEAA@XZ.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAXXZ @ 0x180054E0C (-RemoveAll@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800AF174 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::RemoveAt(__int64 a1, __int64 *a2)
{
  __int64 result; // rax

  if ( !a2 )
    ATL::AtlThrowImpl(-2147467259);
  if ( a2 == (__int64 *)g_VADServerList )
    g_VADServerList = *a2;
  else
    *(_QWORD *)a2[1] = *a2;
  if ( a2 == (__int64 *)qword_1801D5748 )
    qword_1801D5748 = a2[1];
  else
    *(_QWORD *)(*a2 + 8) = a2[1];
  result = qword_1801D5760;
  *a2 = qword_1801D5760;
  qword_1801D5760 = (__int64)a2;
  if ( !--qword_1801D5750 )
    return ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::RemoveAll(&g_VADServerList);
  return result;
}
