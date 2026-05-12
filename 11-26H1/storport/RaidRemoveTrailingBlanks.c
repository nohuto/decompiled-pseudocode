/*
 * XREFs of RaidRemoveTrailingBlanks @ 0x14003C21C
 * Callers:
 *     RaidBusEnumeratorVisitUnit @ 0x140009CE4 (RaidBusEnumeratorVisitUnit.c)
 *     StorProcessNVMeEnumeratorFillInfo @ 0x1400C72B8 (StorProcessNVMeEnumeratorFillInfo.c)
 *     NvmeNamespaceGetDeviceId @ 0x140106390 (NvmeNamespaceGetDeviceId.c)
 *     NvmeNamespaceQueryDeviceTextIrp @ 0x1401A7B78 (NvmeNamespaceQueryDeviceTextIrp.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidRemoveTrailingBlanks(__int64 a1, int a2)
{
  __int64 v3; // rax
  bool v4; // sf
  int v5; // edx
  _BYTE *i; // rcx

  if ( a2 )
  {
    v3 = (unsigned int)(a2 - 1);
    v4 = a2 - 2 < 0;
    v5 = a2 - 2;
    *(_BYTE *)(v3 + a1) = 0;
    if ( !v4 )
    {
      for ( i = (_BYTE *)(v5 + a1); (__int64)&i[-a1] >= 0; --i )
      {
        if ( *i == 32 )
        {
          *i = 0;
        }
        else if ( *i )
        {
          break;
        }
        --v5;
      }
    }
    *(_BYTE *)(v5 + a1 + 1) = 0;
  }
}
