/*
 * XREFs of ?QueryTrueTypeTable@PFFOBJ@@QEAAJ_KKKJKPEAEPEAPEAEPEAK@Z @ 0x1400B10A0
 * Callers:
 *     ?pjTable@RFONTOBJ@@QEAAPEAEKPEAK@Z @ 0x14030F980 (-pjTable@RFONTOBJ@@QEAAPEAEKPEAK@Z.c)
 * Callees:
 *     ?bCheckFntFileInfo@PFFOBJ@@QEAAHXZ @ 0x1400B1300 (-bCheckFntFileInfo@PFFOBJ@@QEAAHXZ.c)
 *     EngMapFontFileFDInternal @ 0x1400B2070 (EngMapFontFileFDInternal.c)
 *     EngUnmapFontFileFD @ 0x1400B2490 (EngUnmapFontFileFD.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400D8AF0 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PFFOBJ::QueryTrueTypeTable(
        PFFOBJ *this,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned __int8 *a7,
        unsigned __int8 **a8,
        unsigned int *a9)
{
  unsigned int v9; // r15d
  unsigned int v10; // r14d
  __int64 v11; // rsi
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  unsigned int v16; // ebp
  ULONG_PTR *v17; // r12
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 (__fastcall *v20)(__int64, _QWORD, _QWORD, _QWORD, unsigned int, unsigned __int8 *, unsigned __int8 **, unsigned int *); // rbx
  unsigned int v21; // r15d
  __int64 i; // rcx
  ULONG_PTR *v23; // rsi
  ULONG_PTR v24; // rdx
  __int64 v25; // r14
  __int64 v26; // rbx

  v9 = a4;
  v10 = a3;
  v11 = a2;
  if ( !(unsigned int)PFFOBJ::bCheckFntFileInfo(this) )
    return 0xFFFFFFFFLL;
  v15 = *(_QWORD *)this;
  v16 = -1;
  v17 = 0LL;
  v18 = 0LL;
  v19 = *(_QWORD *)(*(_QWORD *)this + 96LL);
  v20 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, unsigned int, unsigned __int8 *, unsigned __int8 **, unsigned int *))(v19 + 3064);
  if ( (*(_DWORD *)(v19 + 40) & 0x2000) != 0 )
  {
    v21 = *(_DWORD *)(v15 + 36);
    if ( v21 <= 3 )
    {
      if ( (*(_DWORD *)(v15 + 52) & 0x1000) != 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v15, v14);
      if ( (*(_DWORD *)(*(_QWORD *)this + 52LL) & 0x2000) != 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v15, v14);
      for ( i = 0LL; (unsigned int)i < v21; i = (unsigned int)(i + 1) )
      {
        v23 = *(ULONG_PTR **)(*(_QWORD *)this + 208LL);
        v24 = v23[i];
        if ( !*(_BYTE *)(v24 + 45) && *(_BYTE *)(v24 + 44) && !*(_QWORD *)(v24 + 48) )
        {
          while ( 1 )
          {
            if ( (unsigned int)v18 >= v21 )
            {
              LODWORD(v18) = v21;
              v17 = *(ULONG_PTR **)(*(_QWORD *)this + 208LL);
              goto LABEL_16;
            }
            v25 = (unsigned int)v18;
            if ( !(unsigned int)EngMapFontFileFDInternal((struct FILEVIEW *)v23[v18]) )
              break;
            v18 = (unsigned int)(v18 + 1);
          }
          if ( (_DWORD)v18 )
          {
            do
            {
              EngUnmapFontFileFD(*v23++);
              --v25;
            }
            while ( v25 );
          }
          LODWORD(v18) = 0;
LABEL_16:
          v10 = a3;
          break;
        }
      }
      v11 = a2;
    }
    v9 = a4;
  }
  if ( a7 )
    *a7 = 0;
  if ( v20 )
    v16 = v20(v11, v10, v9, a5, a6, a7, a8, a9);
  if ( (_DWORD)v18 )
  {
    v26 = (unsigned int)v18;
    do
    {
      EngUnmapFontFileFD(*v17++);
      --v26;
    }
    while ( v26 );
  }
  return v16;
}
