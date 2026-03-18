/*
 * XREFs of ??0PFFMEMOBJ@@QEAA@PEAVPFF@@KKPEAVPFT@@@Z @ 0x14032968C
 * Callers:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x140102C2C (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 * Callees:
 *     ?bAddPvtData@PFFOBJ@@QEAAHK@Z @ 0x14013FAD8 (-bAddPvtData@PFFOBJ@@QEAAHK@Z.c)
 *     PALLOCMEM @ 0x140183124 (PALLOCMEM.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

PFFMEMOBJ *__fastcall PFFMEMOBJ::PFFMEMOBJ(PFFMEMOBJ *this, struct PFF *Src, int a3, int a4, struct PFT *a5)
{
  char v7; // si
  void *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdx
  int v12; // r8d
  int v13; // edx
  __int64 v14; // rax
  int v15; // ecx
  _QWORD *v16; // rax
  __int64 v17; // rax

  *((_DWORD *)this + 5) = a4;
  *((_WORD *)this + 8) = 0;
  *((_DWORD *)this + 2) = 0;
  v7 = a4;
  v9 = (void *)PALLOCMEM(*(_DWORD *)Src, 1717989447LL);
  *(_QWORD *)this = v9;
  if ( v9 )
  {
    memmove(v9, Src, *(_QWORD *)Src);
    PushThreadGuardedObject(*(_QWORD *)this + 168LL, *(_QWORD *)this, CleanUpPFF);
    v10 = *((_QWORD *)Src + 3);
    if ( v10 )
      *(_QWORD *)(*(_QWORD *)this + 24LL) = v10 + *(_QWORD *)this - (_QWORD)Src;
    v11 = *((_QWORD *)Src + 5);
    if ( v11 )
      *(_QWORD *)(*(_QWORD *)this + 40LL) = v11 + *(_QWORD *)this - (_QWORD)Src;
    memset_0((void *)(*(_QWORD *)this + 224LL), 0, 8LL * *((unsigned int *)Src + 54));
    v12 = *((_DWORD *)Src + 13);
    v13 = a3 | 0x200;
    if ( (v12 & 0x200) == 0 )
      v13 = a3;
    *(_QWORD *)(*(_QWORD *)this + 200LL) = *((_QWORD *)Src + 25);
    v14 = *(_QWORD *)this;
    *(_QWORD *)(v14 + 16) = 0LL;
    *(_QWORD *)(v14 + 8) = 0LL;
    *(_DWORD *)(*(_QWORD *)this + 216LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 68LL) = 0;
    v15 = v13 | 0x1000;
    if ( (v12 & 0x1000) == 0 )
      v15 = v13;
    *(_DWORD *)(*(_QWORD *)this + 52LL) = v15;
    *(_QWORD *)(*(_QWORD *)this + 112LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 120LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 128LL) = 0LL;
    v16 = (_QWORD *)(*(_QWORD *)this + 72LL);
    v16[1] = v16;
    *v16 = v16;
    *(_QWORD *)(*(_QWORD *)this + 136LL) = a5;
    *(_QWORD *)(*(_QWORD *)this + 152LL) = 0LL;
    v17 = *(_QWORD *)this;
    if ( (v7 & 0x1C) != 0 )
    {
      *(_DWORD *)(v17 + 56) = 0;
      *(_DWORD *)(*(_QWORD *)this + 60LL) = 0;
      PFFOBJ::bAddPvtData(this, v7);
    }
    else if ( (v7 & 0x20) != 0 )
    {
      *(_DWORD *)(v17 + 56) = 0;
      *(_DWORD *)(*(_QWORD *)this + 60LL) = 1;
    }
    else
    {
      *(_DWORD *)(v17 + 56) = 1;
      *(_DWORD *)(*(_QWORD *)this + 60LL) = 0;
    }
    *((_QWORD *)Src + 20) = *(_QWORD *)this;
    *(_QWORD *)(*(_QWORD *)this + 160LL) = Src;
  }
  return this;
}
