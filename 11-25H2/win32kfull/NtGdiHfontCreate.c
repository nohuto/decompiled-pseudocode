/*
 * XREFs of NtGdiHfontCreate @ 0x1401814B0
 * Callers:
 *     <none>
 * Callees:
 *     hfontCreate @ 0x14008F860 (hfontCreate.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memmove @ 0x140342600 (memmove.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall NtGdiHfontCreate(char *Src, size_t Size, int a3, __int64 a4, void *a5)
{
  __int64 v6; // rdi
  char Srca[352]; // [rsp+40h] [rbp-1E8h] BYREF
  int v11; // [rsp+1A0h] [rbp-88h]

  v6 = (unsigned int)Size;
  if ( !Src || !(_DWORD)Size || (unsigned int)Size > 0x1A4 )
    return 0LL;
  memset_0(Srca, 0, 0x1A4uLL);
  if ( &Src[v6] < Src || (unsigned __int64)&Src[v6] > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(Srca, Src, (unsigned int)v6);
  v11 = 0;
  return hfontCreate(Srca, a3, 0, a5, 0);
}
