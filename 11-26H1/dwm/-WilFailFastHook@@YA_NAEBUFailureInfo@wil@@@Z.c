/*
 * XREFs of ?WilFailFastHook@@YA_NAEBUFailureInfo@wil@@@Z @ 0x14000F500
 * Callers:
 *     <none>
 * Callees:
 *     ?MilFailFastForHR@@YAXJPEBX@Z @ 0x140004460 (-MilFailFastForHR@@YAXJPEBX@Z.c)
 */

void __fastcall __noreturn WilFailFastHook(const struct wil::FailureInfo *a1)
{
  void *v1; // rdx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (void *)*((_QWORD *)a1 + 17);
  if ( !v1 )
    v1 = retaddr;
  MilFailFastForHR(*((_DWORD *)a1 + 2), v1);
  JUMPOUT(0x14000F51DLL);
}
