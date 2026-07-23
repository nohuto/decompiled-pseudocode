/*
 * XREFs of HalpQueryAcpiResourceRequirements @ 0x1407886E4
 * Callers:
 *     HalpQueryResources @ 0x140784D58 (HalpQueryResources.c)
 *     HalpDispatchPnp @ 0x140B1CA40 (HalpDispatchPnp.c)
 * Callees:
 *     HalpInterruptModel @ 0x140434CC0 (HalpInterruptModel.c)
 *     HalQueryMaximumProcessorCount @ 0x1404362A0 (HalQueryMaximumProcessorCount.c)
 *     HalpInterruptGetIrtInfo @ 0x1407840A8 (HalpInterruptGetIrtInfo.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall HalpQueryAcpiResourceRequirements(_QWORD *a1)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // esi
  __int64 result; // rax
  unsigned int v9; // ebp
  unsigned int v10; // edi
  unsigned int v11; // esi
  _DWORD *Pool2; // rax
  char *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // [rsp+20h] [rbp-28h] BYREF
  int v16; // [rsp+28h] [rbp-20h]

  v15 = 0LL;
  v16 = 0;
  v2 = HalpInterruptModel() - 1;
  if ( v2 && (v3 = v2 - 1) != 0 && (v4 = v3 - 1) != 0 && (v5 = v4 - 1) != 0 && v5 != 4092 )
  {
    v6 = 0;
    v7 = 0;
  }
  else
  {
    result = HalpInterruptGetIrtInfo((__int64)&v15);
    if ( (int)result < 0 )
      return result;
    v7 = 205;
    v6 = 205 - HIDWORD(v15) / (unsigned int)HalQueryMaximumProcessorCount();
  }
  if ( SecondaryIcServicesEnabled )
  {
    v9 = v7;
    v10 = 256;
  }
  else
  {
    v9 = -1;
    v10 = 0;
  }
  v11 = v10 - v6 + v7;
  Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL);
  if ( !Pool2 )
    return 3221225626LL;
  *Pool2 = 32 * (v11 - 1) + 72;
  Pool2[7] = 1;
  Pool2[1] = 15;
  Pool2[2] = -1;
  Pool2[8] = 65537;
  Pool2[9] = v11;
  if ( v11 )
  {
    v13 = (char *)Pool2 + 42;
    v14 = v11;
    do
    {
      if ( v6 >= v9 && v6 < v10 )
        v6 = v10;
      *(_DWORD *)(v13 + 6) = v6;
      *(_DWORD *)(v13 + 10) = v6++;
      *(_WORD *)(v13 - 1) = 258;
      v13 += 32;
      --v14;
    }
    while ( v14 );
  }
  *a1 = Pool2;
  return 0LL;
}
