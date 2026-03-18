/*
 * XREFs of _CmOpenCommonClassRegKeyWorker @ 0x140957BB0
 * Callers:
 *     _CmOpenCommonClassRegKey @ 0x1408CA33C (_CmOpenCommonClassRegKey.c)
 *     IopGetDeviceInterfaces @ 0x1409572B8 (IopGetDeviceInterfaces.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     RtlInitUnicodeStringEx @ 0x14045CBF0 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     RtlPrefixUnicodeString @ 0x140871070 (RtlPrefixUnicodeString.c)
 *     _PnpCtxRegOpenKey @ 0x1408C9B94 (_PnpCtxRegOpenKey.c)
 *     _RegRtlOpenKeyTransacted @ 0x1408C9BF0 (_RegRtlOpenKeyTransacted.c)
 *     _PnpCtxGetCachedNodeBaseKey @ 0x1408C9DA0 (_PnpCtxGetCachedNodeBaseKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1408C9F0C (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxRegCreateTree @ 0x140931C40 (_PnpCtxRegCreateTree.c)
 *     _CmGetCommonClassRegKeyPath @ 0x140958F10 (_CmGetCommonClassRegKeyPath.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x14095AF24 (_SysCtxRegOpenCurrentUserKey.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmOpenCommonClassRegKeyWorker(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        ACCESS_MASK a5,
        char a6,
        HANDLE *a7,
        ULONG *a8)
{
  unsigned int v12; // r14d
  unsigned int v13; // edi
  int CommonClassRegKeyPath; // eax
  int CachedContextBaseKey; // ebx
  WCHAR *v16; // r12
  unsigned int Length; // r15d
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  wchar_t *Buffer; // r10
  struct _LIST_ENTRY *Flink; // r11
  unsigned int v21; // r8d
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // r9
  const wchar_t *v25; // rdi
  unsigned __int16 v26; // r15
  struct _LIST_ENTRY *v27; // rax
  unsigned __int16 v28; // dx
  wchar_t *v29; // r10
  struct _LIST_ENTRY *v30; // r11
  unsigned __int64 v31; // r8
  unsigned __int64 v32; // r9
  struct _LIST_ENTRY *v33; // rax
  unsigned __int16 v34; // dx
  wchar_t *v35; // r10
  struct _LIST_ENTRY *v36; // r11
  unsigned __int64 v37; // r8
  unsigned __int64 v38; // r9
  _QWORD *v39; // rdx
  HANDLE v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rdx
  int Tree; // eax
  __int64 v44; // rcx
  __int64 v45; // rdx
  WCHAR *SourceString; // [rsp+40h] [rbp-30h]
  HANDLE v47; // [rsp+48h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-18h] BYREF

  v47 = 0LL;
  Handle = 0LL;
  v12 = 4;
  v13 = (a3 & 0x200) != 0 ? 320 : 200;
  DestinationString = 0LL;
  while ( 1 )
  {
    SourceString = (WCHAR *)ExAllocatePool2(0x100uLL);
    if ( !SourceString )
    {
      CachedContextBaseKey = -1073741801;
      v16 = 0LL;
      goto LABEL_21;
    }
    CommonClassRegKeyPath = CmGetCommonClassRegKeyPath(v13 >> 1, a2, a3, a4);
    CachedContextBaseKey = CommonClassRegKeyPath;
    if ( CommonClassRegKeyPath != -1073741789 )
      break;
    ExFreePoolWithTag(SourceString, 0);
    v13 = 0;
  }
  v16 = SourceString;
  if ( CommonClassRegKeyPath < 0 )
    goto LABEL_21;
  if ( (a3 & 0x100) != 0 )
  {
    v25 = SourceString;
    if ( a1 )
      v44 = *(_QWORD *)(a1 + 224);
    else
      v44 = 0LL;
    CachedContextBaseKey = SysCtxRegOpenCurrentUserKey(v44, 0LL, 0x2000000LL, &Handle);
    if ( CachedContextBaseKey < 0 )
      goto LABEL_21;
    v40 = Handle;
    v47 = Handle;
LABEL_60:
    if ( a6 )
    {
      Tree = PnpCtxRegCreateTree(a1, v40, v25, 0, a5, 0LL, a7, a8);
    }
    else
    {
      if ( a1 && (v41 = *(_QWORD *)(a1 + 224)) != 0 )
        v42 = *(_QWORD *)(v41 + 8);
      else
        v42 = 0LL;
      Tree = RegRtlOpenKeyTransacted((__int64)v40, v25, 0, a5, a7, v42);
      if ( Tree >= 0 )
      {
LABEL_65:
        *a8 = 2;
        goto LABEL_66;
      }
      if ( Tree == -1073741772 )
      {
        if ( v12 != 8 || !*(_BYTE *)(a1 + 4) )
          goto LABEL_89;
        CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(a1, 9, &v47);
        if ( CachedContextBaseKey < 0 )
          goto LABEL_66;
        Tree = PnpCtxRegOpenKey(a1, (__int64)v47, (__int64)v25, 0, a5, (__int64)a7);
        if ( Tree >= 0 )
          goto LABEL_65;
      }
    }
    if ( Tree == -1073741444 )
    {
      CachedContextBaseKey = -1073741595;
      goto LABEL_66;
    }
    if ( Tree >= 0 )
    {
LABEL_66:
      v16 = SourceString;
      goto LABEL_21;
    }
LABEL_89:
    CachedContextBaseKey = Tree;
    goto LABEL_66;
  }
  CachedContextBaseKey = RtlInitUnicodeStringEx(&DestinationString, SourceString);
  if ( CachedContextBaseKey < 0 )
    goto LABEL_21;
  Length = DestinationString.Length;
  if ( DestinationString.Length >= v13
    || DestinationString.Length <= 0x32u
    || (CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals(),
        Buffer = `_CmDeleteDeviceContainerRegKeyWorker'::`2'::ObjectPathRootPrefix.Buffer,
        Flink = CurrentServerSiloGlobals[75].Flink,
        Length < v21) )
  {
LABEL_20:
    CachedContextBaseKey = -1073741811;
    goto LABEL_21;
  }
  while ( Buffer < `_CmDeleteDeviceContainerRegKeyWorker'::`2'::ObjectPathRootPrefix.Buffer + 25 )
  {
    v22 = *Buffer;
    v23 = *(wchar_t *)((char *)Buffer
                     + (char *)DestinationString.Buffer
                     - (char *)`_CmDeleteDeviceContainerRegKeyWorker'::`2'::ObjectPathRootPrefix.Buffer);
    if ( (_WORD)v22 != (_WORD)v23 )
    {
      if ( (unsigned int)v22 >= 0x61 )
      {
        if ( (unsigned int)v22 > 0x7A )
        {
          if ( Flink && (unsigned __int16)v22 >= 0xC0u )
            LOWORD(v22) = *((_WORD *)&Flink->Flink
                          + (v22 & 0xF)
                          + *((unsigned __int16 *)&Flink->Flink
                            + ((unsigned __int8)v22 >> 4)
                            + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v22 >> 8))))
                        + v22;
        }
        else
        {
          LOWORD(v22) = v22 - 32;
        }
      }
      if ( (unsigned int)v23 >= 0x61 )
      {
        if ( (unsigned int)v23 > 0x7A )
        {
          if ( Flink && (unsigned __int16)v23 >= 0xC0u )
            LOWORD(v23) = *((_WORD *)&Flink->Flink
                          + (v23 & 0xF)
                          + *((unsigned __int16 *)&Flink->Flink
                            + ((unsigned __int8)v23 >> 4)
                            + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v23 >> 8))))
                        + v23;
        }
        else
        {
          LOWORD(v23) = v23 - 32;
        }
      }
      if ( (_WORD)v22 != (_WORD)v23 )
        goto LABEL_20;
    }
    ++Buffer;
  }
  v25 = SourceString + 25;
  DestinationString.MaximumLength -= 50;
  v26 = Length - 50;
  DestinationString.Length = v26;
  DestinationString.Buffer = SourceString + 25;
  v27 = PsGetCurrentServerSiloGlobals();
  v29 = `_CmDeleteCommonClassRegKeyWorker'::`2'::ClassKeyPrefix.Buffer;
  v30 = v27[75].Flink;
  if ( v26 < 0x1Cu )
  {
LABEL_37:
    v33 = PsGetCurrentServerSiloGlobals();
    v35 = `_CmDeleteDeviceInterfaceRegKeyWorker'::`2'::DeviceClassesKeyPrefix.Buffer;
    v36 = v33[75].Flink;
    if ( v26 < 0x2Cu )
    {
LABEL_48:
      if ( RtlPrefixUnicodeString(
             &`_CmDeleteDeviceInterfaceRegKeyWorker'::`2'::HardwareProfilesKeyPrefix,
             &DestinationString,
             1u) )
      {
        v12 = 14;
        v25 = SourceString + 43;
      }
    }
    else
    {
      while ( v35 < `_CmDeleteDeviceInterfaceRegKeyWorker'::`2'::DeviceClassesKeyPrefix.Buffer + 22 )
      {
        v37 = *v35;
        v38 = *(unsigned __int16 *)((char *)v35
                                  + (char *)v25
                                  - (char *)`_CmDeleteDeviceInterfaceRegKeyWorker'::`2'::DeviceClassesKeyPrefix.Buffer);
        if ( (_WORD)v37 != (_WORD)v38 )
        {
          if ( (unsigned int)v37 >= 0x61 )
          {
            if ( (unsigned int)v37 > 0x7A )
            {
              if ( v36 && (unsigned __int16)v37 >= v34 )
                LOWORD(v37) = *((_WORD *)&v36->Flink
                              + (v37 & 0xF)
                              + *((unsigned __int16 *)&v36->Flink
                                + ((unsigned __int8)v37 >> 4)
                                + (unsigned int)*((unsigned __int16 *)&v36->Flink + (v37 >> 8))))
                            + v37;
            }
            else
            {
              LOWORD(v37) = v37 - 32;
            }
          }
          if ( (unsigned int)v38 >= 0x61 )
          {
            if ( (unsigned int)v38 > 0x7A )
            {
              if ( v36 && (unsigned __int16)v38 >= 0xC0u )
                LOWORD(v38) = *((_WORD *)&v36->Flink
                              + (v38 & 0xF)
                              + *((unsigned __int16 *)&v36->Flink
                                + ((unsigned __int8)v38 >> 4)
                                + (unsigned int)*((unsigned __int16 *)&v36->Flink + (v38 >> 8))))
                            + v38;
            }
            else
            {
              LOWORD(v38) = v38 - 32;
            }
          }
          if ( (_WORD)v37 != (_WORD)v38 )
            goto LABEL_48;
        }
        ++v35;
        v34 = 192;
      }
      v12 = 8;
      v25 = SourceString + 47;
    }
  }
  else
  {
    while ( v29 < `_CmDeleteCommonClassRegKeyWorker'::`2'::ClassKeyPrefix.Buffer + 14 )
    {
      v31 = *v29;
      v32 = *(unsigned __int16 *)((char *)v29
                                + (char *)v25
                                - (char *)`_CmDeleteCommonClassRegKeyWorker'::`2'::ClassKeyPrefix.Buffer);
      if ( (_WORD)v31 != (_WORD)v32 )
      {
        if ( (unsigned int)v31 >= 0x61 )
        {
          if ( (unsigned int)v31 > 0x7A )
          {
            if ( v30 && (unsigned __int16)v31 >= v28 )
            {
              v28 = 192;
              LOWORD(v31) = *((_WORD *)&v30->Flink
                            + (v31 & 0xF)
                            + *((unsigned __int16 *)&v30->Flink
                              + ((unsigned __int8)v31 >> 4)
                              + (unsigned int)*((unsigned __int16 *)&v30->Flink + (v31 >> 8))))
                          + v31;
            }
          }
          else
          {
            LOWORD(v31) = v31 - 32;
          }
        }
        if ( (unsigned int)v32 >= 0x61 )
        {
          if ( (unsigned int)v32 > 0x7A )
          {
            if ( v30 && (unsigned __int16)v32 >= v28 )
              LOWORD(v32) = *((_WORD *)&v30->Flink
                            + (v32 & 0xF)
                            + *((unsigned __int16 *)&v30->Flink
                              + ((unsigned __int8)v32 >> 4)
                              + (unsigned int)*((unsigned __int16 *)&v30->Flink + (v32 >> 8))))
                          + v32;
          }
          else
          {
            LOWORD(v32) = v32 - 32;
          }
        }
        v28 = 192;
        if ( (_WORD)v31 != (_WORD)v32 )
          goto LABEL_37;
      }
      ++v29;
    }
    v12 = 7;
    v25 = SourceString + 39;
  }
  v39 = *(_QWORD **)(a1 + 8LL * v12 + 96);
  if ( !v39 )
  {
    if ( v12 <= 0xA || (v45 = *(_QWORD *)(a1 + 56), v45 == a1 + 56) )
      v39 = *(_QWORD **)(a1 + 88);
    else
      v39 = (_QWORD *)(v45 - 16);
    *(_QWORD *)(a1 + 8LL * v12 + 96) = v39;
  }
  CachedContextBaseKey = PnpCtxGetCachedNodeBaseKey(a1, v39, v12, &v47);
  if ( CachedContextBaseKey >= 0 )
  {
    v40 = v47;
    goto LABEL_60;
  }
LABEL_21:
  if ( Handle )
    ZwClose(Handle);
  if ( v16 )
    ExFreePoolWithTag(v16, 0);
  return (unsigned int)CachedContextBaseKey;
}
