/*
 * XREFs of VerifierIoConnectInterruptEx @ 0x140B91C00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 *     ViCtxSetPrivateConnectParameters @ 0x140B9227C (ViCtxSetPrivateConnectParameters.c)
 */

__int64 __fastcall VerifierIoConnectInterruptEx(__int64 a1)
{
  int v2; // edi
  int v3; // eax
  PVOID v4; // rcx
  int v5; // eax
  int v6; // eax
  _DWORD v8[4]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v9; // [rsp+30h] [rbp-48h]
  PVOID P; // [rsp+88h] [rbp+10h] BYREF

  P = 0LL;
  v8[1] = 0;
  memset_0(v8, 0, 0x4CuLL);
  if ( (VfRuleClasses & 0x800) != 0 && ViCtxInitializedIsrStateBlocks && (unsigned int)(*(_DWORD *)a1 - 1) <= 2 )
  {
    v2 = ViCtxSetPrivateConnectParameters(v8, a1, &P);
    if ( v2 >= 0 )
    {
      v3 = guard_dispatch_icall_no_overrides(v8);
      v4 = P;
      v2 = v3;
      if ( P )
      {
        v5 = v8[0];
        *(_DWORD *)a1 = v8[0];
        if ( v2 < 0 )
        {
          ExFreePoolWithTag(v4, 0);
        }
        else
        {
          v6 = v5 - 1;
          if ( !v6 || (unsigned int)(v6 - 1) <= 1 )
            *(_QWORD *)(a1 + 16) = v9;
        }
      }
    }
  }
  else
  {
    return (unsigned int)guard_dispatch_icall_no_overrides(a1);
  }
  return (unsigned int)v2;
}
