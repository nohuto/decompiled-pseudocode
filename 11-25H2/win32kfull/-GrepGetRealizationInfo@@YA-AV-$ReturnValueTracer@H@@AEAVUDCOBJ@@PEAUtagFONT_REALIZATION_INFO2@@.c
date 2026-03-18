/*
 * XREFs of ?GrepGetRealizationInfo@@YA?AV?$ReturnValueTracer@H@@AEAVUDCOBJ@@PEAUtagFONT_REALIZATION_INFO2@@W4EntryPoint@RFONTOBJ@@@Z @ 0x140080F3C
 * Callers:
 *     NtGdiGetRealizationInfo @ 0x140080FE0 (NtGdiGetRealizationInfo.c)
 * Callees:
 *     ??0?$ReturnValueTracer@K@@QEAA@K@Z @ 0x14001680C (--0-$ReturnValueTracer@K@@QEAA@K@Z.c)
 *     ??$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z @ 0x140016F64 (--$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x140017244 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z @ 0x1400180D0 (-bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ?GetRealizationInfo@RFONTOBJ@@QEAA?AV?$ReturnValueTracer@H@@PEAUtagFONT_REALIZATION_INFO2@@@Z @ 0x14016BBEC (-GetRealizationInfo@RFONTOBJ@@QEAA-AV-$ReturnValueTracer@H@@PEAUtagFONT_REALIZATION_INFO2@@@Z.c)
 */

_DWORD *__fastcall GrepGetRealizationInfo(_DWORD *a1, struct UDCOBJ *a2, __int64 a3, int a4)
{
  __int64 v4; // rax
  int v5; // ebx
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF
  int v10; // [rsp+58h] [rbp+10h] BYREF
  int v11; // [rsp+5Ch] [rbp+14h]
  int v12; // [rsp+68h] [rbp+20h] BYREF

  v12 = a4;
  v4 = *(_QWORD *)a2;
  v5 = 0;
  v10 = 12;
  v11 = *(unsigned __int16 *)(v4 + 12);
  v9 = 0LL;
  if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v9, a2, 0, 2u, (const struct RFONTOBJ::Tag *)&v10) )
    GreAcquireSemaphore<5,RFONT *>(v9);
  if ( v9 )
    v5 = *(_DWORD *)RFONTOBJ::GetRealizationInfo(&v9, &v12, a3);
  ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(a1, v5);
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v9);
  return a1;
}
