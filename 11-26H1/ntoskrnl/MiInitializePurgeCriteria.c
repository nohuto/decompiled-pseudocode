/*
 * XREFs of MiInitializePurgeCriteria @ 0x14049DDA4
 * Callers:
 *     MiPurgeSubsection @ 0x1404199B0 (MiPurgeSubsection.c)
 * Callees:
 *     MiChangingSubsectionProtos @ 0x1406FDDF0 (MiChangingSubsectionProtos.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiInitializePurgeCriteria(
        unsigned int *a1,
        __int64 a2,
        __int64 a3,
        struct _KTHREAD *a4,
        __int64 a5,
        unsigned int a6)
{
  _DWORD *v8; // rbx
  __int64 v9; // r8
  __int64 result; // rax

  memset_0(a1, 0, 0x78uLL);
  *((_QWORD *)a1 + 5) = a4;
  v8 = a1 + 2;
  v9 = *(_QWORD *)&a4->Header.Lock;
  *((_QWORD *)a1 + 7) = *(_QWORD *)(stru_140E2ED08.ThreadLock
                                  + 8LL * (*(_DWORD *)(*(_QWORD *)&a4->Header.Lock + 60LL) & 0x3FF));
  *a1 = a6;
  *((_QWORD *)a1 + 4) = a5;
  *((_QWORD *)a1 + 6) = v9;
  *((_BYTE *)a1 + 12) = 17;
  a1[1] = *(_DWORD *)(*(_QWORD *)v9 + 12LL);
  if ( (*(_DWORD *)(v9 + 56) & 0x30000000) != 0 )
    *v8 |= 1u;
  if ( (*(_DWORD *)(v9 + 56) & 0x30000000) == 0x20000000 )
    *v8 |= 2u;
  result = *(_DWORD *)(v9 + 56) & 0x30000000;
  if ( (_DWORD)result == 0x10000000 )
  {
    result = *(_DWORD *)(v9 + 56) >> 5;
    if ( ((unsigned __int8)result & (unsigned __int8)~(a6 >> 2) & 1) != 0 )
    {
      v8 = a1 + 2;
      result = *(_QWORD *)(v9 + 96) & 0xFFFFFFFFFFFFFFF8uLL;
      *((_QWORD *)a1 + 8) = *(_QWORD *)(result + 48);
    }
  }
  if ( (a6 & 0x10) == 0 )
  {
    if ( (a6 & 2) != 0 )
    {
      a1[4] |= 1u;
    }
    else
    {
      result = (unsigned int)*v8;
      if ( (result & 1) != 0 )
      {
        result = MiChangingSubsectionProtos(a4);
        *v8 |= 0x10u;
      }
    }
  }
  return result;
}
