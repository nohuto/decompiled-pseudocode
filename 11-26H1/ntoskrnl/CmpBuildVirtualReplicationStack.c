/*
 * XREFs of CmpBuildVirtualReplicationStack @ 0x14085F9F0
 * Callers:
 *     CmpReplicateKeyToVirtual @ 0x140860234 (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpBuildVirtualReplicationStack(__int64 a1, __int64 a2, _DWORD *a3, _QWORD *a4)
{
  _DWORD *Pool2; // r10
  __int64 result; // rax
  __int64 v10; // r8
  _WORD *v11; // rdx
  __int16 v12; // cx
  _WORD *v13; // rdx
  __int16 v14; // cx
  __int64 v15; // r9

  *a4 = 0LL;
  Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL);
  if ( !Pool2 )
    return 3221225626LL;
  LODWORD(v10) = 4;
  v11 = *(_WORD **)(a2 + 8);
  v12 = *(_OWORD *)a2;
  while ( 1 )
  {
    if ( *v11 == 92 )
    {
      LODWORD(v10) = v10 - 1;
      if ( !(_DWORD)v10 )
        break;
    }
    v12 -= 2;
    if ( !v12 )
    {
LABEL_20:
      ExFreePoolWithTag(Pool2, 0);
      return 3221225485LL;
    }
    ++v11;
  }
  v13 = v11 + 1;
  v14 = v12 - 2;
  while ( v14 )
  {
    v15 = 12LL * (unsigned int)v10;
    *(_QWORD *)&Pool2[v15 + 2] = v13;
    do
    {
      if ( *v13 == 92 )
        break;
      LOWORD(Pool2[v15]) += 2;
      ++v13;
      v14 -= 2;
    }
    while ( v14 );
    LODWORD(v10) = v10 + 1;
    HIWORD(Pool2[v15]) = Pool2[v15];
    if ( !v14 )
      break;
    do
    {
      if ( *v13 != 92 )
        break;
      ++v13;
      v14 -= 2;
    }
    while ( v14 );
  }
  *a3 = v10;
  while ( (unsigned int)v10 > 1 )
  {
    if ( !a1 )
      goto LABEL_20;
    v10 = (unsigned int)(v10 - 1);
    Pool2[12 * v10 + 10] = *(_DWORD *)(a1 + 40) >> 31;
    a1 = *(_QWORD *)(a1 + 72);
  }
  Pool2[10] = 0;
  result = 0LL;
  *a4 = Pool2;
  return result;
}
