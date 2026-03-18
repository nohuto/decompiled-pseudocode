/*
 * XREFs of vCleanupOwnedRedirectionDeviceBitmapsWrap @ 0x140007CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?vCleanupOwnedRedirectionDeviceBitmaps@@YAXAEAVPDEVOBJ@@@Z @ 0x140007D00 (-vCleanupOwnedRedirectionDeviceBitmaps@@YAXAEAVPDEVOBJ@@@Z.c)
 */

void __fastcall vCleanupOwnedRedirectionDeviceBitmapsWrap(__int64 a1)
{
  __int64 v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = a1;
  vCleanupOwnedRedirectionDeviceBitmaps((struct PDEVOBJ *)&v1);
}
