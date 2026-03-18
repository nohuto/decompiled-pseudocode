/*
 * XREFs of MiGetImageWowSubsystemIndex @ 0x1409C9B80
 * Callers:
 *     MiUpdateCfgSystemWideBitmap @ 0x1409C96A0 (MiUpdateCfgSystemWideBitmap.c)
 *     MiSelectImageBase @ 0x1409CACA8 (MiSelectImageBase.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetImageWowSubsystemIndex(__int64 a1)
{
  __int64 i; // rdx

  for ( i = 0LL; !(_DWORD)i; i = 1LL )
  {
    if ( *(_WORD *)(*(_QWORD *)(a1 + 56) + 48LL) == MiWowSubsystems6432[i] )
      return 0LL;
  }
  return 0xFFFFFFFFLL;
}
