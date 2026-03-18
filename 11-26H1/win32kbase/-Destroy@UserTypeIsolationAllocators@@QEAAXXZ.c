/*
 * XREFs of ?Destroy@UserTypeIsolationAllocators@@QEAAXXZ @ 0x1401B3E38
 * Callers:
 *     ?Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1401D6EE0 (-Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     ?Destroy@?$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x140159EAC (-Destroy@-$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Destroy@?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x140159ED8 (-Destroy@-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Destroy@?$CTypeIsolation@$0FAAA@$0FA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1401EBC98 (-Destroy@-$CTypeIsolation@$0FAAA@$0FA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 */

void __fastcall UserTypeIsolationAllocators::Destroy(UserTypeIsolationAllocators *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  void *v12; // rcx
  void *v13; // rcx
  void *v14; // rcx
  void *v15; // rcx
  void *v16; // rcx
  void *v17; // rcx
  void *v18; // rcx
  void *v19; // rcx
  void *v20; // rcx
  void *v21; // rcx

  v2 = *(void **)this;
  if ( v2 )
  {
    NSInstrumentation::CTypeIsolation<24576,96>::Destroy(v2);
    *(_QWORD *)this = 0LL;
  }
  v3 = (void *)*((_QWORD *)this + 1);
  if ( v3 )
  {
    NSInstrumentation::CTypeIsolation<81920,160>::Destroy(v3);
    *((_QWORD *)this + 1) = 0LL;
  }
  v4 = (void *)*((_QWORD *)this + 2);
  if ( v4 )
  {
    NSInstrumentation::CTypeIsolation<81920,160>::Destroy(v4);
    *((_QWORD *)this + 2) = 0LL;
  }
  v5 = (void *)*((_QWORD *)this + 3);
  if ( v5 )
  {
    NSInstrumentation::CTypeIsolation<81920,160>::Destroy(v5);
    *((_QWORD *)this + 3) = 0LL;
  }
  v6 = (void *)*((_QWORD *)this + 4);
  if ( v6 )
  {
    NSInstrumentation::CTypeIsolation<81920,160>::Destroy(v6);
    *((_QWORD *)this + 4) = 0LL;
  }
  v7 = (void *)*((_QWORD *)this + 5);
  if ( v7 )
  {
    NSInstrumentation::CTypeIsolation<81920,160>::Destroy(v7);
    *((_QWORD *)this + 5) = 0LL;
  }
  v8 = (void *)*((_QWORD *)this + 6);
  if ( v8 )
  {
    NSInstrumentation::CTypeIsolation<20480,80>::Destroy(v8);
    *((_QWORD *)this + 6) = 0LL;
  }
  v9 = (void *)*((_QWORD *)this + 7);
  if ( v9 )
  {
    NSInstrumentation::CTypeIsolation<81920,160>::Destroy(v9);
    *((_QWORD *)this + 7) = 0LL;
  }
  v10 = (void *)*((_QWORD *)this + 8);
  if ( v10 )
  {
    NSInstrumentation::CTypeIsolation<20480,80>::Destroy(v10);
    *((_QWORD *)this + 8) = 0LL;
  }
  v11 = (void *)*((_QWORD *)this + 9);
  if ( v11 )
  {
    NSInstrumentation::CTypeIsolation<20480,80>::Destroy(v11);
    *((_QWORD *)this + 9) = 0LL;
  }
  v12 = (void *)*((_QWORD *)this + 10);
  if ( v12 )
  {
    NSInstrumentation::CTypeIsolation<20480,80>::Destroy(v12);
    *((_QWORD *)this + 10) = 0LL;
  }
  v13 = (void *)*((_QWORD *)this + 11);
  if ( v13 )
  {
    NSInstrumentation::CTypeIsolation<20480,80>::Destroy(v13);
    *((_QWORD *)this + 11) = 0LL;
  }
  v14 = (void *)*((_QWORD *)this + 12);
  if ( v14 )
  {
    NSInstrumentation::CTypeIsolation<20480,80>::Destroy(v14);
    *((_QWORD *)this + 12) = 0LL;
  }
  v15 = (void *)*((_QWORD *)this + 13);
  if ( v15 )
  {
    NSInstrumentation::CTypeIsolation<20480,80>::Destroy(v15);
    *((_QWORD *)this + 13) = 0LL;
  }
  v16 = (void *)*((_QWORD *)this + 14);
  if ( v16 )
  {
    NSInstrumentation::CTypeIsolation<20480,80>::Destroy(v16);
    *((_QWORD *)this + 14) = 0LL;
  }
  v17 = (void *)*((_QWORD *)this + 15);
  if ( v17 )
  {
    NSInstrumentation::CTypeIsolation<20480,80>::Destroy(v17);
    *((_QWORD *)this + 15) = 0LL;
  }
  v18 = (void *)*((_QWORD *)this + 16);
  if ( v18 )
  {
    NSInstrumentation::CTypeIsolation<81920,160>::Destroy(v18);
    *((_QWORD *)this + 16) = 0LL;
  }
  v19 = (void *)*((_QWORD *)this + 17);
  if ( v19 )
  {
    NSInstrumentation::CTypeIsolation<20480,80>::Destroy(v19);
    *((_QWORD *)this + 17) = 0LL;
  }
  v20 = (void *)*((_QWORD *)this + 18);
  if ( v20 )
  {
    NSInstrumentation::CTypeIsolation<20480,80>::Destroy(v20);
    *((_QWORD *)this + 18) = 0LL;
  }
  v21 = (void *)*((_QWORD *)this + 19);
  if ( v21 )
  {
    NSInstrumentation::CTypeIsolation<81920,160>::Destroy(v21);
    *((_QWORD *)this + 19) = 0LL;
  }
}
