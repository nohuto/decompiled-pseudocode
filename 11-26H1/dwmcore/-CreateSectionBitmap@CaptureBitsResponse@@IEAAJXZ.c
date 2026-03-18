/*
 * XREFs of ?CreateSectionBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x18009A3E0
 * Callers:
 *     ?OnPresentComplete@CaptureBitsResponse@@UEAAJXZ @ 0x18009A310 (-OnPresentComplete@CaptureBitsResponse@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CalcSectionBitmapSize@CaptureBitsResponse@@IEAAJXZ @ 0x1801279A4 (-CalcSectionBitmapSize@CaptureBitsResponse@@IEAAJXZ.c)
 */

__int64 __fastcall CaptureBitsResponse::CreateSectionBitmap(DWORD *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  HANDLE FileMappingW; // rax
  signed int LastError; // eax
  int v6; // r9d
  DWORD dwMaximumSizeLow; // [rsp+20h] [rbp-18h]

  v2 = CaptureBitsResponse::CalcSectionBitmapSize((CaptureBitsResponse *)this);
  v3 = v2;
  if ( v2 < 0 )
  {
    v6 = v2;
    dwMaximumSizeLow = 228;
LABEL_6:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, dwMaximumSizeLow, 0LL);
    return v3;
  }
  SetLastError(0);
  FileMappingW = CreateFileMappingW((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0LL, 4u, 0, this[380], 0LL);
  *((_QWORD *)this + 188) = FileMappingW;
  if ( !FileMappingW )
  {
    LastError = GetLastError();
    v3 = LastError;
    if ( LastError > 0 )
      v3 = (unsigned __int16)LastError | 0x80070000;
    dwMaximumSizeLow = 236;
    if ( (v3 & 0x80000000) == 0 )
      v3 = -2003304445;
    v6 = v3;
    goto LABEL_6;
  }
  return v3;
}
