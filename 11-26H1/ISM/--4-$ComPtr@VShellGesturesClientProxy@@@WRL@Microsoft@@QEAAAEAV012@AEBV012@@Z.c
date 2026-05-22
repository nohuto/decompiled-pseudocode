/*
 * XREFs of ??4?$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18015C68C
 * Callers:
 *     ?OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180086670 (-OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRe.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180073DA4 (-InternalRelease@-$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x18007692C (-InternalAddRef@-$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::operator=(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rdi
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a2;
  if ( *a1 != *a2 )
  {
    v5 = *a2;
    Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::InternalAddRef(&v5);
    v5 = *a1;
    *a1 = v2;
    Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::InternalRelease(&v5);
  }
  return a1;
}
