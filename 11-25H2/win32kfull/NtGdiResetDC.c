/*
 * XREFs of NtGdiResetDC @ 0x140212700
 * Callers:
 *     <none>
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140084C80 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?GrepResetDC@@YAHAEAVXDCOBJ@@PEAU_devicemodeW@@PEAHPEAU_DRIVER_INFO_2W@@PEAX@Z @ 0x140212898 (-GrepResetDC@@YAHAEAVXDCOBJ@@PEAU_devicemodeW@@PEAHPEAU_DRIVER_INFO_2W@@PEAX@Z.c)
 */

__int64 __fastcall NtGdiResetDC(HDC a1, struct _devicemodeW *a2, _DWORD *a3, struct _DRIVER_INFO_2W *a4, void *a5)
{
  _DWORD *v6; // r14
  struct _devicemodeW *v8; // rdi
  struct _DRIVER_INFO_2W *v9; // rsi
  struct _devicemodeW *v10; // rax
  unsigned int v11; // ebx
  int v13[3]; // [rsp+34h] [rbp-B4h] BYREF
  struct _DRIVER_INFO_2W *v14; // [rsp+40h] [rbp-A8h]
  _QWORD v15[19]; // [rsp+50h] [rbp-98h] BYREF

  v6 = a3;
  v8 = 0LL;
  memset(v13, 0, sizeof(v13));
  v9 = 0LL;
  v14 = 0LL;
  if ( !a2 || (v10 = CaptureDEVMODEW(a2), v8 = v10, (*(_QWORD *)&v13[1] = v10) != 0LL) )
  {
    v11 = 1;
    LODWORD(v10) = 1;
  }
  else
  {
    v11 = 1;
  }
  if ( !(_DWORD)v10 || a4 && (v9 = CaptureDriverInfo2W(a4), (v14 = v9) == 0LL) )
    v11 = 0;
  if ( v11 )
  {
    APIDCOBJ::APIDCOBJ((APIDCOBJ *)v15, a1);
    if ( v15[0] )
      v11 = GrepResetDC((struct XDCOBJ *)v15, v8, v13, v9, a5);
    else
      v11 = 0;
    if ( v11 )
    {
      if ( (unsigned __int64)v6 >= MmUserProbeAddress )
        v6 = (_DWORD *)MmUserProbeAddress;
      *v6 = v13[0];
    }
    else
    {
      EngSetLastError(6u);
    }
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v15);
  }
  if ( v8 )
    FreeThreadBufferWithTag(v8, a2, a3);
  vFreeDriverInfo2(v9);
  return v11;
}
