/*
 * XREFs of ?GetSize@CMappedTexture@@UEAAJPEAI0@Z @ 0x1802B8B60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMappedTexture::GetSize(CMappedTexture *this, unsigned int *a2, unsigned int *a3)
{
  *a2 = *((_DWORD *)this + 4);
  *a3 = *((_DWORD *)this + 5);
  return 0LL;
}
