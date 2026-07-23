/*
 * XREFs of MiBuildMappedClusterInitialize @ 0x14042ADAC
 * Callers:
 *     MiBuildMappedCluster @ 0x14042A81C (MiBuildMappedCluster.c)
 * Callees:
 *     MiGetSubsectionFromPte @ 0x140282C30 (MiGetSubsectionFromPte.c)
 */

__int64 __fastcall MiBuildMappedClusterInitialize(_QWORD *a1, _QWORD *a2, __int64 a3, int a4)
{
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r9
  __int64 SubsectionFromPte; // rax
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rdx
  __int64 result; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rax

  v7 = (__int64)((unsigned __int128)((__int64)(a2 + 0x44000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
  a1[5] = (v7 >> 63) + v7;
  v8 = a2[1] | 0x8000000000000000uLL;
  a1[6] = v8;
  *a1 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((a2[5] >> 43) & 0x3FFLL));
  a1[1] = a3;
  a1[7] = v8 & 0xFFFFFFFFFFFFF000uLL;
  SubsectionFromPte = MiGetSubsectionFromPte(a2[2]);
  v11 = *(_QWORD *)(SubsectionFromPte + 8);
  if ( v10 < v11 )
    a1[7] = v11;
  a1[8] = v10 + 4096;
  result = *(unsigned int *)(SubsectionFromPte + 44);
  v13 = v11 + 8 * result;
  if ( v10 + 4096 > v13 )
    a1[8] = v13;
  if ( !a4 )
  {
    v14 = a1[6];
    a1[7] = v14;
    result = v14 + 8;
    a1[8] = result;
  }
  return result;
}
