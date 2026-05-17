/*
 * XREFs of EtwpNotificationThread @ 0x1800509C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     TpSetWaitEx @ 0x18004F8E0 (TpSetWaitEx.c)
 *     EtwDeliverDataBlock @ 0x1800525B0 (EtwDeliverDataBlock.c)
 *     NtTraceControl @ 0x180162A10 (NtTraceControl.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

_BYTE *__fastcall EtwpNotificationThread(__int64 a1, volatile signed __int32 **a2, __int64 a3)
{
  _BYTE *Heap_0; // rdi
  char v4; // bp
  int v7; // esi
  int v8; // ebx
  __int64 *v9; // r8
  _BYTE *result; // rax
  int v11; // [rsp+30h] [rbp-148h] BYREF
  __int64 v12; // [rsp+38h] [rbp-140h] BYREF
  _BYTE v13[256]; // [rsp+40h] [rbp-138h] BYREF

  v12 = -600000000LL;
  v11 = 0;
  Heap_0 = v13;
  v4 = 0;
  v7 = 256;
  while ( 1 )
  {
    while ( 1 )
    {
      v8 = NtTraceControl(16LL, 0LL, 0LL, Heap_0, v7, &v11);
      if ( v8 < 0 )
        break;
      EtwDeliverDataBlock(Heap_0);
      if ( v8 != 261 )
        goto LABEL_4;
    }
    if ( v8 != -1073741789 )
      break;
    if ( Heap_0 != v13 )
      RtlFreeHeap_0();
    v7 = v11;
    Heap_0 = (_BYTE *)RtlAllocateHeap_0();
    if ( !Heap_0 )
    {
      v4 = 1;
      break;
    }
  }
LABEL_4:
  v9 = &v12;
  if ( !v4 )
    v9 = 0LL;
  TpSetWaitEx(a3, a2, v9, 0LL);
  result = v13;
  if ( Heap_0 != v13 )
  {
    if ( Heap_0 )
      return (_BYTE *)RtlFreeHeap_0();
  }
  return result;
}
