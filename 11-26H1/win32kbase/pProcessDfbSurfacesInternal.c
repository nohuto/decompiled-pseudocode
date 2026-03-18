/*
 * XREFs of pProcessDfbSurfacesInternal @ 0x14002F2C0
 * Callers:
 *     pProcessDfbSurfaces2 @ 0x140030400 (pProcessDfbSurfaces2.c)
 * Callees:
 *     ??$GreReleaseSemaphoreExclusive@$0BE@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001AFC0 (--$GreReleaseSemaphoreExclusive@$0BE@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x140026090 (--1SURFMEM@@QEAA@XZ.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHH@Z @ 0x140026360 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHH@Z.c)
 *     vDynamicConvertNewSurfaceDCs @ 0x14002F1A0 (vDynamicConvertNewSurfaceDCs.c)
 *     bMigrateSurfaceForConversion @ 0x14002F4E0 (bMigrateSurfaceForConversion.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14003BBF4 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1400C65C4 (-vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1400C6D34 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??0MLOCKOBJ@@QEAA@XZ @ 0x140127ED0 (--0MLOCKOBJ@@QEAA@XZ.c)
 *     ?vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z @ 0x1401F12B0 (-vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z.c)
 */

unsigned int *__fastcall pProcessDfbSurfacesInternal(struct SURFACE *this)
{
  unsigned int *v1; // rsi
  unsigned int *v2; // rbx
  int v4; // eax
  int v5; // ecx
  __int64 v7; // rcx
  __int64 SessionState; // rax
  __int64 v9; // rdx
  int v10; // r8d
  int v11; // eax
  unsigned int *v12; // [rsp+50h] [rbp-B0h] BYREF
  char v13; // [rsp+58h] [rbp-A8h]
  int v14; // [rsp+5Ch] [rbp-A4h]
  _DWORD v15[4]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v16; // [rsp+70h] [rbp-90h]
  __int64 v17; // [rsp+78h] [rbp-88h]
  _BYTE v18[32]; // [rsp+80h] [rbp-80h] BYREF
  char v19[128]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v20; // [rsp+160h] [rbp+60h] BYREF

  v1 = (unsigned int *)*((_QWORD *)this + 70);
  v2 = 0LL;
  W32GetSessionState(this);
  v4 = *((_DWORD *)this + 28);
  if ( (v4 & 0x100000) == 0 && v4 >= 0 )
  {
    v5 = *((_DWORD *)this + 29) & 1;
    if ( v5 || (v4 & 0x800) == 0 || *((_WORD *)this + 50) != 3 )
    {
      v12 = 0LL;
      v13 = 0;
      v14 = 0;
      if ( !v1 )
      {
        v15[0] = *((_DWORD *)this + 24);
        v15[1] = *((_DWORD *)this + 14);
        v15[2] = *((_DWORD *)this + 15);
        v15[3] = 0;
        v17 = 1LL;
        v16 = 0LL;
        if ( v5 )
        {
          v11 = 1;
          if ( (*((_WORD *)this + 51) & 0x800) != 0 )
            v11 = 2049;
          LODWORD(v17) = v11;
        }
        if ( !(unsigned int)SURFMEM::bCreateDIB(
                              (SURFMEM *)&v12,
                              (struct _DEVBITMAPINFO *)v15,
                              0LL,
                              0LL,
                              0,
                              0LL,
                              0LL,
                              0,
                              1,
                              0) )
          goto LABEL_13;
        v20 = *((_QWORD *)this + 6);
        DLODCOBJ::DLODCOBJ((DLODCOBJ *)v19);
        DEVLOCKOBJ::vLock((DEVLOCKOBJ *)v18, (struct PDEVOBJ *)&v20);
        MLOCKOBJ::MLOCKOBJ((MLOCKOBJ *)&v20);
        v1 = v12;
        if ( (*((_DWORD *)this + 29) & 1) != 0 )
          v12[28] |= 0x800u;
        *((_QWORD *)v1 + 6) = *((_QWORD *)this + 6);
        if ( (_DWORD)v20 )
        {
          SessionState = W32GetSessionState(v7);
          GreReleaseSemaphoreExclusive<20,>(*(__int64 **)(SessionState + 88), v9, v10);
        }
        DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v18);
      }
      if ( (unsigned int)bMigrateSurfaceForConversion(this, (SURFACE *)v1) )
      {
        if ( v12 )
          v13 |= 1u;
        v2 = v1;
LABEL_9:
        SURFMEM::~SURFMEM(&v12);
        return v2;
      }
LABEL_13:
      if ( (*((_DWORD *)this + 29) & 1) != 0 )
        vCleanupRedirectionSurface(this, 0);
      goto LABEL_9;
    }
  }
  return 0LL;
}
