/*
 * XREFs of MiImageCfgEnumNextImageExtensionRva @ 0x14077D11C
 * Callers:
 *     MiCopyToCfgBitMap @ 0x1409C8560 (MiCopyToCfgBitMap.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1409C9790 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiImageCfgEnumRvaListFirst @ 0x1409CA158 (MiImageCfgEnumRvaListFirst.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiImageCfgEnumNextImageExtensionRva(_DWORD *a1)
{
  int v1; // r8d
  __int64 v2; // rdx
  _DWORD v4[6]; // [rsp+0h] [rbp-18h]

  v1 = a1[5];
  if ( !v1 )
    return 0LL;
  v2 = (unsigned int)a1[6];
  v4[0] = 64;
  v4[1] = 192;
  v4[2] = 320;
  v4[3] = 448;
  if ( (unsigned int)v2 >= 4 )
    return 0LL;
  a1[1] = 1;
  a1[6] = v2 + 1;
  return (unsigned int)(v1 + v4[v2]);
}
