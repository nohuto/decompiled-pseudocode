/*
 * XREFs of ?CreateWin32KFilterBitmap@@YAJKQEBQEBDHKPEAE@Z @ 0x1401010FC
 * Callers:
 *     InitializeWin32KSyscallFilter @ 0x140100E20 (InitializeWin32KSyscallFilter.c)
 * Callees:
 *     ?RtlStringCbPrintfA@@YAJPEAD_KPEBDZZ @ 0x140101210 (-RtlStringCbPrintfA@@YAJPEAD_KPEBDZZ.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall CreateWin32KFilterBitmap(
        unsigned int a1,
        const char *const *const a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int8 *a5)
{
  unsigned int v5; // ebx
  __int64 i; // rdi
  __int64 (*ExportedRoutineByName)(void); // rax
  int v12; // eax
  unsigned __int64 v13; // rcx
  char v14[272]; // [rsp+20h] [rbp-148h] BYREF

  v5 = 0;
  if ( !a1 || !a2 || !a5 )
    return 87LL;
  memset(a5, 255, a4);
  for ( i = 0LL; (unsigned int)i < a1; i = (unsigned int)(i + 1) )
  {
    if ( (int)RtlStringCbPrintfA(v14, 0x104uLL, "__win32kstub_%s", a2[i]) < 0 )
      return 87LL;
    ExportedRoutineByName = (__int64 (*)(void))RtlFindExportedRoutineByName(gpvWin32kImageBase, v14);
    if ( ExportedRoutineByName )
    {
      v12 = ExportedRoutineByName();
      v13 = (unsigned __int64)v12 >> 3;
      if ( (unsigned int)v13 >= a4 )
        return 122;
      a5[(unsigned int)v13] ^= 1 << (v12 & 7);
    }
    else
    {
      v5 = 127;
    }
    memset(v14, 0, 0x104uLL);
  }
  return v5;
}
