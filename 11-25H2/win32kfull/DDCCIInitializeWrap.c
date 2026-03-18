/*
 * XREFs of DDCCIInitializeWrap @ 0x1402854C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DDCCIInitializeWrap(int a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rsi
  OPM::CMutex *Pool2; // rax
  OPM::CMutex *v5; // rdi
  unsigned int v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v7 = 0;
  v3 = *(_QWORD *)(W32GetSessionState(a1, a2) + 96);
  Pool2 = (OPM::CMutex *)ExAllocatePool2(258LL, 40LL, 1664248135LL);
  v5 = Pool2;
  if ( Pool2 )
  {
    OPM::CMutex::CMutex(Pool2, (int *)&v7);
    *((_QWORD *)v5 + 1) = 0LL;
    *((_QWORD *)v5 + 2) = 0LL;
    *((_DWORD *)v5 + 6) = -1071774324;
    OPM::CMutex::CMutex((OPM::CMutex *)((char *)v5 + 32), (int *)&v7);
  }
  else
  {
    v5 = 0LL;
  }
  *(_QWORD *)(v3 + 128) = v5;
  if ( v5 )
  {
    if ( (v7 & 0x80000000) != 0 )
      return v7;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v2;
}
