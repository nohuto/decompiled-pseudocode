/*
 * XREFs of ACPIProcessorGetInitialApicId @ 0x1400B5E68
 * Callers:
 *     ACPIProcessorStartDeviceWorker @ 0x1400673B0 (ACPIProcessorStartDeviceWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_Dqss @ 0x1400188A0 (WPP_RECORDER_SF_Dqss.c)
 *     ACPIGet @ 0x1400235A0 (ACPIGet.c)
 *     AMLIGetNSObjectType @ 0x14003BAA4 (AMLIGetNSObjectType.c)
 */

__int64 __fastcall ACPIProcessorGetInitialApicId(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // ebx
  int v3; // r15d
  char v6; // bp
  __int64 v7; // rcx
  char *v8; // r8
  __int64 v10; // rcx
  const char *v11; // rax
  const char *v12; // rdx
  char v13; // r10
  unsigned __int64 v14; // r14
  char *i; // rdx
  __int64 v16; // rcx
  char *v17; // r11
  char v18; // al
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned int v24; // r9d
  unsigned int v25; // [rsp+80h] [rbp+8h] BYREF
  char *v26; // [rsp+88h] [rbp+10h] BYREF

  v2 = 0;
  *a2 = -1;
  v3 = *(_DWORD *)(a1 + 196);
  v26 = 0LL;
  v25 = 0;
  v6 = 1;
  if ( (int)ACPIGet(a1, 1413565791, 268501000, 0LL, 0, 0LL, 0LL, (__int64)&v26, (__int64)&v25) >= 0 )
  {
    v8 = v26;
  }
  else
  {
    v7 = *((_QWORD *)AcpiInformation + 4);
    if ( !v7 )
      return 3221225473LL;
    v8 = (char *)(v7 + 44);
    v6 = 0;
    v26 = (char *)(v7 + 44);
    v25 = *(_DWORD *)(*((_QWORD *)AcpiInformation + 4) + 4LL) - 44;
  }
  if ( !v8 )
    return 3221225473LL;
  v10 = *(_QWORD *)(a1 + 8);
  v11 = byte_140075A82;
  v12 = byte_140075A82;
  if ( (v10 & 0x200000000000LL) != 0 )
  {
    v11 = *(const char **)(a1 + 608);
    if ( (v10 & 0x400000000000LL) != 0 )
      v12 = *(const char **)(a1 + 616);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_Dqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      1u,
      0xCu,
      (__int64)&WPP_753fe4d36662374399d7f9e30a1e6541_Traceguids,
      v3,
      a1,
      v11,
      v12);
    v8 = v26;
  }
  v13 = 0;
  v14 = (unsigned __int64)&v8[v25];
  while ( 1 )
  {
    for ( i = v8; (unsigned __int64)(i + 2) <= v14; i = v17 )
    {
      v16 = (unsigned __int8)i[1];
      if ( (unsigned __int8)v16 < 2u )
        break;
      v17 = &i[v16];
      if ( (unsigned __int64)&i[v16] > v14 )
        break;
      v18 = *i;
      if ( *i )
      {
        if ( v18 == 9 )
        {
          if ( (unsigned __int8)v16 >= 0x10u
            && ((unsigned int)AMLIGetNSObjectType(*(_QWORD *)(a1 + 760)) == 6
             && _bittest64((const signed __int64 *)(a1 + 8), 0x24u)
             && *(_DWORD *)(v22 + 12) == v3
             || v6 && v13) )
          {
            goto LABEL_33;
          }
        }
        else if ( v18 == 11
               && (unsigned __int8)v16 >= 0x28u
               && ((unsigned int)IrqLibGicVersion < 3 || (unsigned __int8)v16 >= 0x4Cu)
               && (((unsigned int)AMLIGetNSObjectType(*(_QWORD *)(a1 + 760)) == 6
                 && _bittest64((const signed __int64 *)(a1 + 8), 0x24u)
                 || (unsigned int)AMLIGetNSObjectType(v23) == 12)
                && *(_DWORD *)(v22 + 8) == v3
                || v6 && v13) )
        {
          if ( v24 < 3 )
LABEL_33:
            v21 = *(_DWORD *)(v22 + 4);
          else
            v21 = (*(_QWORD *)(v22 + 68) >> 8) ^ (*(_DWORD *)(v22 + 68) ^ (*(_QWORD *)(v22 + 68) >> 8)) & 0xFFFFFF;
LABEL_34:
          *a2 = v21;
          break;
        }
      }
      else if ( (unsigned __int8)v16 >= 8u
             && (((unsigned int)AMLIGetNSObjectType(*(_QWORD *)(a1 + 760)) == 12
               || (unsigned int)AMLIGetNSObjectType(v20) == 6 && _bittest64((const signed __int64 *)(a1 + 8), 0x24u))
              && *(unsigned __int8 *)(v19 + 2) == v3
              || v6 && v13) )
      {
        v21 = *(unsigned __int8 *)(v19 + 3);
        goto LABEL_34;
      }
    }
    if ( !v6 )
      break;
    if ( *a2 != -1 || v13 )
    {
      ExFreePoolWithTag(v8, 0);
      break;
    }
    v13 = 1;
  }
  if ( *a2 == -1 )
    return (unsigned int)-1073741823;
  return v2;
}
