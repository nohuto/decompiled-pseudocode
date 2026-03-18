/*
 * XREFs of ?CreateUsermodeParameters@QueryTrueTypeTableRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x140153EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1401541F4 (-CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z.c)
 */

__int64 __fastcall QueryTrueTypeTableRequest::CreateUsermodeParameters(
        QueryTrueTypeTableRequest *this,
        struct UmfdTls *a2,
        void **a3)
{
  unsigned int v5; // edi
  unsigned int v6; // esi
  unsigned int v7; // eax
  char v8; // al
  unsigned int v9; // ecx
  _DWORD *v11; // rax
  __int64 v12; // rdx

  v5 = 0;
  v6 = 0;
  v7 = *((_DWORD *)this + 15);
  if ( v7 + 7 < v7 )
  {
    v8 = 0;
  }
  else
  {
    v5 = (v7 + 7) & 0xFFFFFFF8;
    v6 = 8;
    v8 = 1;
  }
  if ( !v8 )
    return 3221225495LL;
  v9 = v5 + 2 * v6;
  if ( v9 < v5 )
    return 3221225495LL;
  if ( v9 >= 0xFFFFFFC8 )
    return 3221225495LL;
  v11 = UmfdTls::CommitUMBuffer(a2, v9 + 56, 1);
  if ( !v11 )
    return 3221225495LL;
  *((_QWORD *)this + 12) = v11 + 14;
  v12 = (__int64)v11 + v5 + 56;
  *((_QWORD *)this + 13) = v12;
  *((_QWORD *)this + 14) = v12 + v6;
  if ( !*((_QWORD *)this + 8) )
    *((_QWORD *)this + 12) = 0LL;
  *(_QWORD *)v11 = **((_QWORD **)this + 5);
  v11[2] = *((_DWORD *)this + 12);
  v11[3] = *((_DWORD *)this + 13);
  v11[4] = *((_DWORD *)this + 14);
  *((_QWORD *)v11 + 3) = *((_QWORD *)this + 12);
  v11[5] = *((_DWORD *)this + 15);
  if ( *((_QWORD *)this + 9) )
    *((_QWORD *)v11 + 4) = *((_QWORD *)this + 13);
  if ( *((_QWORD *)this + 10) )
    *((_QWORD *)v11 + 5) = *((_QWORD *)this + 14);
  *a3 = v11;
  return 0LL;
}
