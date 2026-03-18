/*
 * XREFs of ?RecordBitmapResourceInfo@CDrawingContext@@QEBAXPEAVIBitmapResource@@@Z @ 0x180171EB0
 * Callers:
 *     ?DrawBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@@Z @ 0x1802349D4 (-DrawBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDrawingContext::RecordBitmapResourceInfo(CDrawingContext *this, struct IBitmapResource *a2)
{
  bool v4; // si
  void (__fastcall *v5)(struct IBitmapResource *, bool, _QWORD, void *, _DWORD, char *); // r14
  char *v6; // rbp
  __int64 v7; // rax
  int v8; // r8d
  void *v9; // r9
  _BYTE v10[16]; // [rsp+40h] [rbp-38h] BYREF

  v4 = *((_QWORD *)this + 5) && !*((_BYTE *)g_pComposition + 6458);
  v5 = *(void (__fastcall **)(struct IBitmapResource *, bool, _QWORD, void *, _DWORD, char *))(*(_QWORD *)a2 + 48LL);
  if ( *((_BYTE *)this + 184) )
    v6 = (char *)this + 156;
  else
    v6 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(*((_QWORD *)this + 3) + 8LL) + 24LL))(
         *((_QWORD *)this + 3) + 8LL,
         v10);
  v8 = *((_DWORD *)this + 72);
  if ( v8 )
    v9 = (void *)(*((_QWORD *)this + 35) + 68LL * (unsigned int)(v8 - 1));
  else
    v9 = &CMILMatrix::Identity;
  v5(a2, v4, 0LL, v9, *(_DWORD *)(v7 + 8), v6);
}
