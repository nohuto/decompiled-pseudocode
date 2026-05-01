/*
 * XREFs of ??0PositionerPriority@@QEAA@XZ @ 0x18016FD54
 * Callers:
 *     ?PositionerPriority_CreateInstance@@YAJW4_TABLETMODESTATE@@AEBU_GUID@@PEAPEAX@Z @ 0x18016FBF8 (-PositionerPriority_CreateInstance@@YAJW4_TABLETMODESTATE@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ??$MakeAndInitialize@VPositionerPriority@@V1@AEAK@Details@WRL@Microsoft@@YAJPEAPEAVPositionerPriority@@AEAK@Z @ 0x1804EC498 (--$MakeAndInitialize@VPositionerPriority@@V1@AEAK@Details@WRL@Microsoft@@YAJPEAPEAVPositionerPri.c)
 *     ??$MakeAndInitialize@VPositionerPriority@@V1@AEAW4SHELL_POSITIONER_TYPE@@@Details@WRL@Microsoft@@YAJPEAPEAVPositionerPriority@@AEAW4SHELL_POSITIONER_TYPE@@@Z @ 0x1804EC55C (--$MakeAndInitialize@VPositionerPriority@@V1@AEAW4SHELL_POSITIONER_TYPE@@@Details@WRL@Microsoft@.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18003C9F0 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
PositionerPriority *__fastcall PositionerPriority::PositionerPriority(PositionerPriority *this)
{
  Microsoft::WRL::FtmBase::FtmBase(this);
  *((_DWORD *)this + 13) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IShellPositionerPriority,IShellPositionerPriorityPersistence>::`vftable';
  *((_QWORD *)this + 4) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IShellPositionerPriority,IShellPositionerPriorityPersistence>::`vftable'{for `IShellPositionerPriority'};
  *((_QWORD *)this + 5) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IShellPositionerPriority,IShellPositionerPriorityPersistence>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IShellPositionerPriorityPersistence>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &PositionerPriority::`vftable';
  *((_QWORD *)this + 4) = &PositionerPriority::`vftable'{for `IShellPositionerPriority'};
  *((_QWORD *)this + 5) = &PositionerPriority::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IShellPositionerPriorityPersistence>'};
  *((_QWORD *)this + 7) = 0LL;
  return this;
}
