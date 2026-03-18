/*
 * XREFs of ??1CFlipManagerSignal@@UEAA@XZ @ 0x140019FF4
 * Callers:
 *     ??_ECFlipManagerSignal@@UEAAPEAXI@Z @ 0x140019FB0 (--_ECFlipManagerSignal@@UEAAPEAXI@Z.c)
 * Callees:
 *     Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline @ 0x14001B070 (Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline.c)
 *     ?ServiceBufferSignals@CFlipManagerSignal@@QEAAXXZ @ 0x14001D6FC (-ServiceBufferSignals@CFlipManagerSignal@@QEAAXXZ.c)
 */

void __fastcall CFlipManagerSignal::~CFlipManagerSignal(PVOID *this)
{
  PVOID v2; // rcx
  unsigned __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rdx
  _QWORD *v7; // rax
  struct _KEVENT *v8; // rcx

  *this = &CFlipManagerSignal::`vftable';
  CFlipManagerSignal::ServiceBufferSignals((CFlipManagerSignal *)this);
  v2 = this[6];
  if ( v2 )
    ObfDereferenceObject(v2);
  if ( (unsigned int)Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline() )
  {
    v8 = (struct _KEVENT *)this[3];
    if ( v8 )
    {
      KeSetEvent(v8, 1, 0);
      ObfDereferenceObject(this[3]);
    }
  }
  v3 = (unsigned __int64)(this + 1);
  v4 = -(__int64)this;
  v5 = v3 & -(__int64)(v4 != 0);
  v6 = *(_QWORD *)v5;
  if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) != v5 || (v7 = *(_QWORD **)((v3 & -(__int64)(v4 != 0)) + 8), *v7 != v5) )
    __fastfail(3u);
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
}
