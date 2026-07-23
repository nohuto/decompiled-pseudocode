/*
 * XREFs of ExpDetermineLargePagePolicy @ 0x1406D6E08
 * Callers:
 *     ExInitializePoolHeapManagement @ 0x1406D6B74 (ExInitializePoolHeapManagement.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpDetermineLargePagePolicy(__int64 a1)
{
  unsigned __int128 v1; // rax
  unsigned __int64 v2; // r9
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // r8

  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)&v1 = stru_140E2ED08.ThreadLock;
  *(_BYTE *)(a1 + 16) = 80;
  v2 = *(_QWORD *)(*(_QWORD *)v1 + 22288LL);
  v3 = v2 >> 9;
  v4 = v2 >> 8;
  if ( v4 >= 0x1000 )
  {
    if ( v4 < 0x4000 )
    {
      v1 = v3 * (unsigned __int128)0x47AE147AE147AE15uLL;
      v3 = *((_QWORD *)&v1 + 1) + ((v3 - *((_QWORD *)&v1 + 1)) >> 1);
    }
    v5 = v3 >> 4;
  }
  else
  {
    v5 = v3 >> 5;
  }
  *(_QWORD *)a1 = v5;
  *(_QWORD *)(a1 + 8) = -1LL;
  if ( v4 > 0x200 )
  {
    if ( v4 < 0x800 )
      *(_QWORD *)(a1 + 8) = 2LL;
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  return v1;
}
