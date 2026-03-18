/*
 * XREFs of MiPageAvailable @ 0x1402AA7BC
 * Callers:
 *     MiGetPageChain @ 0x140285DD0 (MiGetPageChain.c)
 *     MiGetPage @ 0x1402866A0 (MiGetPage.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x1402A9CD0 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiConvertFaultStatus @ 0x1403A2F50 (MiConvertFaultStatus.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPageAvailable(__int64 a1, __int16 a2)
{
  unsigned __int64 v2; // r9
  unsigned int v4; // r8d
  struct _KTHREAD *CurrentThread; // rcx
  int v7; // eax

  v2 = *(_QWORD *)(a1 + 22464);
  v4 = 1;
  if ( v2 )
    --v2;
  if ( v2 < 0x31 && (a2 & 0x200) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 0xC) != 8 )
    {
      v7 = *(_DWORD *)(a1 + 4);
      if ( v2 < 0x20 && (v7 & 4) != 0 )
      {
        return 0;
      }
      else if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 2) == 0 || v2 < 0x21 )
      {
        return ((unsigned __int8)v7 >> 4) & 1;
      }
    }
  }
  return v4;
}
