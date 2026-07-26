/*
 * XREFs of ?ndisOidPreSupportedList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140056520
 * Callers:
 *     ?ndisFDoOidRequestInternal@@YAXPEAX@Z @ 0x1400248D0 (-ndisFDoOidRequestInternal@@YAXPEAX@Z.c)
 *     ?ndisPreProcessOid@@YAEPEAXPEAU_NDIS_OID_REQUEST@@IPEAH@Z @ 0x140027010 (-ndisPreProcessOid@@YAEPEAXPEAU_NDIS_OID_REQUEST@@IPEAH@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 */

__int64 __fastcall ndisOidPreSupportedList(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rsi
  int v3; // eax
  __int64 v4; // rdi
  __int64 v5; // rdi
  KIRQL v6; // r14
  unsigned int v7; // r12d
  unsigned __int8 v8; // di
  __int64 v10; // rcx

  v1 = *((_QWORD *)a1 + 4);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      42,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      v1);
  v3 = *(_DWORD *)(v1 + 4);
  if ( v3 && v3 != 2 )
  {
    v8 = 1;
    *((_DWORD *)a1 + 10) = -1073741637;
    goto LABEL_12;
  }
  v4 = *((_QWORD *)a1 + 3);
  if ( v4 )
  {
    v5 = *(_QWORD *)(v4 + 16);
    goto LABEL_8;
  }
  if ( !*((_QWORD *)a1 + 1) )
  {
    v5 = *(_QWORD *)a1;
    if ( !*(_QWORD *)a1 )
      v5 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 32LL);
LABEL_8:
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 96));
    *(_QWORD *)(v5 + 520) = KeGetCurrentThread();
    if ( *(_QWORD *)(v5 + 3088) )
    {
      v7 = *(_DWORD *)(v5 + 3096) + *(_DWORD *)(v5 + 3408);
      *((_DWORD *)a1 + 10) = 0;
      if ( *(_DWORD *)(v1 + 48) < v7 )
      {
LABEL_10:
        *(_DWORD *)(v1 + 56) = v7;
        *((_DWORD *)a1 + 10) = -1073676268;
        *(_QWORD *)(v5 + 520) = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 96), v6);
LABEL_11:
        v8 = 1;
        goto LABEL_12;
      }
      memmove(*(void **)(v1 + 40), *(const void **)(v5 + 3088), *(unsigned int *)(v5 + 3096));
      v10 = *(unsigned int *)(v5 + 3096);
LABEL_20:
      memmove((void *)(*(_QWORD *)(v1 + 40) + v10), *(const void **)(v5 + 3400), *(unsigned int *)(v5 + 3408));
      *(_QWORD *)(v5 + 520) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 96), v6);
      *(_DWORD *)(*((_QWORD *)a1 + 4) + 52LL) = v7;
      goto LABEL_11;
    }
    goto LABEL_16;
  }
  if ( !*((_QWORD *)a1 + 2) )
  {
    v5 = *(_QWORD *)a1;
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)a1 + 96LL));
    *(_QWORD *)(v5 + 520) = KeGetCurrentThread();
    if ( *(_QWORD *)(v5 + 496) )
    {
      v7 = *(_DWORD *)(v5 + 200) + *(_DWORD *)(v5 + 3408);
      *((_DWORD *)a1 + 10) = 0;
      if ( *(_DWORD *)(v1 + 48) < v7 )
        goto LABEL_10;
      memmove(*(void **)(v1 + 40), *(const void **)(v5 + 496), *(unsigned int *)(v5 + 200));
      v10 = *(unsigned int *)(v5 + 200);
      goto LABEL_20;
    }
LABEL_16:
    *(_QWORD *)(v5 + 520) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 96), v6);
    v8 = 0;
    goto LABEL_12;
  }
  v8 = 0;
LABEL_12:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      43,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      v1);
  return v8;
}
