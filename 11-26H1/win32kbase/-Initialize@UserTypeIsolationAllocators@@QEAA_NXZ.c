/*
 * XREFs of ?Initialize@UserTypeIsolationAllocators@@QEAA_NXZ @ 0x1401B8744
 * Callers:
 *     ?InitializeUserTypeIsolation@@YA_NXZ @ 0x140191774 (-InitializeUserTypeIsolation@@YA_NXZ.c)
 * Callees:
 *     ?Initialize@?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAA_NXZ @ 0x140159DC0 (-Initialize@-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAA_NXZ.c)
 *     ?Destroy@?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x140159ED8 (-Destroy@-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Create@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@SAPEAV12@XZ @ 0x14015A710 (-Create@-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Create@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@SAPEAV12@XZ @ 0x14015B65C (-Create@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Create@?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@SAPEAV12@XZ @ 0x140186E14 (-Create@-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ??$AllocateAllocator@UtagCURSOR@@@UserTypeIsolationAllocators@@QEAA_NXZ @ 0x1401EB768 (--$AllocateAllocator@UtagCURSOR@@@UserTypeIsolationAllocators@@QEAA_NXZ.c)
 *     ??$AllocateAllocator@UtagDDECONV@@@UserTypeIsolationAllocators@@QEAA_NXZ @ 0x1401EB7F0 (--$AllocateAllocator@UtagDDECONV@@@UserTypeIsolationAllocators@@QEAA_NXZ.c)
 *     ??$AllocateAllocator@UtagHID_POINTER_DEVICE_INFO@@@UserTypeIsolationAllocators@@QEAA_NXZ @ 0x1401EB878 (--$AllocateAllocator@UtagHID_POINTER_DEVICE_INFO@@@UserTypeIsolationAllocators@@QEAA_NXZ.c)
 *     ??$AllocateAllocator@UtagKBDFILE@@@UserTypeIsolationAllocators@@QEAA_NXZ @ 0x1401EB900 (--$AllocateAllocator@UtagKBDFILE@@@UserTypeIsolationAllocators@@QEAA_NXZ.c)
 *     ??$AllocateAllocator@UtagSMWP@@@UserTypeIsolationAllocators@@QEAA_NXZ @ 0x1401EB988 (--$AllocateAllocator@UtagSMWP@@@UserTypeIsolationAllocators@@QEAA_NXZ.c)
 *     ??$AllocateAllocator@UtagSVR_INSTANCE_INFO@@@UserTypeIsolationAllocators@@QEAA_NXZ @ 0x1401EBA10 (--$AllocateAllocator@UtagSVR_INSTANCE_INFO@@@UserTypeIsolationAllocators@@QEAA_NXZ.c)
 *     ??$AllocateAllocator@UtagWND@@@UserTypeIsolationAllocators@@QEAA_NXZ @ 0x1401EBA98 (--$AllocateAllocator@UtagWND@@@UserTypeIsolationAllocators@@QEAA_NXZ.c)
 *     ?Create@?$CTypeIsolation@$0FAAA@$0FA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1401EBBA8 (-Create@-$CTypeIsolation@$0FAAA@$0FA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Create@?$CTypeIsolation@$0FAAA@$0KA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1401EBC20 (-Create@-$CTypeIsolation@$0FAAA@$0KA@@NSInstrumentation@@SAPEAV12@XZ.c)
 */

bool __fastcall UserTypeIsolationAllocators::Initialize(UserTypeIsolationAllocators *this)
{
  __int64 Pool2; // rax
  void *v3; // rsi
  void *v5; // rax
  void *v6; // rax
  void *v7; // rax
  void *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  void *v14; // rax
  __int64 v15; // rax
  void *v16; // rax

  Pool2 = ExAllocatePool2(258LL, 40LL, 1869834581LL);
  v3 = (void *)Pool2;
  if ( !Pool2 )
    goto LABEL_4;
  *(_QWORD *)(Pool2 + 16) = 0LL;
  *(_QWORD *)(Pool2 + 24) = 0LL;
  *(_DWORD *)(Pool2 + 32) = 0;
  *(_BYTE *)(Pool2 + 36) = 0;
  *(_QWORD *)(Pool2 + 8) = Pool2;
  *(_QWORD *)Pool2 = Pool2;
  if ( !NSInstrumentation::CTypeIsolation<24576,96>::Initialize(Pool2) )
  {
    NSInstrumentation::CTypeIsolation<24576,96>::Destroy(v3);
LABEL_4:
    *(_QWORD *)this = 0LL;
    return 0;
  }
  *(_QWORD *)this = v3;
  v5 = NSInstrumentation::CTypeIsolation<36864,144>::Create();
  *((_QWORD *)this + 1) = v5;
  if ( !v5 )
    return 0;
  v6 = NSInstrumentation::CTypeIsolation<40960,160>::Create();
  *((_QWORD *)this + 2) = v6;
  if ( !v6 )
    return 0;
  if ( !(unsigned __int8)UserTypeIsolationAllocators::AllocateAllocator<tagWND>(this) )
    return 0;
  v7 = NSInstrumentation::CTypeIsolation<28672,112>::Create();
  *((_QWORD *)this + 4) = v7;
  if ( !v7 )
    return 0;
  if ( !(unsigned __int8)UserTypeIsolationAllocators::AllocateAllocator<tagCURSOR>(this) )
    return 0;
  if ( !(unsigned __int8)UserTypeIsolationAllocators::AllocateAllocator<tagSMWP>(this) )
    return 0;
  v8 = NSInstrumentation::CTypeIsolation<28672,112>::Create();
  *((_QWORD *)this + 7) = v8;
  if ( !v8 )
    return 0;
  v9 = NSInstrumentation::CTypeIsolation<20480,80>::Create();
  *((_QWORD *)this + 8) = v9;
  if ( !v9 )
    return 0;
  if ( !(unsigned __int8)UserTypeIsolationAllocators::AllocateAllocator<tagSVR_INSTANCE_INFO>(this) )
    return 0;
  if ( !(unsigned __int8)UserTypeIsolationAllocators::AllocateAllocator<tagDDECONV>(this) )
    return 0;
  v10 = NSInstrumentation::CTypeIsolation<20480,80>::Create();
  *((_QWORD *)this + 11) = v10;
  if ( !v10 )
    return 0;
  v11 = NSInstrumentation::CTypeIsolation<20480,160>::Create();
  *((_QWORD *)this + 12) = v11;
  if ( !v11 )
    return 0;
  v12 = NSInstrumentation::CTypeIsolation<20480,160>::Create();
  *((_QWORD *)this + 13) = v12;
  if ( !v12 )
    return 0;
  if ( !(unsigned __int8)UserTypeIsolationAllocators::AllocateAllocator<tagKBDFILE>(this) )
    return 0;
  v13 = NSInstrumentation::CTypeIsolation<20480,80>::Create();
  *((_QWORD *)this + 15) = v13;
  if ( !v13 )
    return 0;
  v14 = NSInstrumentation::CTypeIsolation<36864,144>::Create();
  *((_QWORD *)this + 16) = v14;
  if ( !v14 )
    return 0;
  v15 = NSInstrumentation::CTypeIsolation<20480,80>::Create();
  *((_QWORD *)this + 17) = v15;
  if ( !v15 )
    return 0;
  if ( !(unsigned __int8)UserTypeIsolationAllocators::AllocateAllocator<tagHID_POINTER_DEVICE_INFO>(this) )
    return 0;
  v16 = NSInstrumentation::CTypeIsolation<36864,144>::Create();
  *((_QWORD *)this + 19) = v16;
  return v16 != 0;
}
