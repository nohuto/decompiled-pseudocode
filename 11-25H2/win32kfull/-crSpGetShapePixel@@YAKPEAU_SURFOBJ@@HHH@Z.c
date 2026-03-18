/*
 * XREFs of ?crSpGetShapePixel@@YAKPEAU_SURFOBJ@@HHH@Z @ 0x1401EA564
 * Callers:
 *     GrePtInSprite @ 0x14008CE90 (GrePtInSprite.c)
 * Callees:
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall crSpGetShapePixel(struct _SURFOBJ *a1, int a2, int a3, int a4)
{
  unsigned int v8; // ebx
  int v9; // r8d
  HDEV hdev; // rcx
  unsigned int (__fastcall *v12)(_QWORD, struct _SURFOBJ *, _QWORD, _QWORD, __m128i *, _DWORD *); // r10
  unsigned int *v13; // r14
  _DWORD v14[2]; // [rsp+48h] [rbp-60h] BYREF
  _QWORD v15[2]; // [rsp+50h] [rbp-58h] BYREF
  __m128i si128; // [rsp+60h] [rbp-48h] BYREF

  Gre::Base::Globals((Gre::Base *)a1);
  v8 = 0;
  v15[0] = 0LL;
  SURFREFVIEW::bMap((SURFREFVIEW *)v15, a1);
  if ( v15[0] )
  {
    if ( (HIDWORD(a1[1].hsurf) & 1) != 0 )
    {
      hdev = a1->hdev;
      if ( hdev )
      {
        v12 = (unsigned int (__fastcall *)(_QWORD, struct _SURFOBJ *, _QWORD, _QWORD, __m128i *, _DWORD *))*((_QWORD *)hdev + 354);
        v13 = *(unsigned int **)(*((_QWORD *)hdev + 139) + 56LL);
        *v13 = 0;
        si128 = _mm_load_si128((const __m128i *)&_xmm);
        v14[0] = a2;
        v14[1] = a3;
        if ( v12(*((_QWORD *)hdev + 139), a1, 0LL, 0LL, &si128, v14) )
          v8 = *v13;
      }
    }
    else if ( a4 )
    {
      v9 = *(_DWORD *)((char *)a1->pvScan0 + 4 * a2 + (__int64)(a1->lDelta * a3));
      v8 = v9 & 0xFF00 | ((unsigned __int8)v9 << 16) | BYTE2(v9);
    }
    else
    {
      v8 = *(_DWORD *)((char *)a1->pvScan0 + 4 * a2 + (__int64)(a1->lDelta * a3));
    }
  }
  SURFREFVIEW::bUnMap((SURFREFVIEW *)v15);
  return v8;
}
