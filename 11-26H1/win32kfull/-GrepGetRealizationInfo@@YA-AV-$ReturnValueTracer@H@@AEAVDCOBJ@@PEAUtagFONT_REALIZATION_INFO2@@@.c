/*
 * XREFs of ?GrepGetRealizationInfo@@YA?AV?$ReturnValueTracer@H@@AEAVDCOBJ@@PEAUtagFONT_REALIZATION_INFO2@@@Z @ 0x1400C2D54
 * Callers:
 *     NtGdiGetRealizationInfo @ 0x140280940 (NtGdiGetRealizationInfo.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14006FDD0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1400C4834 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z @ 0x1400C5C18 (--$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z.c)
 *     ?GetRealizationInfo@RFONTOBJ@@QEAA?AV?$ReturnValueTracer@H@@PEAUtagFONT_REALIZATION_INFO2@@@Z @ 0x1400C5D6C (-GetRealizationInfo@RFONTOBJ@@QEAA-AV-$ReturnValueTracer@H@@PEAUtagFONT_REALIZATION_INFO2@@@Z.c)
 *     ??0?$ReturnValueTracer@K@@QEAA@K@Z @ 0x1400C5FFC (--0-$ReturnValueTracer@K@@QEAA@K@Z.c)
 */

__int64 __fastcall GrepGetRealizationInfo(__int64 a1, struct XDCOBJ *a2, __int64 a3)
{
  unsigned int v3; // ebx
  char v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+48h] [rbp+20h] BYREF

  v3 = 0;
  v8 = 0LL;
  if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v8, a2, 0, 2u) )
    GreAcquireSemaphore<5,RFONT *>(v8);
  if ( v8 )
    v3 = *(_DWORD *)RFONTOBJ::GetRealizationInfo(&v8, &v7, a3);
  ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(a1, v3);
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v8);
  return a1;
}
