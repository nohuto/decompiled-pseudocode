/*
 * XREFs of ?TryCreateEffectInstance@CEffectBrush@@AEAAJXZ @ 0x180217C7C
 * Callers:
 *     ?OnChanged@CEffectBrush@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801ACAB0 (-OnChanged@CEffectBrush@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnInputCountChanged@CEffectBrush@@QEAAXXZ @ 0x18026E400 (-OnInputCountChanged@CEffectBrush@@QEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?HasValidTemplate@CEffectBrush@@AEBA_NXZ @ 0x1801ACAD8 (-HasValidTemplate@CEffectBrush@@AEBA_NXZ.c)
 *     ?GetCompiledEffectNoRef@CCompiledEffectTemplate@@QEBAPEBUICompiledEffect@Composition@UI@Windows@@XZ @ 0x1801B3EF8 (-GetCompiledEffectNoRef@CCompiledEffectTemplate@@QEBAPEBUICompiledEffect@Composition@UI@Windows@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CEffectBrush::TryCreateEffectInstance(CEffectBrush *this)
{
  unsigned int v1; // ebx
  _QWORD *v2; // rdi
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, const struct Windows::UI::Composition::ICompiledEffect *); // rbx
  const struct Windows::UI::Composition::ICompiledEffect *CompiledEffectNoRef; // rax
  int v11; // eax

  v1 = 0;
  v2 = (_QWORD *)((char *)this + 160);
  if ( !*((_QWORD *)this + 20) && CEffectBrush::HasValidTemplate(this) )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 112) + 80LL) + 56LL);
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v5 + 72LL))(v5, v2);
    v1 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x196u, 0LL);
      return v1;
    }
    v7 = *((_QWORD *)this + 15);
    if ( v7 )
      *(_QWORD *)(v7 + 80) = ((unsigned __int64)this + 152) & -(__int64)(this != 0LL);
  }
  if ( *v2 )
  {
    if ( !(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 64LL))(*v2) )
    {
      if ( CCompiledEffectTemplate::GetCompiledEffectNoRef(*((CCompiledEffectTemplate **)this + 14)) )
      {
        v8 = *v2;
        v9 = *(__int64 (__fastcall **)(__int64, const struct Windows::UI::Composition::ICompiledEffect *))(*(_QWORD *)v8 + 56LL);
        CompiledEffectNoRef = CCompiledEffectTemplate::GetCompiledEffectNoRef(*((CCompiledEffectTemplate **)this + 14));
        v11 = v9(v8, CompiledEffectNoRef);
        v1 = v11;
        if ( v11 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x1A7u, 0LL);
      }
    }
  }
  return v1;
}
