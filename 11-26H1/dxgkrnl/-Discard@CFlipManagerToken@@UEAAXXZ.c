/*
 * XREFs of ?Discard@CFlipManagerToken@@UEAAXXZ @ 0x140019350
 * Callers:
 *     <none>
 * Callees:
 *     ?FlipManagerConsumerImmediateTokenCompleted@@YAJPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEAVCFlipManagerSignal@@@Z @ 0x140018990 (-FlipManagerConsumerImmediateTokenCompleted@@YAJPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEAVCFl.c)
 *     Feature_CompTexturesNoRedirectionFix__private_IsEnabledDeviceUsageNoInline @ 0x140019460 (Feature_CompTexturesNoRedirectionFix__private_IsEnabledDeviceUsageNoInline.c)
 *     ??_GFlipManagerTokenIFlipInfo@@QEAAPEAXI@Z @ 0x14001949C (--_GFlipManagerTokenIFlipInfo@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall CFlipManagerToken::Discard(CFlipManagerToken *this)
{
  unsigned int v2; // edx
  void *v3; // rcx
  _DWORD *v4; // rdi
  __int64 v5; // rcx
  void *v6; // rcx
  void *v7; // rcx

  if ( !(unsigned int)Feature_CompTexturesNoRedirectionFix__private_IsEnabledDeviceUsageNoInline() )
  {
    v7 = (void *)*((_QWORD *)this + 10);
    if ( v7 )
    {
      ObfDereferenceObject(v7);
      *((_QWORD *)this + 10) = 0LL;
    }
  }
  v3 = (void *)*((_QWORD *)this + 9);
  if ( v3 )
  {
    FlipManagerTokenIFlipInfo::`scalar deleting destructor'(v3, v2);
    *((_QWORD *)this + 9) = 0LL;
  }
  v4 = (_DWORD *)((char *)this + 24);
  if ( (unsigned int)Feature_CompTexturesNoRedirectionFix__private_IsEnabledDeviceUsageNoInline()
    && !*v4
    && *((_BYTE *)this + 115) )
  {
    (*(void (__fastcall **)(CFlipManagerToken *))(*(_QWORD *)this + 16LL))(this);
    (*(void (__fastcall **)(CFlipManagerToken *))(*(_QWORD *)this + 24LL))(this);
    FlipManagerConsumerImmediateTokenCompleted((FlipManagerObject **)this - 1, 0LL, 0LL);
  }
  v5 = *((_QWORD *)this + 8);
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    *((_QWORD *)this + 8) = 0LL;
  }
  if ( (unsigned int)Feature_CompTexturesNoRedirectionFix__private_IsEnabledDeviceUsageNoInline() )
  {
    v6 = (void *)*((_QWORD *)this + 10);
    if ( v6 )
    {
      ObfDereferenceObject(v6);
      *((_QWORD *)this + 10) = 0LL;
    }
  }
  *v4 = 6;
}
