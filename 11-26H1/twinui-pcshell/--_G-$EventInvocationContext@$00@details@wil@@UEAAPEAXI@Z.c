/*
 * XREFs of ??_G?$EventInvocationContext@$00@details@wil@@UEAAPEAXI@Z @ 0x180402010
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$EventInvocationContext@$00@details@wil@@UEAA@XZ @ 0x180401B88 (--1-$EventInvocationContext@$00@details@wil@@UEAA@XZ.c)
 */

void *__fastcall wil::details::EventInvocationContext<1>::`scalar deleting destructor'(void *a1, char a2)
{
  wil::details::EventInvocationContext<1>::~EventInvocationContext<1>((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x70);
  return a1;
}
