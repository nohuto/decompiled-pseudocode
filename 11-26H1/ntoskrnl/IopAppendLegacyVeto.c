/*
 * XREFs of IopAppendLegacyVeto @ 0x1407B5224
 * Callers:
 *     ExpQueryLegacyDriverInformation @ 0x14077338C (ExpQueryLegacyDriverInformation.c)
 *     IoGetLegacyVetoList @ 0x1409C05B0 (IoGetLegacyVetoList.c)
 *     PopFilterCapabilities @ 0x1409C06CC (PopFilterCapabilities.c)
 *     IopGetLegacyVetoListDrivers @ 0x1409C0B9C (IopGetLegacyVetoListDrivers.c)
 *     IopGetLegacyVetoListDeviceNode @ 0x1409C0E20 (IopGetLegacyVetoListDeviceNode.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

char __fastcall IopAppendLegacyVeto(const void ***a1, const void **a2)
{
  unsigned int v3; // r15d
  _WORD *Pool2; // rax
  _WORD *v6; // rdi
  PVOID *v7; // rsi
  const void *v8; // rdx
  const void **v9; // rax

  v3 = *(unsigned __int16 *)a2 + 2 + *((_DWORD *)a1 + 2);
  Pool2 = (_WORD *)ExAllocatePool2(0x40uLL);
  v6 = Pool2;
  if ( Pool2 )
  {
    v7 = (PVOID *)*a1;
    v8 = **a1;
    if ( v8 )
    {
      memmove(Pool2, v8, *((unsigned int *)a1 + 2));
      ExFreePoolWithTag(*v7, 0);
    }
    memmove(&v6[(unsigned __int64)*((unsigned int *)a1 + 2) >> 1], a2[1], *(unsigned __int16 *)a2);
    v9 = *a1;
    *((_DWORD *)a1 + 2) = v3;
    v6[((unsigned __int64)v3 >> 1) - 1] = 0;
    *v9 = v6;
    return 1;
  }
  else
  {
    *(_DWORD *)a1[3] = -1073741670;
    return 0;
  }
}
