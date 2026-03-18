/*
 * XREFs of ?CreateUsermodeParameters@EscapeRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x14034E8D0
 * Callers:
 *     <none>
 * Callees:
 *     ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1401AE33C (-CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z.c)
 *     ?TryComputeAlignedFieldSizes@UmfdTls@@SA_NIPEAII0I0@Z @ 0x1401BA734 (-TryComputeAlignedFieldSizes@UmfdTls@@SA_NIPEAII0I0@Z.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall EscapeRequest::CreateUsermodeParameters(EscapeRequest *this, struct UmfdTls *a2, void **a3)
{
  UmfdUMBuffer **v5; // r11
  __int64 v6; // r14
  unsigned int v7; // ecx
  unsigned int v8; // esi
  _DWORD *v9; // rbx
  const void *v10; // rdx
  unsigned int v12[10]; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v13; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v14; // [rsp+78h] [rbp+20h] BYREF

  v13 = 0;
  v14 = 0;
  v12[0] = 0;
  if ( !UmfdTls::TryComputeAlignedFieldSizes(0x30u, &v13, *((_DWORD *)this + 13), &v14, *((_DWORD *)this + 16), v12) )
    return 3221225495LL;
  v6 = v14;
  v7 = v14 + v12[0];
  v8 = v13;
  if ( v14 + v12[0] < v14 || v7 + v13 < v13 )
    v9 = 0LL;
  else
    v9 = UmfdTls::CommitUMBuffer(v5, v7 + v13, 1);
  if ( !v9 )
    return 3221225495LL;
  *((_QWORD *)this + 11) = (char *)v9 + v8;
  *((_QWORD *)this + 12) = (char *)v9 + v8 + v6;
  v10 = (const void *)*((_QWORD *)this + 7);
  if ( v10 )
    memmove((char *)v9 + v8, v10, *((unsigned int *)this + 13));
  else
    *((_QWORD *)this + 11) = 0LL;
  if ( !*((_QWORD *)this + 9) )
    *((_QWORD *)this + 12) = 0LL;
  *(_QWORD *)v9 = 0LL;
  v9[2] = *((_DWORD *)this + 12);
  v9[3] = *((_DWORD *)this + 13);
  *((_QWORD *)v9 + 2) = *((_QWORD *)this + 11);
  v9[6] = *((_DWORD *)this + 16);
  *((_QWORD *)v9 + 4) = *((_QWORD *)this + 12);
  *a3 = v9;
  return 0LL;
}
