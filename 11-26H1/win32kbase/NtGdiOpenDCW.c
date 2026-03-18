/*
 * XREFs of NtGdiOpenDCW @ 0x140010610
 * Callers:
 *     <none>
 * Callees:
 *     UserGetDesktopDC @ 0x14000F79C (UserGetDesktopDC.c)
 *     hdcOpenDCW @ 0x1400107D0 (hdcOpenDCW.c)
 *     ?vFreeDriverInfo2@@YAXPEAU_DRIVER_INFO_2W@@@Z @ 0x140010C50 (-vFreeDriverInfo2@@YAXPEAU_DRIVER_INFO_2W@@@Z.c)
 *     AllocFreeTmpBuffer @ 0x1400110D0 (AllocFreeTmpBuffer.c)
 *     FreeTmpBuffer @ 0x1400113B0 (FreeTmpBuffer.c)
 *     ?GreProbeAndReadFromUntrustedVa@@YAXPEAX_KPEBX11@Z @ 0x140040790 (-GreProbeAndReadFromUntrustedVa@@YAXPEAX_KPEBX11@Z.c)
 *     FreeThreadBufferWithTag @ 0x140041C20 (FreeThreadBufferWithTag.c)
 *     ?CaptureDriverInfo2W@@YAPEAU_DRIVER_INFO_2W@@PEAU1@@Z @ 0x1401646C0 (-CaptureDriverInfo2W@@YAPEAU_DRIVER_INFO_2W@@PEAU1@@Z.c)
 *     ?CaptureDEVMODEW@@YAPEAU_devicemodeW@@REAU1@@Z @ 0x14017BFA0 (-CaptureDEVMODEW@@YAPEAU_devicemodeW@@REAU1@@Z.c)
 */

__int64 __fastcall NtGdiOpenDCW(
        _WORD *a1,
        struct _devicemodeW *a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        int a6,
        __int64 a7,
        struct _DRIVER_INFO_2W *a8,
        void *a9)
{
  __int64 v10; // r12
  const WCHAR *v11; // r14
  struct _devicemodeW *v12; // rsi
  struct _DRIVER_INFO_2W *v13; // r15
  int v14; // edi
  int v15; // ecx
  unsigned __int64 v16; // r13
  WCHAR *v17; // rax
  int v18; // eax
  void *v20; // [rsp+B0h] [rbp+8h]

  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  if ( !a1 )
    return UserGetDesktopDC(a4, 0LL, 1);
  v14 = 1;
  ProbeForRead(a1, 0x10uLL, 1u);
  v15 = (unsigned __int16)*a1;
  v20 = (void *)*((_QWORD *)a1 + 1);
  if ( *a1 )
  {
    v16 = (unsigned __int16)*a1;
    v17 = (WCHAR *)AllocFreeTmpBuffer((unsigned int)(v15 + 2));
    v11 = v17;
    if ( v17 )
    {
      GreProbeAndReadFromUntrustedVa(v17, (unsigned int)v16, v20, (unsigned int)v16, 1uLL);
      v11[v16 >> 1] = 0;
    }
  }
  if ( !a2 || (v12 = CaptureDEVMODEW(a2), v18 = 0, v12) )
    v18 = 1;
  if ( !v18 || a8 && (v13 = CaptureDriverInfo2W(a8)) == 0LL )
    v14 = 0;
  if ( v14 )
    v10 = hdcOpenDCW(v11, a7, (__int64)v13, a9, a6);
  if ( v11 )
    FreeTmpBuffer(v11);
  if ( v12 )
    FreeThreadBufferWithTag(v12);
  vFreeDriverInfo2(v13);
  return v10;
}
