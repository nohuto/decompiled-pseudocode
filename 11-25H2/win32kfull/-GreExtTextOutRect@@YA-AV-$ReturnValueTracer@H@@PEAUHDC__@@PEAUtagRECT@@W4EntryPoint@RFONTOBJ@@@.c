/*
 * XREFs of ?GreExtTextOutRect@@YA?AV?$ReturnValueTracer@H@@PEAUHDC__@@PEAUtagRECT@@W4EntryPoint@RFONTOBJ@@@Z @ 0x14015EC24
 * Callers:
 *     NtGdiExtTextOutW @ 0x14015E570 (NtGdiExtTextOutW.c)
 * Callees:
 *     ??0?$ReturnValueTracer@K@@QEAA@K@Z @ 0x14001680C (--0-$ReturnValueTracer@K@@QEAA@K@Z.c)
 *     ?ExtTextOutRect@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@PEAUtagRECT@@AEBUTag@RFONTOBJ@@@Z @ 0x14007629C (-ExtTextOutRect@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@PEAUtagRECT@@AEBUTag@RFONTOBJ@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140084C80 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x140087BA4 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14008A870 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEBAHXZ @ 0x14009B348 (-bFullScreen@XDCOBJ@@QEBAHXZ.c)
 */

_DWORD *__fastcall GreExtTextOutRect(_DWORD *a1, HDC a2, unsigned int *a3, int a4)
{
  int v6; // ebx
  __int128 v8; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v9; // [rsp+30h] [rbp-D0h]
  int v10; // [rsp+38h] [rbp-C8h]
  _QWORD v11[14]; // [rsp+40h] [rbp-C0h] BYREF
  DC *v12[16]; // [rsp+B0h] [rbp-50h] BYREF
  int v13; // [rsp+140h] [rbp+40h] BYREF
  int v14; // [rsp+144h] [rbp+44h]
  int v15; // [rsp+158h] [rbp+58h] BYREF

  v15 = a4;
  v6 = 0;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v12, a2);
  if ( v12[0] && (*((_DWORD *)v12[0] + 9) & 0x10000) == 0 )
  {
    v14 = *((unsigned __int16 *)v12[0] + 6);
    v13 = 24;
    DLODCOBJ::DLODCOBJ((DLODCOBJ *)v11);
    v9 = 0LL;
    v8 = 0LL;
    v10 = 0;
    v11[0] = 0LL;
    memset(&v11[10], 0, 24);
    if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v8, (struct XDCOBJ *)v12, 0) )
      v6 = *ExtTextOutRect(&v15, v12, a3, (struct RFONTOBJ::Tag *)&v13);
    else
      v6 = XDCOBJ::bFullScreen((XDCOBJ *)v12);
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)&v8);
  }
  ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(a1, v6);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v12);
  return a1;
}
