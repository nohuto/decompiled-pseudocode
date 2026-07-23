/*
 * XREFs of PiDqPnPGetObjectPropertyLocales @ 0x140AB4AB8
 * Callers:
 *     PiDqActionDataGetAllPropertiesInAllLanguages @ 0x140AB4850 (PiDqActionDataGetAllPropertiesInAllLanguages.c)
 * Callees:
 *     _PnpGetObjectPropertyLocales @ 0x140AB4BD0 (_PnpGetObjectPropertyLocales.c)
 *     _PnpGetGenericStorePropertyLocales @ 0x140AB4F34 (_PnpGetGenericStorePropertyLocales.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDqPnPGetObjectPropertyLocales(int a1, int a2, __int64 a3, __int64 a4, PVOID *a5)
{
  __int64 Pool2; // rax
  int ObjectPropertyLocales; // eax
  unsigned int v11; // ebx
  _DWORD v13[4]; // [rsp+50h] [rbp-28h] BYREF

  v13[0] = 40;
  *a5 = 0LL;
  do
  {
    if ( *a5 )
      ExFreePoolWithTag(*a5, 0x58706E50u);
    Pool2 = ExAllocatePool2(0x100uLL);
    *a5 = (PVOID)Pool2;
    if ( !Pool2 )
    {
      v11 = -1073741670;
      goto LABEL_11;
    }
    if ( a2 )
      ObjectPropertyLocales = PnpGetObjectPropertyLocales(v13[0], a1, a2, a3, a4, Pool2, v13[0], (__int64)v13);
    else
      ObjectPropertyLocales = PnpGetGenericStorePropertyLocales(*(_QWORD *)&PiPnpRtlCtx, a3, a4, Pool2, v13[0], v13);
    v11 = ObjectPropertyLocales;
  }
  while ( ObjectPropertyLocales == -1073741789 );
  if ( ObjectPropertyLocales >= 0 )
    return v11;
LABEL_11:
  if ( *a5 )
  {
    ExFreePoolWithTag(*a5, 0x58706E50u);
    *a5 = 0LL;
  }
  return v11;
}
