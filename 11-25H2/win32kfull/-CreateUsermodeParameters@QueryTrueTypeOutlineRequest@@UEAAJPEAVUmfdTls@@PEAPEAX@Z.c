/*
 * XREFs of ?CreateUsermodeParameters@QueryTrueTypeOutlineRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x140153990
 * Callers:
 *     <none>
 * Callees:
 *     ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1401541F4 (-CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z.c)
 *     ?PrepareUsermodeFontObj@FontDriverDdiRequest@@KAXPEAVUmfdTls@@PEAU_FONTOBJ@@1@Z @ 0x140154340 (-PrepareUsermodeFontObj@FontDriverDdiRequest@@KAXPEAVUmfdTls@@PEAU_FONTOBJ@@1@Z.c)
 */

__int64 __fastcall QueryTrueTypeOutlineRequest::CreateUsermodeParameters(
        QueryTrueTypeOutlineRequest *this,
        struct UmfdTls *a2,
        void **a3)
{
  unsigned int v6; // edi
  unsigned int v7; // r9d
  unsigned int v8; // r10d
  unsigned int v9; // edx
  unsigned int v10; // ecx
  int v11; // eax
  bool v12; // dl
  unsigned int v13; // eax
  unsigned int v15; // eax
  _QWORD *v16; // rax
  __int64 v17; // r10

  v6 = 0;
  v7 = 0;
  v8 = *((_DWORD *)this + 18);
  v9 = *((_QWORD *)this + 8) != 0LL ? 0x40 : 0;
  if ( v9 + 7 < v9 )
  {
    v12 = 0;
  }
  else
  {
    v6 = (v9 + 7) & 0xFFFFFFF8;
    v10 = v8 + 7;
    v11 = -1;
    if ( v8 + 7 >= v8 )
      v11 = v8 + 7;
    v12 = v10 >= v8;
    v13 = v11 & 0xFFFFFFF8;
    if ( v10 >= v8 )
      v7 = v13;
  }
  if ( !v12 )
    return 3221225495LL;
  if ( v7 + v6 < v6 )
    return 3221225495LL;
  v15 = v7 + v6 + 64;
  if ( v15 < 0x40 )
    return 3221225495LL;
  if ( v15 >= 0xFFFFFFC8 )
    return 3221225495LL;
  v16 = UmfdTls::CommitUMBuffer(a2, v7 + v6 + 120, 1);
  if ( !v16 )
    return 3221225495LL;
  *((_QWORD *)this + 12) = v16 + 7;
  *((_QWORD *)this + 13) = v16 + 15;
  *((_QWORD *)this + 14) = (char *)v16 + v6 + 120;
  if ( !*((_QWORD *)this + 10) )
    *((_QWORD *)this + 14) = 0LL;
  *v16 = *((_QWORD *)this + 5);
  FontDriverDdiRequest::PrepareUsermodeFontObj(a2, *((struct _FONTOBJ **)this + 6), *((struct _FONTOBJ **)this + 12));
  *(_QWORD *)(v17 + 8) = *((_QWORD *)this + 12);
  *(_DWORD *)(v17 + 16) = *((_DWORD *)this + 14);
  *(_DWORD *)(v17 + 20) = *((_DWORD *)this + 15);
  if ( *((_QWORD *)this + 8) )
    *(_QWORD *)(v17 + 24) = *((_QWORD *)this + 13);
  *(_QWORD *)(v17 + 40) = *((_QWORD *)this + 14);
  *(_DWORD *)(v17 + 32) = *((_DWORD *)this + 18);
  *a3 = (void *)v17;
  return 0LL;
}
