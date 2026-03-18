/*
 * XREFs of ?iSetMapMode@DC@@QEAAHH@Z @ 0x1401A4FF8
 * Callers:
 *     NtGdiGetAndSetDCDword @ 0x1401A4DE0 (NtGdiGetAndSetDCDword.c)
 * Callees:
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x14007E404 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x14008A810 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14008A870 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vComputePageXform@DC@@QEAAXXZ @ 0x14033E738 (-vComputePageXform@DC@@QEAAXXZ.c)
 */

__int64 __fastcall DC::iSetMapMode(DC *this, int a2)
{
  unsigned int v2; // r14d
  _DWORD *v5; // rcx
  unsigned int v6; // r15d
  __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // eax
  INT *v11; // rsi
  unsigned int v12; // edx
  unsigned int v13; // ecx
  int v14; // xmm0_4
  __int64 v15; // rax
  int v16; // xmm1_4
  __int64 v17; // rcx
  __int128 v18; // xmm0
  int v19; // xmm2_4
  INT v20; // esi
  _BYTE v21[144]; // [rsp+20h] [rbp-A8h] BYREF
  INT *v22; // [rsp+D0h] [rbp+8h] BYREF

  v2 = 0;
  if ( a2 != 8 )
  {
    v2 = *(_DWORD *)(*((_QWORD *)this + 122) + 108LL);
    if ( (v2 & 7) != 0 )
      DC::dwSetLayout(this, -1, 0);
  }
  v5 = (_DWORD *)*((_QWORD *)this + 122);
  v6 = v5[26];
  if ( a2 == v6 && a2 != 7 )
    goto LABEL_8;
  if ( a2 == 1 )
  {
    v5[79] = 1;
    *(_DWORD *)(*((_QWORD *)this + 122) + 320LL) = 1;
    *(_DWORD *)(*((_QWORD *)this + 122) + 332LL) = 1;
    *(_DWORD *)(*((_QWORD *)this + 122) + 336LL) = 1;
    *(_DWORD *)(*((_QWORD *)this + 122) + 104LL) = 1;
    *(_DWORD *)(*((_QWORD *)this + 122) + 392LL) = ef16;
    v8 = *((_QWORD *)this + 122);
    *((_DWORD *)this + 107) = ef16;
    *(_DWORD *)(v8 + 396) = ef16;
    *((_DWORD *)this + 108) = ef16;
    *((_DWORD *)this + 80) = ef16;
    v9 = *((_QWORD *)this + 122);
    *((_DWORD *)this + 83) = ef16;
    *((_DWORD *)this + 88) = 11;
    *(_OWORD *)(v9 + 32) = *((_OWORD *)this + 20);
    *(_OWORD *)(v9 + 48) = *((_OWORD *)this + 21);
    *(_DWORD *)(v9 + 64) = *((_DWORD *)this + 88);
    *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) |= 0x3090u;
    *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) &= 0xFFFFF8BF;
    goto LABEL_6;
  }
  if ( a2 == 8 )
  {
    v5[26] = 8;
    *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) &= 0xFFFFF7BF;
    *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) |= 0x400u;
    goto LABEL_6;
  }
  if ( (unsigned int)(a2 - 1) > 7 )
    return 0LL;
  v10 = v5[102];
  if ( !v10 )
  {
    v22 = (INT *)*((_QWORD *)this + 6);
    v11 = v22;
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v21, (struct PDEVOBJ *)&v22);
    *(_DWORD *)(*((_QWORD *)this + 122) + 332LL) = v11[534];
    *(_DWORD *)(*((_QWORD *)this + 122) + 336LL) = -v11[535];
    if ( a2 == 2 )
    {
      *(_DWORD *)(*((_QWORD *)this + 122) + 316LL) = (v11[532] + 50) / 0x64u;
      v12 = (v11[533] + 50) / 0x64u;
    }
    else
    {
      if ( a2 != 3 )
      {
        switch ( a2 )
        {
          case 4:
            *(_DWORD *)(*((_QWORD *)this + 122) + 316LL) = (v11[532] + 127) / 0xFEu;
            v13 = (v11[533] + 127) / 0xFEu;
            break;
          case 5:
            *(_DWORD *)(*((_QWORD *)this + 122) + 316LL) = EngMulDiv(v11[532], 10, 254);
            v13 = EngMulDiv(v11[533], 10, 254);
            break;
          case 6:
            *(_DWORD *)(*((_QWORD *)this + 122) + 316LL) = EngMulDiv(v11[532], 144, 2540);
            *(_DWORD *)(*((_QWORD *)this + 122) + 320LL) = EngMulDiv(v11[533], 144, 2540);
            if ( *((float *)this + 111) == 0.0 )
            {
              DC::vComputePageXform(this);
              v19 = *((_DWORD *)this + 107);
              *((_DWORD *)this + 112) = *((_DWORD *)this + 108);
              *((_DWORD *)this + 111) = v19;
            }
            *(_DWORD *)(*((_QWORD *)this + 122) + 104LL) = 6;
            v14 = *((_DWORD *)this + 111);
            *(_DWORD *)(*((_QWORD *)this + 122) + 392LL) = v14;
            v15 = *((_QWORD *)this + 122);
            v16 = *((_DWORD *)this + 112);
            *((_DWORD *)this + 107) = v14;
            *(_DWORD *)(v15 + 396) = v16;
            v17 = *((_QWORD *)this + 122);
            *((_DWORD *)this + 80) = *((_DWORD *)this + 111);
            *((_DWORD *)this + 83) = *((_DWORD *)this + 112);
            *((_DWORD *)this + 88) = 9;
            v18 = *((_OWORD *)this + 20);
            *((_DWORD *)this + 108) = v16;
            *(_OWORD *)(v17 + 32) = v18;
            *(_OWORD *)(v17 + 48) = *((_OWORD *)this + 21);
            *(_DWORD *)(v17 + 64) = *((_DWORD *)this + 88);
            *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) |= 0x22D0u;
            *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) &= 0xFFFFE2FF;
            goto LABEL_24;
          case 7:
            *(_DWORD *)(*((_QWORD *)this + 122) + 316LL) = (v11[532] + 50) / 0x64u;
            *(_DWORD *)(*((_QWORD *)this + 122) + 320LL) = (v11[533] + 50) / 0x64u;
            *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) &= 0xFFFFF7BF;
            *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) |= 0x400u;
