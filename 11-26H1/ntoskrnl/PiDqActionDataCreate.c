/*
 * XREFs of PiDqActionDataCreate @ 0x14095124C
 * Callers:
 *     PiDqQuerySerializeActionQueue @ 0x14094F1CC (PiDqQuerySerializeActionQueue.c)
 * Callees:
 *     PnpAllocatePWSTR @ 0x140951520 (PnpAllocatePWSTR.c)
 *     PiDqActionDataFree @ 0x14095169C (PiDqActionDataFree.c)
 *     PiDqActionDataGetAllPropertiesInBestLanguage @ 0x1409522D0 (PiDqActionDataGetAllPropertiesInBestLanguage.c)
 *     PiDqGetPnpObjectType @ 0x14095D760 (PiDqGetPnpObjectType.c)
 *     PiDqActionDataGetRequestedProperties @ 0x14095E124 (PiDqActionDataGetRequestedProperties.c)
 *     PiDqActionDataGetAllPropertiesInAllLanguages @ 0x140AB4850 (PiDqActionDataGetAllPropertiesInAllLanguages.c)
 *     PiDqActionDataGetChangedProperties @ 0x140AB592C (PiDqActionDataGetChangedProperties.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall PiDqActionDataCreate(__int64 a1, int a2, __int64 a3, _QWORD *a4)
{
  int PWSTR; // ebx
  _QWORD *v8; // r14
  _DWORD *Pool2; // rax
  _DWORD *v10; // rdi
  int v11; // r8d
  int v12; // r9d
  int v13; // r10d
  int PnpObjectType; // r14d
  int v15; // eax
  bool v16; // zf
  __int64 v17; // r8
  int ChangedProperties; // eax
  __int64 v20; // r9
  int AllPropertiesInBestLanguage; // eax
  _DWORD v22[18]; // [rsp+50h] [rbp-48h] BYREF

  PWSTR = 0;
  v22[0] = 0;
  *a4 = 0LL;
  v8 = a4;
  Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL);
  v10 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  if ( *(_QWORD *)(a3 + 16) )
  {
    *Pool2 = *(_DWORD *)(a3 + 32);
    Pool2[2] = *(_DWORD *)(a1 + 16);
    PWSTR = PnpAllocatePWSTR(*(_QWORD *)(*(_QWORD *)(a3 + 16) + 16LL), 0x7FFFFFFFLL, 1483763280LL, Pool2 + 4);
    if ( PWSTR < 0 )
      goto LABEL_19;
    if ( !*(_DWORD *)(a1 + 64) && (*(_DWORD *)(a1 + 40) & 2) == 0 || *v10 != 2 && *v10 != 1 )
    {
LABEL_11:
      if ( PWSTR >= 0 )
        goto LABEL_12;
LABEL_19:
      PiDqActionDataFree(v10);
      return (unsigned int)PWSTR;
    }
    PnpObjectType = PiDqGetPnpObjectType(*(unsigned int *)(a1 + 16));
    v15 = *(_DWORD *)(a1 + 40);
    if ( (v15 & 2) != 0 )
    {
      if ( v11 == 1 )
      {
        v20 = *((_QWORD *)v10 + 2);
        if ( (v15 & 4) != 0 )
        {
          PWSTR = PiDqActionDataGetAllPropertiesInBestLanguage(
                    a2,
                    0,
                    PnpObjectType,
                    v20,
                    *(_QWORD *)(a1 + 56),
                    (__int64)(v10 + 8),
                    (__int64)(v10 + 6),
                    (__int64)v22);
          if ( PWSTR < 0 )
            goto LABEL_19;
          AllPropertiesInBestLanguage = PiDqActionDataGetAllPropertiesInBestLanguage(
                                          a2,
                                          1,
                                          PnpObjectType,
                                          *((_QWORD *)v10 + 2),
                                          *(_QWORD *)(a1 + 56),
                                          (__int64)(v10 + 8),
                                          (__int64)(v10 + 6),
                                          (__int64)v22);
          PWSTR = 0;
          if ( AllPropertiesInBestLanguage != -1073741772 )
            PWSTR = AllPropertiesInBestLanguage;
        }
        else
        {
          PWSTR = PiDqActionDataGetAllPropertiesInAllLanguages(
                    a2,
                    0,
                    PnpObjectType,
                    v20,
                    (__int64)(v10 + 8),
                    (__int64)(v10 + 6),
                    (__int64)v22);
          if ( PWSTR < 0 )
            goto LABEL_19;
          PWSTR = PiDqActionDataGetAllPropertiesInAllLanguages(
                    a2,
                    1,
                    PnpObjectType,
                    *((_QWORD *)v10 + 2),
                    (__int64)(v10 + 8),
                    (__int64)(v10 + 6),
                    (__int64)v22);
          if ( PWSTR == -1073741772 )
            PWSTR = 0;
        }
        goto LABEL_10;
      }
      LOBYTE(v12) = *(_BYTE *)(a1 + 40) & 4;
      ChangedProperties = PiDqActionDataGetChangedProperties(
                            a2,
                            PnpObjectType,
                            *((_QWORD *)v10 + 2),
                            v12,
                            *(_QWORD *)(a1 + 56),
                            0LL,
                            0,
                            *(_QWORD *)(a3 + 24),
                            (__int64)(v10 + 8),
                            (__int64)(v10 + 6));
    }
    else
    {
      LOBYTE(v12) = v15 & 4;
      v16 = v11 == 1;
      v17 = *((_QWORD *)v10 + 2);
      if ( v16 )
        ChangedProperties = PiDqActionDataGetRequestedProperties(
                              a2,
                              PnpObjectType,
                              v17,
                              v12,
                              *(_QWORD *)(a1 + 56),
                              *(_QWORD *)(a1 + 72),
                              v13,
                              (__int64)(v10 + 8),
                              (__int64)(v10 + 6));
      else
        ChangedProperties = PiDqActionDataGetChangedProperties(
                              a2,
                              PnpObjectType,
                              v17,
                              v12,
                              *(_QWORD *)(a1 + 56),
                              *(_QWORD *)(a1 + 72),
                              v13,
                              *(_QWORD *)(a3 + 24),
                              (__int64)(v10 + 8),
                              (__int64)(v10 + 6));
    }
    PWSTR = ChangedProperties;
LABEL_10:
    v8 = a4;
    goto LABEL_11;
  }
  *Pool2 = 0;
  Pool2[2] = 1;
LABEL_12:
  if ( *v10 == 2 && !v10[6] )
    goto LABEL_19;
  *v8 = v10;
  return (unsigned int)PWSTR;
}
