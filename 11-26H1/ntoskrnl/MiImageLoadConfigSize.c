/*
 * XREFs of MiImageLoadConfigSize @ 0x140ACCE3C
 * Callers:
 *     MiParseImageLoadConfig @ 0x14099D9D0 (MiParseImageLoadConfig.c)
 *     MiCaptureImageHeaderFieldsForPeb @ 0x140ACCBC8 (MiCaptureImageHeaderFieldsForPeb.c)
 * Callees:
 *     MmIsKernelAddress @ 0x14044F260 (MmIsKernelAddress.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404DEB18 (MiModeCopyExceptionFilterEx.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall MiImageLoadConfigSize(
        unsigned int *a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned int *a4,
        __int16 a5)
{
  bool IsKernelAddress; // r9
  __int64 v10; // r8
  unsigned int *v11; // r12
  unsigned int v12; // ecx
  unsigned int *v13; // rbx
  unsigned int v14; // edx

  IsKernelAddress = MmIsKernelAddress(a2);
  *a1 = 0;
  v10 = *a4;
  if ( (_DWORD)v10 )
  {
    v11 = a4 + 1;
    v12 = a4[1];
    if ( ((a5 - 267) & 0xFEFF) == 0
      && v12 >= 4
      && (unsigned int)v10 + v12 > (unsigned int)v10
      && (unsigned int)v10 + v12 <= a3 )
    {
      v13 = (unsigned int *)(a2 + v10);
      if ( a5 == 267 )
      {
        v12 = IsKernelAddress ? *v13 : RtlReadULongFromUser(v13);
        if ( v12 < *v11 )
          v12 = *v11;
      }
      v14 = *a4 + v12;
      if ( v14 > *a4 && v14 <= a3 )
      {
        if ( v12 && ((unsigned __int8)v13 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        *a1 = v12;
      }
    }
  }
  return 0LL;
}
