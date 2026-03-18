/*
 * XREFs of ?GrepGetPerBandInfo@@YAKAEAVXDCOBJ@@PEAU_PERBANDINFO@@@Z @ 0x14020DB68
 * Callers:
 *     NtGdiGetPerBandInfo @ 0x14020DA30 (NtGdiGetPerBandInfo.c)
 * Callees:
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1400A1DA4 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GrepGetPerBandInfo(struct XDCOBJ *a1, struct _PERBANDINFO *a2)
{
  unsigned int v2; // r8d
  __int64 *v3; // r9
  __int64 v4; // r10
  __int64 v5; // rax
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 (__fastcall *v8)(__int64, __int64); // rax

  a2->bRepeatThisBand = 0;
  if ( (unsigned int)XDCOBJ::bValidSurf(a1) )
  {
    v5 = *v3;
    v6 = *(_QWORD *)(*v3 + 496);
    if ( v6 )
    {
      v7 = *(_QWORD *)(v5 + 48);
      if ( *(_QWORD *)(v7 + 2552) )
      {
        if ( (*(_DWORD *)(v6 + 112) & 0x2000000) != 0 )
        {
          v8 = *(__int64 (__fastcall **)(__int64, __int64))(v7 + 3280);
          if ( v8 )
          {
            v2 = v8(v6 + 24, v4);
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
