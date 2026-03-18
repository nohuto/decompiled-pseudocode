/*
 * XREFs of DxgkEngAccumD3DPresentBounds @ 0x1401DCB20
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x14009A87C (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x14009A8C8 (--1DCOBJA@@QEAA@XZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x14009D14C (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 */

void __fastcall DxgkEngAccumD3DPresentBounds(HDC a1, int *a2)
{
  int v3; // r8d
  int v4; // r9d
  int v5; // r10d
  int v6; // r11d
  __int64 v7; // rcx
  int v8; // eax
  int v9; // r11d
  int v10; // eax
  int v11; // [rsp+20h] [rbp-60h] BYREF
  int v12; // [rsp+24h] [rbp-5Ch]
  int v13; // [rsp+28h] [rbp-58h]
  int v14; // [rsp+2Ch] [rbp-54h]
  _QWORD v15[10]; // [rsp+30h] [rbp-50h] BYREF

  DCOBJA::DCOBJA((DCOBJA *)v15, a1);
  if ( v15[0] )
  {
    v3 = a2[1];
    v4 = a2[3];
    v5 = *a2;
    v6 = a2[2];
    v11 = *a2;
    v12 = v3;
    v13 = v6;
    v14 = v4;
    if ( v3 != v4 && v5 != v6 && (*(_DWORD *)(v15[0] + 36LL) & 0xE0) != 0 )
    {
      v7 = *(_DWORD *)(v15[0] + 40LL) & 1;
      v8 = *(_DWORD *)(v15[0] + 8 * v7 + 1016);
      v9 = v6 - v8;
      v11 = v5 - v8;
      v10 = *(_DWORD *)(v15[0] + 8 * v7 + 1020);
      v12 = v3 - v10;
      v14 = v4 - v10;
      v13 = v9;
      XDCOBJ::vAccumulate((XDCOBJ *)v15, (struct ERECTL *)&v11);
    }
  }
  DCOBJA::~DCOBJA((DCOBJA *)v15);
}
