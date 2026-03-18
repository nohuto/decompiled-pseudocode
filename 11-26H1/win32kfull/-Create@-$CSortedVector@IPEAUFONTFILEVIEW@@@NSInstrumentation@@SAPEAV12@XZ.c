/*
 * XREFs of ?Create@?$CSortedVector@IPEAUFONTFILEVIEW@@@NSInstrumentation@@SAPEAV12@XZ @ 0x140225960
 * Callers:
 *     ?InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@SAHPEAX@Z @ 0x1402256F8 (-InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@SAHPEAX@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *NSInstrumentation::CSortedVector<unsigned int,FONTFILEVIEW *>::Create()
{
  _QWORD *Pool2; // rbx
  _QWORD *result; // rax
  __int64 v2; // rax

  Pool2 = (_QWORD *)ExAllocatePool2(258LL, 56LL, 1665758037LL);
  if ( !Pool2 )
    return 0LL;
  v2 = ExAllocatePool2(258LL, 0x2000LL, 1665758037LL);
  if ( !v2 )
  {
    ExFreePoolWithTag(Pool2, 0);
    return 0LL;
  }
  Pool2[6] = v2;
  result = Pool2;
  Pool2[4] = 512LL;
  Pool2[5] = 0LL;
  Pool2[3] = 0LL;
  *Pool2 = 0LL;
  *((_DWORD *)Pool2 + 4) = 0;
  return result;
}
