/*
 * XREFs of PiDqPnPGetObjectPropertyKeys @ 0x140AB53D8
 * Callers:
 *     PiDqActionDataGetAllPropertiesInBestLanguage @ 0x1409522D0 (PiDqActionDataGetAllPropertiesInBestLanguage.c)
 *     PiDqActionDataGetAllPropertiesInAllLanguages @ 0x140AB4850 (PiDqActionDataGetAllPropertiesInAllLanguages.c)
 * Callees:
 *     _PnpGetGenericStorePropertyKeys @ 0x1409742E8 (_PnpGetGenericStorePropertyKeys.c)
 *     _PnpGetObjectPropertyKeys @ 0x140AB554C (_PnpGetObjectPropertyKeys.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDqPnPGetObjectPropertyKeys(int a1, int a2, __int64 a3, __int64 a4, PVOID *a5, unsigned int *a6)
{
  unsigned __int64 v9; // rbx
  __int64 Pool2; // rax
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v14; // rcx

  v9 = 6000LL;
  *a5 = 0LL;
  while ( 1 )
  {
    if ( *a5 )
      ExFreePoolWithTag(*a5, 0x58706E50u);
    Pool2 = ExAllocatePool2(0x100uLL);
    *a5 = (PVOID)Pool2;
    if ( !Pool2 )
    {
      v12 = -1073741670;
      goto LABEL_12;
    }
    *a6 = 0;
    v11 = a2
        ? PnpGetObjectPropertyKeys(PiPnpRtlCtx, a1, a2, a3)
        : PnpGetGenericStorePropertyKeys(*(__int64 *)&PiPnpRtlCtx, a3, 0LL, 1, Pool2, v9 / 0x14, a6);
    v12 = v11;
    if ( v11 != -1073741789 )
      break;
    v14 = *a6;
    if ( (unsigned __int64)(20 * v14) > 0xFFFFFFFF )
    {
      v12 = -1073741675;
      goto LABEL_12;
    }
    v9 = (unsigned int)(20 * v14);
  }
  if ( v11 >= 0 )
    goto LABEL_9;
LABEL_12:
  *a6 = 0;
LABEL_9:
  if ( !*a6 && *a5 )
  {
    ExFreePoolWithTag(*a5, 0x58706E50u);
    *a5 = 0LL;
  }
  return v12;
}
