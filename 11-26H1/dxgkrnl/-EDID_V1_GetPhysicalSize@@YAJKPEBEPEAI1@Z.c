/*
 * XREFs of ?EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z @ 0x1400432B0
 * Callers:
 *     ?AddEdid@EDIDCACHE@DxgMonitor@@UEAAXU_LUID@@IEPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1402704C0 (-AddEdid@EDIDCACHE@DxgMonitor@@UEAAXU_LUID@@IEPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z.c)
 *     ?GetPhysicalSize@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAI0@Z @ 0x140405850 (-GetPhysicalSize@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAI0@Z.c)
 * Callees:
 *     ?Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z @ 0x140043580 (-Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z.c)
 */

__int64 __fastcall EDID_V1_GetPhysicalSize(unsigned int a1, unsigned __int8 *a2, unsigned int *a3, unsigned int *a4)
{
  __int64 result; // rax
  unsigned int *v6; // r11
  unsigned int v7; // r10d
  unsigned int v8; // r8d
  unsigned int v9; // edi
  unsigned int v10; // r9d
  unsigned int v11; // ecx
  unsigned int v12; // eax
  _QWORD v13[13]; // [rsp+20h] [rbp-68h] BYREF

  if ( !a2 || !a1 || !a3 || !a4 )
    return 3221225485LL;
  v13[10] = 0LL;
  result = MonDescParser::EDID_PARSER::Initialize((MonDescParser::EDID_PARSER *)v13, a2, a1);
  if ( (int)result >= 0 )
  {
    v7 = 10 * *(unsigned __int8 *)(v13[0] + 21LL);
    v8 = 10 * *(unsigned __int8 *)(v13[0] + 22LL);
    if ( *(_WORD *)(v13[0] + 54LL)
      || *(_BYTE *)(v13[0] + 56LL)
      || *(_BYTE *)(v13[0] + 58LL) && *(_BYTE *)(v13[0] + 57LL) != 0xFD )
    {
      v9 = *(unsigned __int8 *)(v13[0] + 66LL) + (*(unsigned __int8 *)(v13[0] + 68LL) >> 4 << 8);
      v10 = *(unsigned __int8 *)(v13[0] + 67LL) + ((*(_BYTE *)(v13[0] + 68LL) & 0xF) << 8);
      v11 = v9 - v7;
      if ( v9 < v7 )
        v11 = v7 - v9;
      if ( v11 >= 0xA )
        goto LABEL_20;
      v12 = v10 - v8;
      if ( v10 < v8 )
        v12 = v8 - v10;
      if ( v12 >= 0xA )
      {
LABEL_20:
        v10 = 10 * *(unsigned __int8 *)(v13[0] + 22LL);
        v9 = 10 * *(unsigned __int8 *)(v13[0] + 21LL);
      }
      *a3 = v9;
      *v6 = v10;
    }
    else
    {
      *a3 = v7;
      *v6 = v8;
    }
    return 0LL;
  }
  return result;
}
