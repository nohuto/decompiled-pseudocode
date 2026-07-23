/*
 * XREFs of PnpQueryID @ 0x1409B1418
 * Callers:
 *     PipProcessStartPhase3 @ 0x1409AB9E8 (PipProcessStartPhase3.c)
 * Callees:
 *     PnpSetInvalidIDEvent @ 0x1407B0BF0 (PnpSetInvalidIDEvent.c)
 *     PipSetDevNodeProblem @ 0x1409714C0 (PipSetDevNodeProblem.c)
 *     PipSetDevNodeFlags @ 0x1409AFE90 (PipSetDevNodeFlags.c)
 *     PnpIrpQueryID @ 0x1409B0948 (PnpIrpQueryID.c)
 *     PnpFixupID @ 0x1409B1598 (PnpFixupID.c)
 *     PnpLogEvent @ 0x140A37B48 (PnpLogEvent.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpQueryID(__int64 a1, int a2, PVOID *a3, _DWORD *a4)
{
  _QWORD *v5; // rcx
  int ID; // eax
  unsigned int v10; // ebx
  int v11; // r9d
  int v12; // edx
  int v13; // r8d
  int v14; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx
  _DWORD v18[2]; // [rsp+30h] [rbp-28h] BYREF
  const wchar_t *v19; // [rsp+38h] [rbp-20h]

  v18[1] = 0;
  v5 = *(_QWORD **)(a1 + 32);
  *a4 = 0;
  ID = PnpIrpQueryID(v5, a2, a3);
  v10 = ID;
  if ( ID >= 0 )
  {
    if ( a2 )
    {
      if ( a2 == 1 || a2 == 2 )
      {
        v11 = -1;
        v12 = 1024;
        v13 = 1;
LABEL_6:
        v14 = PnpFixupID((unsigned int)*a3, v12, v13, v11, *(_QWORD *)(a1 + 16) + 56LL);
LABEL_7:
        *a4 = 2 * v14;
        if ( 2 * v14 )
          return v10;
        v10 = -1073479624;
        goto LABEL_14;
      }
      if ( a2 != 3 )
      {
        v14 = 0;
        goto LABEL_7;
      }
      v11 = 0;
    }
    else
    {
      v11 = 1;
    }
    v13 = 0;
    v12 = 200;
    goto LABEL_6;
  }
  if ( ID == -1073479624 || !a2 || a2 == 3 && ID == -1073741670 )
  {
LABEL_14:
    PipSetDevNodeProblem(a1, 9, v10);
    v16 = *(_QWORD *)(a1 + 16);
    if ( (*(_DWORD *)(v16 + 396) & 0x200000) == 0 )
    {
      PipSetDevNodeFlags(v16, 0x200000u);
      PnpSetInvalidIDEvent((const void **)(*(_QWORD *)(a1 + 16) + 40LL));
    }
    if ( v10 != -1073479624 && !a2 && v10 != -1073741670 && v10 != -1073741810 )
    {
      v17 = *(_QWORD *)(a1 + 16) + 56LL;
      v18[0] = 5242958;
      v19 = L"failed IRP_MN_QUERY_ID-BusQueryDeviceID";
      PnpLogEvent(v17, v18, v10, 0LL, 0);
    }
  }
  if ( *a3 )
  {
    ExFreePoolWithTag(*a3, 0);
    *a3 = 0LL;
    *a4 = 0;
  }
  return v10;
}
