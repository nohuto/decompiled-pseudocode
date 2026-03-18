/*
 * XREFs of ?vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z @ 0x140137258
 * Callers:
 *     ?NtGdiGetDeviceCapsAllInternal@@YAHAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z @ 0x1400FE9C4 (-NtGdiGetDeviceCapsAllInternal@@YAHAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z.c)
 *     GreUpdateSharedDevCaps @ 0x1401C06BC (GreUpdateSharedDevCaps.c)
 * Callees:
 *     IsGetColorManagementCapsSupported @ 0x140137438 (IsGetColorManagementCapsSupported.c)
 *     ?cFonts@PDEVOBJ@@QEAAKXZ @ 0x140137470 (-cFonts@PDEVOBJ@@QEAAKXZ.c)
 *     GetColorManagementCapsWrap @ 0x1401374D8 (GetColorManagementCapsWrap.c)
 */

void __fastcall vGetDeviceCaps(struct PDEVOBJ *this, struct _DEVCAPS *a2)
{
  _DWORD *v2; // rdi
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int ColorManagementCapsWrap; // esi
  int v9; // eax

  v2 = *(_DWORD **)this;
  *(_DWORD *)a2 = *(_DWORD *)(*(_QWORD *)this + 2120LL);
  *((_DWORD *)a2 + 1) = v2[531];
  *((_DWORD *)a2 + 2) = (v2[532] + 500) / 0x3E8u;
  *((_DWORD *)a2 + 3) = (v2[533] + 500) / 0x3E8u;
  *((_DWORD *)a2 + 4) = v2[532];
  *((_DWORD *)a2 + 5) = v2[533];
  *((_DWORD *)a2 + 6) = v2[534];
  *((_DWORD *)a2 + 7) = v2[535];
  v5 = v2[536];
  *((_DWORD *)a2 + 8) = v5;
  if ( v5 == 15 )
    *((_DWORD *)a2 + 8) = 16;
  v6 = -1;
  *((_DWORD *)a2 + 9) = v2[537];
  v7 = v2[538];
  if ( v7 != -1 )
    v6 = 5 * v7;
  *((_DWORD *)a2 + 10) = v6;
  *((_DWORD *)a2 + 11) = PDEVOBJ::cFonts(this);
  ColorManagementCapsWrap = 0;
  *((_DWORD *)a2 + 12) = v2[538];
  *((_DWORD *)a2 + 13) = v2[539];
  *((_DWORD *)a2 + 34) = v2[606];
  *((_DWORD *)a2 + 14) = v2[546];
  *((_DWORD *)a2 + 15) = v2[547];
  *((_DWORD *)a2 + 16) = v2[548];
  *((_DWORD *)a2 + 17) = v2[540];
  *((_DWORD *)a2 + 18) = v2[541];
  *((_DWORD *)a2 + 19) = v2[556];
  *((_DWORD *)a2 + 20) = v2[543] + v2[544] + v2[545];
  *((_DWORD *)a2 + 21) = v2[554];
  *((_DWORD *)a2 + 22) = v2[555];
  *((_DWORD *)a2 + 23) = v2[552];
  *((_DWORD *)a2 + 24) = v2[553];
  v9 = v2[542] | 0x1807;
  *((_DWORD *)a2 + 25) = v9;
  if ( v2[531] )
    *((_DWORD *)a2 + 25) = v9 | 0x4000;
  *((_DWORD *)a2 + 26) = v2[592];
  *((_DWORD *)a2 + 27) = v2[534];
  *((_DWORD *)a2 + 28) = v2[535];
  *((_DWORD *)a2 + 29) = v2[593];
  if ( (int)IsGetColorManagementCapsSupported() >= 0 )
    ColorManagementCapsWrap = GetColorManagementCapsWrap(*(_QWORD *)this);
  *((_DWORD *)a2 + 35) = ColorManagementCapsWrap;
}
