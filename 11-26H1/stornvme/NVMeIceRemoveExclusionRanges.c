/*
 * XREFs of NVMeIceRemoveExclusionRanges @ 0x140031F54
 * Callers:
 *     NVMeControllerRemove @ 0x14000E0B0 (NVMeControllerRemove.c)
 *     NVMeIceConfigureExclusionAddress @ 0x1400315BC (NVMeIceConfigureExclusionAddress.c)
 * Callees:
 *     memcmp @ 0x140032620 (memcmp.c)
 */

__int64 __fastcall NVMeIceRemoveExclusionRanges(__int64 a1, const void *a2)
{
  unsigned int v4; // r14d
  _QWORD **i; // rdi
  __int64 v6; // r9
  int v7; // eax
  _BYTE v9[32]; // [rsp+40h] [rbp-28h] BYREF

  memset(v9, 0, sizeof(v9));
  if ( !a2 )
    return 3238002694LL;
  v4 = StorPortExtendedFunction(141LL, a1, *(unsigned int *)(a1 + 4336), *(unsigned int *)(a1 + 4340));
  StorPortExtendedFunction(93LL, a1, 1LL, a1 + 4376);
  if ( v4 )
  {
    ++*(_DWORD *)(a1 + 4472);
  }
  else
  {
    for ( i = *(_QWORD ***)(a1 + 4360); i != (_QWORD **)(a1 + 4360); i = (_QWORD **)*i )
    {
      if ( !memcmp(i + 2, a2, 0x20uLL) )
      {
        *i[1] = *i;
        (*i)[1] = i[1];
        StorPortExtendedFunction(1LL, a1, i, v6);
        goto LABEL_9;
      }
    }
    MEMORY[0] = 0;
LABEL_9:
    v7 = *(_DWORD *)(a1 + 4448) + 1;
    ++*(_DWORD *)(a1 + 4468);
    *(_DWORD *)(a1 + 4448) = v7;
  }
  StorPortNotification(4100LL, a1, v9);
  return v4;
}
