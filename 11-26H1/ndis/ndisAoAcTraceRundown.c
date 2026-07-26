/*
 * XREFs of ndisAoAcTraceRundown @ 0x1400C81E4
 * Callers:
 *     ndisMEmitTraceRundown @ 0x1400C8574 (ndisMEmitTraceRundown.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14001BE20 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_d @ 0x140023030 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_Ld @ 0x14005D7A0 (WPP_RECORDER_SF_Ld.c)
 *     WPP_RECORDER_SF_LDD @ 0x140091924 (WPP_RECORDER_SF_LDD.c)
 *     WPP_RECORDER_SF_Zd @ 0x1400C8B38 (WPP_RECORDER_SF_Zd.c)
 */

void __fastcall ndisAoAcTraceRundown(struct _NDIS_MINIPORT_BLOCK *a1)
{
  struct _NDIS_MINIPORT_AOAC *AoAc; // rdi
  KIRQL v3; // bp
  __int64 *i; // rbx
  int v5; // edx
  _NDIS_OPEN_BLOCK *j; // rbx
  unsigned int AoAcReferences; // ecx
  KIRQL v8; // dl
  char v9[8]; // [rsp+28h] [rbp-40h]
  __int64 v10; // [rsp+30h] [rbp-38h]
  KIRQL NewIrql; // [rsp+70h] [rbp+8h] BYREF

  AoAc = a1->AoAc;
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
  NewIrql = v3;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_LDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      1u,
      2u,
      0xAu,
      (struct _GUID *)&WPP_2b999a71c1833f297665e6fbb09ed696_Traceguids,
      *((_DWORD *)AoAc + 94),
      *((_DWORD *)AoAc + 13),
      *((_DWORD *)AoAc + 95));
  if ( *((_DWORD *)AoAc + 16) && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v9 = *((_DWORD *)AoAc + 16);
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      1u,
      2u,
      0xBu,
      (struct _GUID *)&WPP_2b999a71c1833f297665e6fbb09ed696_Traceguids,
      *(_QWORD *)v9);
  }
  for ( i = (__int64 *)*((_QWORD *)AoAc + 1); i != (__int64 *)((char *)AoAc + 8); i = (__int64 *)*i )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v10) = *((_DWORD *)i + 5);
      WPP_RECORDER_SF_Ld(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        1u,
        2u,
        0xCu,
        (struct _GUID *)&WPP_2b999a71c1833f297665e6fbb09ed696_Traceguids,
        *((_DWORD *)i + 4),
        v10);
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v3);
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
  for ( j = a1->OpenQueue; j; j = j->MiniportNextOpen )
  {
    AoAcReferences = j->AoAcReferences;
    if ( AoAcReferences && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 1;
      WPP_RECORDER_SF_Zd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v5,
        2,
        13,
        (struct _GUID *)&WPP_2b999a71c1833f297665e6fbb09ed696_Traceguids,
        (__int64)&j->ProtocolHandle->Name,
        AoAcReferences);
    }
  }
  v8 = NewIrql;
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v8);
}
