/*
 * XREFs of ?UnblockCpuWaiter@@YA_NPEAUVIDSCH_CPU_WAITER@@PEAU_VIDSCH_SYNC_OBJECT@@PEA_K@Z @ 0x140013210
 * Callers:
 *     VidSchiCompleteSignalSyncObject @ 0x140010F00 (VidSchiCompleteSignalSyncObject.c)
 *     VidSchiUnwaitMonitoredFences @ 0x14001154C (VidSchiUnwaitMonitoredFences.c)
 *     VidSchiUnwaitNativeFenceWaiters @ 0x1400448F4 (VidSchiUnwaitNativeFenceWaiters.c)
 * Callees:
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@_K$00$0ELGHHIEE@@@QEAAPEA_KI@Z @ 0x1400382F4 (-AllocateElements@-$NonPagedPoolZeroedArray@_K$00$0ELGHHIEE@@@QEAAPEA_KI@Z.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@PEBX$00$0ELGHHIEE@@@QEAAPEAPEBXI@Z @ 0x14003990C (-AllocateElements@-$NonPagedPoolZeroedArray@PEBX$00$0ELGHHIEE@@@QEAAPEAPEBXI@Z.c)
 *     VmBusSendSignalGuestEvent @ 0x14003D3E0 (VmBusSendSignalGuestEvent.c)
 *     McTemplateK0pqXR1PR1qPR1_EtwWriteTransfer @ 0x14003DE58 (McTemplateK0pqXR1PR1qPR1_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 */

