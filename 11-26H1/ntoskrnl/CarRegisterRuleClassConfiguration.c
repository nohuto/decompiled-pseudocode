/*
 * XREFs of CarRegisterRuleClassConfiguration @ 0x14064A020
 * Callers:
 *     CarRegisterDefaultRuleClassConfiguration @ 0x140649FD0 (CarRegisterDefaultRuleClassConfiguration.c)
 * Callees:
 *     CarDeregisterRuleClassConfiguration @ 0x140649950 (CarDeregisterRuleClassConfiguration.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 __fastcall CarRegisterRuleClassConfiguration(__int64 a1)
{
  unsigned int v1; // ebx
  char *Pool2; // rax
  char *v4; // rsi
  _QWORD *v5; // rax
  _QWORD *v6; // rcx

  v1 = 0;
  if ( a1 )
  {
    CarDeregisterRuleClassConfiguration(*(unsigned int *)(a1 + 4));
    Pool2 = (char *)ExAllocatePool2(0x40uLL);
    v4 = Pool2;
    if ( Pool2 )
    {
      memset_0(Pool2, 0, 0x68uLL);
      *(_OWORD *)v4 = *(_OWORD *)a1;
      *((_OWORD *)v4 + 1) = *(_OWORD *)(a1 + 16);
      *((_OWORD *)v4 + 2) = *(_OWORD *)(a1 + 32);
      *((_OWORD *)v4 + 3) = *(_OWORD *)(a1 + 48);
      *((_DWORD *)v4 + 16) = (*(_DWORD *)(a1 + 4) << 16) + 0x10000;
      *((_DWORD *)v4 + 17) = ((*(_DWORD *)(a1 + 4) << 16) + 0x10000) | 0xFFFF;
      *((_QWORD *)v4 + 10) = v4 + 72;
      *((_QWORD *)v4 + 9) = v4 + 72;
      v5 = v4 + 88;
      v6 = (_QWORD *)qword_140F08168;
      if ( *(__int64 **)qword_140F08168 != &CarConfigurationEntries )
        __fastfail(3u);
      *v5 = &CarConfigurationEntries;
      *((_QWORD *)v4 + 12) = v6;
      *v6 = v5;
      qword_140F08168 = (__int64)(v4 + 88);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
