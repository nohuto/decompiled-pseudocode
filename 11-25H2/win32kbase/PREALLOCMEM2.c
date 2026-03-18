/*
 * XREFs of PREALLOCMEM2 @ 0x1401C5838
 * Callers:
 *     ?HmgpAcquireHandleIndex@@YA_NAEAUSESSION_GLOBALS@Base@Gre@@PEAU_GRETHREAD@@PEAI@Z @ 0x140027AD8 (-HmgpAcquireHandleIndex@@YA_NAEAUSESSION_GLOBALS@Base@Gre@@PEAU_GRETHREAD@@PEAI@Z.c)
 *     ?MakeRoom@ThreadRestrictNewHandlesRegion@@QEAA_NXZ @ 0x1400E4EB8 (-MakeRoom@ThreadRestrictNewHandlesRegion@@QEAA_NXZ.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     PALLOCNOZ @ 0x14004B924 (PALLOCNOZ.c)
 *     memset @ 0x140243000 (memset.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

char *__fastcall PREALLOCMEM2(PVOID Buffer, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rbx
  char *v6; // rax
  char *v7; // rdi

  v3 = a2;
  v6 = (char *)PALLOCNOZ(a3, 1852994631LL);
  v7 = v6;
  if ( v6 )
  {
    if ( (unsigned int)v3 >= a3 )
      v3 = a3;
    memmove(v6, Buffer, (unsigned int)v3);
    GreDeleteFastMutex((char *)Buffer);
    memset(&v7[v3], 0, a3 - (unsigned int)v3);
  }
  return v7;
}
