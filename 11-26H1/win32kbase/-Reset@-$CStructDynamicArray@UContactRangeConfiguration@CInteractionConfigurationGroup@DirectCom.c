/*
 * XREFs of ?Reset@?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAAX_N@Z @ 0x1400A491C
 * Callers:
 *     ?ClearConfiguration@CInteractionConfigurationGroup@DirectComposition@@QEAAXXZ @ 0x1400A4818 (-ClearConfiguration@CInteractionConfigurationGroup@DirectComposition@@QEAAXXZ.c)
 *     ??1?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAA@XZ @ 0x1400A48A8 (--1-$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposi.c)
 *     ?ReleaseAllReferences@CInteractionConfigurationGroup@DirectComposition@@QEAAXXZ @ 0x1400A48E4 (-ReleaseAllReferences@CInteractionConfigurationGroup@DirectComposition@@QEAAXXZ.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 */

void __fastcall CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::Reset(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rdi
  char i; // si
  char *v7; // rcx

  v4 = 0LL;
  for ( i = a2; (unsigned int)v4 < *(_DWORD *)(a1 + 8); v4 = (unsigned int)(v4 + 1) )
  {
    v7 = *(char **)(*(_QWORD *)a1 + 8 * v4);
    if ( v7 )
      GreDeleteFastMutex(v7, a2, a3, a4);
  }
  if ( i )
  {
    if ( *(_QWORD *)a1 )
    {
      GreDeleteFastMutex(*(char **)a1, a2, a3, a4);
      *(_QWORD *)a1 = 0LL;
    }
    *(_DWORD *)(a1 + 12) = 0;
  }
  *(_DWORD *)(a1 + 8) = 0;
}
