/*
 * XREFs of bDeletePalette @ 0x1400C0AD0
 * Callers:
 *     ?GrepCloseCurrentProcess@@YAHXZ @ 0x1400845B0 (-GrepCloseCurrentProcess@@YAHXZ.c)
 *     GrepThreadCallout @ 0x1400C06D0 (GrepThreadCallout.c)
 * Callees:
 *     HmgShareLockCheck @ 0x140017AD0 (HmgShareLockCheck.c)
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x140045860 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x140045890 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140046390 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0?$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400E8268 (--0-$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0XEPALOBJ2@@QEAA@XZ @ 0x1401C58B4 (--0XEPALOBJ2@@QEAA@XZ.c)
 *     ??1XEPALOBJ2@@QEAA@XZ @ 0x1401C58F8 (--1XEPALOBJ2@@QEAA@XZ.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z @ 0x1401C595C (-bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z.c)
 */

__int64 __fastcall bDeletePalette(__int64 a1)
{
  __int64 SessionState; // rax
  unsigned int v3; // edi
  struct _ERESOURCE *v4; // rbx
  struct _GRETHREAD *v5; // rax
  _QWORD v8[7]; // [rsp+20h] [rbp-38h] BYREF
  HSEMAPHORE v9; // [rsp+68h] [rbp+10h] BYREF

  SessionState = W32GetSessionState(a1);
  SEMOBJ<13>::SEMOBJ<13>(&v9, *(_QWORD *)(SessionState + 88));
  XEPALOBJ2::XEPALOBJ2((XEPALOBJ2 *)v8);
  v3 = 0;
  v8[0] = HmgShareLockCheck(a1, 8);
  if ( v8[0] )
    v3 = XEPALOBJ::bDeletePalette(v8, 0LL);
  XEPALOBJ2::~XEPALOBJ2((XEPALOBJ2 *)v8);
  v4 = (struct _ERESOURCE *)v9;
  if ( v9 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"Palette", (int)v9);
    v5 = GreGetCurrentThreadCrossSessionCheck();
    if ( v5 )
    {
      if ( (*((_BYTE *)v5 + 21))-- == 1 )
        *(_QWORD *)v5 &= ~0x2000uLL;
    }
    GreReleaseSemaphoreSharedInternal(v4);
  }
  return v3;
}
