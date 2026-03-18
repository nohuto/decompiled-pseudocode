/*
 * XREFs of IsAllowedToGrow @ 0x1400EB97C
 * Callers:
 *     VidMmAcquireDmaBuffer @ 0x1400EB3D0 (VidMmAcquireDmaBuffer.c)
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x14002551C (McTemplateK0pq_EtwWriteTransfer.c)
 */

char __fastcall IsAllowedToGrow(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // ebx
  unsigned int v5; // edi
  __int64 v6; // r11
  __int64 v7; // r10
  __int64 v8; // r8
  __int64 v9; // rdx
  unsigned int v10; // eax
  bool v12; // cc
  bool v13; // cc
  bool v14; // cc

  v4 = a2 + *(_DWORD *)(a1 + 120);
  v5 = a3 + *(_DWORD *)(a1 + 124);
  v6 = qword_14008AA78 + a2;
  v7 = qword_14008AA48 + a3;
  v8 = a4 + *(_DWORD *)(a1 + 128);
  v9 = qword_14008AA18 + a4;
  if ( (*(_DWORD *)(a1 + 36) & 1) != 0 )
    return 0;
  v10 = dword_14008AA98;
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL) + 464LL) == 2 )
    v10 = dword_14008AA94;
  if ( *(_DWORD *)(a1 + 84) >= v10 )
  {
    if ( (byte_14008A201 & 1) == 0 )
      return 0;
LABEL_17:
    McTemplateK0pq_EtwWriteTransfer(a1, (const EVENT_DESCRIPTOR *)"R", v8);
    return 0;
  }
  if ( (int)v4 <= qword_14008AA50 )
    v12 = v6 <= qword_14008AA60;
  else
    v12 = v6 <= qword_14008AA58;
  if ( !v12 )
  {
    if ( (byte_14008A201 & 1) == 0 )
      return 0;
    goto LABEL_17;
  }
  if ( (int)v5 <= qword_14008AA20 )
    v13 = v7 <= qword_14008AA30;
  else
    v13 = v7 <= qword_14008AA28;
  if ( !v13 )
  {
    if ( (byte_14008A201 & 1) == 0 )
      return 0;
    goto LABEL_17;
  }
  if ( (int)v8 > qword_14008A9F0 )
    v14 = v9 <= qword_14008A9F8;
  else
    v14 = v9 <= qword_14008AA00;
  if ( !v14 )
  {
    if ( (byte_14008A201 & 1) == 0 )
      return 0;
    goto LABEL_17;
  }
  return 1;
}
