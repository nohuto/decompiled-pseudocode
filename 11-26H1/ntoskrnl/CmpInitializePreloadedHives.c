/*
 * XREFs of CmpInitializePreloadedHives @ 0x140CF16F4
 * Callers:
 *     CmInitSystem1 @ 0x140CEEC2C (CmInitSystem1.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     CmpHiveRootSecurityDescriptor @ 0x140B50A7C (CmpHiveRootSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     CmpInitializePreloadedHive @ 0x140CF1290 (CmpInitializePreloadedHive.c)
 *     CmpInitializeSystemHive @ 0x140CF19B8 (CmpInitializeSystemHive.c)
 */

__int64 __fastcall CmpInitializePreloadedHives(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  char v4; // r15
  _QWORD **v5; // rax
  _QWORD *v6; // rdx
  __int64 v7; // r8
  void *v8; // r14
  __int64 i; // rsi
  int v10; // eax

  v2 = 0;
  v4 = 0;
  if ( a2 )
  {
    v8 = (void *)CmpHiveRootSecurityDescriptor();
    if ( v8 )
    {
      for ( i = *(_QWORD *)(*(_QWORD *)(a1 + 240) + 312LL); i != *(_QWORD *)(a1 + 240) + 312LL; i = *(_QWORD *)i )
      {
        if ( (*(_DWORD *)(i + 24) & 0x209) == 1 )
        {
          v10 = CmpInitializeSystemHive(a1, v8, v7, i);
          if ( v10 < 0 )
            KeBugCheckEx(0x67u, 1uLL, 0xCuLL, v10, 0LL);
          v4 = 1;
        }
        else
        {
          CmpInitializePreloadedHive(i, (__int64)v8);
        }
      }
      if ( !v4 )
        KeBugCheckEx(0x67u, 1uLL, 0xCuLL, 0xFFFFFFFFC0000225uLL, 1uLL);
      ExFreePoolWithTag(v8, 0);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    CmpContextListLock.StackBase = (void *)&CmpContextListLock.StackLimit;
    CmpContextListLock.StackLimit = (void *volatile)&CmpContextListLock.StackLimit;
    v5 = (_QWORD **)(*(_QWORD *)(a1 + 240) + 312LL);
    v6 = *v5;
    while ( v6 != v5 )
    {
      ++LODWORD(WheapPfaLock.CycleTime);
      v6 = (_QWORD *)*v6;
      v5 = (_QWORD **)(*(_QWORD *)(a1 + 240) + 312LL);
    }
  }
  return v2;
}
