/*
 * XREFs of ?SetLegacyDeviceFlags@@YAXPEAUtagPROCESS_HID_TABLE@@PEBUtagRAWINPUTDEVICE@@@Z @ 0x140171C80
 * Callers:
 *     ?SetProcDeviceRequest@@YAHPEAUtagPROCESSINFO@@PEAUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KW4_REGISTER_RAW_INPUT_INTERNAL@@@Z @ 0x1401713D4 (-SetProcDeviceRequest@@YAHPEAUtagPROCESSINFO@@PEAUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@.c)
 * Callees:
 *     <none>
 */

void __fastcall SetLegacyDeviceFlags(struct tagPROCESS_HID_TABLE *a1, const struct tagRAWINPUTDEVICE *a2)
{
  int v2; // r10d
  int v4; // eax
  int v5; // r8d
  unsigned int v6; // r8d
  unsigned int v7; // ecx
  int v8; // eax
  unsigned int v9; // ecx
  int v10; // r8d
  unsigned int v11; // r8d
  unsigned int v12; // eax
  unsigned int v13; // ecx

  v2 = *((_DWORD *)a2 + 1);
  v4 = v2 & 0xF0;
  if ( ((v2 & 0xF0) == 0 || v4 == 48) && *(_WORD *)a2 == 1 )
  {
    if ( *((_WORD *)a2 + 1) == 6 )
    {
      v10 = 0;
      if ( v4 == 48 )
        v10 = 32;
      v11 = *((_DWORD *)a1 + 25) & 0xFFFFFFDF | v10;
      *((_DWORD *)a1 + 25) = v11;
      v12 = v11 & 0xFFFFFDFF | *((_DWORD *)a2 + 1) & 0x200;
      *((_DWORD *)a1 + 25) = v12;
      v13 = v12 & 0xFFFFFBFF | *((_DWORD *)a2 + 1) & 0x400;
      *((_DWORD *)a1 + 25) = v13;
      v8 = (*((_DWORD *)a2 + 1) >> 2) & 0x1000;
      v9 = v13 & 0xFFFFEFFF;
    }
    else
    {
      if ( *((_WORD *)a2 + 1) != 2 )
        return;
      v5 = 0;
      if ( (v2 & 0xF0) == 0x30 )
        v5 = 2;
      v6 = *((_DWORD *)a1 + 25) & 0xFFFFFFFD | v5;
      *((_DWORD *)a1 + 25) = v6;
      v7 = v6 & 0xFFFFFEFF | (*((_DWORD *)a2 + 1) >> 1) & 0x100;
      *((_DWORD *)a1 + 25) = v7;
      v8 = (*((_DWORD *)a2 + 1) >> 4) & 0x800;
      v9 = v7 & 0xFFFFF7FF;
    }
    *((_DWORD *)a1 + 25) = v9 | v8;
  }
}
