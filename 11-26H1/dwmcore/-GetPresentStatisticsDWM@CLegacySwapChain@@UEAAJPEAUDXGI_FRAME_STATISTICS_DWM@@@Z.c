/*
 * XREFs of ?GetPresentStatisticsDWM@CLegacySwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x1800685F0
 * Callers:
 *     <none>
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x1800691D0 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacySwapChain::GetPresentStatisticsDWM(union _LARGE_INTEGER *this, union _LARGE_INTEGER *a2)
{
  union _LARGE_INTEGER v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  union _LARGE_INTEGER v8; // rdx
  __int64 QuadPart; // r8
  float LowPart; // xmm1_4
  float v11; // xmm0_4
  CComposition *v12; // rcx
  __int64 v13; // rcx
  unsigned int v14; // [rsp+40h] [rbp+8h] BYREF

  v4 = this[33];
  if ( v4.QuadPart )
  {
    v5 = (*(__int64 (**)(void))(*(_QWORD *)v4.QuadPart + 160LL))();
    v14 = v5;
    v6 = v5;
    if ( v5 >= 0 )
    {
      v8 = a2[8];
      if ( v8.QuadPart > CScheduler::s_maxVBlankTimeQPC.QuadPart && v8.QuadPart != 0xFFFFFFFFLL )
      {
        v8 = CScheduler::s_maxVBlankTimeQPC;
        a2[8] = CScheduler::s_maxVBlankTimeQPC;
      }
      if ( v5 != 142213121 )
      {
        QuadPart = this[18].QuadPart;
        if ( QuadPart != v8.QuadPart )
        {
          if ( v8.QuadPart < 0 )
            LowPart = (float)(int)(v8.LowPart & 1 | ((unsigned __int64)v8.QuadPart >> 1))
                    + (float)(int)(v8.LowPart & 1 | ((unsigned __int64)v8.QuadPart >> 1));
          else
            LowPart = (float)(int)v8.LowPart;
          if ( QuadPart < 0 )
          {
            v13 = this[18].QuadPart & 1 | ((unsigned __int64)QuadPart >> 1);
            v11 = (float)(int)v13 + (float)(int)v13;
          }
          else
          {
            v11 = (float)(int)QuadPart;
          }
          this[18] = v8;
          if ( (float)(COERCE_FLOAT(COERCE_UNSIGNED_INT(v11 - LowPart) & _xmm) / LowPart) >= 0.050000001 )
          {
            v12 = g_pComposition;
            *(_BYTE *)(*((_QWORD *)g_pComposition + 77) + 748LL) = 1;
            if ( (this[18].QuadPart == 0xFFFFFFFFLL) != (QuadPart == 0xFFFFFFFFLL) )
            {
              *(_BYTE *)(*((_QWORD *)v12 + 77) + 747LL) = 1;
              if ( QuadPart == 0xFFFFFFFFLL )
                *(_BYTE *)(*((_QWORD *)v12 + 77) + 749LL) = 1;
            }
          }
        }
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802F2C00, 3u, v5, 0xF1u, 0LL);
    }
    TranslateDXGIorD3DErrorInContext(v6, 0LL, &v14);
    return v14;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802F2C00, 3u, -2003304307, 0x128u, 0LL);
    return 2291662989LL;
  }
}
