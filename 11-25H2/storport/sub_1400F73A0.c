/*
 * XREFs of sub_1400F73A0 @ 0x1400F73A0
 * Callers:
 *     sub_1400F16A4 @ 0x1400F16A4 (sub_1400F16A4.c)
 * Callees:
 *     sub_1400F7308 @ 0x1400F7308 (sub_1400F7308.c)
 *     sub_1400F7368 @ 0x1400F7368 (sub_1400F7368.c)
 *     sub_1401152F0 @ 0x1401152F0 (sub_1401152F0.c)
 *     sub_140115430 @ 0x140115430 (sub_140115430.c)
 *     sub_140118560 @ 0x140118560 (sub_140118560.c)
 */

char __fastcall sub_1400F73A0(__int64 a1, IRP *a2, unsigned int a3, char a4, __int64 a5)
{
  unsigned int v5; // edi
  __int64 v6; // r14
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  LARGE_INTEGER ByteOffset; // rbx
  unsigned __int8 v11; // dl
  LARGE_INTEGER v12; // rcx
  __int64 v13; // rax
  signed __int32 v14; // ecx
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax
  _QWORD *v20; // rcx
  __int64 v21; // rcx

  v5 = 0;
  v6 = a3;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  ByteOffset.QuadPart = 0LL;
  v11 = 4;
  if ( *(_BYTE *)(a1 + 668) )
    v11 = *(_BYTE *)(a1 + 668);
  if ( a4 && CurrentStackLocation->Parameters.WMI.ProviderId == 0x8765432100000003uLL )
    ByteOffset = CurrentStackLocation->Parameters.Read.ByteOffset;
  CurrentStackLocation->Parameters.CreatePipe.Parameters = (PNAMED_PIPE_CREATE_PARAMETERS)(CurrentStackLocation->Parameters.Create.EaLength
                                                                                         + 1);
  if ( CurrentStackLocation->Parameters.Create.EaLength > v11 )
  {
    if ( ByteOffset.QuadPart )
    {
      _InterlockedExchange((volatile __int32 *)(a5 + 104), 5);
      v14 = _InterlockedExchangeAdd((volatile signed __int32 *)(ByteOffset.QuadPart + 116), 1u);
      LODWORD(v13) = *(unsigned __int16 *)(ByteOffset.QuadPart + 32);
      if ( v14 + 1 < (int)v13 )
        return v13;
      ((void (__fastcall *)(_QWORD, _QWORD))sub_1401152F0)(*(_QWORD *)(a1 + 16), (LARGE_INTEGER)ByteOffset.QuadPart);
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))sub_140115430)(
        *(_QWORD *)(a1 + 16),
        (unsigned int)v6,
        (LARGE_INTEGER)ByteOffset.QuadPart,
        a2);
    }
    a2->IoStatus.Information = 0LL;
    a2->IoStatus.Status = -2147483619;
    IofCompleteRequest(a2, 0);
    v15 = *(_QWORD *)(a1 + 128);
    if ( !*(_BYTE *)v15
      && _InterlockedExchangeAdd(*(volatile signed __int32 **)(*(_QWORD *)(v15 + 24) + 8 * v6), 0xFFFFFFFF) == 1 )
    {
      v16 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 128LL);
      if ( sub_1400F7308(a1) )
      {
        PoFxIdleComponent(**(_QWORD **)(*(_QWORD *)(a1 + 128) + 8LL), 0LL, 2LL);
        sub_1400F7368(a1);
      }
      v17 = *(_QWORD *)(v16 + 160);
      if ( *(_BYTE *)v17 == 1 )
        PoFxIdleComponent(**(_QWORD **)(v17 + 8), 0LL, 2LL);
    }
    v13 = *(_QWORD *)(a1 + 496);
    if ( v13 )
    {
      v18 = *(unsigned __int8 *)(v13 + 28);
      ++*(_DWORD *)(v13 + 24);
      v19 = *(_QWORD *)(a1 + 496);
      if ( (unsigned __int8)v18 < *(_BYTE *)(v19 + 29) )
      {
        v20 = (_QWORD *)(v19 + 16 * (v18 + 2));
        v20[1] = a2;
        *v20 = MEMORY[0xFFFFF78000000014];
      }
      v21 = *(_QWORD *)(a1 + 496);
      LOBYTE(v13) = (unsigned __int8)(v18 + 1) < *(_BYTE *)(v21 + 29) ? v18 + 1 : 0;
      *(_BYTE *)(v21 + 28) = v13;
    }
  }
  else
  {
    if ( !ByteOffset.QuadPart )
      goto LABEL_14;
    v12 = ByteOffset;
    if ( *(_WORD *)(ByteOffset.QuadPart + 32) )
    {
      do
      {
        if ( *(_DWORD *)(v12.QuadPart + 104) != 5 && *(_DWORD *)(v12.QuadPart + 104) != 3 )
          _InterlockedExchange((volatile __int32 *)(v12.QuadPart + 104), 3);
        ++v5;
        v12 = *(LARGE_INTEGER *)(v12.QuadPart + 96);
      }
      while ( v5 < *(unsigned __int16 *)(ByteOffset.QuadPart + 32) );
    }
    LOBYTE(v13) = _interlockedbittestandset((volatile signed __int32 *)(ByteOffset.QuadPart + 108), 0);
    if ( (_BYTE)v13 != 1 )
LABEL_14:
      LOBYTE(v13) = sub_140118560(a1, a2, a3);
  }
  return v13;
}
