/*
 * XREFs of MiPageTableStillExists @ 0x140481FF4
 * Callers:
 *     MiSynchronizeSystemVa @ 0x1402C58B0 (MiSynchronizeSystemVa.c)
 * Callees:
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 */

__int64 __fastcall MiPageTableStillExists(__int64 a1, int *a2)
{
  int v2; // r10d
  __int64 v3; // r11
  __int64 *v6; // r9
  __int64 v7; // rdx
  _KPROCESS *v9; // rax
  char v10; // r8
  unsigned __int64 v11; // r9
  unsigned __int64 KernelWaitTime; // rax
  __int64 v13; // rax

  v2 = 4;
  *a2 = 0;
  v3 = 4LL;
  while ( 1 )
  {
    --v3;
    --v2;
    v6 = *(__int64 **)(a1 + 8 * v3);
    v7 = *v6;
    if ( (unsigned __int64)v6 < 0xFFFFF6FB7DBED000uLL || (unsigned __int64)v6 > 0xFFFFF6FB7DBED7F8uLL )
      goto LABEL_3;
    if ( (v7 & 1) == 0 )
      return 0LL;
    if ( (v7 & 0x20) == 0 || (v7 & 0x42) == 0 )
    {
      v9 = MiPteHasShadow();
      if ( v9 )
      {
        KernelWaitTime = v9[2].KernelWaitTime;
        if ( KernelWaitTime )
        {
          v13 = *(_QWORD *)(KernelWaitTime + 8 * ((v11 >> 3) & 0x1FF));
          if ( (v13 & 0x20) != 0 )
            v10 |= 0x20u;
          LOBYTE(v7) = v10 | 0x42;
          if ( (v13 & 0x42) == 0 )
            LOBYTE(v7) = v10;
        }
      }
    }
LABEL_3:
    if ( (v7 & 1) == 0 )
      return 0LL;
    if ( (v7 & 0x80u) != 0LL )
    {
      *a2 = v2;
      return 1LL;
    }
    if ( v3 == 1 )
      return 1LL;
  }
}
