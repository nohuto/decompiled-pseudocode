/*
 * XREFs of RIMIDEAllocateInjectedInfo @ 0x1401A2690
 * Callers:
 *     RIMIDECreateHIDDesc @ 0x14002A1AC (RIMIDECreateHIDDesc.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 */

__int64 __fastcall RIMIDEAllocateInjectedInfo(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  __int64 v4; // rax

  result = Win32AllocPoolZInitImpl(256LL, 0x60uLL, 0x6A6E6952u);
  v3 = result;
  if ( result )
  {
    v4 = Win32AllocPoolZInitImpl(256LL, 8LL * *(unsigned int *)(a1 + 96), 0x6A6E6952u);
    if ( v4 )
    {
      *(_QWORD *)(v3 + 72) = v4;
    }
    else
    {
      GreDeleteFastMutex((char *)v3);
      return 0LL;
    }
    return v3;
  }
  return result;
}
