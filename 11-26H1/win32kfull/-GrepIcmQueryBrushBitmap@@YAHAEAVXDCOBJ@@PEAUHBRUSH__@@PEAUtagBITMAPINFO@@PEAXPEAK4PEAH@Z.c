/*
 * XREFs of ?GrepIcmQueryBrushBitmap@@YAHAEAVXDCOBJ@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z @ 0x140330114
 * Callers:
 *     NtGdiIcmBrushInfo @ 0x140330CF0 (NtGdiIcmBrushInfo.c)
 * Callees:
 *     ??0OPTAPIDCOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x140015900 (--0OPTAPIDCOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     GreGetBitmapBitsSize @ 0x14007BED4 (GreGetBitmapBitsSize.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x140082384 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1400823D4 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ?GrepGetDIBits@@YAHAEAVOPTAPIDCOBJ@@PEAUHBITMAP__@@IIAEAV?$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z @ 0x1400B4DDC (-GrepGetDIBits@@YAHAEAVOPTAPIDCOBJ@@PEAUHBITMAP__@@IIAEAV-$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z.c)
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x1400B5808 (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall GrepIcmQueryBrushBitmap(
        struct XDCOBJ *a1,
        HBRUSH a2,
        struct tagBITMAPINFO *a3,
        __int64 a4,
        unsigned int *a5,
        unsigned int *a6,
        int *a7)
{
  __int64 result; // rax
  unsigned int DIBits; // ebx
  unsigned int v11; // r15d
  int v12; // r12d
  unsigned int *v13; // rdi
  unsigned int BitmapBitsSize; // eax
  __int64 v15; // r11
  int v16; // edi
  LONG biHeight; // r9d
  unsigned int v18; // eax
  __int64 v19[3]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v20; // [rsp+70h] [rbp-98h]
  __int64 v21[3]; // [rsp+78h] [rbp-90h] BYREF
  __int16 v22; // [rsp+90h] [rbp-78h]
  BRUSH *v23[6]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v24[112]; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v25[112]; // [rsp+138h] [rbp+30h] BYREF

  result = 0LL;
  DIBits = 0;
  v11 = 0;
  v12 = 0;
  if ( a3 )
  {
    v13 = a6;
    if ( a6 )
    {
      if ( a7 && a5 )
      {
        if ( (*(_DWORD *)(*(_QWORD *)a1 + 120LL) & 1) != 0 )
        {
          BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v23, a2);
          if ( v23[0] )
          {
            if ( (*((_DWORD *)v23[0] + 10) & 0x80u) != 0 )
            {
              v11 = *((_DWORD *)v23[0] + 21);
              if ( !v11 )
              {
                if ( BRUSH::hFindIcmDIB(v23[0], *(void **)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 248LL)) )
                {
                  v12 = 1;
                }
                else
                {
                  memset_0(&a3->bmiHeader.biWidth, 0, 0x424uLL);
                  a3->bmiHeader.biSize = 44;
                  memset(v19, 0, sizeof(v19));
                  LOWORD(v20) = 0;
                  OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v24, a1);
                  DIBits = GrepGetDIBits(
                             (OPTAPIDCOBJ *)v24,
                             *((_QWORD *)v23[0] + 3),
                             0,
                             0,
                             (__int64)v19,
                             &a3->bmiHeader.biSize,
                             0,
                             0,
                             0x428u);
                  if ( DIBits )
                  {
                    BitmapBitsSize = GreGetBitmapBitsSize((__int64)a3);
                    v16 = BitmapBitsSize;
                    if ( BitmapBitsSize )
                    {
                      if ( a4 )
                      {
                        if ( BitmapBitsSize <= *a5 )
                        {
                          v21[0] = a4;
                          v21[1] = BitmapBitsSize;
                          v21[2] = v15;
                          v22 = v15;
                          OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v25, a1);
                          biHeight = -a3->bmiHeader.biHeight;
                          if ( a3->bmiHeader.biHeight > 0 )
                            biHeight = a3->bmiHeader.biHeight;
                          v18 = GrepGetDIBits(
                                  (OPTAPIDCOBJ *)v24,
                                  *((_QWORD *)v23[0] + 3),
                                  0,
                                  biHeight,
                                  (__int64)v21,
                                  &a3->bmiHeader.biSize,
                                  0,
                                  v16,
                                  0x428u);
                          *a5 = v16;
                          DIBits = v18;
                          OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v25);
                        }
                      }
                      else
                      {
                        *a5 = BitmapBitsSize;
                        DIBits = 1;
                      }
                    }
                    else
                    {
                      DIBits = v15;
                    }
                    v13 = a6;
                  }
                  OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v24);
                }
              }
            }
          }
          BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v23);
        }
        *v13 = v11;
        *a7 = v12;
        return DIBits;
      }
    }
  }
  return result;
}
