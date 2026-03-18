/*
 * XREFs of ?CreateUsermodeParameters@QueryGlyphAttrsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x14034EA00
 * Callers:
 *     <none>
 * Callees:
 *     ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1401AE33C (-CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z.c)
 *     ?TryComputeAlignedFieldSizes@UmfdTls@@SA_NIPEAII0@Z @ 0x1401C0670 (-TryComputeAlignedFieldSizes@UmfdTls@@SA_NIPEAII0@Z.c)
 *     ?PrepareUsermodeFontObj@FontDriverDdiRequest@@KAXPEAVUmfdTls@@PEAU_FONTOBJ@@1@Z @ 0x140287108 (-PrepareUsermodeFontObj@FontDriverDdiRequest@@KAXPEAVUmfdTls@@PEAU_FONTOBJ@@1@Z.c)
 */

__int64 __fastcall QueryGlyphAttrsRequest::CreateUsermodeParameters(
        QueryGlyphAttrsRequest *this,
        UmfdUMBuffer **a2,
        void **a3)
{
  __int64 v6; // rdi
  _DWORD *v7; // rbx
  unsigned int v9[10]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v10; // [rsp+68h] [rbp+20h] BYREF

  v10 = 0;
  v9[0] = 0;
  if ( !UmfdTls::TryComputeAlignedFieldSizes(0x18u, &v10, 0x40u, v9) )
    return 3221225495LL;
  v6 = v10;
  v7 = v10 + v9[0] < v10 ? 0LL : UmfdTls::CommitUMBuffer(a2, v10 + v9[0], 1);
  if ( !v7 )
    return 3221225495LL;
  *((_QWORD *)this + 8) = (char *)v7 + v6;
  FontDriverDdiRequest::PrepareUsermodeFontObj(
    (struct UmfdTls *)a2,
    *((struct _FONTOBJ **)this + 5),
    (struct _FONTOBJ *)((char *)v7 + v6));
  *(_QWORD *)v7 = *((_QWORD *)this + 8);
  v7[2] = *((_DWORD *)this + 12);
  *a3 = v7;
  return 0LL;
}
