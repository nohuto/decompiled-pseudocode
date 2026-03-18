/*
 * XREFs of ?CrossedTPDragThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@H@Z @ 0x140193790
 * Callers:
 *     ?UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNode@@@Z @ 0x140194508 (-UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNo.c)
 * Callees:
 *     Feature_PTPButtonUpdates__private_IsEnabledDeviceUsageNoInline @ 0x140225560 (Feature_PTPButtonUpdates__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall CPTPEngine::CrossedTPDragThreshold(
        CPTPEngine *this,
        struct CContactState *a2,
        struct tagPOINT a3,
        int a4)
{
  unsigned int v5; // ebp
  int v6; // edx
  CPTPEngine *v9; // rsi
  int v10; // r8d
  __int64 v11; // r9
  int v12; // eax
  bool v13; // r15
  bool v14; // di
  int IsEnabledDeviceUsageNoInline; // eax
  bool v16; // dl
  __int64 v17; // rcx
  int v18; // r8d
  int v19; // edx
  int v20; // r9d
  unsigned int v21; // r8d
  unsigned int v22; // edx
  int v23; // r9d
  __int64 v24; // rax

  v5 = 0;
  v6 = *((_DWORD *)this + 824);
  v9 = this;
  if ( (v6 & 0x10) == 0 || *((_DWORD *)this + 699) )
  {
    v13 = 0;
  }
  else
  {
    v10 = 0;
    v11 = 6LL;
    this = (CPTPEngine *)((char *)this + 816);
    do
    {
      if ( (*(_DWORD *)this & 1) != 0 )
      {
        v12 = *((_DWORD *)this + 1);
        if ( (v12 & 2) != 0 || (v12 & 4) != 0 )
          ++v10;
      }
      this = (CPTPEngine *)((char *)this + 328);
      --v11;
    }
    while ( v11 );
    v13 = v10 == 1;
  }
  v14 = (v6 & 0x40) != 0;
  IsEnabledDeviceUsageNoInline = Feature_PTPButtonUpdates__private_IsEnabledDeviceUsageNoInline(this);
  v16 = 0;
  if ( !IsEnabledDeviceUsageNoInline )
    v16 = v14;
  if ( *((_DWORD *)v9 + 705) && *((_QWORD *)a2 + 8) > *((_QWORD *)v9 + 362) )
    goto LABEL_24;
  v17 = *(unsigned int *)a2;
  if ( (v17 & 0x800000) == 0 || (*((_DWORD *)v9 + 770) & 1) != 0 && *((_QWORD *)a2 + 8) <= *((_QWORD *)v9 + 362) )
    goto LABEL_33;
  if ( v16 && (int)HIDWORD(*((_QWORD *)a2 + 2)) >= *((_DWORD *)v9 + 755) )
    goto LABEL_20;
  if ( !v13 )
    goto LABEL_33;
  if ( (v17 & 0x200000) != 0 )
  {
    if ( (unsigned int)Feature_PTPButtonUpdates__private_IsEnabledDeviceUsageNoInline(v17)
      && (int)HIDWORD(*((_QWORD *)a2 + 2)) >= *((_DWORD *)v9 + 755) )
    {
LABEL_20:
      v18 = *((_DWORD *)v9 + 797);
      v19 = *((_DWORD *)v9 + 798);
      v20 = *((_DWORD *)v9 + 799);
LABEL_25:
      v21 = v18 * v18;
      v22 = v19 * v19;
      v23 = v20 * v20;
      goto LABEL_35;
    }
LABEL_24:
    v18 = *((_DWORD *)v9 + 792);
    v19 = *((_DWORD *)v9 + 794);
    v20 = *((_DWORD *)v9 + 795);
    goto LABEL_25;
  }
  if ( (v17 & 0x400000) != 0 )
  {
    if ( (unsigned int)Feature_PTPButtonUpdates__private_IsEnabledDeviceUsageNoInline(v17)
      && (int)HIDWORD(*((_QWORD *)a2 + 2)) >= *((_DWORD *)v9 + 755) )
    {
      goto LABEL_20;
    }
    v21 = *((_DWORD *)v9 + 818) * *((_DWORD *)v9 + 818);
    v22 = *((_DWORD *)v9 + 819) * *((_DWORD *)v9 + 819);
  }
  else
  {
LABEL_33:
    v22 = *((_DWORD *)v9 + 782);
    v21 = *((_DWORD *)v9 + 781);
  }
  v23 = v22;
LABEL_35:
  if ( a4 )
    v24 = *((_QWORD *)a2 + 4);
  else
    v24 = *((_QWORD *)a2 + 2);
  if ( SHIDWORD(v24) < a3.y )
    v22 = v23;
  LOBYTE(v5) = v21 * (__int64)((HIDWORD(v24) - a3.y) * (HIDWORD(v24) - a3.y))
             + (unsigned __int64)v22 * ((int)v24 - a3.x) * ((int)v24 - a3.x) >= v21 * (unsigned __int64)v22;
  return v5;
}
