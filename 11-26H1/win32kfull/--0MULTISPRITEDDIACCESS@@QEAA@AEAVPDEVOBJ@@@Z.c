/*
 * XREFs of ??0MULTISPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x140185EB0
 * Callers:
 *     vSpDynamicModeChange @ 0x140185A00 (vSpDynamicModeChange.c)
 * Callees:
 *     ?vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1400BC308 (-vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 */

MULTISPRITEDDIACCESS *__fastcall MULTISPRITEDDIACCESS::MULTISPRITEDDIACCESS(
        MULTISPRITEDDIACCESS *this,
        struct PDEVOBJ *a2)
{
  struct _GRETHREAD *CurrentThread; // rdi
  __int64 v5; // r8
  __int64 v7; // rdi
  __int64 v8; // rax

  *(_QWORD *)this = 0LL;
  CurrentThread = GreGetCurrentThread((__int64)this);
  if ( !CurrentThread
    || !PDEVOBJ::bAllowShareAccess(a2)
    || !*((_DWORD *)CurrentThread + 85) && !*((_DWORD *)CurrentThread + 86) )
  {
    v5 = *(_QWORD *)a2 + 80LL;
    *(_QWORD *)this = v5;
    if ( *(_DWORD *)(v5 + 60) )
    {
      v7 = 0LL;
      do
      {
        v8 = *(_QWORD *)(*(_QWORD *)(v5 + 64) + 8 * v7);
        if ( !*(_DWORD *)(v8 + 168) && (*(_DWORD *)(v8 + 40) & 0x20000) == 0 )
          vSpDirectDriverAccess((struct _SPRITESTATE *)(v8 + 80), 1);
        v5 = *(_QWORD *)this;
        v7 = (unsigned int)(v7 + 1);
      }
      while ( (unsigned int)v7 < *(_DWORD *)(*(_QWORD *)this + 60LL) );
    }
    else if ( !*(_DWORD *)(v5 + 88) && (*(_DWORD *)(*(_QWORD *)a2 + 40LL) & 0x20000) == 0 )
    {
      vSpDirectDriverAccess((struct _SPRITESTATE *)v5, 1);
    }
  }
  return this;
}
