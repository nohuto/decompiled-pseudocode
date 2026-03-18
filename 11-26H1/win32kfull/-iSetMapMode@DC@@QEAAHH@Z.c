/*
 * XREFs of ?iSetMapMode@DC@@QEAAHH@Z @ 0x1401D52B8
 * Callers:
 *     NtGdiGetAndSetDCDword @ 0x1401D5070 (NtGdiGetAndSetDCDword.c)
 * Callees:
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x14006BE08 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14006EFE0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x140073214 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?vComputePageXform@DC@@QEAAXXZ @ 0x1401D5A5C (-vComputePageXform@DC@@QEAAXXZ.c)
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
  _DWORD *v12; // rdx
  _DWORD *v13; // r8
  int v14; // xmm2_4
  int *v15; // rcx
  int v16; // xmm0_4
  int v17; // xmm1_4
  __int64 v18; // rax
  int v19; // xmm0_4
  __int64 v20; // rcx
  unsigned int v21; // edx
  unsigned int v22; // ecx
  INT v23; // esi
  _BYTE v24[160]; // [rsp+20h] [rbp-B8h] BYREF
  INT *v25; // [rsp+E0h] [rbp+8h] BYREF

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
    *((_DWORD *)this + 83) = ef16;
    *((_DWORD *)this + 88) = 11;
    v9 = *((_QWORD *)this + 122);
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
    v25 = (INT *)*((_QWORD *)this + 6);
    v11 = v25;
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v24, (struct PDEVOBJ *)&v25);
    *(_DWORD *)(*((_QWORD *)this + 122) + 332LL) = v11[534];
    *(_DWORD *)(*((_QWORD *)this + 122) + 336LL) = -v11[535];
    if ( a2 == 2 )
    {
      *(_DWORD *)(*((_QWORD *)this + 122) + 316LL) = (v11[532] + 50) / 0x64u;
      v21 = (v11[533] + 50) / 0x64u;
    }
    else
    {
      if ( a2 != 3 )
      {
        switch ( a2 )
        {
          case 4:
            *(_DWORD *)(*((_QWORD *)this + 122) + 316LL) = (v11[532] + 127) / 0xFEu;
            v22 = (v11[533] + 127) / 0xFEu;
            break;
          case 5:
            *(_DWORD *)(*((_QWORD *)this + 122) + 316LL) = EngMulDiv(v11[532], 10, 254);
            v22 = EngMulDiv(v11[533], 10, 254);
            break;
          case 6:
            *(_DWORD *)(*((_QWORD *)this + 122) + 316LL) = EngMulDiv(v11[532], 144, 2540);
            *(_DWORD *)(*((_QWORD *)this + 122) + 320LL) = EngMulDiv(v11[533], 144, 2540);
            if ( *((float *)this + 111) == 0.0 )
            {
              DC::vComputePageXform(this);
              v12 = (_DWORD *)((char *)this + 432);
              v13 = (_DWORD *)((char *)this + 428);
              v14 = *((_DWORD *)this + 107);
              v15 = (int *)((char *)this + 448);
              *((_DWORD *)this + 112) = *((_DWORD *)this + 108);
              *((_DWORD *)this + 111) = v14;
            }
            else
            {
              v13 = (_DWORD *)((char *)this + 428);
              v15 = (int *)((char *)this + 448);
              v12 = (_DWORD *)((char *)this + 432);
            }
            *(_DWORD *)(*((_QWORD *)this + 122) + 104LL) = 6;
            v16 = *((_DWORD *)this + 111);
            *(_DWORD *)(*((_QWORD *)this + 122) + 392LL) = v16;
            v17 = *v15;
            v18 = *((_QWORD *)this + 122);
            *v13 = v16;
            *(_DWORD *)(v18 + 396) = v17;
            v19 = *((_DWORD *)this + 111);
            *v12 = v17;
            *((_DWORD *)this + 80) = v19;
            *((_DWORD *)this + 83) = *v15;
            *((_DWORD *)this + 88) = 9;
            v20 = *((_QWORD *)this + 122);
            *(_OWORD *)(v20 + 32) = *((_OWORD *)this + 20);
            *(_OWORD *)(v20 + 48) = *((_OWORD *)this + 21);
            *(_DWORD *)(v20 + 64) = *((_DWORD *)this + 88);
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
            DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v24);
            goto LABEL_6;
          default:
            DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v24);
            return 0LL;
        }
        *(_DWORD *)(*((_QWORD *)this + 122) + 320LL) = v22;
LABEL_41:
        *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) |= 0x40u;
        *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) &= 0xFFFFF3FF;
        goto LABEL_23;
      }
      *(_DWORD *)(*((_QWORD *)this + 122) + 316LL) = (v11[532] + 5) / 0xAu;
      v21 = (v11[533] + 5) / 0xAu;
    }
    *(_DWORD *)(*((_QWORD *)this + 122) + 320LL) = v21;
    goto LABEL_41;
  }
  v5[83] = v10;
  *(_DWORD *)(*((_QWORD *)this + 122) + 336LL) = -*(_DWORD *)(*((_QWORD *)this + 122) + 412LL);
  switch ( a2 )
  {
    case 2:
      *(_DWORD *)(*((_QWORD *)this + 122) + 316LL) = 10 * *(_DWORD *)(*((_QWORD *)this + 122) + 416LL);
      *(_DWORD *)(*((_QWORD *)this + 122) + 320LL) = 10 * *(_DWORD *)(*((_QWORD *)this + 122) + 420LL);
      goto LABEL_53;
    case 3:
      *(_DWORD *)(*((_QWORD *)this + 122) + 316LL) = 100 * *(_DWORD *)(*((_QWORD *)this + 122) + 416LL);
      *(_DWORD *)(*((_QWORD *)this + 122) + 320LL) = 100 * *(_DWORD *)(*((_QWORD *)this + 122) + 420LL);
      goto LABEL_53;
    case 4:
      v23 = 1000;
      goto LABEL_49;
    case 5:
      v23 = 10000;
      goto LABEL_49;
    case 6:
      v23 = 14400;
LABEL_49:
      *(_DWORD *)(*((_QWORD *)this + 122) + 316LL) = EngMulDiv(*(_DWORD *)(*((_QWORD *)this + 122) + 416LL), v23, 254);
      *(_DWORD *)(*((_QWORD *)this + 122) + 320LL) = EngMulDiv(*(_DWORD *)(*((_QWORD *)this + 122) + 420LL), v23, 254);
LABEL_53:
      *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) |= 0x40u;
      *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) &= 0xFFFFF3FF;
      goto LABEL_54;
  }
  if ( a2 != 7 )
    return 0LL;
  *(_DWORD *)(*((_QWORD *)this + 122) + 316LL) = 10 * *(_DWORD *)(*((_QWORD *)this + 122) + 416LL);
  *(_DWORD *)(*((_QWORD *)this + 122) + 320LL) = 10 * *(_DWORD *)(*((_QWORD *)this + 122) + 420LL);
  *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) &= 0xFFFFF7BF;
  *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) |= 0x400u;
LABEL_54:
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
