/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIContextualProcessor@@UIContextualProcessorEventStreamEnded@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIContextualProcessor@@UIContextualProcessorEventStreamEnded@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18007568C
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIContextualProcessor@@UIContextualProcessorEventStreamEnded@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180075680 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIContextu.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IContextualProcessor,IContextualProcessorEventStreamEnded>>(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  *a3 = 0LL;
  if ( *a2 )
  {
    if ( *a2 == 1929633658 )
    {
      if ( a2[1] == *(_DWORD *)&GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b.Data2
        && a2[2] == *(_DWORD *)GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b.Data4
        && a2[3] == *(_DWORD *)&GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b.Data4[4] )
      {
        goto LABEL_18;
      }
    }
    else if ( *a2 == 2141466787
           && a2[1] == *(_DWORD *)&GUID_7fa430a3_9305_4154_a5ee_11987d0ffb6f.Data2
           && a2[2] == *(_DWORD *)GUID_7fa430a3_9305_4154_a5ee_11987d0ffb6f.Data4
           && a2[3] == *(_DWORD *)&GUID_7fa430a3_9305_4154_a5ee_11987d0ffb6f.Data4[4] )
    {
      a1 += 8LL;
LABEL_18:
      *a3 = a1;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
      return v3;
    }
    return (unsigned int)-2147467262;
  }
  if ( a2[1] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    || a2[2] != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    || a2[3] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    return (unsigned int)-2147467262;
  }
  *a3 = a1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return 0LL;
}
