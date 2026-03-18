/*
 * XREFs of ?CreateUsermodeParameters@QueryAdvanceWidthsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x140153D60
 * Callers:
 *     <none>
 * Callees:
 *     ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1401541F4 (-CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

__int64 __fastcall QueryAdvanceWidthsRequest::CreateUsermodeParameters(
        QueryAdvanceWidthsRequest *this,
        struct UmfdTls *a2,
        void **a3)
{
  __int64 v6; // rbx
  unsigned int v7; // r9d
  int v8; // eax
  unsigned int v9; // r10d
  unsigned int v10; // eax
  unsigned int v11; // ecx
  int v12; // eax
  bool v13; // dl
  unsigned int v14; // eax
  unsigned int v15; // eax
  _QWORD *v17; // rax
  _QWORD *v18; // rdi
  __int64 v19; // rdx

  v6 = 0LL;
  v7 = 0;
  v8 = *((_DWORD *)this + 20);
  v9 = 2 * v8;
  v10 = 4 * v8;
  if ( v10 + 7 < v10 )
  {
    v13 = 0;
  }
  else
  {
    v6 = (v10 + 7) & 0xFFFFFFF8;
    v11 = v9 + 7;
    v12 = -1;
    if ( v9 + 7 >= v9 )
      v12 = v9 + 7;
    v13 = v11 >= v9;
    v14 = v12 & 0xFFFFFFF8;
    if ( v11 >= v9 )
      v7 = v14;
  }
  if ( !v13 )
    return 3221225495LL;
  if ( v7 + (unsigned int)v6 < (unsigned int)v6 )
    return 3221225495LL;
  v15 = v7 + v6 + 64;
  if ( v15 < 0x40 )
    return 3221225495LL;
  if ( v15 >= 0xFFFFFFD0 )
    return 3221225495LL;
  v17 = UmfdTls::CommitUMBuffer(a2, v7 + (unsigned int)v6 + 112, 1);
  v18 = v17;
  if ( !v17 )
    return 3221225495LL;
  *((_QWORD *)this + 11) = v17 + 6;
  *((_QWORD *)this + 12) = v17 + 14;
  *((_QWORD *)this + 13) = (char *)v17 + v6 + 112;
  v19 = *((_QWORD *)this + 6);
  *((_DWORD *)v17 + 12) = *(_DWORD *)v19;
  *((_DWORD *)v17 + 13) = *(_DWORD *)(v19 + 4);
  *((_DWORD *)v17 + 14) = *(_DWORD *)(v19 + 8);
  *((_DWORD *)v17 + 15) = *(_DWORD *)(v19 + 12);
  v17[8] = *(_QWORD *)(v19 + 16);
  v17[9] = **(_QWORD **)(v19 + 24);
  v17[10] = *(_QWORD *)(v19 + 32);
  *((_DWORD *)v17 + 22) = *(_DWORD *)(v19 + 40);
  v17[12] = 0LL;
  v17[13] = *(_QWORD *)(v19 + 56);
  *((_QWORD *)a2 + 5) = v19;
  v17[1] = *((_QWORD *)this + 11);
  *v17 = *((_QWORD *)this + 5);
  *((_DWORD *)v17 + 4) = *((_DWORD *)this + 14);
  *((_DWORD *)v17 + 10) = *((_DWORD *)this + 20);
  v17[3] = *((_QWORD *)this + 12);
  memmove(*((void **)this + 12), *((const void **)this + 8), 4LL * *((unsigned int *)this + 20));
  v18[4] = *((_QWORD *)this + 13);
  *a3 = v18;
  return 0LL;
}
