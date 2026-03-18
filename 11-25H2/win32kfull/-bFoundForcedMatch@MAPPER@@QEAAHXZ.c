/*
 * XREFs of ?bFoundForcedMatch@MAPPER@@QEAAHXZ @ 0x1400B8694
 * Callers:
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAUPARAMETERS@MAPPER@@PEAUtagENUMLOGFONTEXDVW@@PEBGKPEAKPEAU_POINTL@@3@Z @ 0x1400B7DD8 (-ppfeGetAMatch@@YAPEAVPFE@@AEAUPARAMETERS@MAPPER@@PEAUtagENUMLOGFONTEXDVW@@PEBGKPEAKPEAU_POINTL@.c)
 * Callees:
 *     ?pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z @ 0x1400B8CB0 (-pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z.c)
 *     ?pvSimBold@IFIOBJ@@QEAAPEAXXZ @ 0x140106768 (-pvSimBold@IFIOBJ@@QEAAPEAXXZ.c)
 *     ?bSimItalic@IFIOBJ@@QEAAHXZ @ 0x140106A4C (-bSimItalic@IFIOBJ@@QEAAHXZ.c)
 *     ?bCalculateWishCell@MAPPER@@AEAAHXZ @ 0x1401ACDEC (-bCalculateWishCell@MAPPER@@AEAAHXZ.c)
 *     ?ppfeGetPFEFromUFIInternal@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@HH@Z @ 0x1401CF0B4 (-ppfeGetPFEFromUFIInternal@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@HH@Z.c)
 */

