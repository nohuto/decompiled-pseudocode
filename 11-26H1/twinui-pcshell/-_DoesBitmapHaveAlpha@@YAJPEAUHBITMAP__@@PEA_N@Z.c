/*
 * XREFs of ?_DoesBitmapHaveAlpha@@YAJPEAUHBITMAP__@@PEA_N@Z @ 0x18004A344
 * Callers:
 *     ?CreateBitmapFromIconWithAlpha@@YAJPEAUHICON__@@HPEAPEAUHBITMAP__@@@Z @ 0x1801EFC84 (-CreateBitmapFromIconWithAlpha@@YAJPEAUHICON__@@HPEAPEAUHBITMAP__@@@Z.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180042238 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?_CoTaskMemSize@CTCoAllocPolicy@@CA_KPEAX@Z @ 0x18004A13C (-_CoTaskMemSize@CTCoAllocPolicy@@CA_KPEAX@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 */

__int64 __fastcall _DoesBitmapHaveAlpha(HBITMAP hbm, bool *a2)
{
  signed int Error; // ebx
  unsigned __int64 v5; // rdi
  size_t v6; // rax
  HDC DC; // r14
  bool v8; // al
  int v9; // edx
  _BYTE *v10; // rcx
  char *v12; // rax
  char *lpvBits; // rsi
  __int128 pv; // [rsp+40h] [rbp-29h] BYREF
  __int128 v15; // [rsp+50h] [rbp-19h]
  __int64 v16; // [rsp+60h] [rbp-9h]
  struct tagBITMAPINFO bmi; // [rsp+68h] [rbp-1h] BYREF

  *a2 = 0;
  pv = 0LL;
  v15 = 0LL;
  if ( GetObjectW(hbm, 32, &pv) )
  {
    Error = 0;
  }
  else
  {
    Error = ResultFromKnownLastError();
    if ( Error < 0 )
      return (unsigned int)Error;
  }
  if ( (_DWORD)v15 == 2097153 )
  {
    v5 = DWORD2(pv) * (unsigned __int64)DWORD1(pv);
    if ( v5 <= 0xFFFFFFFF && (v16 = 0LL, is_mul_ok((unsigned int)v5, 4uLL)) )
    {
      v12 = (char *)CoTaskMemAlloc(4LL * (unsigned int)v5);
      lpvBits = v12;
      if ( v12 )
      {
        v6 = CTCoAllocPolicy::_CoTaskMemSize(v12);
        memset_0(lpvBits, 0, v6);
        DC = GetDC(0LL);
        if ( DC )
        {
          *(_QWORD *)&bmi.bmiHeader.biWidth = *(_QWORD *)((char *)&pv + 4);
          memset(&bmi.bmiHeader.biSizeImage, 0, 24);
          bmi.bmiHeader.biSize = 40;
          *(_QWORD *)&bmi.bmiHeader.biPlanes = 2097153LL;
          if ( GetDIBits(DC, hbm, 0, DWORD2(pv), lpvBits, &bmi, 0) )
          {
            Error = 0;
            v8 = 0;
            v9 = 0;
            if ( (int)v5 > 0 )
            {
              v10 = lpvBits + 3;
              do
              {
                if ( v8 )
                  break;
                v8 = *v10 != 0;
                ++v9;
                v10 += 4;
              }
              while ( v9 < (int)v5 );
            }
            *a2 = v8;
          }
          else
          {
            Error = -2147467259;
          }
          ReleaseDC(0LL, DC);
        }
        else
        {
          Error = -2147467259;
        }
        CoTaskMemFree(lpvBits);
      }
      else
      {
        return (unsigned int)-2147024882;
      }
    }
    else
    {
      return (unsigned int)-2147024362;
    }
  }
  return (unsigned int)Error;
}
