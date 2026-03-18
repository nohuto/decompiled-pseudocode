/*
 * XREFs of ?vRemoveRefPalettes@@YAXK@Z @ 0x140085DF4
 * Callers:
 *     ?GrepCloseCurrentProcess@@YAHXZ @ 0x1400845B0 (-GrepCloseCurrentProcess@@YAHXZ.c)
 * Callees:
 *     HmgShareLockCheck @ 0x140017AD0 (HmgShareLockCheck.c)
 *     HmgDecrementShareReferenceCountEx @ 0x14001CA40 (HmgDecrementShareReferenceCountEx.c)
 *     HmgNextOwned @ 0x140045150 (HmgNextOwned.c)
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x140045860 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x140045890 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140046390 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0?$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400E8268 (--0-$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

void __fastcall vRemoveRefPalettes(unsigned int a1)
{
  unsigned int v2; // edx
  unsigned int i; // ecx
  __int64 v4; // rcx
  unsigned int Owned; // edi
  __int64 SessionState; // rax
  __int64 v7; // rax
  __int64 v8; // rbx
  struct _ERESOURCE *v9; // rbx
  struct _GRETHREAD *v10; // rax
  struct _BASEOBJECT *v12; // rcx
  __int64 v13; // [rsp+38h] [rbp+10h] BYREF
  HSEMAPHORE v14; // [rsp+40h] [rbp+18h] BYREF

  v13 = 0LL;
  v2 = a1;
  for ( i = 0; ; i = Owned )
  {
    Owned = HmgNextOwned(i, v2, (unsigned __int64 *)&v13);
    if ( !Owned )
      break;
    if ( (BYTE2(v13) & 0x1F) == 8 )
    {
      SessionState = W32GetSessionState(v4);
      SEMOBJ<13>::SEMOBJ<13>(&v14, *(_QWORD *)(SessionState + 88));
      v7 = HmgShareLockCheck(v13, 8);
      v8 = v7;
      if ( v7 )
      {
        v12 = *(struct _BASEOBJECT **)(v7 + 120);
        if ( v12 != (struct _BASEOBJECT *)v7 )
          HmgDecrementShareReferenceCountEx(v12, 0LL);
        *(_QWORD *)(v8 + 112) = *(_QWORD *)(v8 + 128);
        *(_QWORD *)(v8 + 120) = v8;
        HmgDecrementShareReferenceCountEx((struct _BASEOBJECT *)v8, 0LL);
      }
      v9 = (struct _ERESOURCE *)v14;
      if ( v14 )
      {
        EtwTraceGreLockReleaseSemaphore((__int64)L"Palette", (int)v14);
        v10 = GreGetCurrentThreadCrossSessionCheck();
        if ( v10 )
        {
          if ( (*((_BYTE *)v10 + 21))-- == 1 )
            *(_QWORD *)v10 &= ~0x2000uLL;
        }
        GreReleaseSemaphoreSharedInternal(v9);
        v14 = 0LL;
      }
    }
    v2 = a1;
  }
}
