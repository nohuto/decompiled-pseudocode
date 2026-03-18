/*
 * XREFs of ?ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z @ 0x140150318
 * Callers:
 *     InternalRegisterClassEx @ 0x14014E310 (InternalRegisterClassEx.c)
 *     ReferenceClass @ 0x140151720 (ReferenceClass.c)
 * Callees:
 *     ??$UserFreeIsolatedType@UtagCLS@@@@YAXPEAUtagCLS@@@Z @ 0x1401502DC (--$UserFreeIsolatedType@UtagCLS@@@@YAXPEAUtagCLS@@@Z.c)
 *     ??$UserAllocateIsolatedType@UtagCLS@@@@YAPEAUtagCLS@@_K@Z @ 0x1401503B8 (--$UserAllocateIsolatedType@UtagCLS@@@@YAPEAUtagCLS@@_K@Z.c)
 *     DesktopAllocInternal @ 0x140150424 (DesktopAllocInternal.c)
 */

_QWORD *__fastcall ClassAlloc(struct tagDESKTOP *a1, unsigned int a2)
{
  __int64 v2; // rsi
  _QWORD *Isolated; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v10; // rax

  v2 = a2;
  if ( !a1 )
  {
    Isolated = (_QWORD *)UserAllocateIsolatedType<tagCLS>();
    if ( !Isolated )
      return Isolated;
    v10 = Win32AllocPoolZInit(v2, 1818456917LL);
    Isolated[1] = v10;
    if ( v10 )
    {
      Isolated[2] = 0LL;
      return Isolated;
    }
    goto LABEL_6;
  }
  Isolated = (_QWORD *)UserAllocateIsolatedType<tagCLS>();
  if ( !Isolated )
    return 0LL;
  LOBYTE(v6) = 1;
  v7 = DesktopAllocInternal(a1, (unsigned int)v2, v5, v6);
  Isolated[1] = v7;
  if ( !v7 )
  {
LABEL_6:
    UserFreeIsolatedType<tagCLS>(Isolated, v8);
    return 0LL;
  }
  Isolated[2] = v7 - *((_QWORD *)a1 + 2);
  return Isolated;
}
