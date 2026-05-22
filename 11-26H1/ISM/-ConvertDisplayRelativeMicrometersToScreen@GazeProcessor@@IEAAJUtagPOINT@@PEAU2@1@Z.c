/*
 * XREFs of ?ConvertDisplayRelativeMicrometersToScreen@GazeProcessor@@IEAAJUtagPOINT@@PEAU2@1@Z @ 0x1801BCE40
 * Callers:
 *     ?OnInputReport@GazeProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801BD350 (-OnInputReport@GazeProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?GetClippedPointInRect@@YA?AUtagPOINT@@AEBU1@AEBUtagRECT@@PEA_N@Z @ 0x1801BCF74 (-GetClippedPointInRect@@YA-AUtagPOINT@@AEBU1@AEBUtagRECT@@PEA_N@Z.c)
 */

__int64 __fastcall GazeProcessor::ConvertDisplayRelativeMicrometersToScreen(
        GazeProcessor *this,
        struct tagPOINT a2,
        struct tagPOINT *a3,
        struct tagPOINT *a4)
{
  struct tagPOINT ClippedPointInRect; // rax
  struct tagPOINT *v5; // r10
  struct tagPOINT v7; // [rsp+30h] [rbp+8h]

  v7.x = (int)(float)((float)((float)((float)a2.y * *((float *)this + 27)) + (float)((float)a2.x * *((float *)this + 25)))
                    + *((float *)this + 29));
  v7.y = (int)(float)((float)((float)((float)a2.y * *((float *)this + 28)) + (float)((float)a2.x * *((float *)this + 26)))
                    + *((float *)this + 30));
  *a3 = v7;
  if ( a4 )
  {
    ClippedPointInRect = GetClippedPointInRect(a3, (const struct tagRECT *)((char *)this + 124), (bool *)a3);
    *v5 = ClippedPointInRect;
  }
  return 0LL;
}
