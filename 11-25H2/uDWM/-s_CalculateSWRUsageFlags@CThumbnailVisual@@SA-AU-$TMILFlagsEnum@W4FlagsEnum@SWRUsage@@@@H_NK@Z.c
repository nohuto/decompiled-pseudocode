/*
 * XREFs of ?s_CalculateSWRUsageFlags@CThumbnailVisual@@SA?AU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@H_NK@Z @ 0x1800769FC
 * Callers:
 *     ?EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentation@@@Z @ 0x1800150BC (-EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentatio.c)
 *     ?QueryWindowThumbnailSourceSize@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_QUERYWINDOWTHUMBNAILSOURCESIZE@@@Z @ 0x18008F2B0 (-QueryWindowThumbnailSourceSize@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_QUERYWINDOWTHUMBNAI.c)
 * Callees:
 *     <none>
 */

unsigned int *__fastcall CThumbnailVisual::s_CalculateSWRUsageFlags(unsigned int *a1, int a2, char a3, unsigned int a4)
{
  unsigned int *result; // rax

  result = a1;
  *a1 = (a2 != 0 ? 6 : 2) | (a3 != 0 ? 0x120 : 0) | ((a4 & 0x1000000 | ((a4 & 0x100000 | (a4 >> 1) & 0x400000) >> 1)) >> 10);
  return result;
}
