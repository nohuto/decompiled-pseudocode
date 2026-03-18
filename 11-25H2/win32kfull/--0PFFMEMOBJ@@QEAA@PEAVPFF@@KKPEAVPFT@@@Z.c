/*
 * XREFs of ??0PFFMEMOBJ@@QEAA@PEAVPFF@@KKPEAVPFT@@@Z @ 0x14010C6E8
 * Callers:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1400B663C (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 * Callees:
 *     PALLOCMEM @ 0x140108044 (PALLOCMEM.c)
 *     ?bAddPvtData@PFFOBJ@@QEAAHK@Z @ 0x14010E4A8 (-bAddPvtData@PFFOBJ@@QEAAHK@Z.c)
 *     memmove @ 0x140342600 (memmove.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

PFFMEMOBJ *__fastcall PFFMEMOBJ::PFFMEMOBJ(PFFMEMOBJ *this, struct PFF *Src, int a3, unsigned int a4, struct PFT *a5)
{
  void *v9; // rax
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // r8d
  int v15; // edx
  int v16; // ecx
  _QWORD *v17; // rax
  __int64 v18; // rax

  *((_DWORD *)this + 5) = a4;
  *((_WORD *)this + 8) = 0;
  *((_DWORD *)this + 2) = 0;
  v9 = (void *)PALLOCMEM(*(_DWORD *)Src, 1717989447LL);
  *(_QWORD *)this = v9;
  if ( v9 )
  {
    memmove(v9, Src, *(_QWORD *)Src);
    PushThreadGuardedObject(*(_QWORD *)this + 168LL, *(_QWORD *)this, CleanUpPFF, v11);
    v12 = *((_QWORD *)Src + 3);
    if ( v12 )
      *(_QWORD *)(*(_QWORD *)this + 24LL) = *(_QWORD *)this + v12 - (_QWORD)Src;
    v13 = *((_QWORD *)Src + 5);
    if ( v13 )
      *(_QWORD *)(*(_QWORD *)this + 40LL) = *(_QWORD *)this + v13 - (_QWORD)Src;
    memset_0((void *)(*(_QWORD *)this + 224LL), 0, 8LL * *((unsigned int *)Src + 54));
    v14 = *((_DWORD *)Src + 13);
    v15 = a3 | 0x200;
    if ( (v14 & 0x200) == 0 )
      v15 = a3;
    *(_QWORD *)(*(_QWORD *)this + 200LL) = *((_QWORD *)Src + 25);
    *(_QWORD *)(*(_QWORD *)this + 16LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 8LL) = 0LL;
    *(_DWORD *)(*(_QWORD *)this + 216LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 68LL) = 0;
    v16 = v15 | 0x1000;
    if ( (v14 & 0x1000) == 0 )
      v16 = v15;
    *(_DWORD *)(*(_QWORD *)this + 52LL) = v16;
    *(_QWORD *)(*(_QWORD *)this + 112LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 120LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 128LL) = 0LL;
    v17 = (_QWORD *)(*(_QWORD *)this + 72LL);
    v17[1] = v17;
    *v17 = v17;
    *(_QWORD *)(*(_QWORD *)this + 136LL) = a5;
    *(_QWORD *)(*(_QWORD *)this + 152LL) = 0LL;
    v18 = *(_QWORD *)this;
    if ( (a4 & 0x1C) != 0 )
    {
      *(_DWORD *)(v18 + 56) = 0;
      *(_DWORD *)(*(_QWORD *)this + 60LL) = 0;
      PFFOBJ::bAddPvtData(this, a4);
    }
    else if ( (a4 & 0x20) != 0 )
    {
      *(_DWORD *)(v18 + 56) = 0;
      *(_DWORD *)(*(_QWORD *)this + 60LL) = 1;
    }
    else
    {
      *(_DWORD *)(v18 + 56) = 1;
      *(_DWORD *)(*(_QWORD *)this + 60LL) = 0;
    }
    *((_QWORD *)Src + 20) = *(_QWORD *)this;
    *(_QWORD *)(*(_QWORD *)this + 160LL) = Src;
  }
  return this;
}
