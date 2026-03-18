/*
 * XREFs of ApiSetInkProcessorIsInkDevice @ 0x1401BC890
 * Callers:
 *     RIMCreateHidDesc @ 0x1400780EC (RIMCreateHidDesc.c)
 * Callees:
 *     InkProcessorIsInkDevice @ 0x140174748 (InkProcessorIsInkDevice.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetInkProcessorIsInkDevice(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  unsigned __int16 v5; // bp
  unsigned int v6; // ebx
  int (*v7)(void); // rax

  v5 = a1;
  v6 = 0;
  v7 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 4240LL);
  if ( v7 && v7() >= 0 )
    return (unsigned int)InkProcessorIsInkDevice(v5, a2, a3);
  return v6;
}
