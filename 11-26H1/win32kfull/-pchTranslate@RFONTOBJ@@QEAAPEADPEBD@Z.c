/*
 * XREFs of ?pchTranslate@RFONTOBJ@@QEAAPEADPEBD@Z @ 0x140327EBC
 * Callers:
 *     FONTOBJ_pvTrueTypeFontFile @ 0x1403207C0 (FONTOBJ_pvTrueTypeFontFile.c)
 *     ?pjTable@RFONTOBJ@@QEAAPEAEKPEAK@Z @ 0x140328024 (-pjTable@RFONTOBJ@@QEAAPEAEKPEAK@Z.c)
 * Callees:
 *     ?vUnmapFontFileInKernel@@YAXPEAX@Z @ 0x1400CEF7C (-vUnmapFontFileInKernel@@YAXPEAX@Z.c)
 *     ?MapFontFileInKernel@@YA_NPEAXPEAPEAX@Z @ 0x1400CF540 (-MapFontFileInKernel@@YA_NPEAXPEAPEAX@Z.c)
 *     ?bAddPrintKView@@YAH_KPEAXK0PEAU_FONTFILE_PRINTKVIEW@@@Z @ 0x140327B58 (-bAddPrintKView@@YAH_KPEAXK0PEAU_FONTFILE_PRINTKVIEW@@@Z.c)
 *     ?bFindPrintKView@@YAH_KKPEAPEAU_FONTFILE_PRINTKVIEW@@@Z @ 0x140327CB8 (-bFindPrintKView@@YAH_KKPEAPEAU_FONTFILE_PRINTKVIEW@@@Z.c)
 */

char *__fastcall RFONTOBJ::pchTranslate(RFONTOBJ *this, const char *a2)
{
  __int64 v4; // rbp
  __int64 v5; // r12
  __int64 *v6; // r14
  unsigned int i; // r15d
  __int64 v8; // rbx
  unsigned __int64 v9; // rdi
  int PrintKView; // eax
  struct _FONTFILE_PRINTKVIEW *v11; // r13
  __int64 v12; // rax
  void *v13; // rcx
  char *v15; // rbx
  struct _FONTFILE_PRINTKVIEW *v17; // [rsp+78h] [rbp+10h] BYREF
  void *v18; // [rsp+80h] [rbp+18h] BYREF

  v18 = 0LL;
  v17 = 0LL;
  if ( a2 )
  {
    if ( (unsigned __int8)MmIsUserAddress(a2) )
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
                  PrintKView = bFindPrintKView(v5, i, &v17);
                  v11 = v17;
                  if ( PrintKView )
                  {
                    v12 = *((_QWORD *)v17 + 2);
                    if ( v12 )
                      return (char *)&a2[v12 - v9];
                  }
                  v13 = *(void **)(v8 + 32);
                  if ( v13 )
                  {
                    if ( MapFontFileInKernel(v13, &v18) )
                    {
                      v15 = (char *)v18;
                      if ( (unsigned int)bAddPrintKView(
                                           v5,
                                           v18,
                                           i,
                                           *(unsigned int *)(*(_QWORD *)(*(_QWORD *)this + 120LL) + 80LL),
                                           v11) )
                        return &v15[(_QWORD)a2 - v9];
                      vUnmapFontFileInKernel(v15);
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
  }
  return 0LL;
}
