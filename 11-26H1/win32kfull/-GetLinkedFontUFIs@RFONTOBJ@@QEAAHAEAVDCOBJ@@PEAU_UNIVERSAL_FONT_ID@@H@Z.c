/*
 * XREFs of ?GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x140174824
 * Callers:
 *     NtGdiGetLinkedUFIs @ 0x14027D690 (NtGdiGetLinkedUFIs.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14006FDD0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??$GreAcquirePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x140071640 (--$GreAcquirePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??$GreReleasePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x1400717B0 (--$GreReleasePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x14010C92C (-bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
 *     ?AddUFIToBuffer@RFONTOBJ@@AEAAXPEAVPFE@@AEAPEAU_UNIVERSAL_FONT_ID@@AEAHH@Z @ 0x1401747BC (-AddUFIToBuffer@RFONTOBJ@@AEAAXPEAVPFE@@AEAPEAU_UNIVERSAL_FONT_ID@@AEAHH@Z.c)
 *     ?bCheckEudcFontCaps@RFONTOBJ@@QEBAHAEAVIFIOBJ@@@Z @ 0x140174C1C (-bCheckEudcFontCaps@RFONTOBJ@@QEBAHAEAVIFIOBJ@@@Z.c)
 *     ?GetEUDCDefaultFontPFE@RFONTOBJ@@AEAAPEAVPFE@@I@Z @ 0x140174CF0 (-GetEUDCDefaultFontPFE@RFONTOBJ@@AEAAPEAVPFE@@I@Z.c)
 */

__int64 __fastcall RFONTOBJ::GetLinkedFontUFIs(RFONTOBJ *this, struct DCOBJ *a2, struct _UNIVERSAL_FONT_ID *a3, int a4)
{
  struct _UNIVERSAL_FONT_ID *v5; // r14
  int v7; // esi
  __int64 v8; // rax
  __int64 v9; // rax
  _BOOL8 v10; // rcx
  __int64 v11; // r13
  struct PFE *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // rbx
  _QWORD *v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // r13
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rbx
  __int64 v32; // rcx
  struct PFE *EUDCDefaultFontPFE; // rax
  struct PFE *v34; // rbx
  int v36; // ecx
  __int64 v37; // rax
  int v38; // eax
  __int64 v39; // rax
  int v40; // eax
  __int64 v41; // rax
  int v42[4]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v43; // [rsp+40h] [rbp-20h] BYREF
  __int64 v44[3]; // [rsp+48h] [rbp-18h] BYREF
  struct _UNIVERSAL_FONT_ID *v45; // [rsp+B0h] [rbp+50h] BYREF
  unsigned int v46; // [rsp+B8h] [rbp+58h]

  v45 = a3;
  v42[0] = 0;
  v5 = a3;
  v7 = 0;
  if ( a4 && !a3 )
    return 0LL;
  if ( *(_DWORD *)(*(_QWORD *)this + 716LL) )
  {
    if ( *(_QWORD *)(*(_QWORD *)this + 728LL) || (unsigned int)RFONTOBJ::bInitSystemTT(this, a2) )
    {
      *(_DWORD *)(*(_QWORD *)this + 720LL) |= 0x100u;
      goto LABEL_3;
    }
    return 0LL;
  }
LABEL_3:
  v8 = *(_QWORD *)(*(_QWORD *)this + 728LL);
  if ( v8 )
  {
    v7 = 1;
    v42[0] = 1;
    if ( a4 > 0 )
    {
      v37 = *(_QWORD *)(v8 + 120);
      v43 = 0LL;
      *(_QWORD *)v5 = *(_QWORD *)(v37 + 84);
      v5 = (struct _UNIVERSAL_FONT_ID *)((char *)v5 + 8);
      v45 = v5;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v43);
    }
  }
  v9 = *(_QWORD *)this;
  LODWORD(v43) = 0;
  v10 = *(_DWORD *)(v9 + 852) != 0;
  v46 = *(_DWORD *)(v9 + 852) != 0;
  v44[0] = *(_QWORD *)(W32GetSessionState(v10, a2, a3) + 96) + 4864LL;
  v11 = v44[0];
  GreAcquirePushLockShared2<16,0>(v44[0]);
  _InterlockedIncrement((volatile signed __int32 *)(v11 + 8636));
  GreReleasePushLockShared2<16,0>(v11);
  v15 = *(_QWORD *)(*(_QWORD *)this + 120LL);
  v16 = *(_QWORD *)(v15 + 120);
  if ( v16 )
    v17 = v16 + 16;
  else
    v17 = *(_QWORD *)(W32GetSessionState(v13, v12, v14) + 96) + 14128LL;
  v18 = *(_QWORD *)(v17 + 8);
  v19 = *(_QWORD *)(v15 + 120);
  if ( v19 )
    v20 = v19 + 16;
  else
    v20 = *(_QWORD *)(W32GetSessionState(v13, v12, v14) + 96) + 14128LL;
  if ( v18 != v20 )
  {
    v21 = v46;
    v12 = *(struct PFE **)(v18 + 8LL * v46 + 32);
    if ( !v12 )
      v12 = *(struct PFE **)(v18 + 32);
    v36 = *(_DWORD *)(*(_QWORD *)v12 + 52LL);
    if ( (v36 & 8) == 0 || (v36 & 2) != 0 )
      goto LABEL_10;
    RFONTOBJ::AddUFIToBuffer(this, v12, &v45, v42, a4);
    v5 = v45;
    v7 = v42[0];
    LODWORD(v43) = 1;
  }
  v21 = v46;
