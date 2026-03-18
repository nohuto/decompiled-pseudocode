/*
 * XREFs of ?GrepPolyTextOutW@@YAHAEAVXDCOBJ@@PEAUtagPOLYTEXTW@@IKW4EntryPoint@RFONTOBJ@@@Z @ 0x140231A74
 * Callers:
 *     NtGdiPolyTextOutW @ 0x14021F600 (NtGdiPolyTextOutW.c)
 * Callees:
 *     ?GrepExtTextOutWLocked@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXKAEBUTag@RFONTOBJ@@@Z @ 0x140014230 (-GrepExtTextOutWLocked@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXKA.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x140087B54 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14008A870 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEBAHXZ @ 0x14009B348 (-bFullScreen@XDCOBJ@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall GrepPolyTextOutW(DC **a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // rbx
  unsigned int v8; // ebp
  unsigned __int64 v9; // r12
  ULONG **i; // r14
  int v11; // edi
  char *v12; // rcx
  _DWORD v14[2]; // [rsp+70h] [rbp-1A8h] BYREF
  _BYTE v15[8]; // [rsp+78h] [rbp-1A0h] BYREF
  _BYTE v16[144]; // [rsp+80h] [rbp-198h] BYREF
  char v17; // [rsp+110h] [rbp-108h] BYREF

  v5 = a3;
  v8 = 1;
  if ( (*((_DWORD *)*a1 + 9) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    return 0;
  }
  else
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v16);
    v14[1] = *((unsigned __int16 *)*a1 + 6);
    v14[0] = 22;
    if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v16, (struct XDCOBJ *)a1, 0) )
    {
      v9 = a2 + 56 * v5;
      for ( i = (ULONG **)(a2 + 48); (unsigned __int64)(i - 6) < v9; i += 7 )
      {
        v11 = *((_DWORD *)i - 10);
        v12 = &v17;
        if ( ((30 * v11 + 7) & 0xFFFFFFF8) > 0xC0 )
          v12 = 0LL;
        if ( !*(_DWORD *)GrepExtTextOutWLocked(
                           (__int64)v15,
                           a1,
                           *((_DWORD *)i - 12),
                           *((_DWORD *)i - 11),
                           *((_DWORD *)i - 6),
                           (unsigned int *)i - 5,
                           (unsigned __int16 *)*(i - 4),
                           v11,
                           *i,
                           *(unsigned __int8 *)(*((_QWORD *)*a1 + 122) + 213LL),
                           v12,
                           a4,
                           (struct RFONTOBJ::Tag *)v14) )
        {
          v8 = 0;
          break;
        }
      }
    }
    else
    {
      v8 = XDCOBJ::bFullScreen((XDCOBJ *)a1);
    }
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v16);
  }
  return v8;
}
