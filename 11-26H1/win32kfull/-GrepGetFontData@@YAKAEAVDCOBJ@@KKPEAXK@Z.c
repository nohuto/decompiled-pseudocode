/*
 * XREFs of ?GrepGetFontData@@YAKAEAVDCOBJ@@KKPEAXK@Z @ 0x1401ED0AC
 * Callers:
 *     NtGdiGetFontData @ 0x140280030 (NtGdiGetFontData.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14006FDD0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?QueryTrueTypeTable@PFFOBJ@@QEAAJ_KKKJKPEAEPEAPEAEPEAK@Z @ 0x1400C2794 (-QueryTrueTypeTable@PFFOBJ@@QEAAJ_KKKJKPEAEPEAPEAEPEAK@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1400C4834 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z @ 0x1400C5C18 (--$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z.c)
 */

__int64 __fastcall GrepGetFontData(
        struct DCOBJ *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int8 *a4,
        unsigned int a5)
{
  __int64 *v8; // r8
  unsigned int TrueTypeTable; // ebx
  __int64 v11; // rdx
  __int64 v12; // [rsp+50h] [rbp-28h] BYREF
  _QWORD v13[3]; // [rsp+58h] [rbp-20h] BYREF

  v12 = 0LL;
  if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v12, a1, 0, 2u) )
    GreAcquireSemaphore<5,RFONT *>(v12);
  if ( v12 )
  {
    v8 = *(__int64 **)(v12 + 120);
    if ( v8 && (v11 = *v8, (v13[0] = v11) != 0LL) )
    {
      TrueTypeTable = PFFOBJ::QueryTrueTypeTable(
                        (PFFOBJ *)v13,
                        *(_QWORD *)(v11 + 88),
                        *((_DWORD *)v8 + 2),
                        a2,
                        a3,
                        a5,
                        a4,
                        0LL,
                        0LL);
    }
    else
    {
      EngSetLastError(6u);
      TrueTypeTable = -1;
    }
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v12);
    return TrueTypeTable;
  }
  else
  {
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v12);
    return 0xFFFFFFFFLL;
  }
}
