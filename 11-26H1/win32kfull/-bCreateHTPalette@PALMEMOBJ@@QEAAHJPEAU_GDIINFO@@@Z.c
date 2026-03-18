/*
 * XREFs of ?bCreateHTPalette@PALMEMOBJ@@QEAAHJPEAU_GDIINFO@@@Z @ 0x1401831F8
 * Callers:
 *     ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x14018087C (-bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z.c)
 *     EngHTBlt @ 0x14018174C (EngHTBlt.c)
 * Callees:
 *     HT_Get8BPPMaskPalette @ 0x140183780 (HT_Get8BPPMaskPalette.c)
 *     PALLOCNOZ @ 0x140184030 (PALLOCNOZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

_BOOL8 __fastcall PALMEMOBJ::bCreateHTPalette(PALMEMOBJ *this, int a2, struct _GDIINFO *a3)
{
  int v5; // r15d
  struct tagPALETTEENTRY *v6; // rdi
  LONG v7; // r14d
  int v9; // edx
  int v10; // edx
  struct tagPALETTEENTRY *v11; // rax
  unsigned int v12; // eax
  int v13; // r8d
  int v14; // ecx
  unsigned int v15; // edx
  ULONG v16; // r9d
  unsigned int v17; // r8d
  ULONG ulPrimaryOrder; // r8d
  __int64 m; // rax
  __int64 i; // rdx
  char v21; // cl
  __int64 j; // rdx
  char v23; // cl
  __int64 k; // rdx
  char v25; // cl
  _OWORD v26[2]; // [rsp+50h] [rbp-58h] BYREF

  if ( (unsigned int)(a2 - 5) > 2 )
  {
    v5 = 0;
    if ( !a2 )
    {
      v6 = (struct tagPALETTEENTRY *)&unk_140361F48;
      v7 = 2;
      if ( (a3->flHTFlags & 0x100) != 0 )
      {
        v6 = (struct tagPALETTEENTRY *)v26;
        *(_QWORD *)&v26[0] = 0xFFFFFFLL;
      }
      goto LABEL_5;
    }
    v9 = a2 - 2;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( !v10 )
      {
        v7 = 16;
        v6 = (struct tagPALETTEENTRY *)&unk_140370B60;
        goto LABEL_5;
      }
      if ( v10 == 1 )
      {
        v7 = HT_Get8BPPMaskPalette(
               0LL,
               a3->flHTFlags & 8,
               HIBYTE(a3->flHTFlags),
               a3->ciDevice.RedGamma,
               a3->ciDevice.GreenGamma,
               a3->ciDevice.BlueGamma);
        v11 = (struct tagPALETTEENTRY *)PALLOCNOZ((unsigned int)(4 * v7), 1818316871LL);
        v6 = v11;
        if ( !v11 )
          return 0LL;
        if ( (a3->flHTFlags & 0x400) != 0 )
          *v11 = (struct tagPALETTEENTRY)809650002;
        else
          *v11 = 0;
        HT_Get8BPPMaskPalette(
          v11,
          a3->flHTFlags & 8,
          HIBYTE(a3->flHTFlags),
          a3->ciDevice.RedGamma,
          a3->ciDevice.GreenGamma,
          a3->ciDevice.BlueGamma);
        v5 = 1;
LABEL_5:
        if ( PALMEMOBJ::bCreatePalette(this, 1u, v7, (const unsigned int *)&v6->peRed, 0, 0, 0, 0x100400u, 1) )
        {
          if ( v5 )
            Win32FreePool(v6);
          return 1LL;
        }
        if ( v5 )
          Win32FreePool(v6);
        return 0LL;
      }
    }
    ulPrimaryOrder = a3->ulPrimaryOrder;
    v7 = 8;
    v6 = (struct tagPALETTEENTRY *)v26;
    v26[0] = xmmword_140361F68;
    v26[1] = xmmword_140361F78;
    if ( (ulPrimaryOrder & 1) != 0 )
    {
      for ( i = 1LL; i < 7; ++i )
      {
        v21 = *((_BYTE *)v26 + 4 * i + 1);
        *((_BYTE *)v26 + 4 * i + 1) = *((_BYTE *)v26 + 4 * i + 2);
        *((_BYTE *)v26 + 4 * i + 2) = v21;
      }
    }
    if ( (ulPrimaryOrder & 2) != 0 )
    {
      for ( j = 1LL; j < 7; ++j )
      {
        v23 = *((_BYTE *)v26 + 4 * j);
        *((_BYTE *)v26 + 4 * j) = *((_BYTE *)v26 + 4 * j + 1);
        *((_BYTE *)v26 + 4 * j + 1) = v23;
      }
    }
    else if ( (ulPrimaryOrder & 4) != 0 )
    {
      for ( k = 1LL; k < 7; ++k )
      {
        v25 = *((_BYTE *)v26 + 4 * k);
        *((_BYTE *)v26 + 4 * k) = *((_BYTE *)v26 + 4 * k + 2);
        *((_BYTE *)v26 + 4 * k + 2) = v25;
      }
    }
    if ( (a3->flHTFlags & 0x100) != 0 )
    {
      for ( m = 0LL; m < 2; ++m )
        v26[m] = _mm_xor_ps((__m128)_mm_loadu_si128((const __m128i *)&v26[m]), (__m128)_xmm);
    }
    goto LABEL_5;
  }
  v12 = 31;
  if ( a2 != 5 )
    v12 = 255;
  v13 = 992;
  if ( a2 != 5 )
    v13 = 65280;
  v14 = 31744;
  if ( a2 != 5 )
    v14 = 16711680;
  v15 = v13;
  v16 = a3->ulPrimaryOrder;
  if ( (v16 & 1) != 0 )
  {
    v15 = v12;
    v12 = v13;
  }
  if ( (v16 & 2) != 0 )
  {
    v17 = v15;
    v15 = v14;
  }
  else
  {
    v17 = v14;
    if ( (v16 & 4) != 0 )
    {
      v17 = v12;
      v12 = v14;
    }
  }
  return PALMEMOBJ::bCreatePalette(this, 2u, 0, 0LL, v17, v15, v12, 0x100200u, 1) != 0;
}
