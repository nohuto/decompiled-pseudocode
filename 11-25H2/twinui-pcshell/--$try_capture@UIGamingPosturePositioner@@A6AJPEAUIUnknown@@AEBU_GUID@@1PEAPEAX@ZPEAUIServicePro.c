/*
 * XREFs of ??$try_capture@UIGamingPosturePositioner@@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZPEAUIServiceProvider@@AEBU3@@winrt@@YA?AU?$com_ptr@UIGamingPosturePositioner@@@0@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z$$QEAPEAUIServiceProvider@@1@Z @ 0x180491DD4
 * Callers:
 *     ?TryGetTopTwoWindows@CAppThumbnailWindow@@AEAAXPEAPEAUHWND__@@0@Z @ 0x180498CB0 (-TryGetTopTwoWindows@CAppThumbnailWindow@@AEAAXPEAPEAUHWND__@@0@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::try_capture<IGamingPosturePositioner,long (&)(IUnknown *,_GUID const &,_GUID const &,void * *),IServiceProvider *,_GUID const &>(
        _QWORD *a1,
        void (__fastcall *a2)(_QWORD, GUID *, __int64 *, __int64 *),
        _QWORD *a3)
{
  __int64 v5; // [rsp+68h] [rbp+20h] BYREF

  v5 = 0LL;
  a2(*a3, &GUID_e0e78cc4_82f7_4d70_bd5c_217e39804a26, &winrt::impl::guid_v<IGamingPosturePositioner>, &v5);
  *a1 = v5;
  return a1;
}
