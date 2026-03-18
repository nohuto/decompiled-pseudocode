/*
 * XREFs of ?GreExtTextOutRect@@YA?AV?$ReturnValueTracer@H@@PEAUHDC__@@PEAUtagRECT@@@Z @ 0x140205B04
 * Callers:
 *     NtGdiExtTextOutW @ 0x14027F4B0 (NtGdiExtTextOutW.c)
 * Callees:
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x14006DAC0 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14006EFE0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?ExtTextOutRect@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x14007B620 (-ExtTextOutRect@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@PEAUtagRECT@@@Z.c)
 *     ?bInFullScreen@DC@@QEBAHXZ @ 0x1400A990C (-bInFullScreen@DC@@QEBAHXZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0?$ReturnValueTracer@K@@QEAA@K@Z @ 0x1400C5FFC (--0-$ReturnValueTracer@K@@QEAA@K@Z.c)
 */

_DWORD *__fastcall GreExtTextOutRect(_DWORD *a1, HDC a2, __int32 *a3)
{
  int v5; // ebx
  DC *v7[14]; // [rsp+20h] [rbp-118h] BYREF
  _BYTE v8[160]; // [rsp+90h] [rbp-A8h] BYREF
  char v9; // [rsp+140h] [rbp+8h] BYREF

  v5 = 0;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v7, a2);
  if ( v7[0] && (*((_DWORD *)v7[0] + 9) & 0x10000) == 0 )
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v8);
    if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v8, (struct XDCOBJ *)v7, 0) )
    {
      v5 = *(_DWORD *)ExtTextOutRect((__int64)&v9, (XDCOBJ *)v7, a3);
    }
    else if ( !*((_QWORD *)v7[0] + 62) || DC::bInFullScreen(v7[0]) )
    {
      v5 = 1;
    }
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v8);
  }
  ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(a1, v5);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v7);
  return a1;
}
