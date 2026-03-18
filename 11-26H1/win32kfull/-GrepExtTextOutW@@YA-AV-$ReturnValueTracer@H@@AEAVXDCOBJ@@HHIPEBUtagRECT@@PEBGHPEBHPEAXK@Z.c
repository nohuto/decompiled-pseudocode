/*
 * XREFs of ?GrepExtTextOutW@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHPEAXK@Z @ 0x1401C8584
 * Callers:
 *     GreExtTextOutW @ 0x14012725C (GreExtTextOutW.c)
 *     NtGdiExtTextOutW @ 0x14027F4B0 (NtGdiExtTextOutW.c)
 * Callees:
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x14006DAC0 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14006EFE0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEBAHXZ @ 0x1400ABFA0 (-bFullScreen@XDCOBJ@@QEBAHXZ.c)
 *     ?GrepExtTextOutWLocked@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXK@Z @ 0x1400BC904 (-GrepExtTextOutWLocked@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXK@.c)
 *     ??0?$ReturnValueTracer@K@@QEAA@K@Z @ 0x1400C5FFC (--0-$ReturnValueTracer@K@@QEAA@K@Z.c)
 */

_DWORD *__fastcall GrepExtTextOutW(
        _DWORD *a1,
        struct XDCOBJ *a2,
        int a3,
        ULONG a4,
        int a5,
        int *a6,
        unsigned __int16 *a7,
        int a8,
        int *a9,
        void *a10,
        unsigned int a11)
{
  int v11; // ebx
  _BYTE v17[160]; // [rsp+60h] [rbp-B8h] BYREF
  char v18; // [rsp+120h] [rbp+8h] BYREF

  v11 = 0;
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x10000) == 0 )
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v17);
    if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v17, a2, 0) )
      v11 = *(_DWORD *)GrepExtTextOutWLocked(
                         (__int64)&v18,
                         a2,
                         a3,
                         a4,
                         a5,
                         a6,
                         a7,
                         a8,
                         a9,
                         *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 213LL),
                         a10,
                         a11);
    else
      v11 = XDCOBJ::bFullScreen(a2);
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v17);
  }
  ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(a1, v11);
  return a1;
}
