/*
 * XREFs of NtGdiOpenDCW @ 0x140097540
 * Callers:
 *     <none>
 * Callees:
 *     FreeThreadBufferWithTag @ 0x14001E6A0 (FreeThreadBufferWithTag.c)
 *     FreeTmpBuffer @ 0x14001FD40 (FreeTmpBuffer.c)
 *     hdcOpenDCW @ 0x140097720 (hdcOpenDCW.c)
 *     ?vFreeDriverInfo2@@YAXPEAU_DRIVER_INFO_2W@@@Z @ 0x140097BB0 (-vFreeDriverInfo2@@YAXPEAU_DRIVER_INFO_2W@@@Z.c)
 *     AllocFreeTmpBuffer @ 0x140098060 (AllocFreeTmpBuffer.c)
 *     UserGetDesktopDC @ 0x140098B10 (UserGetDesktopDC.c)
 *     ?CaptureDriverInfo2W@@YAPEAU_DRIVER_INFO_2W@@PEAU1@@Z @ 0x1400B5700 (-CaptureDriverInfo2W@@YAPEAU_DRIVER_INFO_2W@@PEAU1@@Z.c)
 *     ?CaptureDEVMODEW@@YAPEAU_devicemodeW@@REAU1@@Z @ 0x1400B5A20 (-CaptureDEVMODEW@@YAPEAU_devicemodeW@@REAU1@@Z.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

__int64 __fastcall NtGdiOpenDCW(
        unsigned __int16 *a1,
        struct _devicemodeW *a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        void *a7,
        struct _DRIVER_INFO_2W *a8,
        __int64 a9)
{
  __int64 v11; // r14
  unsigned int v12; // ecx
  char *v13; // r15
  size_t v14; // rdi
  void *v15; // rsi
  int v16; // edi
  int v17; // eax
  struct _devicemodeW *v19; // [rsp+50h] [rbp-48h]
  struct _DRIVER_INFO_2W *v20; // [rsp+58h] [rbp-40h]

  v11 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  if ( !a1 )
    return UserGetDesktopDC(a4, 0LL, 1LL);
  v12 = *a1;
  v13 = (char *)*((_QWORD *)a1 + 1);
  if ( *a1 )
  {
    v14 = v12;
    v15 = (void *)AllocFreeTmpBuffer(v12 + 2);
    if ( v15 )
    {
      if ( &v13[v14] < v13 || (unsigned __int64)&v13[v14] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v15, v13, v14);
      *((_WORD *)v15 + (v14 >> 1)) = 0;
    }
  }
  else
  {
    v15 = 0LL;
  }
  if ( !a2 || (v19 = CaptureDEVMODEW(a2)) != 0LL )
  {
    v16 = 1;
    v17 = 1;
  }
  else
  {
    v17 = 0;
    v16 = 1;
  }
  if ( !v17 || a8 && (v20 = CaptureDriverInfo2W(a8)) == 0LL )
    v16 = 0;
  if ( v16 )
    v11 = hdcOpenDCW((PCWSTR)v15, a7, (HDC)v20, a9, a6);
  if ( v15 )
    FreeTmpBuffer((__int64)v15);
  if ( v19 )
    FreeThreadBufferWithTag((__int64)v19);
  vFreeDriverInfo2(v20);
  return v11;
}
