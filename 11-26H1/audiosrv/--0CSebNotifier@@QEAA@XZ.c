/*
 * XREFs of ??0CSebNotifier@@QEAA@XZ @ 0x18010EC00
 * Callers:
 *     ??0CPowerReferenceManager@@QEAA@XZ @ 0x1800D70A0 (--0CPowerReferenceManager@@QEAA@XZ.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180067DCC (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?PublishSebEvent@CSebNotifier@@AEAAXE@Z @ 0x18006F308 (-PublishSebEvent@CSebNotifier@@AEAAXE@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18010F920 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Log_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18010F940 (-_Log_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

CSebNotifier *__fastcall CSebNotifier::CSebNotifier(CSebNotifier *this)
{
  char *v1; // rbx
  int v3; // eax
  PTP_WAIT ThreadpoolWait; // rax
  const char *v5; // r9
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v9; // [rsp+30h] [rbp+8h] BYREF

  v1 = (char *)this + 96;
  *(_DWORD *)this = 0;
  *((_QWORD *)this + 1) = 2LL;
  *((_OWORD *)this + 2) = 0LL;
  *((_OWORD *)this + 3) = 0LL;
  *((_OWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 20) = -1;
  *((_DWORD *)this + 21) = 0;
  *((_BYTE *)this + 88) = -1;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  v9 = 17;
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    (void **)this + 12,
    0LL);
  v3 = NtCreateIRTimer(v1, &v9, 2031619LL);
  if ( v3 >= 0 )
  {
    ThreadpoolWait = CreateThreadpoolWait(
                       (PTP_WAIT_CALLBACK)lambda_35797e26c2f113dffb458279a808fd40_::_lambda_invoker_cdecl_,
                       this,
                       0LL);
    *((_QWORD *)this + 13) = ThreadpoolWait;
    if ( !ThreadpoolWait )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x1A4,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
        v5);
  }
  else
  {
    wil::details::in1diag3::_Log_NtStatus(
      retaddr,
      (void *)0x19C,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
      (const char *)(unsigned int)v3,
      v7);
  }
  CSebNotifier::PublishSebEvent(this, 0);
  return this;
}
