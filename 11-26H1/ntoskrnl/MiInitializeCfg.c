/*
 * XREFs of MiInitializeCfg @ 0x140D042E8
 * Callers:
 *     MiInitSystem @ 0x140CF7944 (MiInitSystem.c)
 * Callees:
 *     MiSectionControlArea @ 0x14038C760 (MiSectionControlArea.c)
 *     MmCreateSection @ 0x140989F80 (MmCreateSection.c)
 */

__int64 MiInitializeCfg()
{
  __int64 result; // rax
  int i; // ebx
  __int64 v2; // rcx
  unsigned __int64 v3; // rax
  __int64 v4; // r8
  __int64 v5; // [rsp+50h] [rbp+8h] BYREF
  __int64 v6; // [rsp+58h] [rbp+10h] BYREF

  v5 = 0LL;
  v6 = 0x20000000000LL;
  result = MmCreateSection((int)&v5, 983071LL, 0, &v6, 4, 0x4000000u, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    *(_QWORD *)&stru_140E2D2D0.WaitBlockFill11[16] = v5;
    stru_140E2D2D0.WaitBlock[0].Thread = (struct _KTHREAD *)MiSectionControlArea(v5);
    for ( i = 0; !i; i = 1 )
    {
      v6 = 0x4000000LL;
      result = MmCreateSection((int)&v5, 983071LL, 0, &v6, 4, 0x4000000u, 0LL, 0LL);
      if ( (int)result < 0 )
        return result;
      v2 = v5;
      *((_QWORD *)&MiState + 407) = v5;
      v3 = MiSectionControlArea(v2);
      *(_QWORD *)((char *)&MiState + v4 + 3264) = v3;
    }
    return 0LL;
  }
  return result;
}
