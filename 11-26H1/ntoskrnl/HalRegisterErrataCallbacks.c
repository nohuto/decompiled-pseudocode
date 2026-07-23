/*
 * XREFs of HalRegisterErrataCallbacks @ 0x140C86000
 * Callers:
 *     <none>
 * Callees:
 *     EmpProviderRegister @ 0x140B5B680 (EmpProviderRegister.c)
 */

__int64 HalRegisterErrataCallbacks()
{
  __int64 v1; // [rsp+40h] [rbp+8h] BYREF

  return EmpProviderRegister(0LL, 0LL, 0, (struct _KLOCK_ENTRIES *)&off_140005B00, 6u, &v1);
}
