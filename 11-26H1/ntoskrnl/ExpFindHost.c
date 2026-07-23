/*
 * XREFs of ExpFindHost @ 0x140846FD0
 * Callers:
 *     ExRegisterExtension @ 0x1408469D0 (ExRegisterExtension.c)
 *     ExRegisterHost @ 0x140846CA8 (ExRegisterHost.c)
 * Callees:
 *     <none>
 */

void **__fastcall ExpFindHost(__int16 a1)
{
  void **result; // rax

  for ( result = (void **)KiSystemServiceTraceCallbackLock.SListFaultAddress; ; result = (void **)*result )
  {
    if ( result == &KiSystemServiceTraceCallbackLock.SListFaultAddress )
      return 0LL;
    if ( *((_WORD *)result + 8) == a1 )
      break;
  }
  if ( _InterlockedIncrement64((volatile signed __int64 *)result + 3) <= 1 )
    __fastfail(0xEu);
  return result;
}
