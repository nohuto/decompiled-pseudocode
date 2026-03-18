/*
 * XREFs of FindObjSymbol @ 0x14006F284
 * Callers:
 *     DebugExpr @ 0x14006E99C (DebugExpr.c)
 * Callees:
 *     ReferenceObjectEx @ 0x140036D50 (ReferenceObjectEx.c)
 */

char __fastcall FindObjSymbol(unsigned __int64 a1, __int64 *a2, _DWORD *a3)
{
  char v4; // bl
  _QWORD *v5; // rdi
  KIRQL v8; // dl
  _QWORD *v9; // rax
  unsigned __int64 v10; // rcx
  __int64 v11; // rcx

  v4 = 0;
  v5 = 0LL;
  v8 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v9 = P;
  if ( P )
  {
    do
    {
      v10 = v9[2];
      if ( a1 >= v10 && (!v5 || v10 > v5[2]) )
        v5 = v9;
      v9 = (_QWORD *)v9[1];
    }
    while ( v9 );
    if ( v5 )
    {
      v11 = v5[3];
      *a2 = v11;
      ReferenceObjectEx(v11);
      v4 = 1;
      *a3 = a1 - *((_DWORD *)v5 + 4);
    }
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v8);
  return v4;
}
