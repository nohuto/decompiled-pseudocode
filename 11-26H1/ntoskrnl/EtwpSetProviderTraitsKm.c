/*
 * XREFs of EtwpSetProviderTraitsKm @ 0x14093D31C
 * Callers:
 *     EtwSetInformation @ 0x1408287B0 (EtwSetInformation.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     EtwpEventWriteRegistrationStatus @ 0x140825610 (EtwpEventWriteRegistrationStatus.c)
 *     EtwpSetProviderTraitsCommon @ 0x14093D5E4 (EtwpSetProviderTraitsCommon.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpSetProviderTraitsKm(__int64 a1, void *Src, unsigned __int16 a3)
{
  __int16 v3; // ax
  unsigned int v5; // esi
  __int64 Pool2; // rax
  __int64 v8; // rbx
  unsigned int v9; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // [rsp+20h] [rbp-38h]
  int v15; // [rsp+60h] [rbp+8h] BYREF

  v3 = *(_WORD *)(a1 + 98);
  v5 = a3;
  v15 = 0;
  if ( (v3 & 8) != 0 || (v3 & 1) == 0 )
  {
    v9 = -1073741811;
  }
  else if ( *(_QWORD *)(a1 + 112) )
  {
    v9 = -1073741823;
  }
  else
  {
    Pool2 = ExAllocatePool2(0x40uLL);
    v8 = Pool2;
    if ( Pool2 )
    {
      memmove((void *)(Pool2 + 28), Src, v5);
      v9 = EtwpSetProviderTraitsCommon(0, 0, (int)&v15, a1, v8, v5, &unk_140F03500, (__int64)&xmmword_140F03580);
      if ( !v9 )
        return v9;
    }
    else
    {
      v9 = -1073741670;
    }
  }
  if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_SET_TRAITS_FAILED) )
  {
    LODWORD(v14) = v9;
    EtwpEventWriteRegistrationStatus(v12, v11, v13, a1, v14);
  }
  return v9;
}
