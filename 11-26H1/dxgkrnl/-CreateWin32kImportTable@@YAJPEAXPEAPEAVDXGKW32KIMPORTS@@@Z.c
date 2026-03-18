/*
 * XREFs of ?CreateWin32kImportTable@@YAJPEAXPEAPEAVDXGKW32KIMPORTS@@@Z @ 0x14009A49C
 * Callers:
 *     ?DelayLoadWin32k@DXGGLOBAL@@QEAAJPEAX@Z @ 0x14001815C (-DelayLoadWin32k@DXGGLOBAL@@QEAAJPEAX@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0W32KIMPORTS@@QEAA@PEAX@Z @ 0x140099924 (--0W32KIMPORTS@@QEAA@PEAX@Z.c)
 */

__int64 __fastcall CreateWin32kImportTable(__int64 a1, struct DXGKW32KIMPORTS **a2)
{
  unsigned int v4; // ebx
  W32KIMPORTS *v5; // rax
  struct DXGKW32KIMPORTS *v6; // rax

  v4 = 0;
  v5 = (W32KIMPORTS *)operator new(0x278uLL, 0x4B677844u, 256LL);
  if ( v5 && (v6 = W32KIMPORTS::W32KIMPORTS(v5, a1)) != 0LL )
    *a2 = v6;
  else
    return (unsigned int)-1073741801;
  return v4;
}
