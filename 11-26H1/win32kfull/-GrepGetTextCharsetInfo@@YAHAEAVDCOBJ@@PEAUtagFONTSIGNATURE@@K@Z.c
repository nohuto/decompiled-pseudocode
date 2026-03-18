/*
 * XREFs of ?GrepGetTextCharsetInfo@@YAHAEAVDCOBJ@@PEAUtagFONTSIGNATURE@@K@Z @ 0x1400FE144
 * Callers:
 *     NtGdiGetTextCharsetInfo @ 0x140280AC0 (NtGdiGetTextCharsetInfo.c)
 *     GreGetTextCharsetInfo @ 0x14031CA90 (GreGetTextCharsetInfo.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14006FDD0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1400C4834 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z @ 0x1400C5C18 (--$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z.c)
 *     ?GrepGetCharSet@@YAKAEAVDCOBJ@@@Z @ 0x1400FE5E8 (-GrepGetCharSet@@YAKAEAVDCOBJ@@@Z.c)
 */

__int64 __fastcall GrepGetTextCharsetInfo(struct DCOBJ *a1, struct tagFONTSIGNATURE *a2)
{
  unsigned int v4; // ebx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v4 = GrepGetCharSet(a1) >> 16;
  if ( a2 )
  {
    v9 = 0LL;
    if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v9, a1, 0, 2u) )
      GreAcquireSemaphore<5,RFONT *>(v9);
    if ( v9 )
    {
      v6 = *(_QWORD *)(v9 + 120);
      if ( v6 )
      {
        v7 = *(_QWORD *)(v6 + 32);
        if ( *(_DWORD *)(v7 + 4) > 4u && (v8 = *(int *)(v7 + 196), (_DWORD)v8) )
        {
          *(_OWORD *)a2->fsUsb = *(_OWORD *)(v8 + v7);
          *(_QWORD *)a2->fsCsb = *(_QWORD *)(v8 + v7 + 16);
        }
        else
        {
          *(_OWORD *)a2->fsUsb = 0LL;
          *(_QWORD *)a2->fsCsb = 0LL;
        }
        goto LABEL_9;
      }
      EngSetLastError(6u);
    }
    v4 = 1;
LABEL_9:
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v9);
  }
  return v4;
}
