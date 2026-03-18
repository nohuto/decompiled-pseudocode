/*
 * XREFs of NtGdiExtCreateRegion @ 0x1400101C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GrepProbeAndReadXFROMLFromUntrustedVa@@YA_NPEAU_XFORML@@0@Z @ 0x1400100C0 (-GrepProbeAndReadXFROMLFromUntrustedVa@@YA_NPEAU_XFORML@@0@Z.c)
 *     AllocFreeTmpBuffer @ 0x1400110D0 (AllocFreeTmpBuffer.c)
 *     FreeTmpBuffer @ 0x1400113B0 (FreeTmpBuffer.c)
 *     GreExtCreateRegion @ 0x140011690 (GreExtCreateRegion.c)
 *     ?GreProbeAndReadFromUntrustedVa@@YAXPEAX_KPEBX11@Z @ 0x140040790 (-GreProbeAndReadFromUntrustedVa@@YAXPEAX_KPEBX11@Z.c)
 */

__int64 __fastcall NtGdiExtCreateRegion(struct _XFORML *a1, unsigned int a2, void *a3)
{
  unsigned __int64 v4; // r14
  __int64 Region; // rdi
  void *v7; // rbx
  int v8; // eax
  _XFORML v10; // [rsp+50h] [rbp-48h] BYREF

  v4 = a2;
  memset(&v10, 0, sizeof(v10));
  Region = 0LL;
  if ( a2 - 32 <= 0x270FFE0 )
  {
    v7 = (void *)AllocFreeTmpBuffer(a2);
    if ( v7 )
    {
      v8 = 1;
      if ( a1 )
      {
        v8 = (unsigned __int8)GrepProbeAndReadXFROMLFromUntrustedVa(&v10, a1);
        a1 = &v10;
      }
      if ( v8 )
      {
        GreProbeAndReadFromUntrustedVa(v7, v4, a3, v4, 1uLL);
        Region = 1LL;
      }
      if ( Region )
        Region = GreExtCreateRegion(a1, (unsigned int)v4, v7);
      FreeTmpBuffer(v7);
    }
  }
  return Region;
}
