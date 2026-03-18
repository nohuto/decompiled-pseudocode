/*
 * XREFs of ?CreateUsermodeParameters@QueryGlyphAttrsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x140341520
 * Callers:
 *     <none>
 * Callees:
 *     ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1401541F4 (-CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z.c)
 *     ?PrepareUsermodeFontObj@FontDriverDdiRequest@@KAXPEAVUmfdTls@@PEAU_FONTOBJ@@1@Z @ 0x140154340 (-PrepareUsermodeFontObj@FontDriverDdiRequest@@KAXPEAVUmfdTls@@PEAU_FONTOBJ@@1@Z.c)
 *     ?TryComputeAlignedFieldSizes@UmfdTls@@SA_NIPEAII0@Z @ 0x140189644 (-TryComputeAlignedFieldSizes@UmfdTls@@SA_NIPEAII0@Z.c)
 */

__int64 __fastcall QueryGlyphAttrsRequest::CreateUsermodeParameters(
        QueryGlyphAttrsRequest *this,
        UmfdUMBuffer **a2,
        void **a3)
{
  __int64 v6; // rbx
  char *v7; // rax
  _DWORD *v8; // r10
  unsigned int v10[6]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v11; // [rsp+58h] [rbp+20h] BYREF

  v11 = 0;
  v10[0] = 0;
  if ( !UmfdTls::TryComputeAlignedFieldSizes(0x18u, &v11, 0x40u, v10) )
    return 3221225495LL;
  v6 = v11;
  if ( v11 + v10[0] < v11 )
    return 3221225495LL;
  v7 = (char *)UmfdTls::CommitUMBuffer(a2, v11 + v10[0], 1);
  if ( !v7 )
    return 3221225495LL;
  *((_QWORD *)this + 8) = &v7[v6];
  FontDriverDdiRequest::PrepareUsermodeFontObj(
    (struct UmfdTls *)a2,
    *((struct _FONTOBJ **)this + 5),
    (struct _FONTOBJ *)&v7[v6]);
  *(_QWORD *)v8 = *((_QWORD *)this + 8);
  v8[2] = *((_DWORD *)this + 12);
  *a3 = v8;
  return 0LL;
}
