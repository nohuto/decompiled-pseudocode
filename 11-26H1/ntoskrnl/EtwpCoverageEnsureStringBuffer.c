/*
 * XREFs of EtwpCoverageEnsureStringBuffer @ 0x14082FE18
 * Callers:
 *     EtwpCoverageEnsureContext @ 0x140778B18 (EtwpCoverageEnsureContext.c)
 *     EtwpCoverageRecord @ 0x140B0FA48 (EtwpCoverageRecord.c)
 * Callees:
 *     EtwpCoverageInitializeStringBuffer @ 0x1406CA59C (EtwpCoverageInitializeStringBuffer.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpCoverageEnsureStringBuffer(__int64 a1)
{
  _QWORD *v1; // rsi
  _QWORD *i; // r8
  unsigned int v4; // ebx
  _QWORD *Pool2; // rax
  _QWORD *v6; // rdi
  _QWORD *v7; // rax

  v1 = (_QWORD *)(a1 + 48);
  for ( i = *(_QWORD **)(a1 + 48); i != v1; i = (_QWORD *)*i )
  {
    if ( i[2] - i[3] >= 0x200uLL )
    {
      *(_QWORD *)(a1 + 40) = i;
      return 0;
    }
  }
  Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL);
  v4 = 0;
  v6 = Pool2;
  if ( Pool2 )
  {
    EtwpCoverageInitializeStringBuffer(Pool2, 0x2000u);
    *(_QWORD *)(a1 + 40) = v6;
    v7 = (_QWORD *)v1[1];
    if ( (_QWORD *)*v7 != v1 )
      __fastfail(3u);
    *v6 = v1;
    v6[1] = v7;
    *v7 = v6;
    v1[1] = v6;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v4;
}
