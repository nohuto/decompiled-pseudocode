/*
 * XREFs of Control_ProcessTransferEventPointer @ 0x1400305DC
 * Callers:
 *     Control_ProcessTransferEventWithED0 @ 0x140021C4C (Control_ProcessTransferEventWithED0.c)
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x140006A74 (WPP_RECORDER_SF_DD.c)
 *     Control_FindTrbMatch @ 0x1400307B4 (Control_FindTrbMatch.c)
 */

char __fastcall Control_ProcessTransferEventPointer(__int64 a1, __int64 a2, __int64 *a3, _DWORD *a4, _DWORD *a5)
{
  int v6; // ebx
  __int64 v8; // rdx
  __int64 v10; // rcx
  int v11; // r15d
  char TrbMatch; // si
  __int64 v13; // rcx
  unsigned int v14; // r14d
  unsigned int v15; // edi
  int v16; // r9d
  __int64 v17; // rbp
  int v18; // eax
  _DWORD *v19; // rcx
  int v21; // [rsp+70h] [rbp+8h] BYREF
  int v22; // [rsp+80h] [rbp+18h] BYREF

  v6 = 0;
  v8 = *a3;
  v10 = 16LL * *(unsigned int *)(a1 + 192);
  v11 = (int)a3;
  v21 = 0;
  TrbMatch = 0;
  v22 = 0;
  v13 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 24LL) + v10;
  if ( v8 )
  {
    if ( v8 == v13 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DD(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          4u,
          0xEu,
          0x11u,
          (__int64)&WPP_c4903a4407353a45c75e6304bdbc5226_Traceguids,
          *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL));
      v6 = *(_DWORD *)(a2 + 128);
      TrbMatch = 1;
    }
    else
    {
      v14 = *(_DWORD *)(a2 + 144);
      v15 = *(_DWORD *)(a2 + 160);
      if ( v14 > v15 )
        v16 = *(_DWORD *)(a1 + 196);
      else
        v16 = *(_DWORD *)(a2 + 160);
      v17 = *(_QWORD *)(a2 + 136);
      TrbMatch = Control_FindTrbMatch((_DWORD)a3, v17, v14, v16, (__int64)&v21, (__int64)&v22);
      if ( !TrbMatch && v14 > v15 )
        TrbMatch = Control_FindTrbMatch(v11, v17, 0, v15, (__int64)&v21, (__int64)&v22);
      v6 = v21;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_DD(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      4u,
      0xEu,
      0x10u,
      (__int64)&WPP_c4903a4407353a45c75e6304bdbc5226_Traceguids,
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL));
  }
  v18 = v22;
  v19 = a5;
  *a4 = v6;
  *v19 = v18;
  return TrbMatch;
}
