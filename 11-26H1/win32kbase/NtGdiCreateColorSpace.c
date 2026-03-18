/*
 * XREFs of NtGdiCreateColorSpace @ 0x1401F26C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GreProbeAndReadFromUntrustedVa@@YAXPEAX_KPEBX11@Z @ 0x140040790 (-GreProbeAndReadFromUntrustedVa@@YAXPEAX_KPEBX11@Z.c)
 *     ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x1401BFD9C (-GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

struct HOBJ__ *__fastcall NtGdiCreateColorSpace(void *a1)
{
  _BYTE v3[592]; // [rsp+40h] [rbp-268h] BYREF

  memset(v3, 0, sizeof(v3));
  GreProbeAndReadFromUntrustedVa(v3, 0x250uLL, a1, 0x250uLL, 1uLL);
  return GreCreateColorSpace((struct _LOGCOLORSPACEEXW *)v3);
}
