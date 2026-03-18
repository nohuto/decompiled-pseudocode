/*
 * XREFs of ?pchTranslate@RFONTOBJ@@QEAAPEADPEBD@Z @ 0x14030F828
 * Callers:
 *     FONTOBJ_pvTrueTypeFontFile @ 0x140309E80 (FONTOBJ_pvTrueTypeFontFile.c)
 *     ?pjTable@RFONTOBJ@@QEAAPEAEKPEAK@Z @ 0x14030F980 (-pjTable@RFONTOBJ@@QEAAPEAEKPEAK@Z.c)
 * Callees:
 *     ?MapFontFileInKernel@@YA_NPEAXPEAPEAX@Z @ 0x1401C2DB0 (-MapFontFileInKernel@@YA_NPEAXPEAPEAX@Z.c)
 *     ?vUnmapFontFileInKernel@@YAXPEAX@Z @ 0x1401C2E9C (-vUnmapFontFileInKernel@@YAXPEAX@Z.c)
 *     ?bAddPrintKView@@YAH_KPEAXK0PEAU_FONTFILE_PRINTKVIEW@@@Z @ 0x14030F5A4 (-bAddPrintKView@@YAH_KPEAXK0PEAU_FONTFILE_PRINTKVIEW@@@Z.c)
 *     ?bFindPrintKView@@YAH_KKPEAPEAU_FONTFILE_PRINTKVIEW@@@Z @ 0x14030F704 (-bFindPrintKView@@YAH_KKPEAPEAU_FONTFILE_PRINTKVIEW@@@Z.c)
 */

char *__fastcall RFONTOBJ::pchTranslate(RFONTOBJ *this, const char *a2)
{
  __int64 v4; // rbp
  __int64 v5; // r12
  __int64 *v6; // r14
  unsigned int i; // r15d
  __int64 v8; // rbx
  unsigned __int64 v9; // rdi
  __int64 v10; // rax
  void *v11; // rcx
  char *v13; // rbx
  struct _FONTFILE_PRINTKVIEW *v14; // [rsp+78h] [rbp+10h] BYREF
  void *v15; // [rsp+80h] [rbp+18h] BYREF

  v15 = 0LL;
  v14 = 0LL;
  if ( (unsigned __int64)a2 >= 0x10000 && a2 <= MmHighestUserAddress )
  {
    v4 = *(_QWORD *)(*(_QWORD *)this + 128LL);
    if ( v4 )
    {
      v5 = *(_QWORD *)(v4 + 88);
      if ( v5 )
      {
        v6 = *(__int64 **)(v4 + 208);
        if ( v6 )
        {
          for ( i = 0; i < *(_DWORD *)(v4 + 36); ++i )
          {
            v8 = *v6;
            if ( *v6 )
            {
              v9 = *(_QWORD *)(v8 + 104);
              if ( (v9 || (v9 = *(_QWORD *)(v8 + 16)) != 0)
                && v9 <= (unsigned __int64)a2
                && (unsigned __int64)a2 < v9 + *(unsigned int *)(v8 + 24) )
              {
                if ( (unsigned int)bFindPrintKView(v5, i, &v14) )
                {
                  v10 = *((_QWORD *)v14 + 2);
                  if ( v10 )
                    return (char *)&a2[v10 - v9];
                }
                v11 = *(void **)(v8 + 32);
                if ( v11 )
                {
                  if ( MapFontFileInKernel(v11, &v15) )
                  {
                    v13 = (char *)v15;
                    if ( (unsigned int)bAddPrintKView(
                                         v5,
                                         v15,
                                         i,
                                         *(unsigned int *)(*(_QWORD *)(*(_QWORD *)this + 120LL) + 80LL),
                                         v14) )
                      return &v13[(_QWORD)a2 - v9];
                    vUnmapFontFileInKernel(v13);
                    return 0LL;
                  }
                }
              }
            }
            ++v6;
          }
        }
      }
    }
  }
  return 0LL;
}
