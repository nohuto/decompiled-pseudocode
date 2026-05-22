/*
 * XREFs of ?GetNearestSupportedFixedColorAndDeviceChannels@NearestColor@@CAXAEBUColor@UI@Windows@@AEBULampAttributes@@PEAU234@PEAULampColor@@@Z @ 0x18006256C
 * Callers:
 *     ?ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z @ 0x180083B54 (-ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z.c)
 * Callees:
 *     ?SnapChannelToNearest@NearestColor@@CANNN@Z @ 0x180067FAC (-SnapChannelToNearest@NearestColor@@CANNN@Z.c)
 *     sqrt @ 0x18009AB90 (sqrt.c)
 */

void __fastcall NearestColor::GetNearestSupportedFixedColorAndDeviceChannels(
        const struct Windows::UI::Color *a1,
        const struct LampAttributes *a2,
        struct Windows::UI::Color *a3,
        struct LampColor *a4)
{
  int v4; // r15d
  double v8; // xmm6_8
  int v9; // ebx
  int v10; // esi
  double v11; // xmm7_8
  double v12; // xmm6_8
  double v13; // xmm0_8

  v4 = *((unsigned __int8 *)a2 + 24);
  v8 = 0.0;
  if ( (*((_WORD *)a2 + 12) || *((_BYTE *)a2 + 26)) && *((_BYTE *)a2 + 27) )
  {
    v9 = *((unsigned __int8 *)a2 + 25);
    v10 = *((unsigned __int8 *)a2 + 26);
    v11 = sqrt((double)(v10 * v10) + (double)(v9 * v9) + (double)(v4 * v4));
    v12 = v11;
    v13 = NearestColor::SnapChannelToNearest(
            (double)v9 / v11 * (double)*((unsigned __int8 *)a1 + 2)
          + (double)v4 / v11 * (double)*((unsigned __int8 *)a1 + 1)
          + (double)v10 / v11 * (double)*((unsigned __int8 *)a1 + 3),
            1.0 / (double)*((unsigned __int8 *)a2 + 27) * v11);
    if ( v13 <= v11 )
      v12 = v13;
    v8 = v12 / v11;
  }
  if ( a4 )
  {
    *(_BYTE *)a4 = v4;
    *((_BYTE *)a4 + 1) = *((_BYTE *)a2 + 25);
    *((_BYTE *)a4 + 2) = *((_BYTE *)a2 + 26);
    *((_BYTE *)a4 + 3) = (int)((double)*((unsigned __int8 *)a2 + 27) * v8);
  }
}
