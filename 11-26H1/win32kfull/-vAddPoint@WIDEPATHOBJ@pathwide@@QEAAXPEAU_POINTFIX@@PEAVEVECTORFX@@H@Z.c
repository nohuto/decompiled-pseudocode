/*
 * XREFs of ?vAddPoint@WIDEPATHOBJ@pathwide@@QEAAXPEAU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x1401AC260
 * Callers:
 *     ?vAddJoin@WIDENER@pathwide@@IEAAXH@Z @ 0x140108988 (-vAddJoin@WIDENER@pathwide@@IEAAXH@Z.c)
 * Callees:
 *     ?vGrowPathAndAddPoint@WIDEPATHOBJ@pathwide@@IEAAXPEBU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x140107558 (-vGrowPathAndAddPoint@WIDEPATHOBJ@pathwide@@IEAAXPEBU_POINTFIX@@PEAVEVECTORFX@@H@Z.c)
 */

void __fastcall pathwide::WIDEPATHOBJ::vAddPoint(
        pathwide::WIDEPATHOBJ *this,
        struct _POINTFIX *a2,
        struct EVECTORFX *a3,
        int a4)
{
  _DWORD *v5; // rcx
  int v6; // r11d
  FIX x; // eax
  int v8; // ecx

  v5 = (_DWORD *)*((_QWORD *)this + 16);
  if ( (unsigned __int64)v5 >= *((_QWORD *)this + 17) )
  {
    pathwide::WIDEPATHOBJ::vGrowPathAndAddPoint(this, a2, a3, a4);
  }
  else
  {
    v6 = *(_DWORD *)a3;
    x = a2->x;
    if ( a4 )
    {
      *v5 = x - v6;
      v8 = a2->y - *((_DWORD *)a3 + 1);
    }
    else
    {
      *v5 = v6 + x;
      v8 = *((_DWORD *)a3 + 1) + a2->y;
    }
    *(_DWORD *)(*((_QWORD *)this + 16) + 4LL) = v8;
    *((_QWORD *)this + 16) += 8LL;
  }
}
