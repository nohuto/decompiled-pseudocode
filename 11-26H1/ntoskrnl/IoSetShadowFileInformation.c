/*
 * XREFs of IoSetShadowFileInformation @ 0x1404BD4C0
 * Callers:
 *     <none>
 * Callees:
 *     IopAllocateFileObjectExtension @ 0x14021B6F0 (IopAllocateFileObjectExtension.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IoSetShadowFileInformation(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // ebx
  __int64 result; // rax
  _QWORD *Pool2; // rax
  __int64 *v8; // rcx
  __int64 *v9; // [rsp+48h] [rbp+20h] BYREF

  v5 = 0;
  v9 = 0LL;
  result = IopAllocateFileObjectExtension(a1, &v9, 0);
  if ( (int)result >= 0 )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL);
    if ( Pool2 )
    {
      v8 = v9;
      *Pool2 = a2;
      Pool2[1] = a3;
      if ( _InterlockedCompareExchange64(v8 + 10, (signed __int64)Pool2, 0LL) )
      {
        v5 = -1073741791;
        ExFreePoolWithTag(Pool2, 0);
      }
      return v5;
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
