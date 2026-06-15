/*
 * XREFs of ?GetSubmix@CAudioStream@@UEAAJPEAPEAUISubmixProxy@@@Z @ 0x180081400
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005759C (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$copy_to@UISubmixProxy@@@?$com_ptr_t@UISubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUISubmixProxy@@@Z @ 0x1800814A8 (--$copy_to@UISubmixProxy@@@-$com_ptr_t@UISubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAudioStream::GetSubmix(CAudioStream *this, struct ISubmixProxy **a2)
{
  __int64 v2; // rsi
  __int64 (__fastcall *v3)(__int64, __int64 *); // rbx
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 69);
  if ( !v2 )
    return wil::com_ptr_t<ISubmixProxy,wil::err_returncode_policy>::copy_to<ISubmixProxy>((char *)this + 48);
  v8 = 0LL;
  v3 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 88LL);
  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&v8);
  v4 = v3(v2, &v8);
  v5 = v4;
  if ( v4 >= 0 )
    v5 = wil::com_ptr_t<ISubmixProxy,wil::err_returncode_policy>::copy_to<ISubmixProxy>(&v8);
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x551,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)(unsigned int)v4);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v8);
  return v5;
}
