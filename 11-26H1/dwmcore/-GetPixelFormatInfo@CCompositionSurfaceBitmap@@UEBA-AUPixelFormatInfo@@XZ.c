/*
 * XREFs of ?GetPixelFormatInfo@CCompositionSurfaceBitmap@@UEBA?AUPixelFormatInfo@@XZ @ 0x180176850
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_DWORD *__fastcall CCompositionSurfaceBitmap::GetPixelFormatInfo(__int64 a1, _DWORD *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  _BYTE *v6; // rdi
  int v7; // eax
  int v8; // ecx
  char v10; // al
  __int64 v11; // [rsp+20h] [rbp-28h] BYREF
  int v12; // [rsp+28h] [rbp-20h]

  v4 = *(_QWORD *)(a1 + 24);
  if ( !v4 )
  {
    v6 = (_BYTE *)(a1 + 40);
    goto LABEL_8;
  }
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 56LL))(v4);
  v6 = (_BYTE *)(a1 + 40);
  if ( !v5 )
  {
LABEL_8:
    *a2 = 0;
    v10 = -*v6;
    a2[2] = 0;
    a2[1] = v10 != 0 ? 3 : 0;
    return a2;
  }
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 24LL))(v5, &v11);
  v7 = HIDWORD(v11);
  if ( *v6 )
    v7 = 3;
  v8 = v12;
  HIDWORD(v11) = v7;
  *(_QWORD *)a2 = v11;
  a2[2] = v8;
  return a2;
}
