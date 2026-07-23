/*
 * XREFs of PiDmLookupObject @ 0x1409AA1E0
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x140963A50 (PiPnpRtlCmActionCallback.c)
 *     PiUEventHandleRegistration @ 0x1409A80E0 (PiUEventHandleRegistration.c)
 *     IopProcessSetInterfaceState @ 0x1409A91A0 (IopProcessSetInterfaceState.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1409A9750 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     IopRegisterDeviceInterface @ 0x1409A9840 (IopRegisterDeviceInterface.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1409A9DA0 (PiDmRemoveCacheReferenceForObject.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x140B37308 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     RtlLookupElementGenericTableAvl @ 0x14041C050 (RtlLookupElementGenericTableAvl.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall PiDmLookupObject(__int64 a1, _WORD *a2)
{
  int v3; // r8d
  _WORD *v4; // rax
  __int64 v5; // rcx
  int v6; // eax
  unsigned __int16 v7; // dx
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  int v9; // r9d
  unsigned __int16 *v10; // r10
  unsigned __int16 v11; // dx
  int v12; // r11d
  struct _LIST_ENTRY *Flink; // rdi
  unsigned __int64 v14; // r8
  PVOID v15; // rax
  __int128 *Buffer; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v18; // [rsp+28h] [rbp-A0h]
  __int128 v19; // [rsp+40h] [rbp-88h] BYREF
  __int128 v20; // [rsp+50h] [rbp-78h]
  __int128 v21; // [rsp+60h] [rbp-68h]
  __int128 v22; // [rsp+70h] [rbp-58h]
  __int128 v23; // [rsp+80h] [rbp-48h]
  __int128 v24; // [rsp+90h] [rbp-38h]
  __int128 v25; // [rsp+A0h] [rbp-28h]

  Buffer = &v19;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  if ( !a2 )
    return 0LL;
  v3 = *(_DWORD *)(a1 + 208);
  v4 = a2;
  HIDWORD(v20) = v3;
  v5 = 0x7FFFLL;
  *(_QWORD *)&v20 = a2;
  v18 = 0LL;
  do
  {
    if ( !*v4 )
      break;
    ++v4;
    --v5;
  }
  while ( v5 );
  v6 = -1073741811;
  if ( v5 )
  {
    v6 = 0;
    v7 = -2 - 2 * v5;
  }
  else
  {
    v7 = v18;
  }
  if ( v6 < 0 || v3 == 3 && v7 <= 8u )
    return 0LL;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v12 = v11 >> 1;
  Flink = CurrentServerSiloGlobals[75].Flink;
  for ( DWORD2(v20) = 0; v12; v9 = (unsigned __int16)v14 + 65599 * v9 )
  {
    v14 = *v10++;
    --v12;
    if ( (unsigned int)v14 >= 0x61 )
    {
      if ( (unsigned int)v14 > 0x7A )
      {
        if ( Flink )
        {
          if ( (unsigned __int16)v14 >= 0xC0u )
            LOWORD(v14) = *((_WORD *)&Flink->Flink
                          + (v14 & 0xF)
                          + *((unsigned __int16 *)&Flink->Flink
                            + ((unsigned __int8)v14 >> 4)
                            + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v14 >> 8))))
                        + v14;
        }
      }
      else
      {
        LOWORD(v14) = v14 - 32;
      }
    }
  }
  DWORD2(v20) = v9;
  v15 = RtlLookupElementGenericTableAvl((PRTL_AVL_TABLE)(a1 + 104), &Buffer);
  if ( v15 )
    return *(_QWORD *)v15;
  else
    return 0LL;
}
