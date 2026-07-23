/*
 * XREFs of MiAgeWorkingSetVpabCallback @ 0x140316D60
 * Callers:
 *     <none>
 * Callees:
 *     MiAgePteWorker @ 0x1402E10E0 (MiAgePteWorker.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 */

__int64 __fastcall MiAgeWorkingSetVpabCallback(
        __int64 a1,
        _QWORD *a2,
        unsigned __int64 *a3,
        unsigned __int64 a4,
        _BYTE *a5)
{
  unsigned __int64 PteShadow; // rax
  __int64 v7; // r10
  int v10; // r11d

  PteShadow = *a3;
  v7 = (__int64)a3;
  if ( (unsigned __int64)a3 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a3 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow(a3, *a3);
  LOBYTE(v10) = 0;
  if ( (*a2 & 2) != 0 )
  {
    v10 = (PteShadow >> 5) & 1 | 2;
    if ( (*a5 & 3) == 0 )
      LOBYTE(v10) = (PteShadow & 0x20) != 0;
  }
  else if ( (*a2 & 1) != 0 )
  {
    LOBYTE(v10) = 1;
    if ( (*a5 & 3) != 0 )
      LOBYTE(v10) = 5;
  }
  MiAgePteWorker(a1, v7, a4, 48 * ((PteShadow >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL, (__int64)a5, v10);
  return 0LL;
}
