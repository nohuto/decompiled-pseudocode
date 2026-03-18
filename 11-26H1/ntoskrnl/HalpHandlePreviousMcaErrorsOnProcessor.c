/*
 * XREFs of HalpHandlePreviousMcaErrorsOnProcessor @ 0x140BE9CC8
 * Callers:
 *     HalpHandlePreviousMcaErrors @ 0x140BE9B88 (HalpHandlePreviousMcaErrors.c)
 *     HalpInitializeMce @ 0x140BE9EA4 (HalpInitializeMce.c)
 * Callees:
 *     HalpMcaReadErrorPresence @ 0x1404537F4 (HalpMcaReadErrorPresence.c)
 *     HalpMcaReadError @ 0x140453B40 (HalpMcaReadError.c)
 *     HalpMcaClearError @ 0x140453EC4 (HalpMcaClearError.c)
 *     HalpMcaReportError @ 0x140453F00 (HalpMcaReportError.c)
 *     HalpMceInitializeErrorPacketContents @ 0x140C0AFC4 (HalpMceInitializeErrorPacketContents.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall HalpHandlePreviousMcaErrorsOnProcessor(__int64 a1, _DWORD *a2, unsigned __int64 a3, __int64 a4)
{
  char v6; // r14
  _DWORD *v7; // rdi
  __int64 Pool2; // rax
  int v9; // [rsp+68h] [rbp+20h] BYREF

  v9 = 0;
  v6 = a1;
  if ( (int)HalpMcaReadErrorPresence(a1, a3, a3, a4) >= 0 )
  {
    if ( a2 )
    {
      v7 = a2;
    }
    else
    {
      Pool2 = ExAllocatePool2(0x40uLL);
      v7 = (_DWORD *)Pool2;
      if ( !Pool2 )
        return;
      HalpMceInitializeErrorPacketContents(Pool2);
    }
    while ( (int)HalpMcaReadError(17, v7 + 20, &v9, 0LL, a3) >= 0 )
    {
      if ( v6 )
      {
        v7[5] = v9;
        v7[3] = 1;
        HalpMcaReportError((__int64)v7, (__int64)(v7 + 20), a3);
      }
      HalpMcaClearError((__int64)(v7 + 20), a3);
    }
    if ( !a2 )
      ExFreePoolWithTag(v7, 0x576C6148u);
  }
}