__int64 __fastcall MAPPER::bFoundForcedMatch(MAPPER *this, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  struct _UNIVERSAL_FONT_ID *v5; // rcx
  int v6; // eax
  __int64 SessionState; // rax
  HDEV v8; // rdx
  struct PFF *v9; // rax
  char *v10; // rax
  _QWORD *v11; // rcx
  struct PFE *PFEFromUFIInternal; // rdi
  __int64 v13; // rdx
  __int64 v14; // rax
  char v15; // r11
  __int64 v16; // r8
  int v17; // edx
  __int64 v18; // r10
  int v19; // r9d
  int v20; // esi
  int v21; // r10d
  int v22; // r9d
  unsigned int v23; // ecx
  unsigned int v24; // r11d
  int v25; // eax
  int v26; // r8d
  int v27; // eax
  unsigned int v28; // eax
  __int64 result; // rax
  int v30; // r9d
  int v31; // r10d
  int v32; // eax
  unsigned int v33; // eax
  unsigned int v34; // r8d
  int v35; // ecx
  int v36; // ecx
  unsigned int v37; // eax
  __int64 v38[7]; // [rsp+20h] [rbp-38h] BYREF

  v3 = *(_QWORD *)this;
  if ( !*(_BYTE *)(*(_QWORD *)this + 68LL) )
    return 0LL;
  v5 = (struct _UNIVERSAL_FONT_ID *)(v3 + 44);
  v6 = *(_DWORD *)(v3 + 44);
  if ( !v6 )
    return 0LL;
  if ( v6 == 1 )
  {
    SessionState = W32GetSessionState(v5, a2, a3);
    v8 = **(HDEV **)this;
    v38[0] = *(_QWORD *)(*(_QWORD *)(SessionState + 96) + 20424LL);
    v9 = DEVICE_PFTOBJ::pPFFGet((DEVICE_PFTOBJ *)v38, v8, 0LL);
    if ( v9 )
    {
      v10 = (char *)v9 + 120;
      if ( v10 )
      {
        v11 = 0LL;
        PFEFromUFIInternal = 0LL;
        v13 = *(_QWORD *)(*(_QWORD *)v10 + 24LL);
        if ( v13 )
        {
          v11 = *(_QWORD **)(v13 + 8);
          if ( v11 )
            PFEFromUFIInternal = (struct PFE *)v11[1];
        }
        if ( PFEFromUFIInternal )
        {
          while ( 1 )
          {
            if ( *((_DWORD *)PFEFromUFIInternal + 21) == *(_DWORD *)(*(_QWORD *)this + 44LL)
              && *((_DWORD *)PFEFromUFIInternal + 22) == *(_DWORD *)(*(_QWORD *)this + 48LL)
              && (*((_DWORD *)PFEFromUFIInternal + 3) & 2) == 0 )
            {
              goto LABEL_21;
            }
            PFEFromUFIInternal = 0LL;
            v11 = (_QWORD *)*v11;
            if ( v11 )
              goto LABEL_16;
            v14 = *(_QWORD *)(v13 + 48);
            v13 = v14;
            if ( v14 )
              break;
LABEL_18:
            if ( !PFEFromUFIInternal )
              return 0LL;
          }
          v11 = *(_QWORD **)(v14 + 8);
LABEL_16:
          if ( v11 )
            PFEFromUFIInternal = (struct PFE *)v11[1];
          goto LABEL_18;
        }
      }
    }
    return 0LL;
  }
  PFEFromUFIInternal = ppfeGetPFEFromUFIInternal(v5, 0, 1);
LABEL_21:
  if ( !PFEFromUFIInternal )
    return 0LL;
  *((_DWORD *)this + 48) = 1;
  *((_DWORD *)this + 49) = 1;
  v15 = 4;
  *((_DWORD *)this + 47) = 0;
  v16 = *((_QWORD *)PFEFromUFIInternal + 4);
  *((_QWORD *)this + 31) = v16;
  v17 = *(_DWORD *)(v16 + 48);
  if ( (v17 & 0x3000010) == 0 )
  {
    v30 = (*((_DWORD *)this + 61) & 2) != 0 ? *(__int16 *)(v16 + 56) : *(__int16 *)(v16 + 60) + *(__int16 *)(v16 + 62);
    v31 = *((_DWORD *)this + 41);
    if ( v30 < v31 && (*((_DWORD *)this + 61) & 0x8000) == 0 && (v17 & 0x100000) != 0 && v31 > 7 * v30 / 4 )
    {
      v32 = v31 + v30 / 4;
      if ( !v30 || v32 == 0x80000000 && v30 == -1 )
        return 0LL;
      v33 = v32 / v30;
      if ( v33 > 8 )
        v33 = 8;
      *((_DWORD *)this + 49) = v33;
    }
  }
  v18 = *((_QWORD *)this + 1);
  if ( *(_BYTE *)(v18 + 20)
    && (*(_BYTE *)(v16 + 52) & 1) == 0
    && (unsigned int)IFIOBJ::bSimItalic((MAPPER *)((char *)this + 248)) )
  {
    *((_DWORD *)this + 47) |= 0x4000u;
  }
  v19 = *((_DWORD *)this + 61);
  if ( (v19 & 0x200000) == 0
    && *(unsigned __int16 *)(v16 + 46) - *((_DWORD *)this + 43) < 0
    && *((_DWORD *)this + 43) - *(unsigned __int16 *)(v16 + 46) > 150
    && IFIOBJ::pvSimBold((MAPPER *)((char *)this + 248)) )
  {
    *((_DWORD *)this + 47) |= 0x2000u;
  }
  if ( (*(_DWORD *)(v16 + 48) & 0x2000010) != 0 )
    goto LABEL_56;
  v20 = *(__int16 *)(v16 + 76);
  *((_DWORD *)this + 48) = 1;
  if ( *(_DWORD *)(v18 + 4) )
  {
    if ( ((unsigned __int8)v19 & (unsigned __int8)v15) == 0 )
      MAPPER::bCalculateWishCell(this);
    if ( (*(_DWORD *)(*((_QWORD *)this + 31) + 48LL) & 0x100000) == 0 || (*((_DWORD *)this + 61) & 0x8000) != 0 )
      goto LABEL_56;
    v35 = *((_DWORD *)this + 42);
    if ( v35 <= v20 )
      goto LABEL_56;
    v36 = v35 - (v20 + 1) / 2;
    if ( v20 && (v36 != 0x80000000 || v20 != -1) )
    {
      v37 = v36 / v20 + 1;
      if ( v37 > 5 )
        v37 = 5;
      *((_DWORD *)this + 48) = v37;
      goto LABEL_56;
    }
    return 0LL;
  }
  if ( (v19 & 0x8000) != 0 || (*(_DWORD *)(v16 + 48) & 0x100000) == 0 )
    goto LABEL_56;
  v21 = *(_DWORD *)(v16 + 128);
  v22 = *(_DWORD *)(v16 + 132);
  if ( v21 != v22 || *(_DWORD *)(*(_QWORD *)this + 52LL) != *(_DWORD *)(*(_QWORD *)this + 56LL) )
  {
    v23 = *(_DWORD *)(*(_QWORD *)this + 52LL);
    if ( v23 )
    {
      v24 = 100 * *(_DWORD *)(*(_QWORD *)this + 56LL) / v23;
      v25 = 100 * v21;
      if ( v22 )
      {
        if ( v25 != 0x80000000 || v22 != -1 )
        {
          v26 = *((_DWORD *)this + 49);
          v27 = v25 / v22;
          if ( v26 )
          {
            if ( v27 != 0x80000000 || v26 != -1 )
            {
              v28 = v27 / v26;
              if ( v24 <= (3 * v28) >> 1 )
                goto LABEL_56;
              if ( v28 )
              {
                v34 = v24 / v28;
                goto LABEL_53;
              }
            }
          }
        }
      }
    }
    return 0LL;
  }
  v34 = *((_DWORD *)this + 49);
  if ( v34 != 1 )
  {
LABEL_53:
    if ( v34 > 5 )
      v34 = 5;
    *((_DWORD *)this + 48) = v34;
  }
LABEL_56:
  result = 1LL;
  **((_DWORD **)this + 27) = *((_DWORD *)this + 47);
  **((_QWORD **)this + 28) = *((_QWORD *)this + 24);
  *(_BYTE *)(*((_QWORD *)this + 29) + 3LL) = 1;
  *((_DWORD *)this + 61) |= 0x1000000u;
  *((_QWORD *)this + 25) = PFEFromUFIInternal;
  return result;
}
