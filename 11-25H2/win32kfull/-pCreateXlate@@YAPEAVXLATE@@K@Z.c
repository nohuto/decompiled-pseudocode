/*
 * XREFs of ?pCreateXlate@@YAPEAVXLATE@@K@Z @ 0x140160D4C
 * Callers:
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1400F6C80 (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 *     ??0XLATEMEMOBJ@@QEAA@VXEPALOBJ@@0@Z @ 0x140312CC0 (--0XLATEMEMOBJ@@QEAA@VXEPALOBJ@@0@Z.c)
 * Callees:
 *     <none>
 */

struct XLATE *__fastcall pCreateXlate(int a1)
{
  Gre::Base *v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // rax
  int v5; // eax

  v3 = AllocThreadBufferWithTag((unsigned int)(4 * a1 + 88), 1953265735LL, 0LL);
  if ( v3 )
  {
    *(_DWORD *)v3 = _InterlockedIncrement((volatile signed __int32 *)Gre::Base::Globals(v2) + 918);
    *(_DWORD *)(v3 + 4) = a1 != 0 ? 2 : 0;
    v4 = v3 + 84;
    if ( !a1 )
      v4 = 0LL;
    *(_QWORD *)(v3 + 16) = v4;
    v5 = 0;
    if ( !a1 )
      v5 = 512;
    *(_DWORD *)(v3 + 76) = v5;
    *(_DWORD *)(v3 + 36) = -1;
    *(_DWORD *)(v3 + 8) = 0;
    *(_DWORD *)(v3 + 12) = a1;
    *(_QWORD *)(v3 + 40) = 0LL;
    *(_QWORD *)(v3 + 48) = 0LL;
    *(_QWORD *)(v3 + 56) = 0LL;
  }
  return (struct XLATE *)v3;
}
