/*
 * XREFs of PopPowerRequestCreateUserModeRequest @ 0x140425ADC
 * Callers:
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     PoCaptureReasonContext @ 0x140425E58 (PoCaptureReasonContext.c)
 *     PopPowerRequestCreateCommon @ 0x140425F6C (PopPowerRequestCreateCommon.c)
 *     PoDestroyReasonContext @ 0x140503E30 (PoDestroyReasonContext.c)
 *     TtmNotifySessionPowerRequestCreated @ 0x1407EBF60 (TtmNotifySessionPowerRequestCreated.c)
 *     ObInsertObject @ 0x140906AE0 (ObInsertObject.c)
 *     TtmIsEnabled @ 0x1409FA8A4 (TtmIsEnabled.c)
 */

__int64 __fastcall PopPowerRequestCreateUserModeRequest(void *a1, char a2, HANDLE *a3)
{
  int v5; // eax
  __int64 v6; // rdx
  PVOID v7; // rdi
  NTSTATUS inserted; // esi
  int Common; // eax
  unsigned int *v10; // rbx
  PVOID Object[3]; // [rsp+30h] [rbp-18h] BYREF
  PVOID P; // [rsp+68h] [rbp+20h] BYREF

  P = 0LL;
  Object[0] = 0LL;
  v5 = PoCaptureReasonContext(a1, 0LL, (__int64)&P);
  v7 = P;
  inserted = v5;
  if ( v5 >= 0 )
  {
    LOBYTE(v6) = a2;
    Common = PopPowerRequestCreateCommon(P, v6, Object);
    v10 = (unsigned int *)Object[0];
    inserted = Common;
    if ( Common >= 0 )
    {
      v7 = 0LL;
      ObfReferenceObjectWithTag(Object[0], 0x72506F50u);
      inserted = ObInsertObject(v10, 0LL, 0, 0, 0LL, a3);
      if ( inserted >= 0 )
      {
        if ( (unsigned __int8)TtmIsEnabled() )
          TtmNotifySessionPowerRequestCreated(v10[4], v10[9], v10[26], *a3);
        inserted = 0;
      }
    }
    if ( v10 )
      ObfDereferenceObjectWithTag(v10, 0x72506F50u);
  }
  if ( v7 )
    PoDestroyReasonContext(v7);
  return (unsigned int)inserted;
}
