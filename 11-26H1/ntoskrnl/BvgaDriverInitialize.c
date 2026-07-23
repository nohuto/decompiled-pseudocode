/*
 * XREFs of BvgaDriverInitialize @ 0x140CC0150
 * Callers:
 *     InbvDriverInitialize @ 0x140CC0070 (InbvDriverInitialize.c)
 * Callees:
 *     _strupr @ 0x1405377E0 (_strupr.c)
 *     strstr @ 0x140537FA0 (strstr.c)
 *     BvgaSaveResources @ 0x140CC02C8 (BvgaSaveResources.c)
 *     FindBitmapResource @ 0x140CC035C (FindBitmapResource.c)
 */

char __fastcall BvgaDriverInitialize(unsigned int a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // edi
  __int64 v5; // r8
  char result; // al
  char *v7; // rcx
  char *v8; // rax
  __int64 v9; // rbx
  __int64 BitmapResource; // rax

  v4 = a1;
  v5 = a2;
  LOBYTE(a2) = 0;
  if ( BvgaBootDriverFullyInitialized == 1 )
    return 1;
  BootDriverLock = 0LL;
  if ( a1 == 1 && !BvgaDisplayState )
  {
    v7 = *(char **)(v5 + 216);
    LOBYTE(a2) = !v7 || (v8 = strupr(v7)) == 0LL || strstr(v8, "BOOTLOGO") == 0LL;
  }
  result = VidInitialize(v4, a2, v5);
  BvgaBootDriverInstalled = result;
  if ( result )
  {
    if ( v4 != 1 )
      return BvgaBootDriverInstalled;
    BvgaBootDriverFullyInitialized = 1;
    ResourceCount = a3;
    if ( a3 <= 7 )
    {
      if ( !a3 )
      {
LABEL_15:
        BvgaSaveResources();
        BvgaProgressState = 0;
        dword_140F86AC4 = 10000;
        dword_140F86AC8 = 100;
        return BvgaBootDriverInstalled;
      }
    }
    else
    {
      ResourceCount = 7;
    }
    do
    {
      v9 = v4 - 1;
      BitmapResource = FindBitmapResource(v4++, (char *)&ResourceSize + 4 * v9);
      ResourceList[v9] = BitmapResource;
    }
    while ( v4 <= ResourceCount );
    goto LABEL_15;
  }
  return result;
}
