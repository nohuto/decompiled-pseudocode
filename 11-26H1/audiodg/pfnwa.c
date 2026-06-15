/*
 * XREFs of pfnwa @ 0x14007EB40
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14003A998 @ 0x14003A998 (sub_14003A998.c)
 *     sub_14003E770 @ 0x14003E770 (sub_14003E770.c)
 *     sub_1400454AC @ 0x1400454AC (sub_1400454AC.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     sub_140076CA0 @ 0x140076CA0 (sub_140076CA0.c)
 *     sub_140077830 @ 0x140077830 (sub_140077830.c)
 *     sub_140077F40 @ 0x140077F40 (sub_140077F40.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall pfnwa(PTP_CALLBACK_INSTANCE Instance, RTL_SRWLOCK *Context, PTP_WAIT Wait, TP_WAIT_RESULT WaitResult)
{
  RTL_SRWLOCK *v6; // [rsp+40h] [rbp-20h] BYREF
  char v7; // [rsp+88h] [rbp+28h] BYREF

  sub_14003E770(&v7);
  if ( Context )
  {
    sub_1400B6010(Context[24].Ptr);
    AcquireSRWLockExclusive(Context + 27);
    v6 = Context + 27;
    if ( !LOBYTE(Context[28].Ptr) )
      SetThreadpoolWait(Wait, Context[23].Ptr, 0LL);
    sub_14003A998(&v6);
  }
  if ( v7 )
    CoUninitialize();
}
