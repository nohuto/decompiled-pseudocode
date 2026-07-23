/*
 * XREFs of EtwpAllocDataBlock @ 0x140914C28
 * Callers:
 *     EtwpNotifyGuid @ 0x140913FD4 (EtwpNotifyGuid.c)
 *     EtwpQueueReply @ 0x140A8BB90 (EtwpQueueReply.c)
 *     EtwpEnableGuid @ 0x140AD6AB8 (EtwpEnableGuid.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpAllocDataBlock(size_t Size, void *Src, _QWORD *a3)
{
  unsigned int v3; // ebx
  unsigned int v6; // ebp
  _DWORD *Pool2; // rax
  _DWORD *v8; // rsi

  v3 = 0;
  *a3 = 0LL;
  if ( !Src || *((_DWORD *)Src + 1) == (_DWORD)Size )
  {
    v6 = Size;
    Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL);
    v8 = Pool2;
    if ( Pool2 )
    {
      if ( Src )
        memmove(Pool2, Src, v6);
      v8[2] = 1;
      *a3 = v8;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  else
  {
    return (unsigned int)-1073741820;
  }
  return v3;
}
