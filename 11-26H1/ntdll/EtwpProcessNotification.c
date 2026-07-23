/*
 * XREFs of EtwpProcessNotification @ 0x18003D030
 * Callers:
 *     EtwDeliverDataBlock @ 0x18003CB30 (EtwDeliverDataBlock.c)
 * Callees:
 *     RtlSetThreadSubProcessTag @ 0x18003E7A0 (RtlSetThreadSubProcessTag.c)
 *     EtwpUpdateEnableInfoAndCallback @ 0x180042610 (EtwpUpdateEnableInfoAndCallback.c)
 *     EtwProcessPrivateLoggerRequest @ 0x180065050 (EtwProcessPrivateLoggerRequest.c)
 *     EtwpProcessInternalNotification @ 0x1800FA840 (EtwpProcessInternalNotification.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall EtwpProcessNotification(__int64 a1, __int16 *a2, _QWORD *a3, _DWORD *a4, _BYTE *a5)
{
  unsigned __int8 v9; // si
  PVOID v10; // rax
  int v11; // r8d
  void *v12; // rbp
  __int16 v13; // ax
  __int64 v14; // rax
  __int64 v16; // rax
  __int64 v17; // rdx

  v9 = 0;
  v10 = RtlSetThreadSubProcessTag((PVOID)*(unsigned int *)(a1 + 248));
  v11 = *(_DWORD *)a2;
  v12 = v10;
  v13 = *(_WORD *)(a1 + 86);
  if ( *(_DWORD *)a2 == 3 )
  {
    if ( (unsigned __int16)((v13 & 0x3FFF) - 2) <= 1u )
    {
      if ( a2[39] < 0 && PrivateLoggerNotificationEntry )
        v14 = *(_QWORD *)(PrivateLoggerNotificationEntry + 88);
      else
        v14 = *(_QWORD *)(a1 + 88);
      *a3 = v14;
      *((_QWORD *)a2 + 3) = v14;
      EtwpUpdateEnableInfoAndCallback(a1, a2);
      *a5 = 1;
    }
  }
  else if ( v11 == 4 )
  {
    if ( (unsigned __int16)((v13 & 0x3FFF) - 2) <= 1u )
    {
      *a3 = *(_QWORD *)(a1 + 88);
      *a4 = EtwProcessPrivateLoggerRequest(a2, 0x3FFFLL);
      v9 = 1;
      *a5 = 1;
    }
  }
  else if ( (v13 & 0x3FFF) == v11 )
  {
    v16 = *(_QWORD *)(a1 + 88);
    *((_QWORD *)a2 + 3) = v16;
    v17 = *(_QWORD *)(a1 + 56);
    *a3 = v16;
    *a4 = (*(__int64 (__fastcall **)(__int16 *, __int64))(a1 + 48))(a2, v17);
    *a5 = 1;
  }
  else if ( (v13 & 0x3FFF) == 0xA
         && v11 == 7
         && *((_DWORD *)a2 + 9) == (unsigned int)NtCurrentTeb()->ClientId.UniqueProcess )
  {
    *a4 = EtwpProcessInternalNotification(a1, a2);
    *a5 = 1;
  }
  RtlSetThreadSubProcessTag(v12);
  return v9;
}
