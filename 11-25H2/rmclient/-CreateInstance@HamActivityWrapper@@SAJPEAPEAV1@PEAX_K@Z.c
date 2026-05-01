/*
 * XREFs of ?CreateInstance@HamActivityWrapper@@SAJPEAPEAV1@PEAX_K@Z @ 0x1800199D8
 * Callers:
 *     HampCltDelayCloseContextCreate @ 0x18001B560 (HampCltDelayCloseContextCreate.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180013CF8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall HamActivityWrapper::CreateInstance(struct HamActivityWrapper **a1, void *a2)
{
  _QWORD *v4; // rax

  v4 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    *v4 = &HamActivityWrapper::`vftable';
    v4[1] = 0LL;
    v4[2] = 0LL;
    v4[4] = -1LL;
    v4[10] = -1LL;
    v4[3] = a2;
    *((_DWORD *)v4 + 10) = 0;
    *(_QWORD *)((char *)v4 + 44) = 4LL;
    v4[7] = 0LL;
    v4[8] = 0LL;
    *((_DWORD *)v4 + 18) = 0;
    *((_DWORD *)v4 + 19) = 6912;
    v4[11] = 0LL;
    *((_DWORD *)v4 + 24) = 1;
  }
  else
  {
    v4 = 0LL;
  }
  *a1 = (struct HamActivityWrapper *)v4;
  return v4 == 0LL ? 0xC0000017 : 0;
}
