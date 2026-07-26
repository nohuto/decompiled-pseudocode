/*
 * XREFs of ?Create@KnobCollection@@SAPEAV1@PEAVKnobNamespace@@PEBUKnobDescriptor@@_KP6AEPEAX1AEA_K@ZP6AJ312@Z3@Z @ 0x140165090
 * Callers:
 *     ?BuildCollection@KnobNamespace@@AEAAJPEBUKnobDescriptor@@_K_NP6AEPEAX0AEA_K@ZP6AJ301@Z3@Z @ 0x140164E70 (-BuildCollection@KnobNamespace@@AEAAJPEBUKnobDescriptor@@_K_NP6AEPEAX0AEA_K@ZP6AJ301@Z3@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140022960 (WPP_RECORDER_SF_.c)
 *     ?reset@?$unique_ptr@VKnobCollection@@U?$KFreePool@VKnobCollection@@@@@wistd@@QEAAXPEAVKnobCollection@@@Z @ 0x140078DC0 (-reset@-$unique_ptr@VKnobCollection@@U-$KFreePool@VKnobCollection@@@@@wistd@@QEAAXPEAVKnobCollec.c)
 *     ??$?0$00X@?$unique_ptr@VKnobCollection@@U?$KFreePool@VKnobCollection@@@@@wistd@@QEAA@XZ @ 0x14008FC80 (--$-0$00X@-$unique_ptr@VKnobCollection@@U-$KFreePool@VKnobCollection@@@@@wistd@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 *     ??$MakeSizedPoolPtr@VExecutionContextCpuKnobCollection@@@@YA?AV?$unique_ptr@VExecutionContextCpuKnobCollection@@U?$KFreePool@VExecutionContextCpuKnobCollection@@@@@wistd@@K_K@Z @ 0x14014FBD4 (--$MakeSizedPoolPtr@VExecutionContextCpuKnobCollection@@@@YA-AV-$unique_ptr@VExecutionContextCpu.c)
 *     ??$MakeSizedPoolPtr@VInterfaceProfileKnobCollection@@@@YA?AV?$unique_ptr@VInterfaceProfileKnobCollection@@U?$KFreePool@VInterfaceProfileKnobCollection@@@@@wistd@@K_K@Z @ 0x14014FC58 (--$MakeSizedPoolPtr@VInterfaceProfileKnobCollection@@@@YA-AV-$unique_ptr@VInterfaceProfileKnobCo.c)
 *     ??$MakeSizedPoolPtr@VNetSetupKnobCollection@@@@YA?AV?$unique_ptr@VNetSetupKnobCollection@@U?$KFreePool@VNetSetupKnobCollection@@@@@wistd@@K_K@Z @ 0x14014FCDC (--$MakeSizedPoolPtr@VNetSetupKnobCollection@@@@YA-AV-$unique_ptr@VNetSetupKnobCollection@@U-$KFr.c)
 *     ??$MakeSizedPoolPtr@VRegistryKnobCollection@@@@YA?AV?$unique_ptr@VRegistryKnobCollection@@U?$KFreePool@VRegistryKnobCollection@@@@@wistd@@K_K@Z @ 0x1401654C0 (--$MakeSizedPoolPtr@VRegistryKnobCollection@@@@YA-AV-$unique_ptr@VRegistryKnobCollection@@U-$KFr.c)
 */

struct KnobCollection *__fastcall KnobCollection::Create(
        struct KnobNamespace *a1,
        const struct KnobDescriptor *a2,
        __int64 a3,
        unsigned __int8 (*a4)(void *, const struct KnobDescriptor *, unsigned __int64 *),
        int (*a5)(void *, const struct KnobDescriptor *, unsigned __int64))
{
  __int64 v8; // rdx
  __int64 v9; // r8
  _CONFIG_KNOB_NAMESPACE_TYPE NamespaceType; // r9d
  __int32 v11; // r9d
  __int32 v12; // r9d
  void **SizedPool; // rax
  void *v14; // rdx
  int v15; // edx
  void (__fastcall ***v16)(PVOID, _QWORD); // rbx
  _QWORD *v17; // rdi
  _QWORD *v18; // rax
  void (__fastcall ***v19)(PVOID, _QWORD); // rbx
  void (__fastcall ***v20)(PVOID, _QWORD); // rbx
  int (*v22)(void *, const struct KnobDescriptor *, unsigned __int64); // rax
  _QWORD *v23; // rax
  unsigned __int64 *p_DefaultValue; // r15
  unsigned __int64 v25; // rcx
  PVOID P; // [rsp+60h] [rbp+30h] BYREF
  PVOID v27; // [rsp+78h] [rbp+48h] BYREF

  v27 = a4;
  wistd::unique_ptr<KnobCollection,KFreePool<KnobCollection>>::unique_ptr<KnobCollection,KFreePool<KnobCollection>>(&v27);
  NamespaceType = a1->m_id.NamespaceType;
  if ( NamespaceType )
  {
    v11 = NamespaceType - 1;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( v12 )
      {
        if ( v12 != 1 )
          NT_ASSERT("false");
        SizedPool = (void **)MakeSizedPoolPtr<ExecutionContextCpuKnobCollection>(&P, v8, v9);
      }
      else
      {
        SizedPool = (void **)MakeSizedPoolPtr<InterfaceProfileKnobCollection>(&P, v8, v9);
      }
    }
    else
    {
      SizedPool = (void **)MakeSizedPoolPtr<NetSetupKnobCollection>(&P, v8, v9);
    }
    v14 = *SizedPool;
    *SizedPool = 0LL;
    wistd::unique_ptr<KnobCollection,KFreePool<KnobCollection>>::reset(&v27, v14);
    v16 = (void (__fastcall ***)(PVOID, _QWORD))P;
    P = 0LL;
    if ( v16 )
    {
      (**v16)(v16, 0LL);
      ExFreePoolWithTag(v16, 0);
    }
    v17 = v27;
  }
  else
  {
    v18 = (_QWORD *)MakeSizedPoolPtr<RegistryKnobCollection>(&P);
    v19 = (void (__fastcall ***)(PVOID, _QWORD))v27;
    v17 = (_QWORD *)*v18;
    *v18 = 0LL;
    if ( v19 )
    {
      (**v19)(v19, 0LL);
      ExFreePoolWithTag(v19, 0);
    }
    v20 = (void (__fastcall ***)(PVOID, _QWORD))P;
    P = 0LL;
    if ( v20 )
    {
      (**v20)(v20, 0LL);
      ExFreePoolWithTag(v20, 0);
    }
  }
  if ( v17 )
  {
    v22 = a5;
    v17[8] = a2;
    v17[7] = a3;
    v17[3] = a1;
    v17[4] = 0LL;
    v17[5] = v22;
    v17[6] = 0LL;
    if ( a3 )
    {
      v23 = v17 + 9;
      p_DefaultValue = &a2->DefaultValue;
      do
      {
        *((_DWORD *)v23 + 2) = 0;
        v23 += 3;
        v25 = *p_DefaultValue;
        p_DefaultValue += 6;
        *(v23 - 3) = v25;
        *((_DWORD *)v23 - 3) = 1;
        --a3;
      }
      while ( a3 );
    }
    v27 = 0LL;
    wistd::unique_ptr<KnobCollection,KFreePool<KnobCollection>>::reset(&v27, 0LL);
    return (struct KnobCollection *)v17;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v15) = 2;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v15,
        1,
        10,
        (struct _GUID *)&WPP_0d3df21b34c634c4ec6d6bcb69b42c7f_Traceguids);
    }
    return 0LL;
  }
}
