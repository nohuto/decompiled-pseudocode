/*
 * XREFs of ?TryLockSurface@UMPDOBJ@@SAPEAU_SURFOBJ@@PEAUHSURF__@@@Z @ 0x140254B3C
 * Callers:
 *     NtGdiEngLockSurface @ 0x140254AE0 (NtGdiEngLockSurface.c)
 * Callees:
 *     <none>
 */

struct _SURFOBJ *__fastcall UMPDOBJ::TryLockSurface(HSURF a1)
{
  char *v1; // rdi
  SURFOBJ *v2; // rax
  SURFOBJ *v3; // rbx
  HDEV hdev; // rax
  __int64 v5; // rsi
  unsigned __int64 pvScan0; // rax
  PVOID v7; // rtt
  __int128 v9; // [rsp+30h] [rbp-88h] BYREF
  __int128 v10; // [rsp+40h] [rbp-78h]
  __int128 v11; // [rsp+50h] [rbp-68h]
  __int128 v12; // [rsp+60h] [rbp-58h]
  __int128 v13; // [rsp+70h] [rbp-48h]
  HSURF v14; // [rsp+C0h] [rbp+8h] BYREF
  int v15; // [rsp+C8h] [rbp+10h] BYREF
  PVOID pv; // [rsp+D0h] [rbp+18h]
  SURFOBJ *v17; // [rsp+D8h] [rbp+20h]

  v14 = a1;
  v1 = 0LL;
  if ( !a1 )
    return 0LL;
  v2 = EngLockSurface(a1);
  v3 = v2;
  v17 = v2;
  if ( !v2 )
    return 0LL;
  if ( ((__int64)v2[1].hsurf & 0x240000) == 0x240000 )
  {
    v1 = (char *)EngAllocUserMem(0x60uLL, 0x706D7547u);
    pv = v1;
    if ( v1 )
    {
      v9 = *(_OWORD *)&v3->dhsurf;
      v10 = *(_OWORD *)&v3->dhpdev;
      v11 = *(_OWORD *)&v3->sizlBitmap.cx;
      v12 = *(_OWORD *)&v3->pvBits;
      v13 = *(_OWORD *)&v3->lDelta;
      hdev = v3->hdev;
      if ( hdev )
        *((_QWORD *)&v10 + 1) = *((_QWORD *)hdev + 2);
      v15 = 1431130959;
      GreProbeAndWriteToUntrustedVa(v1, 4uLL, &v15, 4uLL, 1uLL);
      GreProbeAndWriteToUntrustedVa(v1 + 8, 8uLL, &v14, 8uLL, 1uLL);
      GreProbeAndWriteToUntrustedVa(v1 + 16, 0x50uLL, &v9, 0x50uLL, 1uLL);
      v5 = v10;
      if ( (_QWORD)v10 )
      {
        GreProbeForReadFromUntrustedVa((const void *)v10, 0x18uLL, 1uLL);
        GreProbeAndCopyToAndFromUntrustedVa(v1 + 32, 8uLL, (const void *)(v5 + 8), 8uLL);
      }
      pvScan0 = (unsigned __int64)v3[6].pvScan0;
      if ( pvScan0 + 1 < pvScan0
        || (v7 = v3[6].pvScan0,
            v7 != (PVOID)_InterlockedCompareExchange64((volatile signed __int64 *)&v3[6].pvScan0, pvScan0 + 1, pvScan0)) )
      {
        EngFreeUserMem(v1);
        v1 = 0LL;
      }
    }
  }
  EngUnlockSurface(v3);
  return (struct _SURFOBJ *)((unsigned __int64)(v1 + 16) & -(__int64)(v1 != 0LL));
}
