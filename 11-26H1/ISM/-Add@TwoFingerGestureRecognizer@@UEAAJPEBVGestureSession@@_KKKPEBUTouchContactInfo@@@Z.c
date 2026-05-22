/*
 * XREFs of ?Add@TwoFingerGestureRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1801BA5E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TwoFingerGestureRecognizer::Add(
        TwoFingerGestureRecognizer *this,
        const struct GestureSession *a2,
        __int64 a3,
        unsigned int a4)
{
  int v8; // edi
  char *v9; // rbx
  _BYTE *v10; // rax

  if ( (a3 & 0x100) == 0 )
  {
    v8 = *((_DWORD *)a2 + 187);
    v9 = (char *)a2 + 752;
    (*(void (__fastcall **)(char *))(*((_QWORD *)this + 2) + 8LL))((char *)this + 16);
    (*(void (__fastcall **)(char *, const struct GestureSession *, __int64, _QWORD, int, char *))(*((_QWORD *)this + 11)
                                                                                                + 8LL))(
      (char *)this + 88,
      a2,
      a3,
      a4,
      v8,
      v9);
    v10 = (char *)this + 177;
    if ( (a3 & 1) != 0 )
      *v10 = 1;
    if ( (a3 & 4) != 0 )
    {
      *((_BYTE *)this + 176) = 0;
      *v10 = 0;
    }
  }
  return 0LL;
}
