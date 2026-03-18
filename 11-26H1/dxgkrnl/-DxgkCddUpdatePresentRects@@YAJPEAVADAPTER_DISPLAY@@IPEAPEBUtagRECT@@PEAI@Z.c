/*
 * XREFs of ?DxgkCddUpdatePresentRects@@YAJPEAVADAPTER_DISPLAY@@IPEAPEBUtagRECT@@PEAI@Z @ 0x1402BD63C
 * Callers:
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1402BBFE4 (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAV.c)
 * Callees:
 *     ?GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z @ 0x14006C2C8 (-GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?DxgkpConvertRects@@YAXJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBUtagRECT@@IPEAU2@2@Z @ 0x1401BDDF0 (-DxgkpConvertRects@@YAXJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBUtagRECT@@IPEAU2@2@Z.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1402CA65C (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 */

__int64 __fastcall DxgkCddUpdatePresentRects(
        struct ADAPTER_DISPLAY *a1,
        unsigned int a2,
        struct tagRECT **a3,
        unsigned int *a4)
{
  __int64 v4; // rdi
  const struct _CDDDXGK_INTERFACE *CddInterface; // rax
  __int64 v10; // rcx
  int v11; // r14d
  int v12; // r15d
  LONG right; // ecx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION CurrentOrientation; // eax
  unsigned int v15; // [rsp+40h] [rbp-20h] BYREF
  struct tagRECT *v16; // [rsp+48h] [rbp-18h] BYREF
  tagRECT v17; // [rsp+50h] [rbp-10h] BYREF

  v4 = a2;
  v15 = -1;
  v16 = 0LL;
  CddInterface = ADAPTER_DISPLAY::GetCddInterface(a1, a2);
  if ( CddInterface )
  {
    (*((void (__fastcall **)(_QWORD, struct tagRECT **, unsigned int *))CddInterface + 3))(
      *(_QWORD *)CddInterface,
      &v16,
      &v15);
    if ( v15 )
    {
      if ( v15 != -1 )
      {
        v10 = *((_QWORD *)a1 + 16);
        v11 = *(_DWORD *)(4024 * v4 + v10 + 636) - *(_DWORD *)(4024 * v4 + v10 + 628);
        v12 = *(_DWORD *)(4024 * v4 + v10 + 640) - *(_DWORD *)(4024 * v4 + v10 + 632);
        v17 = *(tagRECT *)(4024 * v4 + v10 + 688);
        if ( (((unsigned int)ADAPTER_DISPLAY::GetCurrentOrientation(a1, (unsigned int)v4, 1LL) - 2) & 0xFFFFFFFD) == 0 )
        {
          right = v17.right;
          v17.right = v17.bottom;
          v17.bottom = right;
        }
        CurrentOrientation = (unsigned int)ADAPTER_DISPLAY::GetCurrentOrientation(a1, (unsigned int)v4, 0LL);
        DxgkpConvertRects(v11, v12, CurrentOrientation, &v17, v15, v16, v16);
        *a4 = v15;
        *a3 = v16;
      }
    }
    else
    {
      *a4 = 0;
    }
  }
  return 0LL;
}