LABEL_23:
            *(_DWORD *)(*((_QWORD *)this + 122) + 104LL) = a2;
            *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) |= 0x4090u;
LABEL_24:
            DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v21);
            goto LABEL_6;
          default:
            DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v21);
            return 0LL;
        }
        *(_DWORD *)(*((_QWORD *)this + 122) + 320LL) = v13;
LABEL_38:
        *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) |= 0x40u;
        *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) &= 0xFFFFF3FF;
        goto LABEL_23;
      }
      *(_DWORD *)(*((_QWORD *)this + 122) + 316LL) = (v11[532] + 5) / 0xAu;
      v12 = (v11[533] + 5) / 0xAu;
    }
    *(_DWORD *)(*((_QWORD *)this + 122) + 320LL) = v12;
    goto LABEL_38;
  }
  v5[83] = v10;
  *(_DWORD *)(*((_QWORD *)this + 122) + 336LL) = -*(_DWORD *)(*((_QWORD *)this + 122) + 412LL);
  switch ( a2 )
  {
    case 2:
      *(_DWORD *)(*((_QWORD *)this + 122) + 316LL) = 10 * *(_DWORD *)(*((_QWORD *)this + 122) + 416LL);
      *(_DWORD *)(*((_QWORD *)this + 122) + 320LL) = 10 * *(_DWORD *)(*((_QWORD *)this + 122) + 420LL);
      goto LABEL_52;
    case 3:
      *(_DWORD *)(*((_QWORD *)this + 122) + 316LL) = 100 * *(_DWORD *)(*((_QWORD *)this + 122) + 416LL);
      *(_DWORD *)(*((_QWORD *)this + 122) + 320LL) = 100 * *(_DWORD *)(*((_QWORD *)this + 122) + 420LL);
      goto LABEL_52;
    case 4:
      v20 = 1000;
      goto LABEL_48;
    case 5:
      v20 = 10000;
      goto LABEL_48;
    case 6:
      v20 = 14400;
LABEL_48:
      *(_DWORD *)(*((_QWORD *)this + 122) + 316LL) = EngMulDiv(*(_DWORD *)(*((_QWORD *)this + 122) + 416LL), v20, 254);
      *(_DWORD *)(*((_QWORD *)this + 122) + 320LL) = EngMulDiv(*(_DWORD *)(*((_QWORD *)this + 122) + 420LL), v20, 254);
LABEL_52:
      *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) |= 0x40u;
      *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) &= 0xFFFFF3FF;
      goto LABEL_53;
  }
  if ( a2 != 7 )
    return 0LL;
  *(_DWORD *)(*((_QWORD *)this + 122) + 316LL) = 10 * *(_DWORD *)(*((_QWORD *)this + 122) + 416LL);
  *(_DWORD *)(*((_QWORD *)this + 122) + 320LL) = 10 * *(_DWORD *)(*((_QWORD *)this + 122) + 420LL);
  *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) &= 0xFFFFF7BF;
  *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) |= 0x400u;
LABEL_53:
  *(_DWORD *)(*((_QWORD *)this + 122) + 104LL) = a2;
  *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) |= 0x4090u;
LABEL_6:
  if ( (v2 & 7) != 0 )
    DC::dwSetLayout(this, -1, v2);
LABEL_8:
  if ( (*((_DWORD *)this + 130) & 1) != 0 )
    DC::vMarkTransformDirty(this);
  return v6;
}
