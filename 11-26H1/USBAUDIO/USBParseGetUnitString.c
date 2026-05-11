/*
 * XREFs of USBParseGetUnitString @ 0x1400381A0
 * Callers:
 *     USBParseExtensionUnit @ 0x1400373E0 (USBParseExtensionUnit.c)
 *     USBParseFeatureUnit @ 0x1400375B0 (USBParseFeatureUnit.c)
 *     USBParseMIDIElement @ 0x140038340 (USBParseMIDIElement.c)
 *     USBParseMIDIInJack @ 0x1400384E0 (USBParseMIDIInJack.c)
 *     USBParseMIDIOutJack @ 0x140038610 (USBParseMIDIOutJack.c)
 *     USBParseMixerUnit @ 0x1400387E0 (USBParseMixerUnit.c)
 *     USBParseProcessUnit @ 0x140038A70 (USBParseProcessUnit.c)
 *     USBParseSelectorUnit @ 0x140038D10 (USBParseSelectorUnit.c)
 *     USBParseTerminalUnit @ 0x1400424C0 (USBParseTerminalUnit.c)
 * Callees:
 *     memmove @ 0x14001C7C0 (memmove.c)
 *     USBHwSyncGetStringDescriptor @ 0x14002D008 (USBHwSyncGetStringDescriptor.c)
 *     USBHwAllocateAndBag @ 0x14002D6A0 (USBHwAllocateAndBag.c)
 */

__int64 __fastcall USBParseGetUnitString(__int64 a1, unsigned __int8 *a2, _QWORD *a3)
{
  __int64 v3; // rax
  int StringDescriptor; // esi
  unsigned __int64 v7; // r9
  __int64 v8; // rax
  unsigned __int8 *v9; // rax
  __int64 v10; // rcx
  unsigned __int8 v12; // bl
  unsigned __int8 *Pool2; // rax
  unsigned __int8 *v14; // rbp
  _WORD *v15; // rbx
  size_t v16; // rdi
  int v17; // [rsp+20h] [rbp-38h]
  unsigned int v18; // [rsp+60h] [rbp+8h] BYREF
  void *v19; // [rsp+68h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  *a3 = 0LL;
  StringDescriptor = 0;
  v7 = *(_QWORD *)(*(_QWORD *)(v3 + 72) + 40LL) + *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v3 + 72) + 40LL) + 2LL);
  v8 = *a2;
  if ( a2[2] != 7 )
  {
    v9 = &a2[v8 - 1];
    goto LABEL_10;
  }
  if ( (unsigned __int8)v8 < 7u || (unsigned __int64)&a2[v8] > v7 )
    return 3221225473LL;
  if ( (unsigned __int16)(*((_WORD *)a2 + 2) - 1) <= 1u )
  {
    v10 = a2[6];
    if ( *a2 >= (unsigned __int64)(v10 + 12) )
    {
      v9 = &a2[v10 + 12 + a2[v10 + 11]];
      if ( (unsigned __int64)v9 < v7 )
        goto LABEL_10;
    }
    return 3221225473LL;
  }
  v9 = &a2[v8 - 1];
LABEL_10:
  v12 = *v9;
  if ( *v9 )
  {
    Pool2 = (unsigned __int8 *)ExAllocatePool2(64LL, 255LL, 1096972357LL);
    v19 = 0LL;
    v14 = Pool2;
    v18 = 0;
    if ( Pool2 )
    {
      StringDescriptor = USBHwSyncGetStringDescriptor(a1, v12, 0x409u, Pool2, v17, &v18);
      if ( StringDescriptor < 0 )
      {
        if ( StringDescriptor == -1073741823 )
          StringDescriptor = 0;
      }
      else
      {
        StringDescriptor = USBHwAllocateAndBag(&v19, (unsigned int)*v14 + 2, 256LL, *(void **)(a1 + 8));
        if ( StringDescriptor >= 0 )
        {
          v15 = v19;
          v16 = (unsigned int)*v14 - 2;
          memmove(v19, v14 + 2, v16);
          *a3 = v15;
          v15[v16 >> 1] = 0;
        }
      }
      ExFreePool(v14);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)StringDescriptor;
}