__int64 __fastcall UnblockCpuWaiter(char *P, struct _VIDSCH_SYNC_OBJECT *a2, unsigned __int64 *a3)
{
  unsigned __int8 v3; // bl
  __int64 v4; // rsi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r9
  unsigned int *v11; // rax
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r9
  char v14; // al
  struct _KEVENT *v16; // rcx
  _QWORD *v17; // rcx
  PVOID *v18; // rax
  __int64 v19; // rdx
  unsigned int v20; // eax
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rcx
  _QWORD *v24; // r8
  char *v25; // rcx
  unsigned int v26; // esi
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rcx
  __int64 v31; // r10
  __int64 v32; // rcx
  PVOID v33; // [rsp+50h] [rbp-19h] BYREF
  char v34; // [rsp+58h] [rbp-11h] BYREF
  int v35; // [rsp+60h] [rbp-9h]
  PVOID Pa; // [rsp+68h] [rbp-1h] BYREF
  char v37; // [rsp+70h] [rbp+7h] BYREF
  int v38; // [rsp+78h] [rbp+Fh]
  PVOID v39; // [rsp+80h] [rbp+17h] BYREF
  char v40; // [rsp+88h] [rbp+1Fh] BYREF
  int v41; // [rsp+90h] [rbp+27h]

  v3 = 0;
  v4 = 0LL;
  if ( !*((_DWORD *)P + 50) )
    return v3;
  do
  {
    v8 = *((_QWORD *)P + 4);
    v9 = *(_QWORD *)(v8 + 40 * v4);
    v10 = v8 + 40 * v4;
    if ( v9 )
    {
      if ( *(_DWORD *)(v9 + 48) == 6 )
      {
        v12 = *(_QWORD *)(*(unsigned int *)(v9 + 80) + *(_QWORD *)(*(_QWORD *)(v9 + 64) + 192LL));
      }
      else
      {
        v11 = *(unsigned int **)(v9 + 72);
        if ( *(_BYTE *)(v9 + 30) )
          v12 = *(_QWORD *)v11;
        else
          v12 = *v11;
      }
      if ( a2 && (struct _VIDSCH_SYNC_OBJECT *)v9 == a2 )
        *a3 = *(_QWORD *)(v10 + 8);
      v13 = *(_QWORD *)(v10 + 8);
      if ( !*(_BYTE *)(v9 + 29) )
      {
        if ( *(_DWORD *)(v9 + 48) == 6 || *(_BYTE *)(v9 + 30) )
        {
          if ( v12 < v13 )
            goto LABEL_11;
        }
        else if ( (int)v12 - (int)v13 < 0 )
        {
LABEL_11:
          v14 = P[208];
          v3 = 0;
          if ( (v14 & 1) == 0 )
            return v3;
          goto LABEL_17;
        }
      }
      WdLogSingleEntry4(4LL, v9, v12, v13, *(unsigned __int8 *)(v9 + 29));
      WdLogGlobalForLineNumber = 27160;
    }
    v14 = P[208];
    v3 = 1;
    if ( (v14 & 1) != 0 )
      goto LABEL_19;
LABEL_17:
    v4 = (unsigned int)(v4 + 1);
  }
  while ( (unsigned int)v4 < *((_DWORD *)P + 50) );
  if ( !v3 )
    return v3;
LABEL_19:
  v16 = (struct _KEVENT *)*((_QWORD *)P + 2);
  if ( (v14 & 4) != 0 )
    VmBusSendSignalGuestEvent(v16, 0LL);
  else
    KeSetEvent(v16, 0, 0);
  if ( (byte_14008A201 & 1) != 0 )
  {
    v26 = *((_DWORD *)P + 50);
    Pa = 0LL;
    v38 = 0;
    v33 = 0LL;
    v35 = 0;
    v39 = 0LL;
    v41 = 0;
    if ( NonPagedPoolZeroedArray<void const *,1,1265072196>::AllocateElements(&Pa, v26)
      && NonPagedPoolZeroedArray<void const *,1,1265072196>::AllocateElements(&v33, v26)
      && NonPagedPoolZeroedArray<unsigned __int64,1,1265072196>::AllocateElements(&v39, v26) )
    {
      if ( v26 )
      {
        v27 = 0LL;
        v29 = v26;
        v28 = 0LL;
        do
        {
          v30 = *(_QWORD *)(v28 + *((_QWORD *)P + 4));
          *(_QWORD *)((char *)Pa + v27) = v30;
          if ( v30 )
            v31 = *(_QWORD *)(v30 + 16);
          else
            v31 = 0LL;
          *(_QWORD *)((char *)v33 + v27) = v31;
          v32 = *(_QWORD *)(v28 + *((_QWORD *)P + 4) + 8);
          v28 += 40LL;
          *(_QWORD *)((char *)v39 + v27) = v32;
          v27 += 8LL;
          --v29;
        }
        while ( v29 );
      }
      if ( (byte_14008A201 & 1) != 0 )
        McTemplateK0pqXR1PR1qPR1_EtwWriteTransfer(
          P[208] & 1,
          v27,
          v28,
          *((_QWORD *)P + 2),
          v26,
          (__int64)v39,
          (__int64)Pa,
          P[208] & 1,
          (__int64)v33);
    }
    if ( v39 != &v40 && v39 )
      ExFreePoolWithTag(v39, 0);
    v39 = 0LL;
    v41 = 0;
    if ( v33 != &v34 && v33 )
      ExFreePoolWithTag(v33, 0);
    v33 = 0LL;
    v35 = 0;
    if ( Pa != &v37 && Pa )
      ExFreePoolWithTag(Pa, 0);
  }
  if ( (P[208] & 2) != 0 )
    ObfDereferenceObject(*((PVOID *)P + 2));
  v17 = *(_QWORD **)P;
  if ( *(char **)(*(_QWORD *)P + 8LL) != P || (v18 = (PVOID *)*((_QWORD *)P + 1), *v18 != P) )
LABEL_36:
    __fastfail(3u);
  *v18 = v17;
  v19 = 0LL;
  v17[1] = v18;
  v20 = *((_DWORD *)P + 50);
  if ( v20 )
  {
    do
    {
      v21 = *((_QWORD *)P + 4);
      if ( (unsigned int)v19 < v20 )
        v21 += 40 * v19;
      v22 = *(_QWORD *)(v21 + 16);
      v23 = v21 + 16;
      if ( v22 )
      {
        if ( *(_QWORD *)(v22 + 8) != v23 )
          goto LABEL_36;
        v24 = *(_QWORD **)(v21 + 24);
        if ( *v24 != v23 )
          goto LABEL_36;
        *v24 = v22;
        *(_QWORD *)(v22 + 8) = v24;
      }
      v20 = *((_DWORD *)P + 50);
      v19 = (unsigned int)(v19 + 1);
    }
    while ( (unsigned int)v19 < v20 );
  }
  v25 = (char *)*((_QWORD *)P + 4);
  if ( v25 != P + 40 && v25 )
    ExFreePoolWithTag(v25, 0);
  *((_QWORD *)P + 4) = 0LL;
  *((_DWORD *)P + 50) = 0;
  ExFreePoolWithTag(P, 0);
  return v3;
}
