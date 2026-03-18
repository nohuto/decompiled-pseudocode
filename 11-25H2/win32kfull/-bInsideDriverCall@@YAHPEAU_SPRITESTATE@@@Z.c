/*
 * XREFs of ?bInsideDriverCall@@YAHPEAU_SPRITESTATE@@@Z @ 0x140008A74
 * Callers:
 *     ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x140007E90 (-bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEA.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x140011E3C (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001B014 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 */

__int64 __fastcall bInsideDriverCall(struct _SPRITESTATE *a1)
{
  struct _GRETHREAD *CurrentThread; // rax
  struct _GRETHREAD *v3; // rdi
  Gre::Base *v4; // rcx
  unsigned int v5; // ebx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  CurrentThread = GreGetCurrentThread();
  v7 = *(_QWORD *)a1;
  v3 = CurrentThread;
  v5 = 0;
  if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v7) )
    Gre::Base::Globals(v4);
  if ( !v3 || !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v7) || !*((_DWORD *)v3 + 87) && !*((_DWORD *)v3 + 88) )
    return *((unsigned int *)a1 + 22);
  if ( *(struct _SPRITESTATE **)(*((_QWORD *)GreGetCurrentThread() + 34) + 32LL) == a1 )
    return **((unsigned int **)GreGetCurrentThread() + 34);
  return v5;
}
