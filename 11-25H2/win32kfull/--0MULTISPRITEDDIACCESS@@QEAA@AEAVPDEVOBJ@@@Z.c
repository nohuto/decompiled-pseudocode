/*
 * XREFs of ??0MULTISPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1400E04FC
 * Callers:
 *     vSpDynamicModeChange @ 0x1400E0040 (vSpDynamicModeChange.c)
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001B014 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1400DBA64 (-vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 */

MULTISPRITEDDIACCESS *__fastcall MULTISPRITEDDIACCESS::MULTISPRITEDDIACCESS(
        MULTISPRITEDDIACCESS *this,
        struct PDEVOBJ *a2)
{
  struct _GRETHREAD *CurrentThread; // rbx
  __int64 v5; // r8
  __int64 v6; // rbx
  __int64 v7; // rax

  *(_QWORD *)this = 0LL;
  CurrentThread = GreGetCurrentThread((__int64)this, (__int64)a2);
  if ( !CurrentThread
    || !PDEVOBJ::bAllowShareAccess(a2)
    || !*((_DWORD *)CurrentThread + 87) && !*((_DWORD *)CurrentThread + 88) )
  {
    v5 = *(_QWORD *)a2 + 80LL;
    *(_QWORD *)this = v5;
    if ( *(_DWORD *)(v5 + 60) )
    {
      v6 = 0LL;
      do
      {
        v7 = *(_QWORD *)(*(_QWORD *)(v5 + 64) + 8 * v6);
        if ( !*(_DWORD *)(v7 + 168) && (*(_DWORD *)(v7 + 40) & 0x20000) == 0 )
          vSpDirectDriverAccess((struct _SPRITESTATE *)(v7 + 80), 1LL);
        v5 = *(_QWORD *)this;
        v6 = (unsigned int)(v6 + 1);
      }
      while ( (unsigned int)v6 < *(_DWORD *)(*(_QWORD *)this + 60LL) );
    }
    else if ( !*(_DWORD *)(v5 + 88) && (*(_DWORD *)(*(_QWORD *)a2 + 40LL) & 0x20000) == 0 )
    {
      vSpDirectDriverAccess((struct _SPRITESTATE *)v5, 1LL);
    }
  }
  return this;
}
