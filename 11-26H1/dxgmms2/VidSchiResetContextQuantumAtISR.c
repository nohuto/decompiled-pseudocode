/*
 * XREFs of VidSchiResetContextQuantumAtISR @ 0x14002BBA0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0piixqq_EtwWriteTransfer @ 0x14002B678 (McTemplateK0piixqq_EtwWriteTransfer.c)
 */

char __fastcall VidSchiResetContextQuantumAtISR(__int64 a1)
{
  __int64 v1; // r8
  char v2; // bl
  __int64 *v3; // rdx
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // r10
  __int64 v8; // rax

  v1 = *(_QWORD *)(a1 + 96);
  v2 = 0;
  if ( *(_BYTE *)(a1 + 648)
    || (*(_DWORD *)(*(_QWORD *)(v1 + 24) + 2824LL) & 8) == 0
    || gulPriorityToYieldPriorityBand[*(unsigned int *)(a1 + 412)] )
  {
    v3 = (__int64 *)(a1 + 448);
    *(_QWORD *)(a1 + 448) = *(_QWORD *)(a1 + 480);
    *(_BYTE *)(a1 + 648) = 0;
LABEL_3:
    v2 = 1;
    _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 444), 3, 2);
    goto LABEL_4;
  }
  if ( *(_QWORD *)(v1 + 2128) )
    v5 = *(_QWORD *)(v1 + 2136);
  else
    v5 = *(_QWORD *)(a1 + 480);
  if ( *(_BYTE *)(v1 + 2144) && *(__int64 *)(a1 + 448) <= 0 )
  {
    v6 = *(_QWORD *)(v1 + 2120);
    if ( *(_QWORD *)(a1 + 496) == v6 )
      v5 = 0LL;
    else
      *(_QWORD *)(a1 + 496) = v6;
  }
  v3 = (__int64 *)(a1 + 448);
  v7 = v5 + *(_QWORD *)(a1 + 448);
  *(_QWORD *)(a1 + 448) = v7;
  if ( v7 > 0 )
  {
    v8 = *(_QWORD *)(a1 + 480);
    if ( v7 > v8 )
    {
      *v3 = v8;
      v3 = (__int64 *)(a1 + 448);
    }
    goto LABEL_3;
  }
LABEL_4:
  if ( (byte_14008A201 & 2) != 0 )
    McTemplateK0piixqq_EtwWriteTransfer(a1, *(_QWORD *)(a1 + 456), *v3);
  return v2;
}
