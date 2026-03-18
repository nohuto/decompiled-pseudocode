/*
 * XREFs of ?CopyFontFilesIntoPoolMem@UmfdHostLifeTimeManager@@SAPEAPEAXPEAPEAUFONTFILEVIEW@@KPEAK@Z @ 0x14034D6D0
 * Callers:
 *     ?CaptureLiveDumpWithFontFiles@UmfdHostLifeTimeManager@@SAXPEAUExtendedContext@1@@Z @ 0x14034D61C (-CaptureLiveDumpWithFontFiles@UmfdHostLifeTimeManager@@SAXPEAUExtendedContext@1@@Z.c)
 * Callees:
 *     ComputeFileviewCheckSum @ 0x140140440 (ComputeFileviewCheckSum.c)
 *     PALLOCMEM @ 0x140183124 (PALLOCMEM.c)
 *     ??0FontFileBackupMapper@UmfdHostLifeTimeManager@@QEAA@PEBUFONTFILEVIEW@@@Z @ 0x14034D4E8 (--0FontFileBackupMapper@UmfdHostLifeTimeManager@@QEAA@PEBUFONTFILEVIEW@@@Z.c)
 *     ??1FontFileBackupMapper@UmfdHostLifeTimeManager@@QEAA@XZ @ 0x14034D5C4 (--1FontFileBackupMapper@UmfdHostLifeTimeManager@@QEAA@XZ.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

void **__fastcall UmfdHostLifeTimeManager::CopyFontFilesIntoPoolMem(
        struct FONTFILEVIEW **a1,
        unsigned int a2,
        unsigned int *a3)
{
  struct FONTFILEVIEW **v5; // r15
  void **result; // rax
  void **v7; // rsi
  __int64 v8; // rbx
  struct FONTFILEVIEW *v9; // rdx
  unsigned __int64 v10; // r12
  _DWORD *v11; // r15
  void *v12; // rax
  void **v13; // r13
  void *Src[10]; // [rsp+38h] [rbp-50h] BYREF

  v5 = a1;
  result = (void **)PALLOCMEM(8 * a2, 1886221383LL);
  v7 = result;
  if ( result )
  {
    if ( a3 )
      *a3 = 0;
    v8 = 0LL;
    while ( (unsigned int)v8 < a2 )
    {
      v9 = v5[v8];
      v10 = *((unsigned int *)v9 + 6);
      UmfdHostLifeTimeManager::FontFileBackupMapper::FontFileBackupMapper(
        (UmfdHostLifeTimeManager::FontFileBackupMapper *)Src,
        v9);
      v11 = Src[0];
      if ( Src[0] )
      {
        v12 = (void *)PALLOCMEM(v10, 1886221383LL);
        v13 = &v7[v8];
        *v13 = v12;
        if ( v12 )
          memmove(v12, v11, (unsigned int)v10);
        if ( a3 )
        {
          if ( *v13 )
            v11 = *v13;
          *a3 += ComputeFileviewCheckSum(v11, v10);
        }
      }
      UmfdHostLifeTimeManager::FontFileBackupMapper::~FontFileBackupMapper((UmfdHostLifeTimeManager::FontFileBackupMapper *)Src);
      v8 = (unsigned int)(v8 + 1);
      v5 = a1;
    }
    return v7;
  }
  return result;
}
