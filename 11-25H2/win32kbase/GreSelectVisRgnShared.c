/*
 * XREFs of GreSelectVisRgnShared @ 0x140089820
 * Callers:
 *     _GetDCEx @ 0x1400A2500 (_GetDCEx.c)
 *     GetMonitorDC @ 0x1400A4348 (GetMonitorDC.c)
 *     NtUserGetDC @ 0x14016FF60 (NtUserGetDC.c)
 * Callees:
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x14008B5C0 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x14008B640 (--1DCOBJA@@QEAA@XZ.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x14008B9F0 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 */

__int64 __fastcall GreSelectVisRgnShared(HDC a1, __int64 a2, unsigned int a3)
{
  unsigned int v5; // ebx
  _QWORD v7[10]; // [rsp+20h] [rbp-58h] BYREF

  DCOBJA::DCOBJA((DCOBJA *)v7, a1);
  v5 = 0;
  if ( v7[0] )
    v5 = GreSelectVisRgnInternal(v7, a2, a3);
  DCOBJA::~DCOBJA((DCOBJA *)v7);
  return v5;
}
