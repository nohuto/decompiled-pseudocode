/*
 * XREFs of ValidateHmenu @ 0x1400495E0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     HMValidateHandleWithDescriptor @ 0x140049640 (HMValidateHandleWithDescriptor.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 */

__int64 __fastcall ValidateHmenu(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  struct tagTHREADINFO *v4; // rax
  __int64 v5; // rdx
  struct tagTHREADINFO *v6; // rsi
  __int64 result; // rax

  v2 = a2;
  v4 = PtiCurrent(a1, a2);
  LOBYTE(v5) = 2;
  v6 = v4;
  result = HMValidateHandleWithDescriptor(a1, v5, v2);
  if ( result )
  {
    if ( *(_QWORD *)(result + 24) != *((_QWORD *)v6 + 61) )
    {
      UserSetLastError(1401LL);
      return 0LL;
    }
  }
  return result;
}
