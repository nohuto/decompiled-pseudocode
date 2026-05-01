/*
 * XREFs of ?RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z @ 0x180001EA0
 * Callers:
 *     ?AddInternal@?$EventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x1800017B8 (-AddInternal@-$EventSource@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U-$InvokeMode.c)
 *     ?AddInternal@?$EventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x180001C8C (-AddInternal@-$EventSource@U-$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Wind.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@AEA_K@Z @ 0x1800181B4 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@.c)
 * Callees:
 *     ??0?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x180001FB0 (--0-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??_E?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x18000FFE8 (--_E-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800137FC (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800149E0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::EventTargetArray::RuntimeClassInitialize(
        Microsoft::WRL::Details::EventTargetArray *this,
        unsigned __int64 a2)
{
  __int64 v4; // rax
  bool v5; // cf
  unsigned __int64 v6; // rax
  unsigned __int64 *v7; // rax
  _QWORD *v8; // r14
  unsigned __int64 v9; // rdi
  _QWORD *i; // rbx
  unsigned __int64 v11; // rax
  void *v12; // rax
  __int64 v13; // rcx
  __int64 result; // rax

  v4 = 8 * a2;
  if ( !is_mul_ok(a2, 8uLL) )
    v4 = -1LL;
  v5 = __CFADD__(v4, 8LL);
  v6 = v4 + 8;
  if ( v5 )
    v6 = -1LL;
  v7 = (unsigned __int64 *)operator new[](v6, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
  {
    v8 = v7 + 1;
    v9 = a2;
    *v7 = a2;
    for ( i = v7 + 1; v9; --v9 )
      Microsoft::WRL::ComPtr<IUnknown>::ComPtr<IUnknown>(i++);
  }
  else
  {
    v8 = 0LL;
  }
  *((_QWORD *)this + 2) = v8;
  v11 = 8 * a2;
  if ( !is_mul_ok(a2, 8uLL) )
    v11 = -1LL;
  v12 = operator new[](v11, (const struct std::nothrow_t *)&std::nothrow);
  v13 = *((_QWORD *)this + 2);
  *((_QWORD *)this + 4) = v12;
  if ( v13 )
  {
    if ( v12 )
    {
      *((_QWORD *)this + 3) = v13;
      return 0LL;
    }
    Microsoft::WRL::ComPtr<IUnknown>::`vector deleting destructor'();
  }
  operator delete(*((void **)this + 4));
  result = 2147942414LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  return result;
}
