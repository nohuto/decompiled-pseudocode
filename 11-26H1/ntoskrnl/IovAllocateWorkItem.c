/*
 * XREFs of IovAllocateWorkItem @ 0x140C20BA0
 * Callers:
 *     <none>
 * Callees:
 *     IoInitializeWorkItem @ 0x1404854B0 (IoInitializeWorkItem.c)
 *     VfHandlePoolAlloc @ 0x140C44300 (VfHandlePoolAlloc.c)
 */

struct _IO_WORKITEM *__fastcall IovAllocateWorkItem(PVOID IoObject, __int64 a2)
{
  struct _IO_WORKITEM *v3; // rax
  struct _IO_WORKITEM *v4; // rbx
  _QWORD v6[3]; // [rsp+40h] [rbp-18h] BYREF

  v6[0] = 1LL;
  v6[1] = 32LL;
  v3 = (struct _IO_WORKITEM *)VfHandlePoolAlloc(
                                NonPagedPool,
                                0x240uLL,
                                0x60uLL,
                                0x69776656uLL,
                                LowPoolPriority,
                                (__int64)v6,
                                1,
                                a2);
  v4 = v3;
  if ( v3 )
    IoInitializeWorkItem(IoObject, v3);
  return v4;
}