LABEL_10:
  v22 = *(_QWORD *)(*(_QWORD *)this + 736LL);
  if ( v22 )
  {
    v38 = v7++;
    if ( v38 < a4 )
    {
      v39 = *(_QWORD *)(v22 + 120);
      *(_QWORD *)v42 = 0LL;
      *(_QWORD *)v5 = *(_QWORD *)(v39 + 84);
      v5 = (struct _UNIVERSAL_FONT_ID *)((char *)v5 + 8);
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)v42);
    }
  }
  else
  {
    v23 = *(_QWORD *)(v11 + 8LL * (unsigned int)v21 + 8656);
    if ( v23 )
    {
      *(_QWORD *)v42 = *(_QWORD *)(v23 + 32);
      if ( (unsigned int)RFONTOBJ::bCheckEudcFontCaps(this, (struct IFIOBJ *)v42) )
      {
        if ( v7 < a4 )
        {
          *(_QWORD *)v5 = *(_QWORD *)(v23 + 84);
          v5 = (struct _UNIVERSAL_FONT_ID *)((char *)v5 + 8);
        }
        ++v7;
      }
    }
  }
  v24 = *(_QWORD *)(v15 + 120);
  if ( v24 )
    v25 = (_QWORD *)(v24 + 16);
  else
    v25 = (_QWORD *)(*(_QWORD *)(W32GetSessionState(v22, v12, v21) + 96) + 14128LL);
  while ( 1 )
  {
    v26 = *(_QWORD *)(v15 + 120);
    v25 = (_QWORD *)*v25;
    v27 = v26 ? v26 + 16 : *(_QWORD *)(W32GetSessionState(v22, v12, v21) + 96) + 14128LL;
    if ( v25 == (_QWORD *)v27 )
      break;
    v28 = v25[v46 + 4];
    if ( !v28 )
      v28 = v25[4];
    v29 = *(_QWORD *)(v15 + 120);
    if ( v29 )
      v30 = v29 + 16;
    else
      v30 = *(_QWORD *)(W32GetSessionState(v22, v12, v21) + 96) + 14128LL;
    if ( v25 != *(_QWORD **)(v30 + 8) || !(_DWORD)v43 )
    {
      if ( v28 )
      {
        *(_QWORD *)v42 = *(_QWORD *)(v28 + 32);
        if ( (unsigned int)RFONTOBJ::bCheckEudcFontCaps(this, (struct IFIOBJ *)v42) )
        {
          if ( v7 < a4 )
          {
            *(_QWORD *)v5 = *(_QWORD *)(v28 + 84);
            v5 = (struct _UNIVERSAL_FONT_ID *)((char *)v5 + 8);
          }
          ++v7;
        }
      }
    }
  }
  v31 = v44[0];
  GreAcquirePushLockShared2<16,0>(v44[0]);
  _InterlockedDecrement((volatile signed __int32 *)(v31 + 8636));
  GreReleasePushLockShared2<16,0>(v31);
  v32 = *(_QWORD *)(*(_QWORD *)this + 744LL);
  if ( v32 )
  {
    v40 = v7++;
    if ( v40 < a4 )
    {
      v41 = *(_QWORD *)(v32 + 120);
      v44[0] = 0LL;
      *(_QWORD *)v5 = *(_QWORD *)(v41 + 84);
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)v44);
    }
  }
  else
  {
    EUDCDefaultFontPFE = RFONTOBJ::GetEUDCDefaultFontPFE(this, v46);
    v34 = EUDCDefaultFontPFE;
    if ( EUDCDefaultFontPFE )
    {
      v44[0] = *((_QWORD *)EUDCDefaultFontPFE + 4);
      if ( (unsigned int)RFONTOBJ::bCheckEudcFontCaps(this, (struct IFIOBJ *)v44) )
      {
        if ( v7 < a4 )
          *(_QWORD *)v5 = *(_QWORD *)((char *)v34 + 84);
        ++v7;
      }
    }
  }
  return (unsigned int)v7;
}
