/*
 * XREFs of ?bGrowPath@WIDEPATHOBJ@pathwide@@IEAAHXZ @ 0x140109B28
 * Callers:
 *     ?vGrowPathAndAddPoint@WIDEPATHOBJ@pathwide@@IEAAXPEBU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x140107558 (-vGrowPathAndAddPoint@WIDEPATHOBJ@pathwide@@IEAAXPEBU_POINTFIX@@PEAVEVECTORFX@@H@Z.c)
 *     ?bPenFlatten@WIDEPENOBJ@pathwide@@AEAAHPEAU_POINTFIX@@@Z @ 0x140107C90 (-bPenFlatten@WIDEPENOBJ@pathwide@@AEAAHPEAU_POINTFIX@@@Z.c)
 *     ?bBeginFigure@WIDEPATHOBJ@pathwide@@QEAAHXZ @ 0x140109AD8 (-bBeginFigure@WIDEPATHOBJ@pathwide@@QEAAHXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall pathwide::WIDEPATHOBJ::bGrowPath(pathwide::WIDEPATHOBJ *this)
{
  __int64 v2; // rdx
  __int64 result; // rax
  unsigned __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // r8
  _QWORD *v7; // rdx
  __int64 v8; // rax
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rcx

  v2 = *(_QWORD *)(*((_QWORD *)this + 1) + 24LL);
  if ( !v2
    || (v9 = *(_QWORD *)(v2 + 8) + 24LL, v10 = v2 + *(unsigned int *)(v2 + 16), v10 <= v9)
    || (v4 = (__int64)(v10 - v9) >> 3, (unsigned int)v4 < 8) )
  {
    result = (__int64)newpathalloc();
    v2 = result;
    if ( !result )
      return result;
    *(_QWORD *)result = *(_QWORD *)(*((_QWORD *)this + 1) + 24LL);
    *(_QWORD *)(*((_QWORD *)this + 1) + 24LL) = result;
    v4 = ((unsigned __int64)(unsigned int)(result + *(_DWORD *)(result + 16) - *(_DWORD *)(result + 8)) - 24) >> 3;
  }
  v5 = *((_QWORD *)this + 1);
  v6 = *(_QWORD *)(v2 + 8);
  v7 = *(_QWORD **)(v5 + 40);
  if ( v7 )
  {
    *v7 = v6;
    v8 = *(_QWORD *)(*((_QWORD *)this + 1) + 40LL);
  }
  else
  {
    *(_QWORD *)(v5 + 32) = v6;
    v8 = 0LL;
  }
  *(_QWORD *)(v6 + 8) = v8;
  *(_QWORD *)(*((_QWORD *)this + 1) + 40LL) = v6;
  *(_QWORD *)v6 = 0LL;
  *(_DWORD *)(v6 + 20) = 0;
  *((_QWORD *)this + 16) = v6 + 24;
  result = 1LL;
  *((_QWORD *)this + 17) = v6 + 8 * ((unsigned int)v4 + 3LL);
  return result;
}
