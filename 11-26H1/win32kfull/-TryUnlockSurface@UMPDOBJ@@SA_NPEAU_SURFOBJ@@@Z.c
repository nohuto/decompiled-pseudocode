/*
 * XREFs of ?TryUnlockSurface@UMPDOBJ@@SA_NPEAU_SURFOBJ@@@Z @ 0x1402513F0
 * Callers:
 *     NtGdiEngUnlockSurface @ 0x140251390 (NtGdiEngUnlockSurface.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1400158B4 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1400182D8 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 */

char __fastcall UMPDOBJ::TryUnlockSurface(struct _SURFOBJ *a1)
{
  HSURF v1; // rdi
  char v2; // r14
  LONG *p_lDelta; // r15
  char v4; // bl
  char v5; // si
  signed __int64 v7; // r8
  _BYTE v8[32]; // [rsp+38h] [rbp-50h] BYREF
  __int64 v9; // [rsp+58h] [rbp-30h]
  int v10; // [rsp+98h] [rbp+10h] BYREF
  __int64 v11; // [rsp+A0h] [rbp+18h] BYREF

  v1 = 0LL;
  v2 = 0;
  if ( a1 )
  {
    p_lDelta = &a1[-1].lDelta;
    v4 = 1;
    GreProbeForReadFromUntrustedVa(&a1[-1].lDelta, 0x60uLL, 1uLL);
    v10 = 0;
    v5 = 4;
    GreProbeAndReadFromUntrustedVa(&v10, 4uLL, p_lDelta, 4uLL, 1uLL);
    if ( v10 != 1431130959 )
      return 0;
    v11 = 0LL;
    GreProbeAndReadFromUntrustedVa(&v11, 8uLL, p_lDelta + 2, 8uLL, 1uLL);
    if ( !v11 )
      return 0;
    v1 = (HSURF)*((_QWORD *)p_lDelta + 1);
    EngFreeUserMem(p_lDelta);
  }
  else
  {
    v4 = 1;
    v5 = 4;
  }
  if ( v1 )
  {
    SURFREF::SURFREF((SURFREF *)v8, v1);
    if ( v9 )
    {
      if ( (*(_DWORD *)(v9 + 112) & 0x240000) == 0x240000 )
      {
        v7 = *(_QWORD *)(v9 + 560);
        if ( v7 )
          v4 = v7 != _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 560), v7 - 1, v7) ? 2 : 0;
        v5 = v4;
      }
    }
    else
    {
      v5 = 3;
    }
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v8);
    return v5 == 0;
  }
  return v2;
}
