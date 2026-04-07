/*
 * XREFs of DwmpCalculateColorizationColor @ 0x18004EC10
 * Callers:
 *     ?ApplyColorizationParameters@CDesktopManager@@QEAA_NPEAVCGlassColorizationParameters@@@Z @ 0x18004EB44 (-ApplyColorizationParameters@CDesktopManager@@QEAA_NPEAVCGlassColorizationParameters@@@Z.c)
 * Callees:
 *     ??$max@M@@YAMMM@Z @ 0x18004EDF0 (--$max@M@@YAMMM@Z.c)
 *     ?FloatColorChannelToByte@@YAEM@Z @ 0x18008D9F0 (-FloatColorChannelToByte@@YAEM@Z.c)
 */

__int64 __fastcall DwmpCalculateColorizationColor(int *a1, int *a2)
{
  float v4; // xmm6_4
  float v5; // xmm7_4
  float v6; // xmm9_4
  float v7; // xmm11_4
  float v8; // xmm8_4
  float v9; // xmm0_4
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx

  v4 = (float)*((unsigned __int8 *)a1 + 2) / 255.0;
  v5 = (float)*((unsigned __int8 *)a1 + 1) / 255.0;
  v6 = (float)*(unsigned __int8 *)a1 / 255.0;
  v7 = (float)a1[2] / 100.0;
  v8 = (float)((float)((float)((float)(v5 * 0.71520001) + (float)(v4 * 0.21259999)) + (float)(v6 * 0.0722))
             * (float)((float)a1[3] / 100.0))
     * v7;
  v9 = max<float>();
  v10 = FloatColorChannelToByte(v9) << 8;
  v11 = (FloatColorChannelToByte((float)((float)((float)*((unsigned __int8 *)a1 + 6) / 255.0) * v8) + (float)(v4 * v7)) | v10) << 8;
  v12 = (FloatColorChannelToByte((float)((float)((float)*((unsigned __int8 *)a1 + 5) / 255.0) * v8) + (float)(v5 * v7)) | v11) << 8;
  *a2 = FloatColorChannelToByte((float)((float)((float)*((unsigned __int8 *)a1 + 4) / 255.0) * v8) + (float)(v6 * v7)) | v12;
  return 0LL;
}
