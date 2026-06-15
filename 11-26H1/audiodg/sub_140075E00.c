/*
 * XREFs of sub_140075E00 @ 0x140075E00
 * Callers:
 *     <none>
 * Callees:
 *     sub_14003A998 @ 0x14003A998 (sub_14003A998.c)
 *     sub_140079F14 @ 0x140079F14 (sub_140079F14.c)
 */

void __fastcall sub_140075E00(PTP_CALLBACK_INSTANCE Instance, RTL_SRWLOCK *Context, PTP_TIMER Timer)
{
  RTL_SRWLOCK *v4; // rbx
  RTL_SRWLOCK *v5; // [rsp+38h] [rbp+10h] BYREF

  if ( LOBYTE(Context->Ptr) )
  {
    v4 = Context + 4;
    AcquireSRWLockExclusive(Context + 4);
    v5 = v4;
    BYTE1(Context[8].Ptr) = 0;
    sub_14003A998(&v5);
    sub_140079F14(Context);
  }
}
