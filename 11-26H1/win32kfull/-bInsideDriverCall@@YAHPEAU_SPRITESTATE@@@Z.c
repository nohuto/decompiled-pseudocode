/*
 * XREFs of ?bInsideDriverCall@@YAHPEAU_SPRITESTATE@@@Z @ 0x140169470
 * Callers:
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x14006A21C (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x140168780 (-bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEA.c)
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 */

__int64 __fastcall bInsideDriverCall(struct _SPRITESTATE *a1)
{
  struct _GRETHREAD *CurrentThread; // rax
  struct _GRETHREAD *v3; // rdi
  Gre::Base *v4; // rcx
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v8; // rcx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  CurrentThread = GreGetCurrentThread((__int64)a1);
  v9 = *(_QWORD *)a1;
  v3 = CurrentThread;
  v5 = 0;
  if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v9) )
    Gre::Base::Globals(v4);
  if ( !v3 || !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v9) || !*((_DWORD *)v3 + 85) && !*((_DWORD *)v3 + 86) )
    return *((unsigned int *)a1 + 22);
  v8 = *((_QWORD *)GreGetCurrentThread(v6) + 34);
  if ( *(struct _SPRITESTATE **)(v8 + 32) == a1 )
    return **((unsigned int **)GreGetCurrentThread(v8) + 34);
  return v5;
}
