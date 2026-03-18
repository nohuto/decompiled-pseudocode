/*
 * XREFs of ?Create@?$TypeIsolationFactory@V?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@V?$CTypeIsolation@$0HAAA@$0HA@@2@@@SA_NPEAPEAE@Z @ 0x14011A9BC
 * Callers:
 *     ?Create@?$TypeIsolationFactory@V?$CTypeIsolation@$0BKAAA@$0BKA@@NSInstrumentation@@V?$CTypeIsolation@$0BEAAA@$0KA@@2@V?$CTypeIsolation@$0GAAA@$0GA@@2@V?$CTypeIsolation@$0HAAA@$0HA@@2@@@SA_NPEAPEAE@Z @ 0x1401C2CD8 (-Create@-$TypeIsolationFactory@V-$CTypeIsolation@$0BKAAA@$0BKA@@NSInstrumentation@@V-$CTypeIsola.c)
 * Callees:
 *     ?Initialize@?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAA_NXZ @ 0x14011A688 (-Initialize@-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAA_NXZ.c)
 *     ?Destroy@?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x14011AA54 (-Destroy@-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Create@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@SAPEAV12@XZ @ 0x14011B354 (-Create@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@SAPEAV12@XZ.c)
 */

char __fastcall TypeIsolationFactory<NSInstrumentation::CTypeIsolation<24576,96>,NSInstrumentation::CTypeIsolation<28672,112>>::Create(
        __int64 a1)
{
  __int64 Pool2; // rax
  char v3; // di
  void *v4; // rbx
  __int64 v6; // rax

  Pool2 = ExAllocatePool2(258LL, 40LL, 1869834581LL);
  v3 = 0;
  v4 = (void *)Pool2;
  if ( !Pool2 )
    return 0;
  *(_QWORD *)(Pool2 + 16) = 0LL;
  *(_QWORD *)(Pool2 + 24) = 0LL;
  *(_DWORD *)(Pool2 + 32) = 0;
  *(_BYTE *)(Pool2 + 36) = 0;
  *(_QWORD *)(Pool2 + 8) = Pool2;
  *(_QWORD *)Pool2 = Pool2;
  if ( !NSInstrumentation::CTypeIsolation<24576,96>::Initialize(Pool2) )
  {
    NSInstrumentation::CTypeIsolation<24576,96>::Destroy(v4);
    return 0;
  }
  *(_QWORD *)(a1 + 32) = v4;
  v6 = NSInstrumentation::CTypeIsolation<28672,112>::Create();
  if ( v6 )
  {
    *(_QWORD *)(a1 + 40) = v6;
    return 1;
  }
  return v3;
}
