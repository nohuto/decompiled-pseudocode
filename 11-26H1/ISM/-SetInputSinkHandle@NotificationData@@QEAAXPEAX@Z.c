/*
 * XREFs of ?SetInputSinkHandle@NotificationData@@QEAAXPEAX@Z @ 0x180047EC8
 * Callers:
 *     NotifyInputSinkParented @ 0x180047CE0 (NotifyInputSinkParented.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800481D0 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-NtCloseCompositionInputSink@.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall NotificationData::SetInputSinkHandle(NotificationData *this, void *a2)
{
  HANDLE *v2; // rdi
  HANDLE CurrentProcess; // rbx
  HANDLE v5; // rax
  const char *v6; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = (HANDLE *)((char *)this + 16);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>::reset(
    (char *)this + 16,
    0LL);
  CurrentProcess = GetCurrentProcess();
  v5 = GetCurrentProcess();
  if ( !DuplicateHandle(v5, a2, CurrentProcess, v2, 0, 0, 2u) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x32,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\inputsinkdatacache\\inc\\Inp"
                    "utSinkDataCache.h",
      v6);
}
