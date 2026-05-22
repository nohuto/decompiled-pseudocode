/*
 * XREFs of ?QueryInterface@MPCInputRouter@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800676D0
 * Callers:
 *     ?QueryInterface@MPCInputRouter@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180100160 (-QueryInterface@MPCInputRouter@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@MPCInputRouter@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180100170 (-QueryInterface@MPCInputRouter@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@MPCInputRouter@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180100180 (-QueryInterface@MPCInputRouter@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@MPCInputRouter@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180100190 (-QueryInterface@MPCInputRouter@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@MPCInputRouter@@WCHI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801001A0 (-QueryInterface@MPCInputRouter@@WCHI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@MPCInputRouter@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801001C0 (-QueryInterface@MPCInputRouter@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@MPCInputRouter@@WCIA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801001D0 (-QueryInterface@MPCInputRouter@@WCIA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@MPCInputRouter@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801001F0 (-QueryInterface@MPCInputRouter@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@MPCInputRouter@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180100200 (-QueryInterface@MPCInputRouter@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@MPCInputRouter@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180100210 (-QueryInterface@MPCInputRouter@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@MPCInputRouter@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180100220 (-QueryInterface@MPCInputRouter@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?QueryInterface@DWMInputRouter@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180067750 (-QueryInterface@DWMInputRouter@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall MPCInputRouter::QueryInterface(MPCInputRouter *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rax

  v3 = 0;
  if ( !a3 )
    return 2147942487LL;
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_1c93908d_d1c5_4ac5_9269_0398fe8ab53e.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_1c93908d_d1c5_4ac5_9269_0398fe8ab53e.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_1c93908d_d1c5_4ac5_9269_0398fe8ab53e.Data4;
  if ( v6 )
  {
    return (unsigned int)DWMInputRouter::QueryInterface(this, a2, a3);
  }
  else
  {
    (*(void (__fastcall **)(MPCInputRouter *))(*(_QWORD *)this + 8LL))(this);
    *a3 = (void *)(((unsigned __int64)this + 632) & -(__int64)(this != 0LL));
  }
  return v3;
}
