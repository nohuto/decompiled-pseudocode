/*
 * XREFs of ?LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z @ 0x1403CC820
 * Callers:
 *     ?_LoadTopologyDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1403CC4F0 (-_LoadTopologyDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@C.c)
 * Callees:
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x14005CF34 (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?SetModalitySetId@CCD_TOPOLOGY@@QEAAAEBVCCD_SET_STRING_ID@@AEBV2@@Z @ 0x140339928 (-SetModalitySetId@CCD_TOPOLOGY@@QEAAAEBVCCD_SET_STRING_ID@@AEBV2@@Z.c)
 *     ?GetSetId@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@XZ @ 0x14033B490 (-GetSetId@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@XZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x14033F4C8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     DxgkGetAdapterDefaultScaling @ 0x14033F530 (DxgkGetAdapterDefaultScaling.c)
 *     ?_ReadPath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIQEAGPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1403CC604 (-_ReadPath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIQEAGPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@.c)
 *     _CcdReadRegistryValues @ 0x1403CCF5C (_CcdReadRegistryValues.c)
 *     ?ClearPathDescriptor@CCD_TOPOLOGY@@SAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1403CD178 (-ClearPathDescriptor@CCD_TOPOLOGY@@SAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 */

__int64 __fastcall CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::LoadTopology(
        CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *this,
        struct CCD_TOPOLOGY *a2)
{
  unsigned __int16 v3; // si
  const struct CCD_SET_STRING_ID *v4; // r12
  __int64 v5; // rax
  unsigned __int16 v6; // dx
  unsigned __int16 v7; // cx
  unsigned int v8; // ebx
  struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  int v10; // r10d
  int v11; // r14d
  __int64 v12; // rbx
  unsigned int v13; // r9d
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rdi
  unsigned int v17; // ecx
  __int64 v18; // r12
  __int64 v19; // r12
  NTSTATUS v20; // eax
  unsigned int v21; // edi
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v22; // rdi
  int RegistryValues; // eax
  int v24; // eax
  CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rcx
  NTSTATUS v30; // eax
  void *v31; // rdi
  NTSTATUS v32; // eax
  __int64 result; // rax
  int v34; // eax
  unsigned int v35; // eax
  unsigned int v36; // ecx
  void **v37; // rax
  __int64 v38; // rax
  int v39; // ecx
  int v40; // ecx
  int v41; // edx
  __int64 v42; // rax
  unsigned int v43; // [rsp+30h] [rbp-69h]
  unsigned int v44; // [rsp+34h] [rbp-65h]
  unsigned int v45; // [rsp+34h] [rbp-65h]
  int v46; // [rsp+38h] [rbp-61h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-59h] BYREF
  unsigned int v48; // [rsp+48h] [rbp-51h]
  int v49; // [rsp+4Ch] [rbp-4Dh]
  const struct CCD_SET_STRING_ID *SetId; // [rsp+50h] [rbp-49h]
  CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *v51; // [rsp+58h] [rbp-41h]
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-39h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-29h] BYREF
  unsigned __int16 v54; // [rsp+A0h] [rbp+7h] BYREF
  WCHAR SourceString; // [rsp+A8h] [rbp+Fh] BYREF

  v51 = this;
  v3 = 0;
  SetId = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::GetSetId(this);
  v4 = SetId;
  if ( !SetId )
  {
    WdLogSingleEntry0(2LL);
    result = 3221225473LL;
    WdLogGlobalForLineNumber = 1160;
    return result;
  }
  v5 = *((_QWORD *)a2 + 8);
  if ( v5 )
    v6 = *(_WORD *)(v5 + 22);
  else
    v6 = 0;
  v7 = *((_WORD *)SetId + 16);
  if ( v7 > v6 )
  {
    if ( v5 )
      v3 = *(_WORD *)(v5 + 22);
    WdLogSingleEntry2(1LL, v3, *((unsigned __int16 *)SetId + 16));
    result = 3221225507LL;
    WdLogGlobalForLineNumber = 1169;
    return result;
  }
  v8 = 0;
  if ( v7 )
  {
    do
    {
      PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(a2, v8);
      CCD_TOPOLOGY::ClearPathDescriptor(PathDescriptor);
      ++v8;
    }
    while ( v8 < *((unsigned __int16 *)SetId + 16) );
  }
  v10 = -1;
  Handle = 0LL;
  v49 = -1;
  v11 = -1073741823;
  v12 = 0LL;
  v13 = 0;
  while ( 1 )
  {
    v43 = v13;
    if ( v13 >= *((unsigned __int16 *)v4 + 16) )
      break;
    v14 = *((_QWORD *)v4 + 3);
    LODWORD(v15) = v13 - 1;
    v16 = v13;
    v17 = 0;
    v46 = 0;
    v44 = 0;
    v18 = *(unsigned __int16 *)(v14 + 8LL * v13 + 2);
    if ( (int)(v13 - 1) >= 0 )
    {
      v15 = (int)v15;
      do
      {
        if ( *(_WORD *)(v14 + 8 * v15 + 2) != (_WORD)v18 )
          break;
        ++v17;
        --v15;
        v44 = v17;
      }
      while ( v15 >= 0 );
    }
    v11 = 0;
    if ( v10 != (_DWORD)v18 )
    {
      v30 = RtlStringCbPrintfW(&SourceString, 6uLL, (size_t *)L"%02x", *(unsigned __int16 *)(v14 + 8LL * v13 + 2));
      v11 = v30;
      if ( v30 < 0 )
      {
        WdLogSingleEntry5(1LL, v30, v16, v18, a2, *((_QWORD *)a2 + 8));
        WdLogGlobalForLineNumber = 1229;
        goto LABEL_40;
      }
      if ( Handle )
        ZwClose(Handle);
      DestinationString = 0LL;
      v31 = (void *)*((_QWORD *)v51 + 8);
      RtlInitUnicodeString(&DestinationString, &SourceString);
      *(_QWORD *)&ObjectAttributes.Length = 48LL;
      ObjectAttributes.ObjectName = &DestinationString;
      *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
      ObjectAttributes.RootDirectory = v31;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v32 = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
      v11 = v32;
      if ( v32 < 0 )
      {
        WdLogSingleEntry5(2LL, v32, v43, v18, a2, *((_QWORD *)a2 + 8));
        WdLogGlobalForLineNumber = 1247;
        goto LABEL_40;
      }
      v49 = v18;
    }
    v19 = v44;
    v20 = RtlStringCbPrintfW(&v54, 6uLL, (size_t *)L"%02x", v44);
    v21 = v20;
    if ( v20 < 0 )
    {
      WdLogSingleEntry2(1LL, v20, v44);
      result = v21;
      WdLogGlobalForLineNumber = 1264;
      return result;
    }
    v22 = CCD_TOPOLOGY::GetPathDescriptor(a2, v43);
    RegistryValues = CcdReadRegistryValues(Handle, 0LL, &unk_140166C00, 8LL, v22);
    if ( RegistryValues < 0 )
    {
      WdLogSingleEntry4(2LL, RegistryValues, Handle, v44, v43);
      WdLogGlobalForLineNumber = 1289;
LABEL_37:
      CCD_TOPOLOGY::ClearPathDescriptor(v22);
LABEL_38:
      v4 = SetId;
      break;
    }
    *((_QWORD *)v22 + 13) = *((_QWORD *)v22 + 12);
    v24 = CcdReadRegistryValues(Handle, 0LL, &unk_140166DC0, 2LL, &v46);
    if ( v24 == -1073741772 )
    {
      v46 = 0;
    }
    else if ( v24 < 0 )
    {
      WdLogSingleEntry4(2LL, v24, Handle, v44, v43);
      WdLogGlobalForLineNumber = 1321;
      goto LABEL_37;
    }
    v48 = *((_DWORD *)v22 + 24);
    v45 = *((_DWORD *)v22 + 25);
    v26 = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::_ReadPath(v25, Handle, v19, &v54, v22);
    if ( v26 < 0 )
    {
      WdLogSingleEntry5(2LL, v26, v43, v19, a2, *((_QWORD *)a2 + 8));
      WdLogGlobalForLineNumber = 1344;
      goto LABEL_37;
    }
    *((_DWORD *)v22 + 51) = 0;
    *((_DWORD *)v22 + 52) = 4;
    switch ( v46 )
    {
      case 0:
        v38 = *(_QWORD *)v22 & 0x10B87LL;
        *(_QWORD *)v22 = v38;
        if ( (v38 & 0x100) != 0 )
        {
          if ( (v38 & 0x200) != 0 && ((v39 = *((_DWORD *)v22 + 33), v39 == 2) || v39 == 4) )
          {
            v40 = *((_DWORD *)v22 + 24);
            v41 = *((_DWORD *)v22 + 25);
          }
          else
          {
            v40 = *((_DWORD *)v22 + 25);
            v41 = *((_DWORD *)v22 + 24);
          }
          *((_DWORD *)v22 + 38) = v41;
          *((_DWORD *)v22 + 39) = v40;
          *(_QWORD *)v22 = v38 | 0x20000;
        }
LABEL_75:
        v42 = *(_QWORD *)v22 & 0x30B87LL;
        *(_QWORD *)v22 = v42;
        if ( v46 == 1 && (v42 & 0x10000) != 0 && *((_DWORD *)v22 + 35) == 5 )
          DxgkGetAdapterDefaultScaling((struct _LUID *)v22 + 2, (enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *)v22 + 35);
LABEL_79:
        *(_QWORD *)v22 &= 0x830B87uLL;
        if ( *((_DWORD *)v22 + 29) != 21 )
        {
          WdLogSingleEntry3(3LL, *((int *)v22 + 29), v51, v22);
          WdLogGlobalForLineNumber = 1423;
        }
        *((_DWORD *)v22 + 29) = 21;
LABEL_43:
        *(_QWORD *)v22 &= 0x830F87uLL;
LABEL_21:
        *(_QWORD *)v22 &= 0x1830F87uLL;
        goto LABEL_22;
      case 1:
        goto LABEL_75;
      case 2:
        goto LABEL_79;
      case 3:
        goto LABEL_43;
      case 4:
        goto LABEL_21;
    }
    WdLogSingleEntry3(2LL, v46, *((unsigned int *)v22 + 6), *((unsigned int *)v22 + 7));
    WdLogGlobalForLineNumber = 1483;
    CCD_TOPOLOGY::ClearPathDescriptor(v22);
LABEL_22:
    v27 = *(_QWORD *)v22;
    if ( (*(_QWORD *)v22 & 0x1000000LL) != 0 )
    {
      v28 = CcdReadRegistryValues(Handle, &v54, &unk_140166720, 4LL, v22);
      if ( v28 < 0 )
      {
        WdLogSingleEntry3(3LL, v28, v43, v19);
        WdLogGlobalForLineNumber = 1503;
        goto LABEL_38;
      }
    }
    else
    {
      *((_DWORD *)v22 + 60) = 1;
      if ( (v27 & 2) != 0 )
      {
        *((_QWORD *)v22 + 28) = *(_QWORD *)((char *)v22 + 52);
        *(_QWORD *)v22 = v27 | 0x1000000;
      }
    }
    if ( (*(_QWORD *)v22 & 0x20000LL) != 0 )
    {
      if ( (_DWORD)v19 )
      {
        *((_QWORD *)v22 + 19) = v12;
      }
      else
      {
        if ( (*(_QWORD *)v22 & 0x200LL) != 0 && ((v34 = *((_DWORD *)v22 + 33), v34 == 2) || v34 == 4) )
        {
          v35 = v48;
          v36 = v45;
        }
        else
        {
          v35 = v45;
          v36 = v48;
        }
        *((_DWORD *)v22 + 38) = v36;
        *((_DWORD *)v22 + 39) = v35;
        v12 = *((_QWORD *)v22 + 19);
      }
    }
    v29 = *(_QWORD *)v22;
    if ( (*(_QWORD *)v22 & 0x10000LL) != 0 )
    {
      *((_DWORD *)v22 + 34) = *((_DWORD *)v22 + 35);
      v29 |= 0x40000000000uLL;
      *(_QWORD *)v22 = v29;
    }
    if ( (v29 & 0x100) == 0 )
      *(_QWORD *)v22 = v29 & 0xFFFFFFFFFF7FFFFFuLL;
    v4 = SetId;
    v13 = v43 + 1;
    v10 = v49;
  }
  if ( v11 >= 0 )
  {
    v37 = CCD_TOPOLOGY::SetModalitySetId((void **)a2, v4);
    v11 = *(_DWORD *)v37;
    if ( *(int *)v37 >= 0 )
    {
      *(_WORD *)(*((_QWORD *)a2 + 8) + 20LL) = *((_WORD *)v4 + 16);
      *(_DWORD *)(*((_QWORD *)a2 + 8) + 24LL) |= 1u;
    }
    else
    {
      WdLogSingleEntry3(2LL, *(int *)v37, a2, v4);
      WdLogGlobalForLineNumber = 1574;
    }
  }
LABEL_40:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v11;
}
