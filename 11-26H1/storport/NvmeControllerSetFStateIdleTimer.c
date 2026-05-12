/*
 * XREFs of NvmeControllerSetFStateIdleTimer @ 0x14003BD70
 * Callers:
 *     NvmeAdapterIdleCondition @ 0x14003B7F0 (NvmeAdapterIdleCondition.c)
 *     NvmeControllerPowerSetFState @ 0x14004E084 (NvmeControllerPowerSetFState.c)
 * Callees:
 *     <none>
 */

char __fastcall NvmeControllerSetFStateIdleTimer(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  unsigned int v4; // edx
  __int64 v5; // rcx
  __int64 v6; // rcx

  v2 = *(_QWORD *)(a1 + 1048);
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 128) + 160LL);
  if ( *(_DWORD *)(v3 + 136) == 1 )
  {
    v4 = *(_DWORD *)(v2 + 56);
  }
  else
  {
    v4 = *(_DWORD *)(v2 + 52);
    if ( v4 == -1 )
    {
      v6 = *(_QWORD *)(v3 + 8);
      if ( *(_DWORD *)(v6 + 68) )
      {
        if ( *(_DWORD *)(v6 + 16) <= 2u )
          return v3;
        v4 = *(_DWORD *)(v3 + 208);
      }
      else
      {
        v4 = *(_DWORD *)(v3 + 200);
      }
    }
  }
  if ( v4 )
  {
    *(_DWORD *)(*(_QWORD *)(v3 + 8) + 20LL) |= 0x100u;
    v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 160LL) + 8LL);
    LOBYTE(v3) = KeSetTimer(*(PKTIMER *)(v5 + 120), (LARGE_INTEGER)(-10000LL * v4), *(PKDPC *)(v5 + 112));
  }
  return v3;
}
