/*
 * XREFs of ?ProcessTerminationWatcherCallback@CProcess@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x180007F10
 * Callers:
 *     <none>
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180008500 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??1?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B770 (--1-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x18000BE20 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003AD8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall CProcess::ProcessTerminationWatcherCallback(
        struct _TP_CALLBACK_INSTANCE *a1,
        volatile int *a2,
        struct _TP_WAIT *a3)
{
  volatile int *v3; // r8
  Microsoft::WRL::Details *v4; // rcx
  int v5; // eax
  int v6[2]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v7[10]; // [rsp+28h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v9; // [rsp+88h] [rbp+10h] BYREF

  *(_QWORD *)v6 = a2;
  v3 = a2;
  v4 = (Microsoft::WRL::Details *)(a2 + 5);
  if ( a2 )
    Microsoft::WRL::Details::SafeUnknownIncrementReference(v4, a2);
  if ( v3 )
    Microsoft::WRL::Details::SafeUnknownIncrementReference(v4, a2);
  v9 = 0LL;
  v7[0] = off_1800505F8;
  v7[1] = v3;
  v7[7] = v7;
  v5 = QueueGenericWorkItem(v7);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xE48,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
      (const char *)(unsigned int)v5,
      v6[0]);
  wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>(&v9);
  wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>(v6);
}
