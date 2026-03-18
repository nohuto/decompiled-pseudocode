/*
 * XREFs of ?ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z @ 0x1400B4960
 * Callers:
 *     InternalRegisterClassEx @ 0x1400B3B70 (InternalRegisterClassEx.c)
 *     ReferenceClass @ 0x1401A4040 (ReferenceClass.c)
 * Callees:
 *     ??$UserFreeIsolatedType@V?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1400B3B34 (--$UserFreeIsolatedType@V-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     DesktopAllocInternal @ 0x1400B4A30 (DesktopAllocInternal.c)
 *     ??$UserAllocateIsolatedType@V?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@@@YAPEAXXZ @ 0x1401C6898 (--$UserAllocateIsolatedType@V-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@@@YAPEAXXZ.c)
 */

__int64 __fastcall ClassAlloc(struct tagDESKTOP *a1, unsigned int a2)
{
  __int64 v2; // rsi
  __int64 v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v10; // rax

  v2 = a2;
  if ( !a1 )
  {
    v4 = UserAllocateIsolatedType<NSInstrumentation::CTypeIsolation<36864,144>>();
    if ( !v4 )
      return v4;
    v10 = Win32AllocPoolZInit(v2, 1818456917LL);
    *(_QWORD *)(v4 + 8) = v10;
    if ( v10 )
    {
      *(_QWORD *)(v4 + 16) = 0LL;
      return v4;
    }
    goto LABEL_6;
  }
  v4 = UserAllocateIsolatedType<NSInstrumentation::CTypeIsolation<36864,144>>();
  if ( !v4 )
    return 0LL;
  LOBYTE(v6) = 1;
  v7 = DesktopAllocInternal(a1, (unsigned int)v2, v5, v6);
  *(_QWORD *)(v4 + 8) = v7;
  if ( !v7 )
  {
LABEL_6:
    UserFreeIsolatedType<NSInstrumentation::CTypeIsolation<36864,144>>(v4, v8);
    return 0LL;
  }
  *(_QWORD *)(v4 + 16) = v7 - *((_QWORD *)a1 + 2);
  return v4;
}
