/*
 * XREFs of ?CaptureDEVMODEW@@YAPEAU_devicemodeW@@REAU1@@Z @ 0x14017BFA0
 * Callers:
 *     NtGdiOpenDCW @ 0x140010610 (NtGdiOpenDCW.c)
 * Callees:
 *     ?GreProbeAndReadFromUntrustedVa@@YAXPEAX_KPEBX11@Z @ 0x140040790 (-GreProbeAndReadFromUntrustedVa@@YAXPEAX_KPEBX11@Z.c)
 *     FreeThreadBufferWithTag @ 0x140041C20 (FreeThreadBufferWithTag.c)
 *     AllocThreadBufferWithTag @ 0x1400B5520 (AllocThreadBufferWithTag.c)
 */

struct _devicemodeW *__fastcall CaptureDEVMODEW(struct _devicemodeW *volatile a1)
{
  int dmSize; // esi
  int dmDriverExtra; // r14d
  unsigned int v3; // edi
  _WORD *v4; // rax
  _WORD *v5; // rbx

  ProbeForRead(a1, 0x48uLL, 1u);
  dmSize = a1->dmSize;
  dmDriverExtra = a1->dmDriverExtra;
  v3 = dmDriverExtra + dmSize;
  if ( (unsigned int)(dmDriverExtra + dmSize) <= 0x48 )
    return 0LL;
  v4 = (_WORD *)AllocThreadBufferWithTag(v3, 0x706D7447u, 0);
  v5 = v4;
  if ( v4 )
  {
    GreProbeAndReadFromUntrustedVa(v4, v3, a1, v3, 1uLL);
    v5[34] = dmSize;
    v5[35] = dmDriverExtra;
  }
  return (struct _devicemodeW *)v5;
}
