/*
 * XREFs of ??1FlipManagerTokenInitInfo@@QEAA@XZ @ 0x140024424
 * Callers:
 *     NtTokenManagerCreateFlipObjectTokenHandle @ 0x140023FB0 (NtTokenManagerCreateFlipObjectTokenHandle.c)
 *     NtTokenManagerCreateFlipObjectReturnTokenHandle @ 0x140025570 (NtTokenManagerCreateFlipObjectReturnTokenHandle.c)
 *     ?FlipManagerCreateConsumerTokenOperation@@YAJPEAX_KPEAUFlipManagerTokenInitInfo@@@Z @ 0x14002584C (-FlipManagerCreateConsumerTokenOperation@@YAJPEAX_KPEAUFlipManagerTokenInitInfo@@@Z.c)
 * Callees:
 *     ??_GFlipManagerTokenIFlipInfo@@QEAAPEAXI@Z @ 0x14001949C (--_GFlipManagerTokenIFlipInfo@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall FlipManagerTokenInitInfo::~FlipManagerTokenInitInfo(FlipManagerTokenInitInfo *this)
{
  void *v2; // rcx
  FlipManagerTokenIFlipInfo *v3; // rcx

  v2 = (void *)*((_QWORD *)this + 1);
  if ( v2 )
    ObfDereferenceObject(v2);
  if ( *(_QWORD *)this )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
  v3 = (FlipManagerTokenIFlipInfo *)*((_QWORD *)this + 5);
  if ( v3 )
    FlipManagerTokenIFlipInfo::`scalar deleting destructor'(v3);
}
