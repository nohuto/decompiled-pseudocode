/*
 * XREFs of ?ndisReadBindPaths@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_RTL_QUERY_REGISTRY_TABLE@@PEAX@Z @ 0x14007D4D0
 * Callers:
 *     ?ndisInitializeConfiguration@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z @ 0x14016CFD0 (-ndisInitializeConfiguration@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 */

__int64 __fastcall ndisReadBindPaths(
        struct _NDIS_MINIPORT_BLOCK *a1,
        PRTL_QUERY_REGISTRY_TABLE QueryTable,
        PCWSTR Path)
{
  __int16 v3; // si
  PRTL_QUERY_REGISTRY_TABLE v5; // rbx
  unsigned __int64 v7; // rdx
  NTSTATUS v8; // ebx
  const WCHAR *v9; // rdi
  unsigned int v10; // r12d
  unsigned int v11; // r14d
  unsigned int v12; // r13d
  unsigned __int64 v13; // rax
  bool v14; // zf
  _NDIS_BIND_PATHS *BindPaths; // rcx
  _NDIS_BIND_PATHS *Pool2; // rax
  bool v17; // r13
  __int64 v18; // rcx
  const WCHAR *v19; // r14
  char *v20; // r12
  char *v21; // rdi
  _UNICODE_STRING *Paths; // r10
  unsigned __int16 Length; // cx
  unsigned __int64 v24; // rax
  wchar_t *v25; // r8
  unsigned __int64 v26; // r11
  wchar_t *Buffer; // r9
  unsigned __int64 v28; // rcx
  unsigned __int16 MaximumLength; // ax
  int v30; // eax
  __int64 Context; // [rsp+40h] [rbp-30h] BYREF
  _UNICODE_STRING v33; // [rsp+48h] [rbp-28h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-18h] BYREF
  char v35; // [rsp+B8h] [rbp+48h]
  PCWSTR SourceString; // [rsp+C8h] [rbp+58h] BYREF

  v3 = 0;
  SourceString = 0LL;
  v35 = 0;
  v5 = QueryTable;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(QueryTable) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)QueryTable,
      13,
      12,
      (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
      (char)a1);
  }
  Context = 0LL;
  v5->Name = L"Linkage";
  v5->QueryRoutine = 0LL;
  v5[1].QueryRoutine = (int (__fastcall *)(wchar_t *, unsigned int, void *, unsigned int, void *, void *))ndisReadParameter;
  v5->Flags = 1;
  v5[1].Name = L"RootDevice";
  v5[1].Flags = 20;
  v5[1].EntryContext = &SourceString;
  v5[1].DefaultType = 0;
  v5[2].QueryRoutine = 0LL;
  v5[2].Flags = 0;
  v5[2].Name = 0LL;
  v8 = RtlQueryRegistryValuesEx(0x40000000u, Path, v5, &Context, 0LL);
  if ( v8 == -1073741772 )
  {
    v8 = 0;
  }
  else if ( v8 < 0 || (_DWORD)Context != 7 )
  {
    v17 = SourceString != 0LL;
    if ( v8 >= 0 )
      v8 = -1073741823;
    goto LABEL_59;
  }
  if ( SourceString )
    v35 = 1;
  else
    SourceString = (PCWSTR)a1->BaseName.Buffer;
  v9 = SourceString;
  v10 = 24;
  v11 = 0;
  if ( !*SourceString )
    goto LABEL_56;
  do
  {
    v12 = v11;
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, v9);
    LODWORD(v7) = DestinationString.Length;
    ++v11;
    v10 += DestinationString.Length + ndisDeviceStr.Length + 18;
    v13 = ((unsigned __int64)DestinationString.Length + 2) >> 1;
    v14 = v9[v13] == 0;
    v9 += v13;
  }
  while ( !v14 );
  if ( v11 )
  {
    BindPaths = a1->BindPaths;
    if ( BindPaths )
      ExFreePoolWithTag(BindPaths, 0);
    Pool2 = (_NDIS_BIND_PATHS *)ExAllocatePool2(64LL, v10, 1851868238LL);
    a1->BindPaths = Pool2;
    if ( !Pool2 )
    {
      v17 = v35;
      v8 = -1073741670;
      goto LABEL_59;
    }
    Pool2->Number = v11;
    if ( v11 > 1 )
    {
      a1->PnPFlags |= 0x8000000u;
      a1->InfoFlags |= 0x10000000u;
    }
    v18 = v11;
    v19 = SourceString;
    v20 = (char *)&a1->BindPaths[1] + 16 * v18;
    if ( *SourceString )
    {
      while ( 1 )
      {
        v33 = 0LL;
        DestinationString = 0LL;
        RtlInitUnicodeString(&v33, v19);
        if ( v33.Length > 0x1000u )
          break;
        v21 = (char *)a1->BindPaths + 16 * v12;
        v19 += ((unsigned __int64)v33.Length + 2) >> 1;
        *((_QWORD *)v21 + 2) = v20;
        *((_WORD *)v21 + 4) = 0;
        *((_WORD *)v21 + 5) = ndisDeviceStr.Length + v33.Length + 2;
        DestinationString.Length = 0;
        DestinationString.Buffer = (wchar_t *)&v20[ndisDeviceStr.Length];
        DestinationString.MaximumLength = v33.Length + 2;
        RtlCopyUnicodeString((PUNICODE_STRING)(v21 + 8), &ndisDeviceStr);
        RtlUpcaseUnicodeString(&DestinationString, &v33, 0);
        --v12;
        *((_WORD *)v21 + 4) += DestinationString.Length;
        v20 += 2 * ((unsigned __int64)*((unsigned __int16 *)v21 + 5) >> 1);
        if ( !*v19 )
          goto LABEL_24;
      }
      v8 = -1073741670;
    }
LABEL_24:
    if ( (a1->Flags & 0x80u) == 0 )
      goto LABEL_52;
    Paths = a1->BindPaths->Paths;
    Length = Paths->Length;
    if ( (Paths->Length & 1) != 0
      || (v24 = a1->BindPaths->Paths[0].MaximumLength, (v24 & 1) != 0)
      || Length > (unsigned __int16)v24
      || (_WORD)v24 == 0xFFFF
      || (v25 = a1->BindPaths->Paths[0].Buffer) == 0LL && (Length || (_WORD)v24) )
    {
      v8 = -1073741811;
      v30 = -1073741811;
    }
    else
    {
      if ( a1->BindPaths == (_NDIS_BIND_PATHS *)-8LL )
      {
        v25 = 0LL;
        v7 = 0LL;
      }
      else
      {
        v7 = v24 >> 1;
      }
      v26 = a1->MiniportName.Length;
      Buffer = 0LL;
      v28 = 0LL;
      if ( (v26 & 1) != 0
        || (MaximumLength = a1->MiniportName.MaximumLength, (MaximumLength & 1) != 0)
        || (unsigned __int16)v26 > MaximumLength
        || MaximumLength == 0xFFFF
        || !a1->MiniportName.Buffer && ((_WORD)v26 || MaximumLength) )
      {
        v8 = -1073741811;
      }
      else
      {
        if ( a1 != (struct _NDIS_MINIPORT_BLOCK *)-3808LL )
        {
          Buffer = a1->MiniportName.Buffer;
          v28 = v26 >> 1;
        }
        v8 = 0;
        if ( v7 )
        {
          while ( v28 )
          {
            --v28;
            *v25++ = *Buffer++;
            ++v3;
            if ( !--v7 )
              goto LABEL_47;
          }
        }
        else
        {
LABEL_47:
          if ( v28 )
            v8 = -2147483643;
        }
      }
      v30 = v8;
      Paths->Length = 2 * v3;
      if ( !v8 )
        goto LABEL_52;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_52:
      v17 = v35;
      goto LABEL_59;
    }
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xDu,
      0xDu,
      (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
      (char)a1,
      v30);
    v17 = v35;
  }
  else
  {
LABEL_56:
    v17 = v35;
    v8 = -1073741811;
  }
LABEL_59:
  if ( v17 )
    ExFreePoolWithTag((PVOID)SourceString, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v7,
      13,
      14,
      (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
      (char)a1);
  }
  return (unsigned int)v8;
}
