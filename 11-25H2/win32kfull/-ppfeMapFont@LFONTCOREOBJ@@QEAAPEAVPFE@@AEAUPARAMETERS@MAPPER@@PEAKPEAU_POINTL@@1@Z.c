/*
 * XREFs of ?ppfeMapFont@LFONTCOREOBJ@@QEAAPEAVPFE@@AEAUPARAMETERS@MAPPER@@PEAKPEAU_POINTL@@1@Z @ 0x14001AAE0
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z @ 0x1400180D0 (-bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ?GrepGetTextFaceW@@YAHAEAVUDCOBJ@@HPEAGH@Z @ 0x1400193F0 (-GrepGetTextFaceW@@YAHAEAVUDCOBJ@@HPEAGH@Z.c)
 *     ?GrepGetCharSet@@YAKAEAVUDCOBJ@@@Z @ 0x1400802FC (-GrepGetCharSet@@YAKAEAVUDCOBJ@@@Z.c)
 *     ?GrepGetOutlineTextMetrics@@YAKAEAVUDCOBJ@@KPEAU_OUTLINETEXTMETRICW@@PEAU_TMDIFF@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1400BD04C (-GrepGetOutlineTextMetrics@@YAKAEAVUDCOBJ@@KPEAU_OUTLINETEXTMETRICW@@PEAU_TMDIFF@@W4EntryPoint@R.c)
 *     ?dwGetFontLanguageInfo@@YAKAEAVUDCOBJ@@@Z @ 0x1400BDE04 (-dwGetFontLanguageInfo@@YAKAEAVUDCOBJ@@@Z.c)
 * Callees:
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAUPARAMETERS@MAPPER@@PEAUtagENUMLOGFONTEXDVW@@PEBGKPEAKPEAU_POINTL@@3@Z @ 0x1400B7DD8 (-ppfeGetAMatch@@YAPEAVPFE@@AEAUPARAMETERS@MAPPER@@PEAUtagENUMLOGFONTEXDVW@@PEBGKPEAKPEAU_POINTL@.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

struct PFE *__fastcall LFONTCOREOBJ::ppfeMapFont(
        LFONTCOREOBJ *this,
        struct MAPPER::PARAMETERS *a2,
        unsigned int *a3,
        struct _POINTL *a4,
        unsigned int *a5)
{
  unsigned int *v6; // rsi
  int v8; // r15d
  __int64 v9; // rbp
  struct Gre::Base::SESSION_GLOBALS *v10; // rdi
  unsigned int v11; // r9d
  __int64 v12; // r12
  __int64 v13; // r8
  char v14; // cl
  int v15; // edx
  int v16; // eax
  int v17; // r13d
  int v18; // r13d
  __int64 i; // rdi
  struct PFE *v20; // rsi
  int v21; // ecx
  unsigned int *v22; // rdi
  struct PFE *result; // rax
  unsigned int v24; // edx
  char v25; // cl
  int v26; // edx
  __int64 v27; // rdx
  __int64 v28; // rax
  int v29; // eax
  __int64 v30; // rcx
  int v31; // edx
  __int64 v32; // r15
  __int64 v33; // r15
  char v34; // al
  int v35; // edx
  int v36; // [rsp+40h] [rbp-68h]
  __int64 v37; // [rsp+50h] [rbp-58h]
  int v38; // [rsp+B0h] [rbp+8h]
  int v39; // [rsp+B8h] [rbp+10h]

  v37 = *(_QWORD *)a2;
  v6 = a3;
  v36 = 0;
  v38 = 0;
  v8 = 0;
  v9 = *(_QWORD *)this + 16LL;
  v10 = Gre::Base::Globals(0LL);
  v12 = *(_QWORD *)(W32GetSessionState() + 96);
  if ( !*((_BYTE *)a2 + 87) )
  {
    v13 = *(_QWORD *)this;
    v14 = *(_BYTE *)(*(_QWORD *)this + 278LL);
    if ( !*((_BYTE *)a2 + 88) && !*((_BYTE *)a2 + 89) )
      goto LABEL_61;
    v15 = *(_DWORD *)(v12 + 20372);
    if ( (v15 & 2) != 0 )
    {
      if ( v14 == 3 )
        goto LABEL_61;
    }
    else if ( (unsigned __int8)(v14 - 4) > 2u )
    {
      goto LABEL_61;
    }
    if ( *((_BYTE *)a2 + 90) )
    {
      v16 = *((_DWORD *)a2 + 16);
      v36 = v16;
      if ( v16 == 6 || (unsigned int)(v16 - 4) <= 1 )
      {
        v38 = 0x10000;
        if ( v14 == 6 )
        {
          v17 = 1342242816;
          v38 = 1342242816;
        }
        else
        {
          if ( v14 == 5 || (v15 & 0x10) != 0 )
            v38 = 268500992;
          v17 = v38;
        }
LABEL_12:
        if ( !*((_BYTE *)a2 + 86) )
        {
          if ( *(_DWORD *)(v13 + 12) != *(_DWORD *)(*((_QWORD *)v10 + 221) + 1573016LL) )
          {
            *(_DWORD *)(v13 + 8) = 0;
            *(_DWORD *)(*(_QWORD *)this + 12LL) = *(_DWORD *)(*((_QWORD *)v10 + 221) + 1573016LL);
          }
          v18 = 1;
          for ( i = v9; ; i += 56LL )
          {
            v39 = v8;
            if ( v8 >= *(_DWORD *)(*(_QWORD *)this + 8LL) )
            {
              v17 = v38;
              v6 = a3;
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
            ++v18;
          }
          v20 = *(struct PFE **)(i + 24);
          if ( !v20 )
          {
LABEL_23:
            v21 = *(_DWORD *)(*(_QWORD *)this + 8LL);
            if ( v18 < v21 )
              memmove((void *)(v9 + 56LL * v8), (const void *)(v9 + 56LL * v18), (unsigned int)(56 * (v21 - v8) - 56));
            --v8;
            --v18;
            --*(_DWORD *)(*(_QWORD *)this + 8LL);
            i -= 56LL;
            goto LABEL_26;
          }
          v32 = *(_QWORD *)v20;
          if ( *(_QWORD *)(v32 + 136) == *(_QWORD *)(*(_QWORD *)(W32GetSessionState() + 96) + 20408LL) )
          {
            v33 = *(_QWORD *)(v32 + 152);
            if ( !v33 )
            {
LABEL_59:
              v8 = v39;
              goto LABEL_23;
            }
            while ( ((*(_DWORD *)(v33 + 8) & 4) == 0 || *(_DWORD *)(v33 + 12) != (unsigned int)PsGetCurrentThreadId())
                 && *(_DWORD *)(v33 + 12) != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
            {
              v33 = *(_QWORD *)(v33 + 16);
              if ( !v33 )
                goto LABEL_59;
            }
          }
          v29 = *(_DWORD *)(i + 32);
          if ( v38 )
          {
            if ( (v29 & 0x10010000) == v38 && v36 == *(_DWORD *)(i + 48) )
            {
LABEL_48:
              v22 = a5;
              v30 = 56LL * v39;
              *a3 = *(_DWORD *)(v30 + v9 + 32);
              a4->x = *(_DWORD *)(v30 + v9 + 36);
              a4->y = *(_DWORD *)(v30 + v9 + 40);
              *a5 = *(_DWORD *)(v30 + v9 + 44);
              goto LABEL_49;
            }
          }
          else if ( (v29 & 0x10000) == 0 )
          {
            goto LABEL_48;
          }
          goto LABEL_59;
        }
        goto LABEL_28;
      }
    }
LABEL_61:
    v17 = 0;
    goto LABEL_12;
  }
  v17 = 0;
LABEL_28:
  v22 = a5;
  result = ppfeGetAMatch(
             a2,
             (struct tagENUMLOGFONTEXDVW *)(*(_QWORD *)this + 252LL),
             (const unsigned __int16 *)(*(_QWORD *)this + 184LL),
             v11,
             v6,
             a4,
             a5);
  v20 = result;
  if ( !result )
    return result;
  if ( *((_BYTE *)a2 + 87) )
    goto LABEL_49;
  if ( v17 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)result + 4) + 48LL) & 0x40) != 0 )
    {
      v24 = *a3;
      *a3 |= 0x10000u;
      if ( (*((_BYTE *)a2 + 88) || *((_BYTE *)a2 + 89))
        && *((_BYTE *)a2 + 90)
        && (*(_DWORD *)(*((_QWORD *)result + 4) + 48LL) & 1) != 0 )
      {
        v25 = *(_BYTE *)(*(_QWORD *)this + 278LL);
        if ( v25 == 5 )
          goto LABEL_39;
        if ( v25 != 4 )
        {
          if ( v25 == 6 )
          {
            v26 = v24 | 0x50010000;
            goto LABEL_40;
          }
          if ( (*(_BYTE *)(v12 + 20372) & 0x12) == 0x12 )
          {
LABEL_39:
            v26 = v24 | 0x10010000;
LABEL_40:
            *a3 = v26;
          }
        }
      }
    }
  }
  if ( !*((_BYTE *)a2 + 86) )
  {
    if ( v8 >= 3 )
    {
      v8 = 0;
      *(_DWORD *)(*(_QWORD *)this + 8LL) = 0;
    }
    v27 = 56LL * v8;
    *(_QWORD *)(v27 + v9) = v37;
    *(_QWORD *)(v27 + v9 + 24) = result;
    *(_DWORD *)(v27 + v9 + 32) = *a3;
    *(_DWORD *)(v27 + v9 + 36) = a4->x;
    *(_DWORD *)(v27 + v9 + 40) = a4->y;
    v28 = 14LL * v8;
    *(_DWORD *)(v9 + 4 * v28 + 8) = *((_DWORD *)a2 + 2);
    *(_DWORD *)(v9 + 4 * v28 + 12) = *((_DWORD *)a2 + 3);
    *(_DWORD *)(v9 + 4 * v28 + 16) = *((_DWORD *)a2 + 4);
    *(_DWORD *)(v9 + 4 * v28 + 20) = *((_DWORD *)a2 + 5);
    *(_DWORD *)(v27 + v9 + 44) = *a5;
    *(_DWORD *)(v27 + v9 + 48) = v36;
    ++*(_DWORD *)(*(_QWORD *)this + 8LL);
  }
LABEL_49:
  v31 = *(_DWORD *)(v12 + 18944);
  if ( v31 && (*(_BYTE *)(*(_QWORD *)this + 277LL) & 0x40) == 0 )
  {
    if ( (v34 = *((_BYTE *)v22 + 3), v35 = *(_DWORD *)(v12 + 18948) | v31, !v34) && (v35 & 2) != 0
      || v34 == -1 && (v35 & 1) != 0 )
    {
      *v22 = *v22 & 0xFF0000FF | (*(unsigned __int16 *)(v12 + 18952) << 8);
    }
  }
  return v20;
}
