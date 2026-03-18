/*
 * XREFs of ?CreateUsermodeParameters@EscapeRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x140341400
 * Callers:
 *     <none>
 * Callees:
 *     ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1401541F4 (-CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z.c)
 *     ?TryComputeAlignedFieldSizes@UmfdTls@@SA_NIPEAII0I0@Z @ 0x140182224 (-TryComputeAlignedFieldSizes@UmfdTls@@SA_NIPEAII0I0@Z.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

__int64 __fastcall EscapeRequest::CreateUsermodeParameters(EscapeRequest *this, struct UmfdTls *a2, void **a3)
{
  UmfdUMBuffer **v5; // r11
  __int64 v6; // rsi
  int v7; // ecx
  __int64 v8; // r14
  char *v9; // rax
  _DWORD *v10; // rdi
  char *v11; // rax
  const void *v12; // rdx
  unsigned int v14[10]; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v15; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v16; // [rsp+78h] [rbp+20h] BYREF

  v14[0] = 0;
  v15 = 0;
  v16 = 0;
  if ( !UmfdTls::TryComputeAlignedFieldSizes(0x30u, v14, *((_DWORD *)this + 13), &v15, *((_DWORD *)this + 16), &v16) )
    return 3221225495LL;
  v6 = v15;
  v7 = v15 + v16;
  if ( v15 + v16 < v15 )
    return 3221225495LL;
  v8 = v14[0];
  if ( v7 + v14[0] < v14[0] )
    return 3221225495LL;
  v9 = (char *)UmfdTls::CommitUMBuffer(v5, v7 + v14[0], 1);
  v10 = v9;
  if ( !v9 )
    return 3221225495LL;
  v11 = &v9[v8];
  *((_QWORD *)this + 11) = v11;
  *((_QWORD *)this + 12) = &v11[v6];
  v12 = (const void *)*((_QWORD *)this + 7);
  if ( v12 )
    memmove(v11, v12, *((unsigned int *)this + 13));
  else
    *((_QWORD *)this + 11) = 0LL;
  if ( !*((_QWORD *)this + 9) )
    *((_QWORD *)this + 12) = 0LL;
  *(_QWORD *)v10 = 0LL;
  v10[2] = *((_DWORD *)this + 12);
  v10[3] = *((_DWORD *)this + 13);
  *((_QWORD *)v10 + 2) = *((_QWORD *)this + 11);
  v10[6] = *((_DWORD *)this + 16);
  *((_QWORD *)v10 + 4) = *((_QWORD *)this + 12);
  *a3 = v10;
  return 0LL;
}
