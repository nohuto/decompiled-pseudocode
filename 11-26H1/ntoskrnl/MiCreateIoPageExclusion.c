/*
 * XREFs of MiCreateIoPageExclusion @ 0x1406F8618
 * Callers:
 *     MiMapNewPfns @ 0x14086CA54 (MiMapNewPfns.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     RtlAvlInsertNodeEx @ 0x1402EEAE0 (RtlAvlInsertNodeEx.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiIoPfnTreeExclusionCompatible @ 0x1406F8E8C (MiIoPfnTreeExclusionCompatible.c)
 *     MiLockIoPfnTree @ 0x1406F92D4 (MiLockIoPfnTree.c)
 *     MiUnlockIoPfnTree @ 0x1406F9AFC (MiUnlockIoPfnTree.c)
 */

__int64 __fastcall MiCreateIoPageExclusion(_QWORD *a1, int a2, _BOOL8 a3, __int64 a4)
{
  int v4; // ebx
  unsigned __int8 CurrentIrql; // bp
  _QWORD *v7; // rcx
  int v8; // ebx
  int i; // edi
  _QWORD *v10; // rdx
  _QWORD *v11; // rax

  v4 = a2;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
  }
  if ( !v4 )
  {
    v7 = (_QWORD *)xmmword_140E36040;
    if ( (_QWORD)xmmword_140E36040 )
    {
      do
      {
        if ( a1[4] < v7[3] )
        {
          v7 = (_QWORD *)*v7;
        }
        else
        {
          if ( a1[3] <= v7[4] )
            break;
          v7 = (_QWORD *)v7[1];
        }
      }
      while ( v7 );
      if ( v7 )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
LABEL_16:
        v8 = -1073741800;
        goto LABEL_27;
      }
    }
  }
  MiLockIoPfnTree(6LL);
  for ( i = 0; i < 2; ++i )
  {
    v8 = MiIoPfnTreeExclusionCompatible((unsigned int)i, a1);
    if ( v8 < 0 )
      goto LABEL_27;
  }
  v10 = (_QWORD *)*((_QWORD *)&xmmword_140E36040 + 1);
  LOBYTE(a3) = 0;
  if ( !*((_QWORD *)&xmmword_140E36040 + 1) )
    goto LABEL_26;
  v7 = (_QWORD *)a1[4];
  while ( (unsigned __int64)v7 < v10[3] )
  {
    v11 = (_QWORD *)*v10;
    if ( !*v10 )
      goto LABEL_26;
LABEL_31:
    v10 = v11;
  }
  if ( a1[3] <= v10[4] )
    goto LABEL_16;
  v11 = (_QWORD *)v10[1];
  if ( v11 )
    goto LABEL_31;
  LOBYTE(a3) = 1;
LABEL_26:
  RtlAvlInsertNodeEx((unsigned __int64 *)&xmmword_140E36040 + 1, (unsigned __int64)v10, a3, a1);
LABEL_27:
  LOBYTE(v7) = CurrentIrql;
  MiUnlockIoPfnTree(v7, 2LL, a3, a4);
  if ( v8 < 0 )
    _InterlockedIncrement(&dword_140E36088);
  return (unsigned int)v8;
}
