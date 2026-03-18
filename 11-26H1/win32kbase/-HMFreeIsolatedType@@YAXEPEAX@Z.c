/*
 * XREFs of ?HMFreeIsolatedType@@YAXEPEAX@Z @ 0x140134FC4
 * Callers:
 *     ?HMFreeUserOrIsolatedType@@YAXW4HM_OBJ_CREATE_FLAGS@@EPEAX@Z @ 0x140134F94 (-HMFreeUserOrIsolatedType@@YAXW4HM_OBJ_CREATE_FLAGS@@EPEAX@Z.c)
 * Callees:
 *     ?Free@?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1400B5C50 (-Free@-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Free@?$CTypeIsolation@$0BKAAA@$0BKA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1400B6154 (-Free@-$CTypeIsolation@$0BKAAA@$0BKA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Free@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1400B6740 (-Free@-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Free@?$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1400B75CC (-Free@-$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Free@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1400E6B20 (-Free@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Free@?$CTypeIsolation@$0DAAA@$0DA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x140187078 (-Free@-$CTypeIsolation@$0DAAA@$0DA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Free@?$CTypeIsolation@$0BAAA@$0EA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1401DDDAC (-Free@-$CTypeIsolation@$0BAAA@$0EA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Free@?$CTypeIsolation@$0BAAA@$0IA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1401DDF88 (-Free@-$CTypeIsolation@$0BAAA@$0IA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Free@?$CTypeIsolation@$0DAAA@$0GA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1401DE110 (-Free@-$CTypeIsolation@$0DAAA@$0GA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Free@?$CTypeIsolation@$0FAAA@$0FA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1401DE260 (-Free@-$CTypeIsolation@$0FAAA@$0FA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Free@?$CTypeIsolation@$0FAAA@$0KA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1401DE3B0 (-Free@-$CTypeIsolation@$0FAAA@$0KA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Free@?$CTypeIsolation@$0FBAAA@$0FBA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1401DE504 (-Free@-$CTypeIsolation@$0FBAAA@$0FBA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 */

void __fastcall HMFreeIsolatedType(unsigned __int8 a1, void *a2)
{
  __int64 *v3; // rcx
  __int64 *v4; // rcx
  __int64 *v5; // rcx
  __int64 *v6; // rcx
  __int64 *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx

  if ( a1 <= 0xBu )
  {
    if ( a1 == 11 )
    {
      v9 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, (_DWORD)a2, a1) + 19832) + 88LL);
    }
    else
    {
      switch ( a1 )
      {
        case 1u:
          v6 = *(__int64 **)(*(_QWORD *)(W32GetUserSessionState(a1, (_DWORD)a2, 0) + 19832) + 24LL);
          if ( v6 )
            NSInstrumentation::CTypeIsolation<106496,416>::Free(v6, a2);
          return;
        case 2u:
          v7 = *(__int64 **)(*(_QWORD *)(W32GetUserSessionState(a1, (_DWORD)a2, 0) + 19832) + 16LL);
          if ( v7 )
            NSInstrumentation::CTypeIsolation<40960,160>::Free(v7, a2);
          return;
        case 3u:
          v5 = *(__int64 **)(*(_QWORD *)(W32GetUserSessionState(a1, (_DWORD)a2, 0) + 19832) + 40LL);
          if ( v5 )
            NSInstrumentation::CTypeIsolation<81920,160>::Free(v5, (ULONG_PTR)a2);
          return;
        case 4u:
          v8 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, (_DWORD)a2, 0) + 19832) + 48LL);
          if ( v8 )
            NSInstrumentation::CTypeIsolation<12288,48>::Free(v8, a2);
          return;
        case 5u:
          v4 = *(__int64 **)(*(_QWORD *)(W32GetUserSessionState(a1, (_DWORD)a2, 0) + 19832) + 56LL);
          if ( v4 )
            NSInstrumentation::CTypeIsolation<28672,112>::Free(v4, (ULONG_PTR)a2);
          return;
      }
      if ( a1 != 7 )
      {
        if ( a1 == 9 )
        {
          v11 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, (_DWORD)a2, 0) + 19832) + 72LL);
          if ( v11 )
            NSInstrumentation::CTypeIsolation<4096,64>::Free(v11, a2);
        }
        else
        {
          if ( a1 != 10 )
            goto LABEL_42;
          v10 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, (_DWORD)a2, 1) + 19832) + 80LL);
          if ( v10 )
            NSInstrumentation::CTypeIsolation<12288,96>::Free(v10, a2);
        }
        return;
      }
      v9 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, (_DWORD)a2, 0) + 19832) + 64LL);
    }
LABEL_27:
    if ( v9 )
      NSInstrumentation::CTypeIsolation<20480,80>::Free(v9, a2);
    return;
  }
  switch ( a1 )
  {
    case 0xCu:
      v14 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, (_DWORD)a2, 0) + 19832) + 96LL);
LABEL_51:
      if ( v14 )
        NSInstrumentation::CTypeIsolation<20480,160>::Free(v14, a2);
      return;
    case 0xDu:
      v14 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, (_DWORD)a2, 0) + 19832) + 104LL);
      goto LABEL_51;
    case 0xEu:
      v13 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, (_DWORD)a2, 0) + 19832) + 112LL);
      if ( v13 )
        NSInstrumentation::CTypeIsolation<4096,128>::Free(v13, a2);
      return;
    case 0xFu:
      v9 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, (_DWORD)a2, 0) + 19832) + 120LL);
      goto LABEL_27;
    case 0x10u:
      v3 = *(__int64 **)(*(_QWORD *)(W32GetUserSessionState(a1, (_DWORD)a2, 0) + 19832) + 128LL);
      goto LABEL_8;
    case 0x11u:
      v9 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, (_DWORD)a2, 0) + 19832) + 136LL);
      goto LABEL_27;
  }
  if ( a1 != 22 )
  {
    if ( a1 == 23 )
    {
      v3 = *(__int64 **)(*(_QWORD *)(W32GetUserSessionState(a1, (_DWORD)a2, 1) + 19832) + 152LL);
LABEL_8:
      if ( v3 )
        NSInstrumentation::CTypeIsolation<36864,144>::Free(v3, a2);
      return;
    }
LABEL_42:
    KeBugCheckEx(0x164u, 0x20uLL, a1, 0LL, 0LL);
  }
  v12 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, (_DWORD)a2, 0) + 19832) + 144LL);
  if ( v12 )
    NSInstrumentation::CTypeIsolation<331776,1296>::Free(v12, a2);
}
