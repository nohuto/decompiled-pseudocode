/*
 * XREFs of _CmOpenCommonClassRegKeyWorker @ 0x140960FE0
 * Callers:
 *     _CmOpenCommonClassRegKey @ 0x14095FB24 (_CmOpenCommonClassRegKey.c)
 *     IopGetDeviceInterfaces @ 0x14095FCD0 (IopGetDeviceInterfaces.c)
 *     _CmOpenInterfaceClassRegKey @ 0x140972760 (_CmOpenInterfaceClassRegKey.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x140957518 (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxGetCachedNodeBaseKey @ 0x140958180 (_PnpCtxGetCachedNodeBaseKey.c)
 *     _PnpCtxRegOpenKey @ 0x1409582F0 (_PnpCtxRegOpenKey.c)
 *     _RegRtlOpenKeyTransacted @ 0x1409583B0 (_RegRtlOpenKeyTransacted.c)
 *     _CmGetCommonClassRegKeyPath @ 0x1409620B0 (_CmGetCommonClassRegKeyPath.c)
 *     _PnpCtxRegCreateTree @ 0x140978C5C (_PnpCtxRegCreateTree.c)
 *     RtlPrefixUnicodeString @ 0x140A3CC90 (RtlPrefixUnicodeString.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140A3DF70 (_SysCtxRegOpenCurrentUserKey.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmOpenCommonClassRegKeyWorker(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        ACCESS_MASK a5,
        char a6,
        HANDLE *a7,
        _DWORD *a8)
{
  unsigned int v8; // edi
  unsigned int v13; // r12d
  wchar_t *Pool2; // rsi
  int CommonClassRegKeyPath; // eax
  int inited; // ebx
  unsigned __int16 Length; // bx
  struct _LIST_ENTRY *Flink; // rbp
  const wchar_t *i; // rax
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // r10
  const WCHAR *v22; // rdi
  _QWORD *v23; // rdx
  unsigned __int16 v25; // bx
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  const wchar_t *v27; // r8
  struct _LIST_ENTRY *v28; // r14
  unsigned __int64 v29; // r9
  unsigned __int64 v30; // r10
  struct _LIST_ENTRY *v31; // rax
  const wchar_t *v32; // r8
  struct _LIST_ENTRY *v33; // rbp
  unsigned __int64 v34; // r9
  unsigned __int64 v35; // r10
  char *v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rax
  int Tree; // eax
  __int64 v40; // rcx
  __int64 v41; // rdx
  char *v42; // [rsp+40h] [rbp-58h] BYREF
  HANDLE Handle[2]; // [rsp+48h] [rbp-50h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-40h] BYREF

  v8 = 320;
  v42 = 0LL;
  Handle[0] = 0LL;
  v13 = 4;
  DestinationString = 0LL;
  if ( (a3 & 0x200) == 0 )
    v8 = 200;
  while ( 1 )
  {
    Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
    {
      inited = -1073741801;
      goto LABEL_25;
    }
    CommonClassRegKeyPath = CmGetCommonClassRegKeyPath(v8 >> 1, a2, a3, a4);
    inited = CommonClassRegKeyPath;
    if ( CommonClassRegKeyPath != -1073741789 )
      break;
    ExFreePoolWithTag(Pool2, 0);
    v8 = 0;
  }
  if ( CommonClassRegKeyPath < 0 )
    goto LABEL_25;
  if ( (a3 & 0x100) != 0 )
  {
    v22 = Pool2;
    if ( a1 )
      v40 = *(_QWORD *)(a1 + 224);
    else
      v40 = 0LL;
    inited = SysCtxRegOpenCurrentUserKey(v40, 0LL, 0x2000000LL, Handle);
    if ( inited < 0 )
      goto LABEL_25;
    v36 = (char *)Handle[0];
    v42 = (char *)Handle[0];
    goto LABEL_73;
  }
  inited = RtlInitUnicodeStringEx(&DestinationString, Pool2);
  if ( inited < 0 )
    goto LABEL_25;
  Length = DestinationString.Length;
  if ( DestinationString.Length >= v8 || DestinationString.Length <= 0x32u )
  {
LABEL_21:
    inited = -1073741811;
    goto LABEL_25;
  }
  Flink = PsGetCurrentServerSiloGlobals()[75].Flink;
  for ( i = L"System\\CurrentControlSet\\"; i < L""; ++i )
  {
    v20 = *i;
    v21 = *(const wchar_t *)((char *)i + (char *)DestinationString.Buffer - (char *)L"System\\CurrentControlSet\\");
    if ( (_WORD)v20 != (_WORD)v21 )
    {
      if ( (unsigned int)v20 >= 0x61 )
      {
        if ( (unsigned int)v20 > 0x7A )
        {
          if ( Flink && (unsigned __int16)v20 >= 0xC0u )
            LOWORD(v20) = *((_WORD *)&Flink->Flink
                          + (v20 & 0xF)
                          + *((unsigned __int16 *)&Flink->Flink
                            + ((unsigned __int8)v20 >> 4)
                            + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v20 >> 8))))
                        + v20;
        }
        else
        {
          LOWORD(v20) = v20 - 32;
        }
      }
      if ( (unsigned int)v21 >= 0x61 )
      {
        if ( (unsigned int)v21 > 0x7A )
        {
          if ( Flink && (unsigned __int16)v21 >= 0xC0u )
            LOWORD(v21) = *((_WORD *)&Flink->Flink
                          + (v21 & 0xF)
                          + *((unsigned __int16 *)&Flink->Flink
                            + ((unsigned __int8)v21 >> 4)
                            + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v21 >> 8))))
                        + v21;
        }
        else
        {
          LOWORD(v21) = v21 - 32;
        }
      }
      if ( (_WORD)v20 != (_WORD)v21 )
        goto LABEL_21;
    }
  }
  v22 = Pool2 + 25;
  DestinationString.MaximumLength -= 50;
  v25 = Length - 50;
  DestinationString.Buffer = Pool2 + 25;
  DestinationString.Length = v25;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v27 = L"Control\\Class\\";
  v28 = CurrentServerSiloGlobals[75].Flink;
  if ( v25 < 0x1Cu )
  {
    PsGetCurrentServerSiloGlobals();
  }
  else
  {
    while ( 1 )
    {
      if ( v27 >= L"" )
      {
        v13 = 7;
        v22 = Pool2 + 39;
        goto LABEL_23;
      }
      v29 = *v27;
      v30 = *(const wchar_t *)((char *)v27 + (char *)v22 - (char *)L"Control\\Class\\");
      if ( (_WORD)v29 != (_WORD)v30 )
      {
        if ( (unsigned int)v29 >= 0x61 )
        {
          if ( (unsigned int)v29 > 0x7A )
          {
            if ( v28 && (unsigned __int16)v29 >= 0xC0u )
              LOWORD(v29) = *((_WORD *)&v28->Flink
                            + (v29 & 0xF)
                            + *((unsigned __int16 *)&v28->Flink
                              + ((unsigned __int8)v29 >> 4)
                              + (unsigned int)*((unsigned __int16 *)&v28->Flink + (v29 >> 8))))
                          + v29;
          }
          else
          {
            LOWORD(v29) = v29 - 32;
          }
        }
        if ( (unsigned int)v30 >= 0x61 )
        {
          if ( (unsigned int)v30 > 0x7A )
          {
            if ( v28 && (unsigned __int16)v30 >= 0xC0u )
              LOWORD(v30) = *((_WORD *)&v28->Flink
                            + (v30 & 0xF)
                            + *((unsigned __int16 *)&v28->Flink
                              + ((unsigned __int8)v30 >> 4)
                              + (unsigned int)*((unsigned __int16 *)&v28->Flink + (v30 >> 8))))
                          + v30;
          }
          else
          {
            LOWORD(v30) = v30 - 32;
          }
        }
        if ( (_WORD)v29 != (_WORD)v30 )
          break;
      }
      ++v27;
    }
    v31 = PsGetCurrentServerSiloGlobals();
    v32 = L"Control\\DeviceClasses\\";
    v33 = v31[75].Flink;
    if ( v25 >= 0x2Cu )
    {
      while ( v32 < L"" )
      {
        v34 = *v32;
        v35 = *(const wchar_t *)((char *)v32 + (char *)v22 - (char *)L"Control\\DeviceClasses\\");
        if ( (_WORD)v34 != (_WORD)v35 )
        {
          if ( (unsigned int)v34 >= 0x61 )
          {
            if ( (unsigned int)v34 > 0x7A )
            {
              if ( v33 && (unsigned __int16)v34 >= 0xC0u )
                LOWORD(v34) = *((_WORD *)&v33->Flink
                              + (v34 & 0xF)
                              + *((unsigned __int16 *)&v33->Flink
                                + ((unsigned __int8)v34 >> 4)
                                + (unsigned int)*((unsigned __int16 *)&v33->Flink + (v34 >> 8))))
                            + v34;
            }
            else
            {
              LOWORD(v34) = v34 - 32;
            }
          }
          if ( (unsigned int)v35 >= 0x61 )
          {
            if ( (unsigned int)v35 > 0x7A )
            {
              if ( v33 && (unsigned __int16)v35 >= 0xC0u )
                LOWORD(v35) = *((_WORD *)&v33->Flink
                              + (v35 & 0xF)
                              + *((unsigned __int16 *)&v33->Flink
                                + ((unsigned __int8)v35 >> 4)
                                + (unsigned int)*((unsigned __int16 *)&v33->Flink + (v35 >> 8))))
                            + v35;
            }
            else
            {
              LOWORD(v35) = v35 - 32;
            }
          }
          if ( (_WORD)v34 != (_WORD)v35 )
            goto LABEL_58;
        }
        ++v32;
      }
      v13 = 8;
      v22 = Pool2 + 47;
      goto LABEL_23;
    }
  }
LABEL_58:
  if ( RtlPrefixUnicodeString(&`_CmOpenCommonClassRegKeyWorker'::`2'::HardwareProfilesKeyPrefix, &DestinationString, 1u) )
  {
    v13 = 14;
    v22 = Pool2 + 43;
  }
LABEL_23:
  v23 = *(_QWORD **)(a1 + 8LL * v13 + 96);
  if ( !v23 )
  {
    switch ( v13 )
    {
      case 5u:
      case 9u:
      case 0xAu:
      case 0xBu:
      case 0xEu:
      case 0xFu:
        v41 = *(_QWORD *)(a1 + 56);
        if ( v41 == a1 + 56 )
          goto LABEL_103;
        v23 = (_QWORD *)(v41 - 16);
        break;
      default:
LABEL_103:
        v23 = *(_QWORD **)(a1 + 88);
        break;
    }
    *(_QWORD *)(a1 + 8LL * v13 + 96) = v23;
  }
  inited = PnpCtxGetCachedNodeBaseKey(a1, v23, v13, &v42);
  if ( inited < 0 )
    goto LABEL_25;
  v36 = v42;
LABEL_73:
  if ( a6 )
  {
    Tree = PnpCtxRegCreateTree(a1, v36, v22, 0LL, a5, 0LL, a7, a8);
  }
  else
  {
    if ( a1 && (v37 = *(_QWORD *)(a1 + 224)) != 0 )
      v38 = *(_QWORD *)(v37 + 8);
    else
      v38 = 0LL;
    Tree = RegRtlOpenKeyTransacted(v36, v22, 0, a5, a7, v38);
    if ( Tree >= 0 )
    {
      *a8 = 2;
      goto LABEL_25;
    }
    if ( Tree == -1073741772 )
    {
      if ( v13 != 8 || !*(_BYTE *)(a1 + 4) )
      {
LABEL_92:
        inited = Tree;
        goto LABEL_25;
      }
      inited = PnpCtxGetCachedContextBaseKey(a1, 9, (__int64)&v42);
      if ( inited < 0 )
        goto LABEL_25;
      Tree = PnpCtxRegOpenKey(a1, (__int64)v42, (__int64)v22, 0, a5, (__int64)a7);
      if ( Tree >= 0 )
      {
        *a8 = 2;
        goto LABEL_25;
      }
    }
  }
  if ( Tree == -1073741444 )
  {
    inited = -1073741595;
    goto LABEL_25;
  }
  if ( Tree < 0 )
    goto LABEL_92;
LABEL_25:
  if ( Handle[0] )
    ZwClose(Handle[0]);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)inited;
}
