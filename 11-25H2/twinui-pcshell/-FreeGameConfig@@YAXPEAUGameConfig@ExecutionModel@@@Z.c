/*
 * XREFs of ?FreeGameConfig@@YAXPEAUGameConfig@ExecutionModel@@@Z @ 0x1800EF290
 * Callers:
 *     ?UpdateGameConfigStoreFromKGL@IsGameManager@@AEAAJPEAUIGameEntry@KnownGameList@@U_GUID@@K_NPEAVString@Internal@Windows@@PEAU4@@Z @ 0x1800EE7B8 (-UpdateGameConfigStoreFromKGL@IsGameManager@@AEAAJPEAUIGameEntry@KnownGameList@@U_GUID@@K_NPEAVS.c)
 *     ??1?$unique_struct@UGameConfig@ExecutionModel@@P6AXPEAU12@@Z$1?FreeGameConfig@@YAX0@Z$$T$0A@@wil@@QEAA@XZ @ 0x1802D1738 (--1-$unique_struct@UGameConfig@ExecutionModel@@P6AXPEAU12@@Z$1-FreeGameConfig@@YAX0@Z$$T$0A@@wil.c)
 * Callees:
 *     <none>
 */

void __fastcall FreeGameConfig(LPVOID *a1)
{
  unsigned int v2; // edi

  CoTaskMemFree(a1[3]);
  v2 = 0;
  if ( a1[1] )
  {
    if ( *((_DWORD *)a1 + 4) )
    {
      do
        CoTaskMemFree(*((LPVOID *)a1[1] + 2 * v2++ + 1));
      while ( v2 < *((_DWORD *)a1 + 4) );
    }
    CoTaskMemFree(a1[1]);
  }
  *(_OWORD *)a1 = 0LL;
  *((_OWORD *)a1 + 1) = 0LL;
  a1[4] = 0LL;
}
