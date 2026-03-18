/*
 * XREFs of ?CrossedTPDragThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@H@Z @ 0x1401B15D4
 * Callers:
 *     ?UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNode@@@Z @ 0x1401B2030 (-UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPTPEngine::CrossedTPDragThreshold(
        CPTPEngine *this,
        struct CContactState *a2,
        struct tagPOINT a3,
        int a4)
{
  unsigned int v4; // edi
  int v7; // r9d
  _DWORD *v8; // rdx
  __int64 v9; // r11
  bool v10; // r11
  _QWORD *v11; // r9
  int v12; // edx
  int v13; // r9d
  int v14; // edx
  int v15; // ebx
  unsigned int v16; // r9d
  int v17; // edx
  unsigned int v18; // ebx
  __int64 v19; // rcx

  v4 = 0;
  if ( (*((_DWORD *)this + 821) & 0x10) == 0 || *((_DWORD *)this + 699) )
  {
    v10 = 0;
  }
  else
  {
    v7 = 0;
    v8 = (_DWORD *)((char *)this + 820);
    v9 = 6LL;
    do
    {
      if ( (*(v8 - 1) & 1) != 0 && ((*v8 & 1) != 0 || (*v8 & 2) != 0) )
        ++v7;
      v8 += 82;
      --v9;
    }
    while ( v9 );
    v10 = v7 == 1;
  }
  v11 = (_QWORD *)((char *)this + 2896);
  if ( *((_DWORD *)this + 705) && *((_QWORD *)a2 + 8) > *v11 )
    goto LABEL_20;
  v12 = *(_DWORD *)a2;
  if ( (*(_DWORD *)a2 & 0x800000) == 0 || (*((_DWORD *)this + 768) & 1) != 0 && *((_QWORD *)a2 + 8) <= *v11 || !v10 )
    goto LABEL_25;
  if ( (v12 & 0x200000) != 0 )
  {
    if ( (int)HIDWORD(*((_QWORD *)a2 + 2)) >= *((_DWORD *)this + 753) )
    {
LABEL_19:
      v13 = *((_DWORD *)this + 794);
      v14 = *((_DWORD *)this + 795);
      v15 = *((_DWORD *)this + 796);
LABEL_21:
      v16 = v13 * v13;
      v17 = v14 * v14;
      v18 = v15 * v15;
      goto LABEL_27;
    }
LABEL_20:
    v13 = *((_DWORD *)this + 789);
    v14 = *((_DWORD *)this + 791);
    v15 = *((_DWORD *)this + 792);
    goto LABEL_21;
  }
  if ( (v12 & 0x400000) != 0 )
  {
    if ( (int)HIDWORD(*((_QWORD *)a2 + 2)) >= *((_DWORD *)this + 753) )
      goto LABEL_19;
    v16 = *((_DWORD *)this + 815) * *((_DWORD *)this + 815);
    v17 = *((_DWORD *)this + 816) * *((_DWORD *)this + 816);
  }
  else
  {
LABEL_25:
    v17 = *((_DWORD *)this + 780);
    v16 = *((_DWORD *)this + 779);
  }
  v18 = v17;
LABEL_27:
  v19 = *(_QWORD *)((char *)a2 + (a4 != 0 ? 0x10 : 0) + 16);
  if ( SHIDWORD(v19) >= a3.y )
    v18 = v17;
  LOBYTE(v4) = v16 * (__int64)((HIDWORD(v19) - a3.y) * (HIDWORD(v19) - a3.y))
             + (unsigned __int64)v18 * ((int)v19 - a3.x) * ((int)v19 - a3.x) >= v16 * (unsigned __int64)v18;
  return v4;
}
