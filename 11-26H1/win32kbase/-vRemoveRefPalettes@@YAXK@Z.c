/*
 * XREFs of ?vRemoveRefPalettes@@YAXK@Z @ 0x1401FABE8
 * Callers:
 *     ?GrepCloseCurrentProcess@@YAHXZ @ 0x1401FA56C (-GrepCloseCurrentProcess@@YAHXZ.c)
 * Callees:
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B1C0 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B520 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     HmgIsProcessCleanupRequiredByW32Pid @ 0x140023C30 (HmgIsProcessCleanupRequiredByW32Pid.c)
 *     ?HmgNextOwned@@YAIIKPEAPEAUHOBJ__@@PEAPEAVOBJECT@@@Z @ 0x140024260 (-HmgNextOwned@@YAIIKPEAPEAUHOBJ__@@PEAPEAVOBJECT@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x140044440 (EtwTraceGreLockReleaseSemaphore.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1400C2CFC (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ??0?$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C3380 (--0-$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1400C9BF0 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?apalResetColorTable@XEPALOBJ@@QEAAXXZ @ 0x1401C0AC8 (-apalResetColorTable@XEPALOBJ@@QEAAXXZ.c)
 */

void __fastcall vRemoveRefPalettes(unsigned int a1)
{
  unsigned int i; // ecx
  __int64 v3; // rcx
  __int64 SessionState; // rax
  int v5; // r8d
  struct _GRETHREAD *v6; // rax
  unsigned int v8; // esi
  unsigned int *v9[2]; // [rsp+20h] [rbp-10h] BYREF
  struct OBJECT *v10; // [rsp+58h] [rbp+28h] BYREF
  HSEMAPHORE v11; // [rsp+60h] [rbp+30h] BYREF
  HPALETTE v12; // [rsp+68h] [rbp+38h] BYREF

  if ( HmgIsProcessCleanupRequiredByW32Pid(a1) )
  {
    v12 = 0LL;
    for ( i = 0; ; i = v8 )
    {
      v8 = HmgNextOwned(i, a1, (struct HOBJ__ **)&v12, &v10);
      if ( !v8 )
        break;
      v3 = (unsigned int)v12 >> 16;
      if ( (BYTE2(v12) & 0x1F) == 8 )
      {
        LOBYTE(v3) = BYTE2(v12) & 0x1F;
        SessionState = W32GetSessionState(v3);
        SEMOBJ<13>::SEMOBJ<13>((struct _ERESOURCE **)&v11, *(struct _ERESOURCE ***)(SessionState + 88));
        EPALOBJ::EPALOBJ((EPALOBJ *)v9, v12);
        if ( v9[0] )
          XEPALOBJ::apalResetColorTable((XEPALOBJ *)v9);
        EPALOBJ::~EPALOBJ(v9);
        if ( v11 )
        {
          EtwTraceGreLockReleaseSemaphore((__int64)L"Palette", (int)v11, v5);
          v6 = GreGetCurrentThreadCrossSessionCheck();
          if ( v6 )
          {
            if ( (*((_BYTE *)v6 + 21))-- == 1 )
              *(_QWORD *)v6 &= ~0x2000uLL;
          }
          GreReleaseSemaphoreSharedInternal((struct _ERESOURCE *)v11);
          v11 = 0LL;
        }
      }
    }
  }
}
