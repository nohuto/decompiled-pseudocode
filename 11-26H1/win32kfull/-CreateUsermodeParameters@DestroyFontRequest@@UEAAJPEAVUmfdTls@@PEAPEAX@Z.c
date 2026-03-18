/*
 * XREFs of ?CreateUsermodeParameters@DestroyFontRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x140285650
 * Callers:
 *     <none>
 * Callees:
 *     ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1401AE33C (-CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z.c)
 *     ?TryComputeAlignedFieldSizes@UmfdTls@@SA_NIPEAII0@Z @ 0x1401C0670 (-TryComputeAlignedFieldSizes@UmfdTls@@SA_NIPEAII0@Z.c)
 *     ?PrepareUsermodeFontObj@FontDriverDdiRequest@@KAXPEAVUmfdTls@@PEAU_FONTOBJ@@1@Z @ 0x140287108 (-PrepareUsermodeFontObj@FontDriverDdiRequest@@KAXPEAVUmfdTls@@PEAU_FONTOBJ@@1@Z.c)
 */

__int64 __fastcall DestroyFontRequest::CreateUsermodeParameters(DestroyFontRequest *this, UmfdUMBuffer **a2, void **a3)
{
  __int64 v6; // rbx
  char *v7; // rax
  void *v8; // rdi
  unsigned int v10[10]; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v11; // [rsp+78h] [rbp+20h] BYREF

  v11 = 0;
  v10[0] = 0;
  if ( !UmfdTls::TryComputeAlignedFieldSizes(8u, &v11, 0x40u, v10) )
    return 3221225495LL;
  v6 = v11;
  if ( v11 + v10[0] < v11 )
    return 3221225495LL;
  v7 = (char *)UmfdTls::CommitUMBuffer(a2, v11 + v10[0], 1);
  v8 = v7;
  if ( !v7 )
    return 3221225495LL;
  *((_QWORD *)this + 6) = &v7[v6];
  FontDriverDdiRequest::PrepareUsermodeFontObj(
    (struct UmfdTls *)a2,
    *((struct _FONTOBJ **)this + 5),
    (struct _FONTOBJ *)&v7[v6]);
  GreProbeAndWriteToUntrustedVa(v8, 8uLL, (char *)this + 48, 8uLL, 1uLL);
  *a3 = v8;
  return 0LL;
}
