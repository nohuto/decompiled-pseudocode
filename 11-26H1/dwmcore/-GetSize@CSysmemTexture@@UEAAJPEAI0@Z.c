/*
 * XREFs of ?GetSize@CSysmemTexture@@UEAAJPEAI0@Z @ 0x1802B9390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSysmemTexture::GetSize(CSysmemTexture *this, unsigned int *a2, unsigned int *a3)
{
  *a2 = *((_DWORD *)this - 24);
  *a3 = *((_DWORD *)this - 23);
  return 0LL;
}
