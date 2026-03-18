/*
 * XREFs of ?PatchArgbCursorWithMask@CursorApiRouter@@CA_NPEAUHBITMAP__@@IPEAKUtagSIZE@@_N@Z @ 0x1402EE8EC
 * Callers:
 *     ?SendMITCursorShape@CursorApiRouter@@AEAA_NPEAU_CURSINFO@@W4_MIT_CURSOR_SHAPEINFO_TRAITS@@I@Z @ 0x1402EEAFC (-SendMITCursorShape@CursorApiRouter@@AEAA_NPEAU_CURSINFO@@W4_MIT_CURSOR_SHAPEINFO_TRAITS@@I@Z.c)
 * Callees:
 *     GreExtGetObjectW @ 0x140014058 (GreExtGetObjectW.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetCursorMaskAndXorBits@CursorApiRouter@@CA_NPEAUHBITMAP__@@PEBUtagBITMAP@@PEAPEAEPEAI@Z @ 0x1402EE7B8 (-GetCursorMaskAndXorBits@CursorApiRouter@@CA_NPEAUHBITMAP__@@PEBUtagBITMAP@@PEAPEAEPEAI@Z.c)
 */

char __fastcall CursorApiRouter::PatchArgbCursorWithMask(
        Gre::Base *a1,
        unsigned int a2,
        unsigned int *a3,
        struct tagSIZE a4,
        bool a5)
{
  __int64 v5; // r13
  char v7; // di
  LONG cx; // ebx
  unsigned __int8 *v10; // rsi
  bool CursorMaskAndXorBits; // al
  LONG v12; // r11d
  unsigned __int8 *v13; // r10
  LONG v14; // r9d
  unsigned __int8 *v15; // r15
  char v16; // r13
  char v17; // cl
  unsigned __int8 *v18; // rax
  char v20; // [rsp+20h] [rbp-30h]
  char v21; // [rsp+21h] [rbp-2Fh]
  unsigned int v22; // [rsp+24h] [rbp-2Ch] BYREF
  unsigned __int8 *v23; // [rsp+28h] [rbp-28h] BYREF
  tagBITMAP v24; // [rsp+30h] [rbp-20h] BYREF
  LONG cy; // [rsp+9Ch] [rbp+4Ch]

  cy = a4.cy;
  v5 = a2;
  v23 = 0LL;
  v22 = 0;
  v7 = 1;
  cx = a4.cx;
  memset(&v24, 0, sizeof(v24));
  v10 = 0LL;
  if ( !(unsigned int)GreExtGetObjectW(a1, 32, &v24) )
    return 0;
  if ( v24.bmWidth == cx && v24.bmHeight == 2 * cy )
  {
    CursorMaskAndXorBits = CursorApiRouter::GetCursorMaskAndXorBits((HBITMAP)a1, &v24, &v23, &v22);
    v10 = v23;
    v12 = 0;
    if ( CursorMaskAndXorBits )
    {
      v13 = v23;
      v23 = (unsigned __int8 *)&a3[v5];
      v14 = 0;
LABEL_7:
      if ( v14 >= cy )
        goto LABEL_22;
      v15 = v13;
      v16 = 0;
      v17 = 0;
      while ( 1 )
      {
        v20 = v17;
        if ( v12 >= cx )
        {
          ++v14;
          v13 += ((cx + 15) >> 3) & 0xFFFFFFFE;
          v12 = 0;
          goto LABEL_7;
        }
        if ( !v17 )
        {
          v16 = *v15;
          v17 = 8;
        }
        v18 = v15 + 1;
        v21 = v16;
        if ( v20 )
          v18 = v15;
        v16 *= 2;
        --v17;
        v15 = v18;
        if ( a3 >= (unsigned int *)v23 )
          break;
        if ( v21 >= 0 )
          *a3 |= a5 ? 0 : 0xFF000000;
        else
          *((_BYTE *)a3 + 3) = 0;
        ++v12;
        ++a3;
      }
      v22 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1170);
    }
  }
  v7 = 0;
LABEL_22:
  if ( v10 )
    Win32FreePool(v10);
  return v7;
}
