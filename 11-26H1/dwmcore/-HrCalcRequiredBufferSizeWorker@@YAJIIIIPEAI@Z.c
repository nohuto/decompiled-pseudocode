/*
 * XREFs of ?HrCalcRequiredBufferSizeWorker@@YAJIIIIPEAI@Z @ 0x1800E6A08
 * Callers:
 *     ?HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z @ 0x1800E5FC0 (-HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z.c)
 *     ?CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x1800E7330 (-CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z.c)
 *     ?GetDataPointer@CWarpLockSubresource@@UEAAJPEAIPEAPEAE@Z @ 0x1802AA2C0 (-GetDataPointer@CWarpLockSubresource@@UEAAJPEAIPEAPEAE@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall HrCalcRequiredBufferSizeWorker(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        unsigned int *a5)
{
  unsigned int v5; // r10d
  unsigned __int64 v6; // r10
  unsigned int v7; // ecx
  unsigned __int64 v8; // rdx
  unsigned int v9; // ebx
  unsigned int v11; // [rsp+20h] [rbp-18h]

  v5 = 0;
  if ( !a4 )
    goto LABEL_13;
  v6 = a3 * (unsigned __int64)a1;
  if ( v6 > 0xFFFFFFFF )
  {
    v11 = 1620;
    goto LABEL_8;
  }
  if ( (int)v6 + 7 < (unsigned int)v6 )
  {
    v11 = 1621;
    goto LABEL_8;
  }
  v7 = (unsigned int)(v6 + 7) >> 3;
  if ( a2 < v7 )
  {
    v9 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x65Au, 0LL);
    return v9;
  }
  v8 = a2 * (unsigned __int64)(unsigned int)(a4 - 1);
  if ( v8 > 0xFFFFFFFF )
  {
    v11 = 1629;
    goto LABEL_8;
  }
  v5 = v7 + v8;
  if ( v7 + (unsigned int)v8 >= (unsigned int)v8 )
  {
LABEL_13:
    v9 = 0;
    *a5 = v5;
    return v9;
  }
  v11 = 1630;
LABEL_8:
  v9 = -2147024362;
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, v11, 0LL);
  return v9;
}
