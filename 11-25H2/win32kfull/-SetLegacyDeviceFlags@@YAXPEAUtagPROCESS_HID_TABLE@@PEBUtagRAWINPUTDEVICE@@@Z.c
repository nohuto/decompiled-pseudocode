/*
 * XREFs of ?SetLegacyDeviceFlags@@YAXPEAUtagPROCESS_HID_TABLE@@PEBUtagRAWINPUTDEVICE@@@Z @ 0x14011F364
 * Callers:
 *     ?SetProcDeviceRequest@@YAHPEAUtagPROCESSINFO@@PEAUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KW4_REGISTER_RAW_INPUT_INTERNAL@@@Z @ 0x14011EC20 (-SetProcDeviceRequest@@YAHPEAUtagPROCESSINFO@@PEAUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@.c)
 * Callees:
 *     <none>
 */

void __fastcall SetLegacyDeviceFlags(struct tagPROCESS_HID_TABLE *a1, const struct tagRAWINPUTDEVICE *a2)
{
  int v2; // r10d
  int v4; // eax
  int v5; // r8d
  unsigned int v6; // r8d
  unsigned int v7; // eax
  unsigned int v8; // ecx
  int v9; // eax
  unsigned int v10; // ecx
  int v11; // r8d
  unsigned int v12; // r8d
  unsigned int v13; // ecx

  v2 = *((_DWORD *)a2 + 1);
  v4 = v2 & 0xF0;
  if ( ((v2 & 0xF0) == 0 || v4 == 48) && *(_WORD *)a2 == 1 )
  {
    if ( *((_WORD *)a2 + 1) == 6 )
    {
      v5 = 0;
      if ( v4 == 48 )
        v5 = 32;
      v6 = *((_DWORD *)a1 + 25) & 0xFFFFFFDF | v5;
      *((_DWORD *)a1 + 25) = v6;
      v7 = v6 & 0xFFFFFDFF | *((_DWORD *)a2 + 1) & 0x200;
      *((_DWORD *)a1 + 25) = v7;
      v8 = v7 & 0xFFFFFBFF | *((_DWORD *)a2 + 1) & 0x400;
      *((_DWORD *)a1 + 25) = v8;
      v9 = (*((_DWORD *)a2 + 1) >> 2) & 0x1000;
      v10 = v8 & 0xFFFFEFFF;
LABEL_7:
      *((_DWORD *)a1 + 25) = v10 | v9;
      return;
    }
    if ( *((_WORD *)a2 + 1) == 2 )
    {
      v11 = 0;
      if ( (v2 & 0xF0) == 0x30 )
        v11 = 2;
      v12 = *((_DWORD *)a1 + 25) & 0xFFFFFFFD | v11;
      *((_DWORD *)a1 + 25) = v12;
      v13 = v12 & 0xFFFFFEFF | (*((_DWORD *)a2 + 1) >> 1) & 0x100;
      *((_DWORD *)a1 + 25) = v13;
      v9 = (*((_DWORD *)a2 + 1) >> 4) & 0x800;
      v10 = v13 & 0xFFFFF7FF;
      goto LABEL_7;
    }
  }
}
