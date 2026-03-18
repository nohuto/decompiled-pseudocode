/*
 * XREFs of ?UserTextOutWInternal@@YAHPEAUHDC__@@HHPEBGIK@Z @ 0x1402F3A50
 * Callers:
 *     <none>
 * Callees:
 *     GreExtTextOutW @ 0x140057230 (GreExtTextOutW.c)
 */

__int64 __fastcall UserTextOutWInternal(
        HDC a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int16 *a4,
        unsigned int a5)
{
  unsigned int v6; // [rsp+38h] [rbp-10h]

  return GreExtTextOutW(a1, a2, a3, 0, 0LL, a4, a5, v6);
}
