/*
 * XREFs of PREALLOCMEM2 @ 0x1401EDDDC
 * Callers:
 *     ?HmgpAcquireHandleIndex@@YA_NAEAUSESSION_GLOBALS@Base@Gre@@PEAU_GRETHREAD@@PEAI@Z @ 0x1400C5B10 (-HmgpAcquireHandleIndex@@YA_NAEAUSESSION_GLOBALS@Base@Gre@@PEAU_GRETHREAD@@PEAI@Z.c)
 *     ?MakeRoom@ThreadRestrictNewHandlesRegion@@QEAA_NXZ @ 0x14012E1B0 (-MakeRoom@ThreadRestrictNewHandlesRegion@@QEAA_NXZ.c)
 * Callees:
 *     PALLOCNOZ @ 0x14000E6AC (PALLOCNOZ.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     memset @ 0x14024BD80 (memset.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

char *__fastcall PREALLOCMEM2(PVOID Buffer, size_t Size, unsigned int a3)
{
  unsigned int v3; // ebx
  char *v6; // rax
  char *v7; // rdi
  unsigned int v8; // r9d
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9

  v3 = Size;
  v6 = (char *)PALLOCNOZ(a3, 0x6E727447u);
  v7 = v6;
  if ( v6 )
  {
    v8 = a3;
    if ( v3 < a3 )
      v8 = v3;
    v9 = v8;
    memmove(v6, Buffer, v8);
    GreDeleteFastMutex((char *)Buffer, v10, v11, v12);
    memset(&v7[v9], 0, a3 - (unsigned int)v9);
  }
  return v7;
}
