/*
 * XREFs of ?ppfeMapFont@LFONTCOREOBJ@@QEAAPEAVPFE@@AEAUPARAMETERS@MAPPER@@PEAKPEAU_POINTL@@1@Z @ 0x1400C6FC0
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1400C4834 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?GrepGetTextFaceW@@YAHAEAVDCOBJ@@HPEAGH@Z @ 0x1400C6298 (-GrepGetTextFaceW@@YAHAEAVDCOBJ@@HPEAGH@Z.c)
 *     ?ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z @ 0x1400C6EDC (-ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z.c)
 *     ?GrepGetCharSet@@YAKAEAVDCOBJ@@@Z @ 0x1400FE5E8 (-GrepGetCharSet@@YAKAEAVDCOBJ@@@Z.c)
 *     ?dwGetFontLanguageInfo@@YAKAEAVDCOBJ@@@Z @ 0x14010C768 (-dwGetFontLanguageInfo@@YAKAEAVDCOBJ@@@Z.c)
 *     ?GrepGetOutlineTextMetrics@@YAKAEAVDCOBJ@@KPEAU_OUTLINETEXTMETRICW@@PEAU_TMDIFF@@@Z @ 0x14010F74C (-GrepGetOutlineTextMetrics@@YAKAEAVDCOBJ@@KPEAU_OUTLINETEXTMETRICW@@PEAU_TMDIFF@@@Z.c)
 * Callees:
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAUPARAMETERS@MAPPER@@PEAUtagENUMLOGFONTEXDVW@@PEBGKPEAKPEAU_POINTL@@3@Z @ 0x1400C79A0 (-ppfeGetAMatch@@YAPEAVPFE@@AEAUPARAMETERS@MAPPER@@PEAUtagENUMLOGFONTEXDVW@@PEBGKPEAKPEAU_POINTL@.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

struct PFE *__fastcall LFONTCOREOBJ::ppfeMapFont(
        LFONTCOREOBJ *this,
        struct MAPPER::PARAMETERS *a2,
        unsigned int *a3,
        struct _POINTL *a4,
        unsigned int *a5)
{
  __int64 v5; // rbp
  int v8; // r13d
  struct Gre::Base::SESSION_GLOBALS *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r8
  __int64 v14; // r15
  __int64 v15; // rdx
  char v16; // cl
  int v17; // esi
  int v18; // r12d
  __int64 v19; // rcx
  int v20; // r12d
  __int64 i; // rsi
  struct PFE *v22; // rdi
  unsigned int *v23; // rsi
  struct PFE *result; // rax
  unsigned int v25; // edx
  char v26; // cl
  int v27; // edx
  __int64 v28; // rcx
  __int64 v29; // r13
  int v30; // eax
  __int64 v31; // rcx
  int v32; // edx
  char v33; // al
  int v34; // edx
  __int64 v35; // r13
  int v36; // [rsp+40h] [rbp-68h]
  __int64 v37; // [rsp+50h] [rbp-58h]
  int v38; // [rsp+B0h] [rbp+8h]
  int v39; // [rsp+B8h] [rbp+10h]

  v5 = *(_QWORD *)this + 16LL;
  v37 = *(_QWORD *)a2;
  v36 = 0;
  v38 = 0;
  v8 = 0;
  v9 = Gre::Base::Globals(this);
  v14 = *(_QWORD *)(W32GetSessionState(v11, v10, v12) + 96);
  if ( *((_BYTE *)a2 + 87) )
  {
    v18 = 0;
    goto LABEL_28;
  }
  v15 = *(_QWORD *)this;
  v16 = *(_BYTE *)(*(_QWORD *)this + 278LL);
  if ( !*((_BYTE *)a2 + 88) && !*((_BYTE *)a2 + 89) )
    goto LABEL_56;
  v13 = *(unsigned int *)(v14 + 20348);
  if ( (v13 & 2) != 0 )
  {
    if ( v16 == 3 )
    {
LABEL_56:
      v18 = 0;
      goto LABEL_12;
    }
  }
  else if ( (unsigned __int8)(v16 - 4) > 2u )
  {
    goto LABEL_56;
  }
  if ( !*((_BYTE *)a2 + 90) )
    goto LABEL_56;
  v17 = *((_DWORD *)a2 + 16);
  v36 = v17;
  if ( v17 == 6 || v17 == 4 || v17 == 5 )
  {
    v38 = 0x10000;
    if ( v16 == 6 )
    {
      v18 = 1342242816;
      v38 = 1342242816;
    }
    else
    {
      if ( v16 == 5 || (v13 & 0x10) != 0 )
        v38 = 268500992;
      v18 = v38;
    }
  }
  else
  {
    v18 = 0;
  }
LABEL_12:
  if ( !*((_BYTE *)a2 + 86) )
  {
    v19 = *(unsigned int *)(*((_QWORD *)v9 + 232) + 1573016LL);
    if ( *(_DWORD *)(v15 + 12) != (_DWORD)v19 )
    {
      *(_DWORD *)(v15 + 8) = 0;
      v19 = *(_QWORD *)this;
      *(_DWORD *)(*(_QWORD *)this + 12LL) = *(_DWORD *)(*((_QWORD *)v9 + 232) + 1573016LL);
    }
    v20 = 1;
    for ( i = v5; ; i += 56LL )
    {
      v39 = v8;
      if ( v8 >= *(_DWORD *)(*(_QWORD *)this + 8LL) )
      {
        v18 = v38;
        goto LABEL_28;
      }
      if ( v37 == *(_QWORD *)i
        && *(float *)(i + 8) == *((float *)a2 + 2)
        && *(float *)(i + 12) == *((float *)a2 + 3)
        && *(float *)(i + 16) == *((float *)a2 + 4)
        && *(float *)(i + 20) == *((float *)a2 + 5) )
      {
        break;
      }
LABEL_26:
      ++v8;
      ++v20;
    }
    v22 = *(struct PFE **)(i + 24);
    if ( !v22 )
    {
LABEL_23:
      v19 = *(unsigned int *)(*(_QWORD *)this + 8LL);
      if ( v20 < (int)v19 )
        memmove((void *)(v5 + 56LL * v8), (const void *)(v5 + 56LL * v20), (unsigned int)(56 * (v19 - v20)));
      --v8;
      --v20;
      --*(_DWORD *)(*(_QWORD *)this + 8LL);
      i -= 56LL;
      goto LABEL_26;
    }
    v29 = *(_QWORD *)v22;
    if ( *(_QWORD *)(v29 + 136) == *(_QWORD *)(*(_QWORD *)(W32GetSessionState(v19, v15, v13) + 96) + 20384LL) )
    {
      v35 = *(_QWORD *)(v29 + 152);
      if ( !v35 )
      {
LABEL_63:
        v8 = v39;
        goto LABEL_23;
      }
      while ( ((*(_DWORD *)(v35 + 8) & 4) == 0 || *(_DWORD *)(v35 + 12) != (unsigned int)PsGetCurrentThreadId())
           && *(_DWORD *)(v35 + 12) != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
      {
        v35 = *(_QWORD *)(v35 + 16);
        if ( !v35 )
          goto LABEL_63;
      }
    }
    v30 = *(_DWORD *)(i + 32);
    if ( v38 )
    {
      if ( (v30 & 0x10010000) == v38 && v36 == *(_DWORD *)(i + 48) )
      {
LABEL_49:
        v23 = a5;
        v31 = 56LL * v39;
        *a3 = *(_DWORD *)(v31 + v5 + 32);
        a4->x = *(_DWORD *)(v31 + v5 + 36);
        a4->y = *(_DWORD *)(v31 + v5 + 40);
        *a5 = *(_DWORD *)(v31 + v5 + 44);
        goto LABEL_50;
      }
    }
    else if ( (v30 & 0x10000) == 0 )
    {
      goto LABEL_49;
    }
    goto LABEL_63;
  }
LABEL_28:
  v23 = a5;
  result = ppfeGetAMatch(
             a2,
             (struct tagENUMLOGFONTEXDVW *)(*(_QWORD *)this + 252LL),
             (const unsigned __int16 *)(*(_QWORD *)this + 184LL),
             (unsigned int)a3,
             a3,
             a4,
             a5);
  v22 = result;
  if ( !result )
    return result;
  if ( !*((_BYTE *)a2 + 87) )
  {
    if ( !v18
      || (*(_DWORD *)(*((_QWORD *)result + 4) + 48LL) & 0x40) == 0
      || (v25 = *a3, *a3 |= 0x10000u, !*((_BYTE *)a2 + 88)) && !*((_BYTE *)a2 + 89)
      || !*((_BYTE *)a2 + 90)
      || (*(_DWORD *)(*((_QWORD *)result + 4) + 48LL) & 1) == 0 )
    {
LABEL_41:
      if ( !*((_BYTE *)a2 + 86) )
      {
        if ( v8 >= 3 )
        {
          v8 = 0;
          *(_DWORD *)(*(_QWORD *)this + 8LL) = 0;
        }
        v28 = 56LL * v8;
        *(_QWORD *)(v28 + v5) = v37;
        *(_QWORD *)(v28 + v5 + 24) = result;
        *(_DWORD *)(v28 + v5 + 32) = *a3;
        *(_DWORD *)(v28 + v5 + 36) = a4->x;
        *(_DWORD *)(v28 + v5 + 40) = a4->y;
        *(_DWORD *)(v28 + v5 + 8) = *((_DWORD *)a2 + 2);
        *(_DWORD *)(v28 + v5 + 12) = *((_DWORD *)a2 + 3);
        *(_DWORD *)(v28 + v5 + 16) = *((_DWORD *)a2 + 4);
        *(_DWORD *)(v28 + v5 + 20) = *((_DWORD *)a2 + 5);
        *(_DWORD *)(v28 + v5 + 44) = *a5;
        *(_DWORD *)(v28 + v5 + 48) = v36;
        ++*(_DWORD *)(*(_QWORD *)this + 8LL);
      }
      goto LABEL_50;
    }
    v26 = *(_BYTE *)(*(_QWORD *)this + 278LL);
    if ( v26 != 5 )
    {
      if ( v26 == 4 )
        goto LABEL_41;
      if ( v26 == 6 )
      {
        v27 = v25 | 0x50010000;
        goto LABEL_40;
      }
      if ( (*(_BYTE *)(v14 + 20348) & 0x12) != 0x12 )
        goto LABEL_41;
    }
    v27 = v25 | 0x10010000;
LABEL_40:
    *a3 = v27;
    goto LABEL_41;
  }
LABEL_50:
  v32 = *(_DWORD *)(v14 + 18936);
  if ( !v32 || (*(_BYTE *)(*(_QWORD *)this + 277LL) & 0x40) != 0 )
    return v22;
  v33 = *((_BYTE *)v23 + 3);
  v34 = *(_DWORD *)(v14 + 18940) | v32;
  if ( v33 )
  {
    if ( v33 != -1 || (v34 & 1) == 0 )
      return v22;
    goto LABEL_73;
  }
  if ( (v34 & 2) != 0 )
LABEL_73:
    *v23 = *v23 & 0xFF0000FF | (*(unsigned __int16 *)(v14 + 18944) << 8);
  return v22;
}
