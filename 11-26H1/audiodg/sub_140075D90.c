/*
 * XREFs of sub_140075D90 @ 0x140075D90
 * Callers:
 *     <none>
 * Callees:
 *     sub_14003A998 @ 0x14003A998 (sub_14003A998.c)
 *     sub_14007FA50 @ 0x14007FA50 (sub_14007FA50.c)
 */

void __fastcall sub_140075D90(PTP_CALLBACK_INSTANCE Instance, RTL_SRWLOCK *Context, PTP_TIMER Timer)
{
  RTL_SRWLOCK *v4; // rbx
  RTL_SRWLOCK *v5; // [rsp+38h] [rbp+10h] BYREF

  if ( LOBYTE(Context->Ptr) )
  {
    v4 = Context + 5;
    AcquireSRWLockExclusive(Context + 5);
    v5 = v4;
    if ( (PVOID)((char *)Context[30].Ptr - (char *)Context[29].Ptr) >= (PVOID)0xC )
    {
      sub_14007FA50(&Context[29]);
      Context[30].Ptr = Context[29].Ptr;
    }
    LOBYTE(Context[8].Ptr) = 0;
    sub_14003A998(&v5);
  }
}
