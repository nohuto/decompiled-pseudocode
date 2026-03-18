/*
 * XREFs of ?GrepSelectPalette@@YAPEAUHPALETTE__@@AEAVXDCOBJ@@PEAU1@H@Z @ 0x1400D7A2C
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x14001C350 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     GreSelectPalette @ 0x1400D79C0 (GreSelectPalette.c)
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1401245F0 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     HmgShareLockCheck @ 0x140017AD0 (HmgShareLockCheck.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x14001A30C (--0-$SEMOBJ@$0BE@@@QEAA@XZ.c)
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001A7F0 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     HmgDecrementShareReferenceCountEx @ 0x14001CA40 (HmgDecrementShareReferenceCountEx.c)
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14004549C (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x140045860 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x140045890 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140046390 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140088A44 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?vAddToList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1400D7CB8 (-vAddToList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vRemoveFromList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1400D7D94 (-vRemoveFromList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vMakeNoXlate@XEPALOBJ@@QEAAXXZ @ 0x1400D7F20 (-vMakeNoXlate@XEPALOBJ@@QEAAXXZ.c)
 */

HPALETTE __fastcall GrepSelectPalette(struct XDCOBJ *a1, struct _ERESOURCE *a2, int a3)
{
  struct _ERESOURCE **v6; // r15
  struct _ERESOURCE *v7; // rdi
  struct _GRETHREAD *v8; // rax
  struct _GRETHREAD *v9; // rbx
  __int64 v10; // rcx
  char v11; // cl
  __int64 v12; // rax
  __int64 v13; // rcx
  bool v14; // zf
  __int64 v15; // rbx
  HPALETTE v16; // rbp
  struct _GRETHREAD *v17; // rax
  struct _GRETHREAD *v19; // rax
  __int64 v20; // r15
  __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  int v23; // r8d
  int v24; // eax
  __int64 CurrentProcessWin32Process; // rax
  HSEMAPHORE v26[7]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v27; // [rsp+60h] [rbp+8h] BYREF
  __int64 v28; // [rsp+78h] [rbp+20h] BYREF

  v6 = *(struct _ERESOURCE ***)(W32GetSessionState(a1) + 88);
  v7 = *v6 + 3;
  GreAcquireSemaphoreInternal(v7);
  v8 = GreGetCurrentThreadCrossSessionCheck();
  v9 = v8;
  if ( v8 )
  {
    v10 = *(_QWORD *)v8;
    if ( (*(_QWORD *)v8 & 0xFFFFFFFFFFFFE000uLL) != 0 && (v10 & 0x2000) == 0 )
    {
      v22 = 0LL;
      v23 = 37;
      do
      {
        v24 = v22;
        if ( !_bittest64(&v10, v22) )
          v24 = v23;
        ++v22;
        v23 = v24;
      }
      while ( v22 < 0x40 );
      if ( v24 > 13 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
    }
    v11 = *((_BYTE *)v9 + 21);
    *((_BYTE *)v9 + 21) = v11 + 1;
    if ( !v11 )
      *(_QWORD *)v9 |= 0x2000uLL;
  }
  v12 = HmgShareLockCheck((__int64)a2, 8);
  v14 = *(_QWORD *)a1 == 0LL;
  v15 = v12;
  v27 = v12;
  if ( !v14 )
  {
    if ( !v12 )
      goto LABEL_18;
    if ( (*(_DWORD *)(v12 + 24) & 0x100) != 0 )
    {
      if ( !a3 )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13);
        if ( CurrentProcessWin32Process )
        {
          v13 = -*(_QWORD *)CurrentProcessWin32Process;
          CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
        }
        v6[458] = (struct _ERESOURCE *)CurrentProcessWin32Process;
        v6[457] = a2;
      }
      v16 = *(HPALETTE *)(*(_QWORD *)a1 + 80LL);
      if ( v16 == (HPALETTE)a2 )
        goto LABEL_10;
      v28 = *(_QWORD *)(*(_QWORD *)a1 + 88LL);
      if ( v15 == *(_QWORD *)(*(_QWORD *)(W32GetSessionState(v13) + 88) + 3768LL)
        || (v20 = *(_QWORD *)(*(_QWORD *)a1 + 48LL), *(_QWORD *)(v15 + 48) == v20) )
      {
LABEL_26:
        SEMOBJ<20>::SEMOBJ<20>(v26);
        XEPALOBJ::vRemoveFromList((XEPALOBJ *)&v28, a1);
        *(_QWORD *)(*(_QWORD *)a1 + 80LL) = a2;
        *(_QWORD *)(*(_QWORD *)a1 + 88LL) = v15;
        v21 = *(_QWORD *)(*(_QWORD *)a1 + 976LL);
        *(_DWORD *)(v21 + 152) |= 0xFu;
        if ( *(_QWORD *)(*(_QWORD *)a1 + 496LL)
          && v15 != *(_QWORD *)(*(_QWORD *)(W32GetSessionState(v21) + 88) + 3768LL) )
        {
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 496LL) + 176LL) = a2;
        }
        XEPALOBJ::vAddToList((XEPALOBJ *)&v27, a1);
        SEMOBJ<20>::vUnlock(v26);
LABEL_10:
        HmgDecrementShareReferenceCountEx((struct _BASEOBJECT *)v15, 0LL);
        if ( v7 )
        {
          EtwTraceGreLockReleaseSemaphore((__int64)L"Palette", (int)v7);
          v17 = GreGetCurrentThreadCrossSessionCheck();
          if ( v17 )
          {
            v14 = (*((_BYTE *)v17 + 21))-- == 1;
            if ( v14 )
              *(_QWORD *)v17 &= ~0x2000uLL;
          }
          GreReleaseSemaphoreSharedInternal(v7);
        }
        return v16;
      }
      if ( !*(_DWORD *)(v15 + 56) )
      {
        XEPALOBJ::vMakeNoXlate((XEPALOBJ *)&v27);
        *(_QWORD *)(v15 + 48) = v20;
        goto LABEL_26;
      }
      goto LABEL_17;
    }
  }
  if ( v12 )
LABEL_17:
    HmgDecrementShareReferenceCountEx((struct _BASEOBJECT *)v15, 0LL);
LABEL_18:
  if ( v7 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"Palette", (int)v7);
    v19 = GreGetCurrentThreadCrossSessionCheck();
    if ( v19 )
    {
      v14 = (*((_BYTE *)v19 + 21))-- == 1;
      if ( v14 )
        *(_QWORD *)v19 &= ~0x2000uLL;
    }
    GreReleaseSemaphoreSharedInternal(v7);
  }
  return 0LL;
}
