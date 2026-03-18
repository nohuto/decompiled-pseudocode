/*
 * XREFs of ?ulGetFontData2@@YAKAEAVUDCOBJ@@KKPEAXKAEBUTag@RFONTOBJ@@@Z @ 0x1400B0E34
 * Callers:
 *     NtGdiGetFontData @ 0x1400B0BF0 (NtGdiGetFontData.c)
 * Callees:
 *     ??$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z @ 0x140016F64 (--$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x140017244 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z @ 0x1400180D0 (-bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ?bCheckFntFileInfo@PFFOBJ@@QEAAHXZ @ 0x1400B1300 (-bCheckFntFileInfo@PFFOBJ@@QEAAHXZ.c)
 *     EngMapFontFileFDInternal @ 0x1400B2070 (EngMapFontFileFDInternal.c)
 *     EngUnmapFontFileFD @ 0x1400B2490 (EngUnmapFontFileFD.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400D8AF0 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ulGetFontData2(
        struct UDCOBJ *a1,
        unsigned int a2,
        unsigned int a3,
        _BYTE *a4,
        unsigned int a5,
        const struct RFONTOBJ::Tag *a6)
{
  __int64 *v6; // rax
  __int64 v7; // rdi
  __int64 v8; // r13
  unsigned int v9; // r15d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned int v13; // esi
  __int64 v14; // rax
  ULONG_PTR *v15; // r12
  unsigned int v16; // r14d
  __int64 (__fastcall *v17)(__int64, _QWORD, _QWORD, _QWORD, unsigned int, _BYTE *, _QWORD, _QWORD); // rbx
  unsigned int v18; // r13d
  __int64 i; // rcx
  ULONG_PTR *v20; // r14
  ULONG_PTR v21; // rdx
  _BYTE *v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rsi
  __int64 v26; // r15
  unsigned int v27; // [rsp+54h] [rbp-55h]
  __int64 v28; // [rsp+60h] [rbp-49h] BYREF
  __int64 v29; // [rsp+68h] [rbp-41h]
  unsigned int v30; // [rsp+70h] [rbp-39h]
  unsigned int v31; // [rsp+74h] [rbp-35h]
  _BYTE *v32; // [rsp+78h] [rbp-31h]
  __int64 v33; // [rsp+80h] [rbp-29h] BYREF
  int v34; // [rsp+88h] [rbp-21h]
  __int128 v35; // [rsp+90h] [rbp-19h]
  __int64 v36; // [rsp+A0h] [rbp-9h]

  v28 = 0LL;
  v31 = a2;
  v32 = a4;
  v30 = a3;
  if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v28, a1, 0, 2u, a6) )
    GreAcquireSemaphore<5,RFONT *>(v28);
  if ( !v28 )
    goto LABEL_18;
  v6 = *(__int64 **)(v28 + 120);
  if ( !v6 || (v7 = *v6, (v33 = v7) == 0) )
  {
    EngSetLastError(6u);
LABEL_18:
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v28);
    return 0xFFFFFFFFLL;
  }
  v8 = *(_QWORD *)(v7 + 88);
  v9 = *((_DWORD *)v6 + 2);
  v29 = v8;
  v27 = v9;
  v13 = -1;
  if ( (unsigned int)PFFOBJ::bCheckFntFileInfo((PFFOBJ *)&v33) )
  {
    v14 = *(_QWORD *)(v7 + 96);
    v15 = 0LL;
    v16 = 0;
    v17 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, unsigned int, _BYTE *, _QWORD, _QWORD))(v14 + 3064);
    if ( (*(_DWORD *)(v14 + 40) & 0x2000) != 0 )
    {
      v18 = *(_DWORD *)(v7 + 36);
      if ( v18 <= 3 )
      {
        if ( (*(_DWORD *)(v7 + 52) & 0x1000) != 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12);
        if ( (*(_DWORD *)(v7 + 52) & 0x2000) != 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12);
        for ( i = 0LL; ; i = (unsigned int)(i + 1) )
        {
          if ( (unsigned int)i >= v18 )
          {
            v16 = 0;
            goto LABEL_20;
          }
          v20 = *(ULONG_PTR **)(v7 + 208);
          v21 = v20[i];
          if ( !*(_BYTE *)(v21 + 45) && *(_BYTE *)(v21 + 44) && !*(_QWORD *)(v21 + 48) )
            break;
        }
        v35 = 0LL;
        v36 = 0LL;
        v25 = 0LL;
        v33 = 0LL;
        v34 = 0;
        while ( 1 )
        {
          if ( (unsigned int)v25 >= v18 )
          {
            v15 = *(ULONG_PTR **)(v7 + 208);
            v16 = v18;
            goto LABEL_36;
          }
          v26 = (unsigned int)v25;
          if ( !(unsigned int)EngMapFontFileFDInternal((struct FILEVIEW *)v20[v25]) )
            break;
          v25 = (unsigned int)(v25 + 1);
        }
        if ( (_DWORD)v25 )
        {
          do
          {
            EngUnmapFontFileFD(*v20++);
            --v26;
          }
          while ( v26 );
        }
        v16 = 0;
LABEL_36:
        v13 = -1;
        v9 = v27;
      }
LABEL_20:
      v8 = v29;
    }
    v23 = v32;
    if ( v32 )
      *v32 = 0;
    if ( v17 )
      v13 = v17(v8, v9, v31, v30, a5, v23, 0LL, 0LL);
    if ( v16 )
    {
      v24 = v16;
      do
      {
        EngUnmapFontFileFD(*v15++);
        --v24;
      }
      while ( v24 );
    }
  }
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v28);
  return v13;
}
