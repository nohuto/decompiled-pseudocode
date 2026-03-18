/*
 * XREFs of PnpQueryDeviceID @ 0x140AA88B8
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140AA5E3C (PiProcessNewDeviceNode.c)
 * Callees:
 *     wcschr @ 0x140537F60 (wcschr.c)
 *     PnpSetInvalidIDEvent @ 0x1407ADB90 (PnpSetInvalidIDEvent.c)
 *     PipSetDevNodeFlags @ 0x14090DD60 (PipSetDevNodeFlags.c)
 *     PnpIrpQueryID @ 0x14090E818 (PnpIrpQueryID.c)
 *     PnpFixupID @ 0x14090F468 (PnpFixupID.c)
 *     PipSetDevNodeProblem @ 0x140916A54 (PipSetDevNodeProblem.c)
 *     PnpLogEvent @ 0x140AA4138 (PnpLogEvent.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpQueryDeviceID(__int64 a1, wchar_t **a2, _QWORD *a3)
{
  _QWORD *v6; // rcx
  int v7; // eax
  wchar_t *v8; // rdi
  int v9; // ebx
  __int64 *v10; // rsi
  wchar_t *v11; // rax
  const void **v13; // rcx
  const void *v14[2]; // [rsp+30h] [rbp-38h] BYREF
  wchar_t *Str; // [rsp+70h] [rbp+8h] BYREF

  *a2 = 0LL;
  *a3 = 0LL;
  v6 = *(_QWORD **)(a1 + 32);
  Str = 0LL;
  HIDWORD(v14[0]) = 0;
  v7 = PnpIrpQueryID(v6, 0, &Str);
  v8 = Str;
  v9 = v7;
  v10 = (__int64 *)(a1 + 16);
  if ( v7 >= 0 )
  {
    if ( 2 * (unsigned int)PnpFixupID((int *)Str, 0xC8u, 0, 1u, *v10 + 56) )
    {
LABEL_3:
      *a2 = v8;
      v11 = wcschr(v8, 0x5Cu);
      *v11 = 0;
      *a3 = v11 + 1;
      return (unsigned int)v9;
    }
    v9 = -1073479624;
  }
  PipSetDevNodeProblem(a1, 9LL, v9);
  if ( (*(_DWORD *)(*v10 + 396) & 0x200000) == 0 )
  {
    PipSetDevNodeFlags(*v10, 0x200000u);
    PnpSetInvalidIDEvent((const void **)(*v10 + 40));
  }
  if ( v9 != -1073479624 && v9 != -1073741670 && v9 != -1073741810 )
  {
    v13 = (const void **)(*v10 + 56);
    LODWORD(v14[0]) = 5242958;
    v14[1] = L"failed IRP_MN_QUERY_ID-BusQueryDeviceID";
    PnpLogEvent(v13, v14, v9, 0LL, 0);
  }
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0);
    v8 = 0LL;
  }
  if ( v9 >= 0 )
    goto LABEL_3;
  return (unsigned int)v9;
}
