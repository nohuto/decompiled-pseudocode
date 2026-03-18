/*
 * XREFs of ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVDCOBJ@@KPEAGK1@Z @ 0x1400FA384
 * Callers:
 *     NtGdiGetWidthTable @ 0x140281520 (NtGdiGetWidthTable.c)
 * Callees:
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGAEAVXDCOBJ@@_NPEAVESTROBJ@@@Z @ 0x1400C015C (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGAEAVXDCOBJ@@_NPEAVESTROBJ@@@Z.c)
 *     ?QueryAdvanceWidths@PFFOBJ@@QEAAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z @ 0x1400C258C (-QueryAdvanceWidths@PFFOBJ@@QEAAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z.c)
 *     ?bIsSystemTTGlyph@RFONTOBJ@@QEBAHG@Z @ 0x1400F9B8C (-bIsSystemTTGlyph@RFONTOBJ@@QEBAHG@Z.c)
 *     Feature_Servicing_AddWppToGre__private_IsEnabledDeviceUsageNoInline @ 0x1400FAB60 (Feature_Servicing_AddWppToGre__private_IsEnabledDeviceUsageNoInline.c)
 *     ?bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z @ 0x1400FAC2C (-bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z @ 0x1400FBC50 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1401A4EE4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_DdD @ 0x140291DB0 (WPP_RECORDER_AND_TRACE_SF_DdD.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall RFONTOBJ::bGetWidthTable(
        RFONTOBJ *this,
        struct DCOBJ *a2,
        unsigned int a3,
        unsigned __int16 *a4,
        unsigned int a5,
        unsigned __int16 *a6)
{
  unsigned __int16 *v6; // rdi
  char v7; // bl
  unsigned int v8; // r13d
  unsigned int v9; // esi
  int v10; // eax
  struct MOVESIZEDATA **v11; // rdx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r9
  RFONTOBJ *v14; // r10
  __int64 i; // rcx
  unsigned int v16; // r15d
  unsigned __int16 *v17; // r12
  const unsigned __int16 *v18; // rcx
  unsigned int v19; // r14d
  unsigned int v20; // edi
  unsigned int v21; // eax
  struct _FONTOBJ *v22; // r8
  struct DHPDEV__ *v23; // rdx
  __int64 v24; // r9
  unsigned int AdvanceWidths; // eax
  int v26; // ecx
  __int64 v27; // rax
  __int64 v28; // rcx
  unsigned int v29; // eax
  __int64 v30; // r14
  __int64 v31; // rcx
  unsigned __int16 *v32; // r12
  int v33; // r8d
  __int64 v34; // r8
  __int64 v35; // rcx
  __int64 v36; // r8
  unsigned int v37; // edi
  unsigned int v38; // r14d
  __int64 v39; // rcx
  int v40; // edx
  int v41; // r8d
  __int64 result; // rax
  __int64 v43; // rcx
  int v44; // edx
  int v45; // r8d
  struct MOVESIZEDATA *v46; // rcx
  int v47; // [rsp+20h] [rbp-E0h]
  int v48; // [rsp+28h] [rbp-D8h]
  int v49; // [rsp+30h] [rbp-D0h]
  __int16 v50; // [rsp+30h] [rbp-D0h]
  int v51; // [rsp+38h] [rbp-C8h]
  unsigned __int16 v53; // [rsp+68h] [rbp-98h]
  unsigned int v54; // [rsp+6Ch] [rbp-94h]
  unsigned int v55; // [rsp+70h] [rbp-90h]
  unsigned int v57; // [rsp+78h] [rbp-88h]
  unsigned int v58; // [rsp+7Ch] [rbp-84h]
  unsigned __int16 *v59; // [rsp+80h] [rbp-80h]
  unsigned __int16 *v60; // [rsp+88h] [rbp-78h]
  struct _GLYPHPOS v63; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v64; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v65[72]; // [rsp+D0h] [rbp-30h] BYREF

  v6 = a6;
  v7 = 1;
  v8 = 1;
  *(_OWORD *)&v63.hg = 0LL;
  v9 = a3;
  v10 = ((__int64 (*)(void))Feature_Servicing_AddWppToGre__private_IsEnabledDeviceUsageNoInline)();
  v11 = &WPP_GLOBAL_Control;
  v12 = (unsigned __int64)&WPP_RECORDER_INITIALIZED;
  v13 = (unsigned __int64)&WPP_7f6b6c1b7fae30ddd497edbeef1f69d6_Traceguids;
  if ( v10 )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 31) & 1) == 0
      || (LOBYTE(v11) = 1, *((_BYTE *)WPP_GLOBAL_Control + 121) < 5u) )
    {
      LOBYTE(v11) = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (LOBYTE(v12) = 1, !*((_WORD *)WPP_GLOBAL_Control + 76)) )
    {
      LOBYTE(v12) = 0;
    }
    if ( (_BYTE)v11 || (_BYTE)v12 )
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 13),
        (_DWORD)v11,
        v12,
        *((_QWORD *)WPP_GLOBAL_Control + 18),
        5,
        65537,
        10,
        (__int64)&WPP_7f6b6c1b7fae30ddd497edbeef1f69d6_Traceguids);
  }
  v14 = this;
  i = *(_QWORD *)(*(_QWORD *)this + 96LL);
  if ( !*(_QWORD *)(i + 3104) )
  {
    v16 = a5;
    if ( a5 )
    {
      for ( i = a5; i; --i )
        *v6++ = -1;
    }
    v8 = 0;
    if ( (unsigned int)Feature_Servicing_AddWppToGre__private_IsEnabledDeviceUsageNoInline(i, v11, v12, v13) )
    {
      v18 = (const unsigned __int16 *)WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (LOBYTE(v11) = 1, (*((_DWORD *)WPP_GLOBAL_Control + 31) & 1) == 0) )
      {
        LOBYTE(v11) = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (LOBYTE(v12) = 1, !*((_WORD *)WPP_GLOBAL_Control + 76)) )
      {
        LOBYTE(v12) = 0;
      }
      if ( (_BYTE)v11 || (_BYTE)v12 )
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 13),
          (_DWORD)v11,
          v12,
          *((_QWORD *)WPP_GLOBAL_Control + 18),
          0,
          65537,
          14,
          (__int64)&WPP_7f6b6c1b7fae30ddd497edbeef1f69d6_Traceguids);
    }
    v14 = this;
LABEL_35:
    v37 = 0;
    v38 = v9;
    if ( v9 >= v16 )
      v38 = v16;
    while ( 1 )
    {
      if ( v37 >= v38 )
        goto LABEL_42;
      if ( a6[v37] == 0xFFFF )
      {
        if ( !(unsigned int)RFONTOBJ::bGetGlyphMetrics(v14, (struct RFONTOBJ *)1, &v63, &a4[v37], a2, 0, 0LL) )
        {
          if ( !(unsigned int)Feature_Servicing_AddWppToGre__private_IsEnabledDeviceUsageNoInline(v39, v11, v12, v13) )
            return 0xFFFFFFFFLL;
          v46 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 31) & 1) == 0
            || (LOBYTE(v44) = 1, *((_BYTE *)WPP_GLOBAL_Control + 121) < 5u) )
          {
            LOBYTE(v44) = 0;
          }
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
            || !*((_WORD *)WPP_GLOBAL_Control + 76) )
          {
            v7 = 0;
          }
          if ( !(_BYTE)v44 && !v7 )
            return 0xFFFFFFFFLL;
          v50 = 15;
LABEL_115:
          LOBYTE(v45) = v7;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)v46 + 13),
            v44,
            v45,
            *((_QWORD *)v46 + 18),
            5,
            65537,
            v50,
            (__int64)&WPP_7f6b6c1b7fae30ddd497edbeef1f69d6_Traceguids);
          return 0xFFFFFFFFLL;
        }
        v18 = (const unsigned __int16 *)WORD2(v63.pgdf[1].ppo);
        a6[v37] = (unsigned __int16)v18;
      }
      v14 = this;
      ++v37;
    }
  }
  v16 = a5;
  v17 = a6;
  v18 = a4;
  v19 = a5;
  v57 = a5;
  if ( v9 >= a5 )
    v9 = a5;
  v59 = a6;
  v60 = a4;
  while ( 1 )
  {
    if ( !v19 )
    {
      if ( v8 )
      {
LABEL_42:
        if ( (unsigned int)Feature_Servicing_AddWppToGre__private_IsEnabledDeviceUsageNoInline(v18, v11, v12, v13) )
        {
          if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
            || (LOBYTE(v40) = 1, (*((_DWORD *)WPP_GLOBAL_Control + 31) & 1) == 0) )
          {
            LOBYTE(v40) = 0;
          }
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
            || (LOBYTE(v41) = 1, !*((_WORD *)WPP_GLOBAL_Control + 76)) )
          {
            LOBYTE(v41) = 0;
          }
          if ( (_BYTE)v40 || (_BYTE)v41 )
            WPP_RECORDER_AND_TRACE_SF_d(
              *((_QWORD *)WPP_GLOBAL_Control + 13),
              v40,
              v41,
              *((_QWORD *)WPP_GLOBAL_Control + 18),
              0,
              65537,
              16,
              (__int64)&WPP_7f6b6c1b7fae30ddd497edbeef1f69d6_Traceguids,
              v8);
          if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 31) & 1) == 0
            || (LOBYTE(v40) = 1, *((_BYTE *)WPP_GLOBAL_Control + 121) < 5u) )
          {
            LOBYTE(v40) = 0;
          }
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
            || (LOBYTE(v41) = 1, !*((_WORD *)WPP_GLOBAL_Control + 76)) )
          {
            LOBYTE(v41) = 0;
          }
          if ( (_BYTE)v40 || (_BYTE)v41 )
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 13),
              v40,
              v41,
              *((_QWORD *)WPP_GLOBAL_Control + 18),
              5,
              65537,
              17,
              (__int64)&WPP_7f6b6c1b7fae30ddd497edbeef1f69d6_Traceguids);
        }
        if ( v16 != a3 )
          return v8;
        result = 0xFFFFFFFFLL;
        if ( v8 != -1 )
          return 1LL;
        return result;
      }
      v9 = a3;
      goto LABEL_35;
    }
    v20 = 70;
    if ( v9 )
    {
      v21 = 0;
      if ( v9 < 0x46 )
        v20 = v9;
    }
    else
    {
      v21 = 2;
      if ( v19 < 0x46 )
        v20 = v19;
    }
    v54 = v21;
    RFONTOBJ::vXlatGlyphArray(v14, v18, v20, v65, v21, 0);
    v22 = *(struct _FONTOBJ **)this;
    v23 = *(struct DHPDEV__ **)(*(_QWORD *)this + 112LL);
    v64 = *(_QWORD *)(*(_QWORD *)this + 128LL);
    AdvanceWidths = PFFOBJ::QueryAdvanceWidths((PFFOBJ *)&v64, v23, v22, v24, v65, v17, v20);
    v14 = this;
    v13 = AdvanceWidths;
    v58 = AdvanceWidths;
    v11 = *(struct MOVESIZEDATA ***)this;
    v26 = *(_DWORD *)(*(_QWORD *)this + 720LL);
    if ( AdvanceWidths == -1 )
    {
      v43 = v26 & 0xFFFFFFBF;
      *((_DWORD *)v11 + 180) = v43;
      if ( !(unsigned int)Feature_Servicing_AddWppToGre__private_IsEnabledDeviceUsageNoInline(
                            v43,
                            v11,
                            v12,
                            0xFFFFFFFFLL) )
        return 0xFFFFFFFFLL;
      v46 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 31) & 1) == 0
        || (LOBYTE(v44) = 1, *((_BYTE *)WPP_GLOBAL_Control + 121) < 5u) )
      {
        LOBYTE(v44) = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || !*((_WORD *)WPP_GLOBAL_Control + 76) )
      {
        v7 = 0;
      }
      if ( !(_BYTE)v44 && !v7 )
        return 0xFFFFFFFFLL;
      v50 = 11;
      goto LABEL_115;
    }
    if ( (v26 & 0x40) != 0 )
      break;
LABEL_12:
    v19 -= v20;
    v8 &= v13;
    v27 = 2LL * v20;
    v57 = v19;
    v17 = (unsigned __int16 *)((char *)v17 + v27);
    v18 = &v60[(unsigned __int64)v27 / 2];
    v59 = v17;
    v60 = (unsigned __int16 *)((char *)v60 + v27);
    if ( v9 )
      v9 -= v20;
  }
  *((_DWORD *)v11 + 180) = v26 & 0xFFFFFFBF;
  v28 = *(_QWORD *)(*(_QWORD *)this + 120LL);
  v12 = *(unsigned __int16 *)(*(_QWORD *)(v28 + 32) + 116LL);
  v29 = 0;
  v53 = *(_WORD *)(*(_QWORD *)(v28 + 32) + 116LL);
  while ( 1 )
  {
    v55 = v29;
    if ( v29 >= v20 )
    {
      v19 = v57;
      v13 = v58;
      goto LABEL_12;
    }
    v30 = v29;
    v31 = *(unsigned int *)(*(_QWORD *)v14 + 456LL);
    if ( v65[v29] == (_DWORD)v31 )
      break;
LABEL_20:
    v29 = v55 + 1;
  }
  v32 = &v60[v29];
  v11 = (struct MOVESIZEDATA **)*v32;
  if ( (_WORD)v11 == (_WORD)v12 )
  {
    v17 = v59;
    goto LABEL_20;
  }
  if ( v54 == 2
    || !(unsigned int)RFONTOBJ::bIsLinkedGlyph(v14, (unsigned __int16)v11)
    && !(unsigned int)RFONTOBJ::bIsSystemTTGlyph(this, *v32, v34) )
  {
    v17 = v59;
    v8 = 0;
    v59[v30] = -1;
    if ( (unsigned int)Feature_Servicing_AddWppToGre__private_IsEnabledDeviceUsageNoInline(v31, v11, v12, v13) )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (LOBYTE(v11) = 1, (*((_DWORD *)WPP_GLOBAL_Control + 31) & 1) == 0) )
      {
        LOBYTE(v11) = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (LOBYTE(v33) = 1, !*((_WORD *)WPP_GLOBAL_Control + 76)) )
      {
        LOBYTE(v33) = 0;
      }
      if ( (_BYTE)v11 || (_BYTE)v33 )
        WPP_RECORDER_AND_TRACE_SF_DdD(
          *((_QWORD *)WPP_GLOBAL_Control + 13),
          (_DWORD)v11,
          v33,
          *((_QWORD *)WPP_GLOBAL_Control + 18),
          v47,
          v48,
          v49,
          v51,
          v54,
          v55,
          v60[v55]);
    }
    goto LABEL_31;
  }
  if ( (unsigned int)RFONTOBJ::bGetGlyphMetrics(this, (struct RFONTOBJ *)1, &v63, v32, a2, 0, 0LL) )
  {
    v17 = v59;
    v59[v30] = WORD2(v63.pgdf[1].ppo);
LABEL_31:
    v14 = this;
    v12 = v53;
    goto LABEL_20;
  }
  if ( (unsigned int)Feature_Servicing_AddWppToGre__private_IsEnabledDeviceUsageNoInline(v35, v11, v36, v13) )
  {
    v46 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 31) & 1) == 0
      || (LOBYTE(v44) = 1, *((_BYTE *)WPP_GLOBAL_Control + 121) < 5u) )
    {
      LOBYTE(v44) = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || !*((_WORD *)WPP_GLOBAL_Control + 76) )
    {
      v7 = 0;
    }
    if ( (_BYTE)v44 || v7 )
    {
      v50 = 12;
      goto LABEL_115;
    }
  }
  return 0xFFFFFFFFLL;
}
