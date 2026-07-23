/*
 * XREFs of EtwpCovSampHashLookupInTable @ 0x140A68690
 * Callers:
 *     EtwpCovSampHashMakeRoomAndAcquireLock @ 0x140A3230C (EtwpCovSampHashMakeRoomAndAcquireLock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpCovSampHashLookupInTable(__int64 a1, __int64 *a2, _QWORD *a3)
{
  int v4; // edi
  int v5; // r10d
  __int64 v6; // r9
  __int64 v7; // r8
  int v8; // ebp
  __int64 i; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax

  v4 = 0;
  v5 = *(_DWORD *)(a1 + 20) - 1;
  v6 = *a2;
  v7 = *(_QWORD *)(a1 + 24);
  v8 = 442596621 * (unsigned __int8)*a2
     + 37
     * (*((unsigned __int8 *)a2 + 6)
      + 37
      * (*((unsigned __int8 *)a2 + 5)
       + 37
       * (*((unsigned __int8 *)a2 + 4)
        + 37 * (*((unsigned __int8 *)a2 + 3) + 37 * (*((unsigned __int8 *)a2 + 2) + 37 * *((unsigned __int8 *)a2 + 1))))))
     + *((unsigned __int8 *)a2 + 7)
     - 877075889;
  for ( i = v8 & (unsigned int)v5; ; i = v5 & (unsigned int)(v4 + i) )
  {
    v10 = *(_QWORD *)(v7 + 8 * i);
    v11 = v7 + 8 * i;
    if ( v10 == v6 )
    {
      *a3 = v11;
      return 1LL;
    }
    if ( !v10 )
      break;
    if ( !v4 )
    {
      v4 = -1640531535 * v8 + 1;
      if ( ((-79 * (_BYTE)v8) & 1) != 0 )
        v4 = -1640531535 * v8;
    }
  }
  *a3 = v11;
  return 0LL;
}
