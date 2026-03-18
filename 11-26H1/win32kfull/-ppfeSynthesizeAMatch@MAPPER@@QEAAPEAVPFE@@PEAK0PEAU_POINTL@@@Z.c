/*
 * XREFs of ?ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z @ 0x1401EEDEC
 * Callers:
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAUPARAMETERS@MAPPER@@PEAUtagENUMLOGFONTEXDVW@@PEBGKPEAKPEAU_POINTL@@3@Z @ 0x1400C79A0 (-ppfeGetAMatch@@YAPEAVPFE@@AEAUPARAMETERS@MAPPER@@PEAUtagENUMLOGFONTEXDVW@@PEBGKPEAKPEAU_POINTL@.c)
 * Callees:
 *     ?pvSimBold@IFIOBJ@@QEAAPEAXXZ @ 0x1400CA238 (-pvSimBold@IFIOBJ@@QEAAPEAXXZ.c)
 *     ?bSimItalic@IFIOBJ@@QEAAHXZ @ 0x1400CA590 (-bSimItalic@IFIOBJ@@QEAAHXZ.c)
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x140102C2C (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     ulCharsetToCodePage @ 0x1401B4FA4 (ulCharsetToCodePage.c)
 *     ?bInitPrivatePFT@@YAHXZ @ 0x140289030 (-bInitPrivatePFT@@YAHXZ.c)
 */

struct PFE *__fastcall MAPPER::ppfeSynthesizeAMatch(
        MAPPER *this,
        unsigned int *a2,
        unsigned int *a3,
        struct _POINTL *a4)
{
  int v4; // eax
  __int64 v5; // r14
  char *v8; // rdi
  __int64 *v9; // rsi
  int v10; // r12d
  __int64 v12; // rsi
  __int64 v13; // r15
  int v14; // eax
  unsigned int v15; // r8d
  unsigned int v16; // r9d
  int v17; // esi
  int v18; // r14d
  char *v19; // rdi
  __int64 v20; // r10
  int v21; // eax
  __int64 v22; // r11
  __int64 v23; // rax
  __int64 v24; // r11
  char *v25; // r10
  int v26; // r9d
  unsigned int *v27; // rbx
  __int64 v28; // rcx
  __int64 v29; // rdx
  struct _POINTL *v30; // rax
  size_t v31; // [rsp+30h] [rbp-41h]
  struct PFF *v32; // [rsp+78h] [rbp+7h] BYREF
  _QWORD v33[9]; // [rsp+80h] [rbp+Fh] BYREF
  unsigned int v34; // [rsp+D8h] [rbp+67h] BYREF
  unsigned int *v35; // [rsp+E8h] [rbp+77h]
  struct _POINTL *v36; // [rsp+F0h] [rbp+7Fh]

  v36 = a4;
  v35 = a3;
  v4 = *((_DWORD *)this + 22);
  v5 = 0LL;
  v34 = 0;
  if ( (v4 & 1) != 0 )
    v8 = (char *)this + 92;
  else
    v8 = (char *)(*((_QWORD *)this + 1) + 348LL);
  v9 = (__int64 *)*((_QWORD *)this + 35);
  v10 = 4 * *((_DWORD *)v8 + 1) + 8;
  if ( !v9 )
    return (struct PFE *)v5;
  v12 = *v9;
  v32 = 0LL;
  if ( !v12 )
    return (struct PFE *)v5;
  v13 = *(_QWORD *)(W32GetSessionState((_DWORD)this, a2) + 96);
  if ( *(_QWORD *)(v13 + 20384) || (unsigned int)bInitPrivatePFT() )
  {
    v33[0] = *(_QWORD *)(v13 + 20384);
    if ( (*(_DWORD *)(v12 + 52) & 0x10) != 0 )
    {
LABEL_16:
      if ( v34 && v32 )
      {
        if ( v34 == 1 )
        {
          v5 = *((_QWORD *)v32 + 28);
        }
        else
        {
          v15 = 0;
          v16 = 0;
          v17 = 0x7FFFFFFF;
          if ( v34 )
          {
            v18 = *((_DWORD *)this + 43);
            v19 = (char *)v32 + 224;
            do
            {
              v20 = *(_QWORD *)(*(_QWORD *)v19 + 32LL);
              v21 = *(unsigned __int16 *)(v20 + 46) - v18;
              if ( v21 < 0 )
                v21 = v18 - *(unsigned __int16 *)(v20 + 46);
              if ( v21 <= v17 )
              {
                v17 = v21;
                v22 = *(int *)(v20 + 8);
                if ( (*((_DWORD *)this + 61) & 0x2000000) != 0 )
                {
                  if ( *(_WORD *)(v22 + v20) == 64 )
                    v15 = v16;
                }
                else if ( *(_WORD *)(v22 + v20) != 64 )
                {
                  v15 = v16;
                }
              }
              ++v16;
              v19 += 8;
            }
            while ( v16 < v34 );
          }
          v5 = *((_QWORD *)v32 + v15 + 28);
        }
        *a2 = 0;
        v23 = *((_QWORD *)this + 1);
        v24 = *(_QWORD *)(v5 + 32);
        v25 = (char *)this + 8;
        v33[0] = v24;
        if ( *(_BYTE *)(v23 + 20) && (*(_BYTE *)(v24 + 52) & 1) == 0 && (unsigned int)IFIOBJ::bSimItalic((IFIOBJ *)v33) )
        {
          v25 = (char *)this + 8;
          *a2 = 0x4000;
        }
        if ( (*((_DWORD *)this + 61) & 0x200000) == 0
          && *(unsigned __int16 *)(v24 + 46) - *((_DWORD *)this + 43) < 0
          && *((_DWORD *)this + 43) - *(unsigned __int16 *)(v24 + 46) > 150 )
        {
          if ( IFIOBJ::pvSimBold((IFIOBJ *)v33) )
            *a2 = v26 | 0x2000;
        }
        v27 = v35;
        v28 = *(unsigned __int8 *)(*(_QWORD *)v25 + 23LL);
        v29 = *(unsigned __int8 *)(*(_QWORD *)v25 + 23LL) << 24;
        *v35 = v29;
        *v27 |= (unsigned int)ulCharsetToCodePage(v28, v29) << 8;
        v30 = v36;
        v36->y = 1;
        v30->x = 1;
      }
      return (struct PFE *)v5;
    }
    LODWORD(v31) = v10;
    v14 = PUBLIC_PFTOBJ::bLoadFonts(
            (PUBLIC_PFTOBJ *)v33,
            *(unsigned __int16 **)(v12 + 24),
            *(unsigned int *)(v12 + 32),
            *(_DWORD *)(v12 + 36),
            (struct tagDESIGNVECTOR *)v8,
            v31,
            &v34,
            0x40u,
            &v32,
            0x30u,
            1,
            0LL,
            0,
            0);
    if ( v14 )
      v14 = v34;
    else
      v34 = 0;
    if ( v14 )
    {
      GreQuerySystemTime(v13 + 20408);
      goto LABEL_16;
    }
    return (struct PFE *)v5;
  }
  return 0LL;
}
