/*
 * XREFs of ?Reset@?$CDynamicArray@I$0HHHAHDFF@@@QEAAX_N@Z @ 0x1400A46C0
 * Callers:
 *     ??1CInteractionMarshaler@DirectComposition@@UEAA@XZ @ 0x1400A4718 (--1CInteractionMarshaler@DirectComposition@@UEAA@XZ.c)
 *     ?ReleaseAllReferences@CInteractionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1400A4770 (-ReleaseAllReferences@CInteractionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 */

void __fastcall CDynamicArray<unsigned int,2003858261>::Reset(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char *v5; // rcx

  v5 = *(char **)a1;
  if ( v5 )
  {
    GreDeleteFastMutex(v5, a2, a3, a4);
    *(_QWORD *)a1 = 0LL;
  }
  *(_QWORD *)(a1 + 8) = 0LL;
}
