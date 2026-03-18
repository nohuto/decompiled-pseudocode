/*
 * XREFs of ?vMakeNoXlate@XEPALOBJ@@QEAAXXZ @ 0x1400D7F20
 * Callers:
 *     ?GrepSelectPalette@@YAPEAUHPALETTE__@@AEAVXDCOBJ@@PEAU1@H@Z @ 0x1400D7A2C (-GrepSelectPalette@@YAPEAUHPALETTE__@@AEAVXDCOBJ@@PEAU1@H@Z.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z @ 0x1401C595C (-bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 */

void __fastcall XEPALOBJ::vMakeNoXlate(XEPALOBJ *this)
{
  __int64 v1; // rax
  char *v3; // rcx
  char *v4; // rcx
  char *v5; // rcx

  v1 = *(_QWORD *)this;
  v3 = *(char **)(*(_QWORD *)this + 88LL);
  if ( v3 )
  {
    if ( v3 != *(char **)(v1 + 72) )
      GreDeleteFastMutex(v3);
    *(_QWORD *)(*(_QWORD *)this + 88LL) = 0LL;
  }
  v4 = *(char **)(*(_QWORD *)this + 80LL);
  if ( v4 )
  {
    if ( v4 != *(char **)(*(_QWORD *)this + 72LL) )
      GreDeleteFastMutex(v4);
    *(_QWORD *)(*(_QWORD *)this + 80LL) = 0LL;
  }
  v5 = *(char **)(*(_QWORD *)this + 72LL);
  if ( v5 )
  {
    GreDeleteFastMutex(v5);
    *(_QWORD *)(*(_QWORD *)this + 72LL) = 0LL;
  }
}
