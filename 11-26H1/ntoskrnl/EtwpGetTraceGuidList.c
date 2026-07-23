/*
 * XREFs of EtwpGetTraceGuidList @ 0x140ADDEB4
 * Callers:
 *     NtTraceControl @ 0x1409186E0 (NtTraceControl.c)
 * Callees:
 *     EtwpCopyMetaProviderGuids @ 0x1404C45C8 (EtwpCopyMetaProviderGuids.c)
 *     EtwpMetaProviderCount @ 0x1404EB720 (EtwpMetaProviderCount.c)
 *     EtwpGetGuidList @ 0x140912440 (EtwpGetGuidList.c)
 */

__int64 __fastcall EtwpGetTraceGuidList(__int64 a1, __int64 a2, unsigned int a3, unsigned int *a4)
{
  int GuidList; // r10d
  unsigned int v8; // r11d
  unsigned int i; // r8d
  int v10; // eax
  unsigned int v11; // r11d
  unsigned int v12; // ecx
  unsigned int v14; // [rsp+58h] [rbp+20h] BYREF

  v14 = 0;
  GuidList = EtwpGetGuidList(a1, 0, a2, (struct _KLOCK_ENTRIES *)a3, &v14);
  if ( GuidList == -2147483643 )
  {
    v12 = v14;
LABEL_12:
    *a4 = v12;
    if ( GuidList >= 0 && v12 > a3 )
      return (unsigned int)-1073741789;
  }
  else
  {
    v8 = v14;
    for ( i = 0; i < 0xA; ++i )
    {
      if ( ++v8 > 0xFFFFFFF )
      {
        GuidList = -2147483643;
        *a4 = v8;
        return (unsigned int)GuidList;
      }
      if ( v8 <= a3 )
        *(GUID *)(a2 + 16LL * (v8 - 1)) = *(&EtwpUmglProviders)[2 * i];
    }
    if ( a3 >= v8 )
      EtwpCopyMetaProviderGuids((_OWORD *)(a2 + 16LL * v8), a3 - v8);
    v10 = EtwpMetaProviderCount();
    v12 = v10 + v11;
    if ( v10 + v11 < v11 )
    {
      v12 = -1;
    }
    else if ( v12 <= 0xFFFFFFF )
    {
      goto LABEL_12;
    }
    GuidList = -2147483643;
    *a4 = v12;
  }
  return (unsigned int)GuidList;
}
