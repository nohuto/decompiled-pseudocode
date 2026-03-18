/*
 * XREFs of CcZeroDataOnDisk @ 0x14046D690
 * Callers:
 *     CcZeroData @ 0x14046D2D0 (CcZeroData.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402E84A0 (RtlRaiseStatus.c)
 *     MiZeroPageWrite @ 0x14046D748 (MiZeroPageWrite.c)
 */

__int64 __fastcall CcZeroDataOnDisk(__int64 a1, __int64 *a2, _QWORD *a3)
{
  char v3; // bp
  __int64 v5; // rbx
  unsigned int v6; // edi
  int v7; // ecx
  __int64 result; // rax
  unsigned int i; // esi
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0;
  v5 = *a3 - *a2;
  v10 = *a2;
  if ( v5 >= (unsigned int)CcMaxZeroTransferSize )
  {
    if ( _InterlockedIncrement((volatile signed __int32 *)&EmpParseLock.SystemAffinityTokenListHead) > SLODWORD(EmpParseLock.KernelShadowStack) )
    {
      _InterlockedDecrement((volatile signed __int32 *)&EmpParseLock.SystemAffinityTokenListHead);
      v6 = 0x10000;
    }
    else
    {
      v6 = CcMaxZeroTransferSize;
      v3 = 1;
    }
  }
  else
  {
    v6 = 0;
  }
  v7 = 0;
  while ( 1 )
  {
    result = HIDWORD(v5);
    if ( !HIDWORD(v5) )
      break;
    for ( i = 0; i < 4; ++i )
    {
      v7 = MiZeroPageWrite(a1, &v10, 0x40000000LL, v6);
      if ( v7 < 0 )
        goto LABEL_14;
      v5 -= 0x40000000LL;
    }
  }
  if ( (_DWORD)v5 )
  {
    result = MiZeroPageWrite(a1, &v10, (unsigned int)v5, v6);
    v7 = result;
  }
  if ( v7 < 0 )
LABEL_14:
    RtlRaiseStatus(v7);
  if ( v3 )
    _InterlockedDecrement((volatile signed __int32 *)&EmpParseLock.SystemAffinityTokenListHead);
  return result;
}
