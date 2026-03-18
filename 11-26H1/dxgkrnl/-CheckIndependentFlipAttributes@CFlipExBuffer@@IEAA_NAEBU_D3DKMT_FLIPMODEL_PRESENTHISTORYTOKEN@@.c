/*
 * XREFs of ?CheckIndependentFlipAttributes@CFlipExBuffer@@IEAA_NAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEA_N@Z @ 0x1400390E8
 * Callers:
 *     ?NotifyPendingFlipPresent@CFlipExBuffer@@UEAAXAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEA_N1@Z @ 0x1400390A0 (-NotifyPendingFlipPresent@CFlipExBuffer@@UEAAXAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEA_N1@.c)
 * Callees:
 *     <none>
 */

bool __fastcall CFlipExBuffer::CheckIndependentFlipAttributes(
        CFlipExBuffer *this,
        const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *a2,
        bool *a3)
{
  char v6; // bl
  LONG y; // edx
  __int64 v8; // r8
  int v9; // r11d
  struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKENFLAGS::$999A3466B180106FECC6453D6FF00F87::$CDA7573B07EF0A4513B0E43B6C419F7F Value; // ecx
  int v11; // edx
  unsigned int v12; // ecx
  unsigned int v13; // edx
  float v15; // xmm5_4
  int v16; // eax
  float v17; // xmm4_4
  float v18; // xmm2_4
  float v19; // xmm3_4
  bool v20; // zf
  _DWORD *v21; // rcx
  __int64 v22; // r8

  *a3 = 0;
  if ( *((int *)this + 100) < 1 )
    return *((_DWORD *)this + 100) >= 1;
  v6 = 0;
  y = a2->ScatterBlts.Blts[11].DestinationOffset.y;
  v8 = *((_BYTE *)this + 644) != 0 ? 0x168 : 0;
  v9 = *(_DWORD *)((char *)this + v8 + 100);
  if ( *(_QWORD *)((char *)this + v8 + 100) != __PAIR64__(a2->Reserved, y)
    || *(_DWORD *)((char *)this + v8 + 108) != a2->SourceRect.left
    || *(_DWORD *)((char *)this + v8 + 112) != a2->SourceRect.top )
  {
    v6 = 1;
  }
  if ( *((_BYTE *)this + 640) )
  {
    if ( *(_DWORD *)((char *)this + v8 + 168) != a2->DestWidth
      || *(_DWORD *)((char *)this + v8 + 172) != a2->DestHeight
      || *(_DWORD *)((char *)this + v8 + 176) != a2->TargetRect.left
      || *(_DWORD *)((char *)this + v8 + 180) != a2->TargetRect.top
      || *(_DWORD *)((char *)this + v8 + 160) != a2->SourceRect.right )
    {
      goto LABEL_7;
    }
    v20 = *(_DWORD *)((char *)this + v8 + 164) == a2->SourceRect.bottom;
LABEL_49:
    if ( !v20 )
      goto LABEL_7;
    goto LABEL_9;
  }
  v15 = *(float *)((char *)this + v8 + 124);
  v16 = 3;
  if ( v15 != *(float *)&a2->TargetRect.bottom )
    goto LABEL_38;
  v17 = *(float *)((char *)this + v8 + 128);
  if ( v17 != a2->Transform[0]
    || *(float *)((char *)this + v8 + 136) != a2->Transform[2]
    || *(float *)((char *)this + v8 + 140) != a2->Transform[3] )
  {
    goto LABEL_38;
  }
  v18 = *(float *)((char *)this + v8 + 120);
  v19 = *(float *)&a2->TargetRect.right;
  if ( v18 != v19 || *(float *)((char *)this + v8 + 132) != a2->Transform[1] )
  {
    if ( v18 > 0.0
      && v19 > 0.0
      && *(float *)((char *)this + v8 + 132) > 0.0
      && a2->Transform[1] > 0.0
      && v15 == 0.0
      && v17 == 0.0 )
    {
      v16 = 2;
    }
LABEL_38:
    if ( *(_DWORD *)((char *)this + v8 + 116) != 1
      || v16 != 2
      || COERCE_INT((float)((float)(*(_DWORD *)((char *)this + v8 + 108) - v9) * *(float *)((char *)this + v8 + 120)) + 0.5) != COERCE_INT((float)((float)(a2->SourceRect.left - y) * *(float *)&a2->TargetRect.right) + 0.5)
      || COERCE_INT(
           (float)((float)(*(_DWORD *)((char *)this + v8 + 112) - *(_DWORD *)((char *)this + v8 + 104))
                 * *(float *)((char *)this + v8 + 132))
         + 0.5) != COERCE_INT((float)((float)(a2->SourceRect.top - a2->Reserved) * a2->Transform[1]) + 0.5) )
    {
      goto LABEL_7;
    }
    goto LABEL_9;
  }
  if ( v6 )
  {
    if ( *(_DWORD *)((char *)this + v8 + 108) - v9 != a2->SourceRect.left - y )
      goto LABEL_7;
    v20 = *(_DWORD *)((char *)this + v8 + 112) - *(_DWORD *)((char *)this + v8 + 104) == a2->SourceRect.top
                                                                                       - a2->Reserved;
    goto LABEL_49;
  }
LABEL_9:
  Value = (struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKENFLAGS::$999A3466B180106FECC6453D6FF00F87::$CDA7573B07EF0A4513B0E43B6C419F7F)a2->Flags.Value;
  v11 = *(_DWORD *)((char *)this + v8 + 184);
  if ( (((unsigned __int8)v11 ^ (unsigned __int8)(*(unsigned int *)&Value >> 1)) & 1) == 0
    && *(_DWORD *)((char *)this + v8 + 116) == LODWORD(a2->RevealColor[3])
    && (((unsigned __int8)v11 ^ (unsigned __int8)(*(unsigned int *)&Value >> 1)) & 4) == 0
    && *(_DWORD *)((char *)this + v8 + 84) == LODWORD(a2->Transform[4])
    && *(_DWORD *)((char *)this + v8 + 48) == ((*(unsigned int *)&Value >> 7) & 3)
    && (((unsigned __int8)v11 ^ (unsigned __int8)(*(unsigned int *)&Value >> 1)) & 8) == 0 )
  {
    if ( v6
      || *(float *)((char *)this + v8 + 68) != *(float *)&a2->PresentCount
      || *(float *)((char *)this + v8 + 72) != a2->RevealColor[0]
      || *(float *)((char *)this + v8 + 76) != a2->RevealColor[1]
      || *(float *)((char *)this + v8 + 80) != a2->RevealColor[2]
      || *(_DWORD *)((char *)this + v8 + 96) != a2->CustomDurationFlipInterval )
    {
      *a3 = 1;
    }
    goto LABEL_21;
  }
LABEL_7:
  *((_DWORD *)this + 100) = -1;
LABEL_21:
  v20 = *((_BYTE *)this + 640) == 0;
  *(_OWORD *)((char *)this + 460) = *(_OWORD *)((char *)&a2->1 + 580);
  if ( v20 )
  {
    v21 = (_DWORD *)((char *)this + 480);
    v22 = 6LL;
    do
    {
      *v21 = *(_DWORD *)((char *)v21 + (char *)a2 - (char *)this + 276);
      ++v21;
      --v22;
    }
    while ( v22 );
  }
  else
  {
    *((_OWORD *)this + 33) = *(_OWORD *)&a2->DestWidth;
    *((_DWORD *)this + 130) = a2->SourceRect.right;
    *((_DWORD *)this + 131) = a2->SourceRect.bottom;
  }
  v12 = *((_DWORD *)this + 136) & 0xFFFFFFFE | (a2->Flags.Value >> 1) & 1;
  *((_DWORD *)this + 136) = v12;
  *((_DWORD *)this + 119) = LODWORD(a2->RevealColor[3]);
  v13 = v12 & 0xFFFFFFFB | (a2->Flags.Value >> 1) & 4;
  *((_DWORD *)this + 136) = v13;
  *((_DWORD *)this + 111) = LODWORD(a2->Transform[4]);
  *((_DWORD *)this + 102) = (a2->Flags.Value >> 7) & 3;
  *((_DWORD *)this + 136) = v13 & 0xFFFFFFF7 | (a2->Flags.Value >> 1) & 8;
  *((_DWORD *)this + 107) = a2->PresentCount;
  *((_DWORD *)this + 108) = LODWORD(a2->RevealColor[0]);
  *((_DWORD *)this + 109) = LODWORD(a2->RevealColor[1]);
  *((_DWORD *)this + 110) = LODWORD(a2->RevealColor[2]);
  *((_DWORD *)this + 114) = a2->CustomDurationFlipInterval;
  *((_BYTE *)this + 644) = 1;
  return *((_DWORD *)this + 100) >= 1;
}
