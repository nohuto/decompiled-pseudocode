/*
 * XREFs of ?GrepGetPerBandInfo@@YAKAEAVXDCOBJ@@PEAU_PERBANDINFO@@@Z @ 0x14024B460
 * Callers:
 *     NtGdiGetPerBandInfo @ 0x14024B390 (NtGdiGetPerBandInfo.c)
 * Callees:
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x14016BC60 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GrepGetPerBandInfo(struct XDCOBJ *a1, struct _PERBANDINFO *a2)
{
  unsigned int v2; // r8d
  __int64 v3; // r9
  __int64 v4; // r10
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 (__fastcall *v7)(__int64, __int64); // rax

  a2->bRepeatThisBand = 0;
  if ( (unsigned int)XDCOBJ::bValidSurf(a1) )
  {
    v5 = *(_QWORD *)(*(_QWORD *)v3 + 496LL);
    if ( v5 )
    {
      v6 = *(_QWORD *)(*(_QWORD *)v3 + 48LL);
      if ( *(_QWORD *)(v6 + 2552) )
      {
        if ( (*(_DWORD *)(v5 + 112) & 0x2000000) != 0 )
        {
          v7 = *(__int64 (__fastcall **)(__int64, __int64))(v6 + 3280);
          if ( v7 )
          {
            v2 = v7(v5 + 24, v4);
            if ( v2 == -1 )
              return (unsigned int)-1;
          }
          else
          {
            return 0;
          }
        }
      }
    }
  }
  return v2;
}
