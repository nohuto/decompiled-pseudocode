/*
 * XREFs of PpmPerfApplyHiddenProcessorState @ 0x140608EC8
 * Callers:
 *     PpmPerfApplyProcessorStates @ 0x14025B7A0 (PpmPerfApplyProcessorStates.c)
 * Callees:
 *     PpmEventProcessorPerfStateChange @ 0x1402575A0 (PpmEventProcessorPerfStateChange.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall PpmPerfApplyHiddenProcessorState(__int64 a1, __int64 a2, char a3)
{
  bool v5; // si
  int v6; // eax
  int v7; // edx
  _OWORD *v8; // rdx

  v5 = *(_BYTE *)(a1 + 502) || *(_BYTE *)(a1 + 497) != 0xFD && a3;
  v6 = *(_DWORD *)(a1 + 868);
  v7 = *(_DWORD *)(a2 + 144);
  if ( a3 )
  {
    *(_DWORD *)(a2 + 144) = 0;
LABEL_9:
    v8 = (_OWORD *)(a2 + 64);
    *(_DWORD *)(a2 + 156) = *(_DWORD *)(a2 + 80);
    *(_DWORD *)(a2 + 152) = *(_DWORD *)(a2 + 84);
    if ( *(_BYTE *)(a1 + 944) )
      *(_DWORD *)(a2 + 148) = -1;
    else
      *(_DWORD *)(a2 + 148) = *(_DWORD *)(a1 + 888);
    *v8 = *(_OWORD *)(a1 + 872);
    *(_OWORD *)(a2 + 80) = *(_OWORD *)(a1 + 888);
    *(_OWORD *)(a2 + 96) = *(_OWORD *)(a1 + 904);
    *(_OWORD *)(a2 + 112) = *(_OWORD *)(a1 + 920);
    *(_OWORD *)(a2 + 128) = *(_OWORD *)(a1 + 936);
    LOBYTE(v6) = guard_dispatch_icall_no_overrides(*(_QWORD *)(a2 + 8), v8);
    goto LABEL_13;
  }
  if ( v7 != v6 )
    goto LABEL_9;
LABEL_13:
  if ( *(_DWORD *)(a2 + 16) == 1 && !a3 )
    LOBYTE(v6) = PpmEventProcessorPerfStateChange(*(_QWORD *)a2, v5, 0);
  return v6;
}
