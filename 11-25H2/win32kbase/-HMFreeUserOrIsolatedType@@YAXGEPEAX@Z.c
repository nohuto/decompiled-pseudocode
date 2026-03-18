/*
 * XREFs of ?HMFreeUserOrIsolatedType@@YAXGEPEAX@Z @ 0x14001E25C
 * Callers:
 *     HMAllocObjectEx @ 0x14003E880 (HMAllocObjectEx.c)
 *     HMFreeObject @ 0x1400F67F0 (HMFreeObject.c)
 * Callees:
 *     ?Free@?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x14000B548 (-Free@-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Free@?$CTypeIsolation@$0BKAAA@$0BKA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x14000BBAC (-Free@-$CTypeIsolation@$0BKAAA@$0BKA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?HMTagToIsolatedType@@YA?AW4UserTypeIsolationCountedType@@E@Z @ 0x14000C760 (-HMTagToIsolatedType@@YA-AW4UserTypeIsolationCountedType@@E@Z.c)
 *     ?Free@?$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x14000C7C4 (-Free@-$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Win32FreePoolImpl@@YAXPEAX@Z @ 0x14001E7F0 (-Win32FreePoolImpl@@YAXPEAX@Z.c)
 */

void __fastcall HMFreeUserOrIsolatedType(__int16 a1, unsigned __int8 a2, void *a3)
{
  int v4; // eax
  int v5; // eax
  __int64 *v6; // rcx
  __int64 *v7; // rcx
  __int64 *v8; // rcx

  if ( (a1 & 0x200) != 0 )
  {
    v4 = HMTagToIsolatedType(a2) - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        if ( v5 == 1 )
        {
          v6 = *(__int64 **)(*(_QWORD *)(W32GetUserSessionState() + 19800) + 24LL);
          if ( v6 )
            NSInstrumentation::CTypeIsolation<81920,160>::Free(v6, a3);
        }
      }
      else
      {
        v7 = *(__int64 **)(*(_QWORD *)(W32GetUserSessionState() + 19800) + 16LL);
        if ( v7 )
          NSInstrumentation::CTypeIsolation<106496,416>::Free(v7, a3);
      }
    }
    else
    {
      v8 = *(__int64 **)(*(_QWORD *)(W32GetUserSessionState() + 19800) + 8LL);
      if ( v8 )
        NSInstrumentation::CTypeIsolation<40960,160>::Free(v8, a3);
    }
  }
  else if ( a3 )
  {
    Win32FreePoolImpl(a3);
  }
}
