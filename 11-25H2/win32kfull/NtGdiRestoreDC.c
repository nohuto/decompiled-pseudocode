/*
 * XREFs of NtGdiRestoreDC @ 0x140263D60
 * Callers:
 *     <none>
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140084C80 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline @ 0x1402FDD6C (Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall NtGdiRestoreDC(HDC a1, int a2)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  _QWORD v6[15]; // [rsp+20h] [rbp-78h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v6, a1);
  if ( v6[0]
    && (!(unsigned int)Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline()
      ? (v3 = HmgPentryFromPobj(v6[0]))
      : (v3 = HmgPentryFromPobjFast(v6[2], v6[0])),
        (*(_DWORD *)(v3 + 8) & 0xFFFFFFFE) != 0) )
  {
    v4 = GrepRestoreDCOBJ((struct XDCOBJ *)v6, a2);
  }
  else
  {
    EngSetLastError(6u);
    v4 = 0;
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v6);
  return v4;
}
