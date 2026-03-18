/*
 * XREFs of ?QueryPresentStatsDWM@BLTQUEUE@@QEAAJPEAU_D3DKMT_PRESENT_STATS_DWM2@@@Z @ 0x140373024
 * Callers:
 *     ?PresentStatsDwm2Property@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PRESENT_STATS_DWM2@@@Z @ 0x14028FCA0 (-PresentStatsDwm2Property@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PRESENT_STATS_DWM2@@@Z.c)
 *     ?QueryLastCompletedPresentIdDWM@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS_DWM2@@@Z @ 0x140372F10 (-QueryLastCompletedPresentIdDWM@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS_DWM2@@@Z.c)
 * Callees:
 *     McTemplateK0qxqddditiii_EtwWriteTransfer @ 0x1400589E0 (McTemplateK0qxqddditiii_EtwWriteTransfer.c)
 *     ?UpdateVsyncCount@BLTQUEUE@@QEAAIPEAT_LARGE_INTEGER@@@Z @ 0x14006B70C (-UpdateVsyncCount@BLTQUEUE@@QEAAIPEAT_LARGE_INTEGER@@@Z.c)
 */

__int64 __fastcall BLTQUEUE::QueryPresentStatsDWM(BLTQUEUE *this, struct _D3DKMT_PRESENT_STATS_DWM2 *a2)
{
  struct _KMUTANT *v2; // rbx
  __int64 v5; // r8
  bool v6; // zf
  union _LARGE_INTEGER v8; // [rsp+80h] [rbp+8h] BYREF

  v2 = (struct _KMUTANT *)((char *)this + 264);
  KeWaitForSingleObject((char *)this + 264, Executive, 0, 0, 0LL);
  *((_DWORD *)a2 + 1) = *((_DWORD *)this + 80);
  *((_DWORD *)a2 + 2) = *((_DWORD *)this + 81);
  *((_DWORD *)a2 + 6) = *((_DWORD *)this + 82);
  v8.QuadPart = 0LL;
  BLTQUEUE::UpdateVsyncCount(this, &v8);
  v6 = bTracingEnabled == 0;
  *((_QWORD *)a2 + 2) = (__int64)(v8.QuadPart
                                * *((unsigned int *)a2 + 2)
                                * (unsigned __int64)*((unsigned int *)this + 97))
                      / *((unsigned int *)this + 96);
  *((_DWORD *)a2 + 6) = *((_DWORD *)this + 118);
  *((_DWORD *)a2 + 11) = *((_DWORD *)this + 118);
  *((_QWORD *)a2 + 4) = *((_QWORD *)this + 60);
  *((_QWORD *)a2 + 6) = *((_QWORD *)this + 60);
  *((_DWORD *)a2 + 10) = 0;
  *((_QWORD *)a2 + 7) = *((_QWORD *)this + 62);
  *((_DWORD *)a2 + 16) = 1;
  if ( !v6 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0qxqddditiii_EtwWriteTransfer(
      *((_QWORD *)this + 46),
      *((_QWORD *)this + 45),
      v5,
      2,
      *((_QWORD *)this + 31),
      *((_DWORD *)this + 65),
      *((_DWORD *)this + 80),
      *((_DWORD *)this + 81),
      *((_DWORD *)this + 82),
      *((_QWORD *)this + 42),
      3,
      *((_QWORD *)this + 45),
      *((_QWORD *)this + 46),
      *((_QWORD *)this + 46) - *((_QWORD *)this + 45));
  KeReleaseMutex(v2, 0);
  return 0LL;
}
