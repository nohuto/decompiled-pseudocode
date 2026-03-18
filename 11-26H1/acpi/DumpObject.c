/*
 * XREFs of DumpObject @ 0x14006FE98
 * Callers:
 *     ExprOp2_64 @ 0x140012500 (ExprOp2_64.c)
 *     Store @ 0x140013D20 (Store.c)
 *     WriteObject @ 0x140014190 (WriteObject.c)
 *     ProcessEvalObj @ 0x140039FF0 (ProcessEvalObj.c)
 *     RunMethodCallBack @ 0x14006F410 (RunMethodCallBack.c)
 *     DumpObject @ 0x14006FE98 (DumpObject.c)
 * Callees:
 *     ConPrintf @ 0x1400093EC (ConPrintf.c)
 *     GetObjectTypeName @ 0x14001495C (GetObjectTypeName.c)
 *     GetObjectPath @ 0x14002C8B4 (GetObjectPath.c)
 *     RtlStringCchCopyNA @ 0x140030530 (RtlStringCchCopyNA.c)
 *     PrintBuffData @ 0x14006F38C (PrintBuffData.c)
 *     DumpObject @ 0x14006FE98 (DumpObject.c)
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 */

ULONG __fastcall DumpObject(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 v5; // rsi
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  char *v13; // rcx
  __int64 v14; // r8
  _DWORD *v15; // rdx
  __int64 j; // rsi
  __int64 v17; // rbx
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  __int64 v24; // r8
  char *i; // rdx
  const char *v26; // r8
  _BYTE *ObjectPath; // rdi
  const char *ObjectTypeName; // rax
  const char *v29; // r10
  unsigned int v30; // ecx
  unsigned int v31; // ecx
  unsigned int v32; // ecx
  unsigned int v33; // r11d
  unsigned int v34; // r11d
  char pszDest[8]; // [rsp+50h] [rbp-38h] BYREF
  char v37[8]; // [rsp+58h] [rbp-30h] BYREF

  v3 = a3;
  if ( a3 )
  {
    v5 = a3;
    do
    {
      ConPrintf("| ");
      --v5;
    }
    while ( v5 );
  }
  v6 = *(unsigned __int16 *)(a1 + 2);
  if ( v6 > 0x80 )
  {
    v30 = v6 - 129;
    if ( v30 )
    {
      v31 = v30 - 1;
      if ( v31 )
      {
        v32 = v31 - 1;
        if ( v32 )
        {
          if ( v32 == 1 )
          {
            RtlStringCchCopyNA(pszDest, 5uLL, (STRSAFE_PCNZCH)(**(_QWORD **)(a1 + 32) + 40LL), 4uLL);
            RtlStringCchCopyNA(v37, 5uLL, (STRSAFE_PCNZCH)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 40LL), v33);
            ConPrintf("IndexField(%s:IndexName=%s,DataName=%s)", byte_140075A82, pszDest, v37);
          }
        }
        else
        {
          RtlStringCchCopyNA(pszDest, 5uLL, (STRSAFE_PCNZCH)(**(_QWORD **)(a1 + 32) + 40LL), 4uLL);
          ConPrintf("Field(%s:Base=%s)", byte_140075A82, pszDest);
        }
      }
      else
      {
        RtlStringCchCopyNA(pszDest, 5uLL, (STRSAFE_PCNZCH)(**(_QWORD **)(a1 + 32) + 40LL), 4uLL);
        RtlStringCchCopyNA(v37, 5uLL, (STRSAFE_PCNZCH)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 40LL), v34);
        ConPrintf(
          "BankField(%s:Base=%s,BankName=%s,BankValue=0x%I64x)",
          byte_140075A82,
          pszDest,
          v37,
          *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL));
      }
    }
    else
    {
      ConPrintf("DataAlias(%s:Link=%x)", byte_140075A82, *(_QWORD *)(a1 + 16));
      DumpObject(*(_QWORD *)(a1 + 16), 0LL, (unsigned int)(v3 + 1));
    }
  }
  else if ( v6 == 128 )
  {
    ObjectPath = GetObjectPath(*(_QWORD *)(a1 + 16));
    ObjectTypeName = (const char *)GetObjectTypeName(*(unsigned __int16 *)(*(_QWORD *)(a1 + 16) + 66LL));
    ConPrintf("ObjectAlias(%s:Alias=%s,Type=%s)", byte_140075A82, v29, ObjectTypeName);
    if ( ObjectPath )
      ExFreePoolWithTag(ObjectPath, 0);
  }
  else if ( v6 > 8 )
  {
    v18 = v6 - 9;
    if ( !v18 )
    {
      v13 = "Mutex(%s:pKMutex=%x)";
      goto LABEL_29;
    }
    v19 = v18 - 1;
    if ( v19 )
    {
      v20 = v19 - 1;
      if ( v20 )
      {
        v21 = v20 - 1;
        if ( v21 )
        {
          v22 = v21 - 1;
          if ( v22 )
          {
            v23 = v22 - 1;
            if ( v23 )
            {
              if ( v23 == 1 )
                ConPrintf("DDBHandle(%s:Handle=%x)", byte_140075A82, *(_QWORD *)(a1 + 16));
            }
            else
            {
              v24 = *(_QWORD *)(a1 + 32);
              ConPrintf(
                "BufferField(%s:Ptr=%x,Len=%d,ByteOffset=0x%x,StartBit=0x%x,NumBits=%d,FieldFlags=0x%x)",
                byte_140075A82,
                *(_QWORD *)v24,
                *(_DWORD *)(v24 + 8),
                *(_DWORD *)(v24 + 12),
                *(_DWORD *)(v24 + 16),
                *(_DWORD *)(v24 + 20),
                *(_DWORD *)(v24 + 24));
            }
          }
          else
          {
            ConPrintf("ThermalZone(%s)", byte_140075A82);
          }
        }
        else
        {
          ConPrintf(
            "Processor(%s:ACPIProcessorId=0x%x,PBlk=0x%x,PBlkLen=%d)",
            byte_140075A82,
            *(unsigned __int8 *)(*(_QWORD *)(a1 + 32) + 8LL),
            **(_DWORD **)(a1 + 32),
            *(_DWORD *)(*(_QWORD *)(a1 + 32) + 4LL));
        }
      }
      else
      {
        ConPrintf(
          "PowerResource(%s:SystemLevel=0x%x,ResOrder=%d)",
          byte_140075A82,
          **(unsigned __int8 **)(a1 + 32),
          *(unsigned __int8 *)(*(_QWORD *)(a1 + 32) + 1LL));
      }
    }
    else
    {
      for ( i = (char *)&unk_14008CAE0; ; i += 16 )
      {
        v26 = (const char *)*((_QWORD *)i + 1);
        if ( !v26 )
          break;
        if ( *(_BYTE *)(*(_QWORD *)(a1 + 32) + 12LL) == *i )
          goto LABEL_53;
      }
      v26 = "VendorDefined";
LABEL_53:
      ConPrintf(
        "OpRegion(%s:RegionSpace=%s,Offset=0x%x,Len=%d)",
        byte_140075A82,
        v26,
        **(_QWORD **)(a1 + 32),
        *(_DWORD *)(*(_QWORD *)(a1 + 32) + 8LL));
    }
  }
  else if ( v6 == 8 )
  {
    ConPrintf(
      "Method(%s:Flags=0x%x,CodeBuff=%p,Len=%d)",
      byte_140075A82,
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 32) + 193LL),
      (const void *)(*(_QWORD *)(a1 + 32) + 194LL),
      *(_DWORD *)(a1 + 24) - 194);
  }
  else
  {
    if ( !*(_WORD *)(a1 + 2) )
    {
      ConPrintf("Unknown(%s)", byte_140075A82);
      return ConPrintf("\n");
    }
    v7 = v6 - 1;
    if ( !v7 )
    {
      ConPrintf("Integer(%s:Value=0x%I64x[%I64d])", byte_140075A82, *(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 16));
      return ConPrintf("\n");
    }
    v8 = v7 - 1;
    if ( !v8 )
    {
      v13 = "String(%s:Str=\"%s\")";
      goto LABEL_29;
    }
    v9 = v8 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          v12 = v11 - 1;
          if ( v12 )
          {
            if ( v12 == 1 )
            {
              v13 = "Event(%s:pKEvent=%x)";
LABEL_29:
              ConPrintf(v13, byte_140075A82, *(_QWORD *)(a1 + 32));
            }
          }
          else
          {
            ConPrintf("Device(%s)", byte_140075A82);
          }
        }
        else
        {
          v14 = *(_QWORD *)(a1 + 32);
          ConPrintf(
            "FieldUnit(%s:FieldParent=%p,ByteOffset=0x%x,StartBit=0x%x,NumBits=%d,FieldFlags=0x%x,AttribLength=0x%x,Connection=0x%p)",
            byte_140075A82,
            *(const void **)v14,
            *(_DWORD *)(v14 + 8),
            *(_DWORD *)(v14 + 12),
            *(_DWORD *)(v14 + 16),
            *(_DWORD *)(v14 + 20),
            *(unsigned __int8 *)(v14 + 24),
            (const void *)(v14 + 40));
        }
      }
      else
      {
        ConPrintf("Package(%s:NumElements=%d){", byte_140075A82, **(_DWORD **)(a1 + 32));
        ConPrintf("\n");
        v15 = *(_DWORD **)(a1 + 32);
        for ( j = 0LL; (unsigned int)j < *v15; j = (unsigned int)(j + 1) )
        {
          DumpObject(&v15[8 * j + 2 + 2 * (unsigned int)j], 0LL, (unsigned int)(v3 + 1));
          if ( (unsigned int)j < **(_DWORD **)(a1 + 32) )
            ConPrintf(",");
          v15 = *(_DWORD **)(a1 + 32);
        }
        if ( (_DWORD)v3 )
        {
          v17 = v3;
          do
          {
            ConPrintf("| ");
            --v17;
          }
          while ( v17 );
        }
        ConPrintf("}");
      }
    }
    else
    {
      ConPrintf("Buffer(%s:Ptr=%x,Len=%d)", byte_140075A82, *(_QWORD *)(a1 + 32), *(_DWORD *)(a1 + 24));
      PrintBuffData(*(unsigned __int8 **)(a1 + 32), *(_DWORD *)(a1 + 24));
    }
  }
  return ConPrintf("\n");
}
