/*
 * XREFs of ?vMakeNoXlate@XEPALOBJ@@QEAAXXZ @ 0x1400C5A40
 * Callers:
 *     ?GrepSelectPalette@@YAPEAUHPALETTE__@@AEAVXDCOBJ@@PEAU1@H@Z @ 0x1400C2EEC (-GrepSelectPalette@@YAPEAUHPALETTE__@@AEAVXDCOBJ@@PEAU1@H@Z.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z @ 0x1400C49EC (-bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 */

void __fastcall XEPALOBJ::vMakeNoXlate(XEPALOBJ *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  char *v6; // rcx
  char *v7; // rcx
  char *v8; // rcx

  v4 = *(_QWORD *)this;
  v6 = *(char **)(*(_QWORD *)this + 88LL);
  if ( v6 )
  {
    if ( v6 != *(char **)(v4 + 72) )
      GreDeleteFastMutex(v6, a2, a3, a4);
    *(_QWORD *)(*(_QWORD *)this + 88LL) = 0LL;
  }
  v7 = *(char **)(*(_QWORD *)this + 80LL);
  if ( v7 )
  {
    if ( v7 != *(char **)(*(_QWORD *)this + 72LL) )
      GreDeleteFastMutex(v7, a2, a3, a4);
    *(_QWORD *)(*(_QWORD *)this + 80LL) = 0LL;
  }
  v8 = *(char **)(*(_QWORD *)this + 72LL);
  if ( v8 )
  {
    GreDeleteFastMutex(v8, a2, a3, a4);
    *(_QWORD *)(*(_QWORD *)this + 72LL) = 0LL;
  }
}
