/*
 * XREFs of ?bDisableHalftone@PDEVOBJ@@QEAAHXZ @ 0x14017EB08
 * Callers:
 *     PDEVOBJ_bDisableHalftone @ 0x14017EAD0 (PDEVOBJ_bDisableHalftone.c)
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     HT_DestroyDeviceHalftoneInfo @ 0x14017EC60 (HT_DestroyDeviceHalftoneInfo.c)
 *     ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1401829CC (-pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ.c)
 */

__int64 __fastcall PDEVOBJ::bDisableHalftone(PDEVOBJ *this)
{
  Gre::Base *v2; // rcx
  _QWORD *v3; // r14
  unsigned int v4; // edi
  char v5; // bp
  _QWORD *v6; // rcx
  int v7; // ebx
  int v8; // eax
  bool v9; // dl
  struct Gre::Base::SESSION_GLOBALS *v11; // rdi
  __int64 i; // rbx
  struct _GRETHREAD *CurrentThread; // r15
  int v14; // ebx
  int v15; // eax

  v3 = PDEVOBJ::pDevHTInfo(this);
  if ( (*(_DWORD *)(*(_QWORD *)this + 40LL) & 0x100) != 0 )
  {
    v11 = Gre::Base::Globals(v2);
    for ( i = 1456LL; i < 1504; i += 8LL )
      bDeleteSurface(v11, *(HSURF *)(i + *(_QWORD *)this));
  }
  v4 = 1;
  v5 = 1;
  v6 = *(_QWORD **)(*(_QWORD *)this + 1512LL);
  if ( v6 )
  {
    v7 = bDeletePalette(*v6);
    v8 = HT_DestroyDeviceHalftoneInfo(*(_QWORD *)(*(_QWORD *)this + 1512LL));
    if ( !v7 || !v8 )
      v5 = 0;
  }
  v9 = 1;
  if ( v3 != *(_QWORD **)(*(_QWORD *)this + 1512LL) )
  {
    CurrentThread = GreGetCurrentThread((__int64)v6);
    v14 = bDeletePalette(*v3);
    v15 = HT_DestroyDeviceHalftoneInfo(v3);
    v9 = v14 && v15;
    *((_QWORD *)CurrentThread + 35) = 0LL;
  }
  *(_QWORD *)(*(_QWORD *)this + 1512LL) = 0LL;
  if ( !v5 || !v9 )
    return 0;
  return v4;
}
