/*
 * XREFs of ?CaptureLiveDumpWithFontFiles@UmfdHostLifeTimeManager@@SAXPEAUExtendedContext@1@@Z @ 0x1403382E8
 * Callers:
 *     ?RecordUnhandledException@UmfdHostLifeTimeManager@@SAXPEBVFontDriverDdiRequest@@@Z @ 0x140338544 (-RecordUnhandledException@UmfdHostLifeTimeManager@@SAXPEBVFontDriverDdiRequest@@@Z.c)
 * Callees:
 *     ?CopyFontFilesIntoPoolMem@UmfdHostLifeTimeManager@@SAPEAPEAXPEAPEAUFONTFILEVIEW@@KPEAK@Z @ 0x14033839C (-CopyFontFilesIntoPoolMem@UmfdHostLifeTimeManager@@SAPEAPEAXPEAPEAUFONTFILEVIEW@@KPEAK@Z.c)
 */

void __fastcall UmfdHostLifeTimeManager::CaptureLiveDumpWithFontFiles(
        struct UmfdHostLifeTimeManager::ExtendedContext *a1)
{
  unsigned int v1; // edx
  unsigned int *v2; // r8
  bool v4; // zf
  struct FONTFILEVIEW **v5; // rcx
  void **v6; // rsi
  unsigned int v7; // ecx
  void **v8; // rbx
  __int64 v9; // rdi

  v1 = *((_DWORD *)a1 + 2);
  v2 = (unsigned int *)((char *)a1 + 32);
  v4 = *((_DWORD *)a1 + 8) == 0;
  v5 = *(struct FONTFILEVIEW ***)a1;
  if ( !v4 )
    v2 = 0LL;
  v6 = UmfdHostLifeTimeManager::CopyFontFilesIntoPoolMem(v5, v1, v2);
  GrepCaptureLiveMemoryDump(400LL, 50LL, a1);
  if ( v6 )
  {
    v7 = *((_DWORD *)a1 + 2);
    if ( v7 )
    {
      v8 = v6;
      v9 = v7;
      do
      {
        Win32FreePool(*v8);
        *v8++ = 0LL;
        --v9;
      }
      while ( v9 );
    }
    Win32FreePool(v6);
  }
}
