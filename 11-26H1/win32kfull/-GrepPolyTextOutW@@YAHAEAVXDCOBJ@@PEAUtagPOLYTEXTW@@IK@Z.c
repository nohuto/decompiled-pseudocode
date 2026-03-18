/*
 * XREFs of ?GrepPolyTextOutW@@YAHAEAVXDCOBJ@@PEAUtagPOLYTEXTW@@IK@Z @ 0x140333F0C
 * Callers:
 *     NtGdiPolyTextOutW @ 0x14032B530 (NtGdiPolyTextOutW.c)
 * Callees:
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x14006DAC0 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14006EFE0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEBAHXZ @ 0x1400ABFA0 (-bFullScreen@XDCOBJ@@QEBAHXZ.c)
 *     ?GrepExtTextOutWLocked@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXK@Z @ 0x1400BC904 (-GrepExtTextOutWLocked@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXK@.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall GrepPolyTextOutW(struct XDCOBJ *this, struct tagPOLYTEXTW *a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // rbp
  unsigned int v8; // edi
  int **v9; // rbp
  int **i; // rsi
  int v11; // r9d
  char *v12; // rdx
  _BYTE v14[16]; // [rsp+60h] [rbp-1A8h] BYREF
  _BYTE v15[160]; // [rsp+70h] [rbp-198h] BYREF
  char v16; // [rsp+110h] [rbp-F8h] BYREF

  v5 = a3;
  v8 = 1;
  if ( (*(_DWORD *)(*(_QWORD *)this + 36LL) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    return 0;
  }
  else
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v15);
    if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v15, this, 0) )
    {
      v9 = (int **)((char *)a2 + 56 * v5);
      for ( i = (int **)((char *)a2 + 48); i - 6 < v9; i += 7 )
      {
        v11 = *((_DWORD *)i - 10);
        v12 = &v16;
        if ( ((30 * v11 + 7) & 0xFFFFFFF8) > 0xC0 )
          v12 = 0LL;
        if ( !*(_DWORD *)GrepExtTextOutWLocked(
                           (__int64)v14,
                           this,
                           *((_DWORD *)i - 12),
                           *((_DWORD *)i - 11),
                           *((_DWORD *)i - 6),
                           (int *)i - 5,
                           (unsigned __int16 *)*(i - 4),
                           v11,
                           *i,
                           *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)this + 976LL) + 213LL),
                           v12,
                           a4) )
        {
          v8 = 0;
          break;
        }
      }
    }
    else
    {
      v8 = XDCOBJ::bFullScreen(this);
    }
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v15);
  }
  return v8;
}
