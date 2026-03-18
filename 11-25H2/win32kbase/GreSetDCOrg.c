/*
 * XREFs of GreSetDCOrg @ 0x14008B230
 * Callers:
 *     GetMonitorDC @ 0x1400A4348 (GetMonitorDC.c)
 * Callees:
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x14008B5C0 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x14008B640 (--1DCOBJA@@QEAA@XZ.c)
 */

__int64 __fastcall GreSetDCOrg(HDC a1, int a2, int a3, _OWORD *a4)
{
  unsigned int v7; // ebx
  _DWORD *v8; // rdx
  int v9; // r8d
  int v10; // ecx
  int v11; // ecx
  __int64 v12; // rdx
  int v13; // ecx
  _QWORD v15[10]; // [rsp+20h] [rbp-58h] BYREF

  v7 = 0;
  DCOBJA::DCOBJA((DCOBJA *)v15, a1);
  if ( v15[0] )
  {
    v7 = 1;
    *(_DWORD *)(v15[0] + 8 * (*(_DWORD *)(v15[0] + 40LL) & 1LL) + 1016) = a2;
    *(_DWORD *)(v15[0] + 8 * (*(_DWORD *)(v15[0] + 40LL) & 1LL) + 1020) = a3;
    v8 = (_DWORD *)v15[0];
    v9 = *(_DWORD *)(v15[0] + 40LL) & 1;
    if ( v9 )
      v10 = *(_DWORD *)(v15[0] + 1024LL);
    else
      v10 = *(_DWORD *)(v15[0] + 1016LL);
    *(_DWORD *)(v15[0] + 1192LL) = *(_DWORD *)(v15[0] + 124LL) + v10;
    if ( v9 )
      v11 = v8[257];
    else
      v11 = v8[255];
    v8[299] = v8[32] + v11;
    if ( a4 )
      *(_OWORD *)(v15[0] + 1032LL) = *a4;
    v12 = v15[0];
    v13 = *(_DWORD *)(v15[0] + 520LL);
    if ( (v13 & 1) != 0 && (v13 & 2) == 0 )
    {
      *(_DWORD *)(v15[0] + 36LL) |= 0x10u;
      *(_DWORD *)(v12 + 520) = v13 | 4;
    }
  }
  DCOBJA::~DCOBJA((DCOBJA *)v15);
  return v7;
}
