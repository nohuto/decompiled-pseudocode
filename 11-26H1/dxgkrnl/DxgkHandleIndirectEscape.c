/*
 * XREFs of DxgkHandleIndirectEscape @ 0x140250AE0
 * Callers:
 *     DxgkEscape @ 0x14043CE60 (DxgkEscape.c)
 * Callees:
 *     ??0AUTO_PNPPOWER_LOCK@@QEAA@PEAU_COMMON_PNP_CONTEXT@@_N11@Z @ 0x1400320AC (--0AUTO_PNPPOWER_LOCK@@QEAA@PEAU_COMMON_PNP_CONTEXT@@_N11@Z.c)
 *     ?Free@?$AUTO_FREE_POOL@PEAUIDD_COMPLETION_CONTEXT@@@@QEAAXXZ @ 0x1400553D4 (-Free@-$AUTO_FREE_POOL@PEAUIDD_COMPLETION_CONTEXT@@@@QEAAXXZ.c)
 *     ?Acquire@AUTO_REMOVE_LOCK@@QEAAJXZ @ 0x1400569DC (-Acquire@AUTO_REMOVE_LOCK@@QEAAJXZ.c)
 *     ?Release@AUTO_PNPPOWER_LOCK@@QEAAXXZ @ 0x140057024 (-Release@AUTO_PNPPOWER_LOCK@@QEAAXXZ.c)
 *     ?Release@AUTO_REMOVE_LOCK@@QEAAXXZ @ 0x1400577A0 (-Release@AUTO_REMOVE_LOCK@@QEAAXXZ.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     Feature_EnableIddCx111__private_IsEnabledDeviceUsageNoInline @ 0x1400931B4 (Feature_EnableIddCx111__private_IsEnabledDeviceUsageNoInline.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 *     DxgkSetIndirectDisplayHostProcess @ 0x1401AA7D4 (DxgkSetIndirectDisplayHostProcess.c)
 *     DxgkGetIndirectDisplayRenderAdapterByHandle @ 0x1401B5CFC (DxgkGetIndirectDisplayRenderAdapterByHandle.c)
 *     DxgkSetIndirectDisplayRenderAdapterByHandle @ 0x1401B8D08 (DxgkSetIndirectDisplayRenderAdapterByHandle.c)
 *     DxgkIddGetAdapterSessionDiagnostics @ 0x1401C7774 (DxgkIddGetAdapterSessionDiagnostics.c)
 *     DxgkIddHandleSetDisplayConfig @ 0x1401C7910 (DxgkIddHandleSetDisplayConfig.c)
 *     ?DpiIndirectStartAdapter@@YAJPEAU_UNICODE_STRING@@PEBXK@Z @ 0x140250254 (-DpiIndirectStartAdapter@@YAJPEAU_UNICODE_STRING@@PEBXK@Z.c)
 *     DxgkGetDeviceObjectFromAdapter @ 0x1403C4138 (DxgkGetDeviceObjectFromAdapter.c)
 *     ?DpiIndirectEscapeAccessCheck@@YAJXZ @ 0x1403D68AC (-DpiIndirectEscapeAccessCheck@@YAJXZ.c)
 *     DpiIndirectDdiIoControl @ 0x14044250C (DpiIndirectDdiIoControl.c)
 */

__int64 __fastcall DxgkHandleIndirectEscape(unsigned int a1, __int64 a2)
{
  char v3; // r12
  _DWORD *v5; // r14
  __int64 v6; // rbx
  _QWORD *Pool2; // rdi
  unsigned int v8; // eax
  void *v9; // r15
  unsigned int v10; // eax
  unsigned int v11; // ebx
  unsigned int v12; // eax
  int IsEnabledDeviceUsageNoInline; // eax
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  struct _UNICODE_STRING *p_DestinationString; // rcx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  int AdapterSessionDiagnostics; // eax
  void *v27; // r13
  __int64 v28; // r15
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-58h] BYREF
  struct _UNICODE_STRING v30; // [rsp+50h] [rbp-48h] BYREF
  int IndirectDisplayRenderAdapterByHandle; // [rsp+A0h] [rbp+8h] BYREF
  void *v32; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v33; // [rsp+B8h] [rbp+20h] BYREF

  IndirectDisplayRenderAdapterByHandle = 0;
  v3 = 0;
  if ( a1 < 0x30 )
  {
    IndirectDisplayRenderAdapterByHandle = -1073741789;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1275;
    return (unsigned int)IndirectDisplayRenderAdapterByHandle;
  }
  if ( *(_DWORD *)(a2 + 4) != 5 )
  {
    IndirectDisplayRenderAdapterByHandle = DpiIndirectEscapeAccessCheck();
    if ( IndirectDisplayRenderAdapterByHandle < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 1296;
      return (unsigned int)IndirectDisplayRenderAdapterByHandle;
    }
  }
  v5 = (_DWORD *)(a2 + 40);
  *(_DWORD *)(a2 + 40) = 0;
  v6 = 0LL;
  v33 = 0LL;
  Pool2 = 0LL;
  v32 = 0LL;
  v8 = *(_DWORD *)(a2 + 12);
  v9 = 0LL;
  if ( !v8 )
  {
LABEL_11:
    v10 = *(_DWORD *)(a2 + 24);
    if ( v10 )
    {
      Pool2 = (_QWORD *)ExAllocatePool2(257LL, v10, 1953656900LL);
      AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v32);
      v32 = Pool2;
      *(_QWORD *)&DestinationString.Length = 0LL;
      AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free((void **)&DestinationString);
      if ( !Pool2 )
      {
        IndirectDisplayRenderAdapterByHandle = -1073741801;
        WdLogSingleEntry1(6LL);
        WdLogGlobalForLineNumber = 1337;
        goto LABEL_14;
      }
    }
    v12 = *(_DWORD *)(a2 + 12);
    if ( v12 )
      RtlCopyFromUser(v9, *(void **)(a2 + 16), v12);
    IsEnabledDeviceUsageNoInline = Feature_EnableIddCx111__private_IsEnabledDeviceUsageNoInline();
    v14 = *(_DWORD *)(a2 + 4);
    if ( IsEnabledDeviceUsageNoInline )
    {
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          v16 = v15 - 1;
          if ( v16 )
          {
            v17 = v16 - 1;
            if ( v17 )
            {
              v18 = v17 - 1;
              if ( v18 )
              {
                v19 = v18 - 1;
                if ( v19 )
                {
                  v20 = v19 - 1;
                  if ( v20 )
                  {
                    if ( v20 == 1 )
                    {
                      if ( *(_DWORD *)(a2 + 24) < 4u )
                      {
                        IndirectDisplayRenderAdapterByHandle = -1073741811;
                        WdLogSingleEntry1(2LL);
                        WdLogGlobalForLineNumber = 1509;
                        goto LABEL_14;
                      }
                      *(_DWORD *)Pool2 = dword_140167304;
                      *v5 = 4;
                    }
                    else
                    {
                      IndirectDisplayRenderAdapterByHandle = -1073741637;
                      WdLogSingleEntry1(2LL);
                      WdLogGlobalForLineNumber = 1525;
                    }
                  }
                  else
                  {
                    if ( *(_DWORD *)(a2 + 12) < 4u )
                    {
                      IndirectDisplayRenderAdapterByHandle = -1073741811;
                      WdLogSingleEntry1(2LL);
                      WdLogGlobalForLineNumber = 1495;
                      goto LABEL_14;
                    }
                    dword_140167304 = *(_DWORD *)v6;
                  }
LABEL_69:
                  if ( IndirectDisplayRenderAdapterByHandle >= 0 || v3 )
                  {
                    if ( *(_DWORD *)(a2 + 24) >= *v5 )
                    {
                      if ( *v5 )
                        RtlCopyToUser(*(void **)(a2 + 32), Pool2, (unsigned int)*v5);
                    }
                    else
                    {
                      IndirectDisplayRenderAdapterByHandle = -1073741811;
                      WdLogSingleEntry1(2LL);
                      WdLogGlobalForLineNumber = 1683;
                    }
                  }
                  goto LABEL_14;
                }
                if ( *(_DWORD *)(a2 + 24) < 0x10u )
                {
                  IndirectDisplayRenderAdapterByHandle = -1073741811;
                  WdLogSingleEntry1(2LL);
                  WdLogGlobalForLineNumber = 1468;
                  goto LABEL_14;
                }
                goto LABEL_49;
              }
LABEL_51:
              AdapterSessionDiagnostics = DxgkIddGetAdapterSessionDiagnostics(
                                            *(_DWORD *)a2,
                                            *(_DWORD *)(a2 + 24),
                                            (unsigned __int8 *)Pool2,
                                            (unsigned int *)(a2 + 40));
LABEL_55:
              IndirectDisplayRenderAdapterByHandle = AdapterSessionDiagnostics;
              goto LABEL_69;
            }
            if ( *(_DWORD *)(a2 + 12) < 8u )
            {
              IndirectDisplayRenderAdapterByHandle = -1073741811;
              WdLogSingleEntry1(2LL);
              WdLogGlobalForLineNumber = 1454;
              goto LABEL_14;
            }
            goto LABEL_54;
          }
          goto LABEL_56;
        }
        goto LABEL_57;
      }
      if ( *(_DWORD *)(a2 + 12) < 0x258u )
      {
        IndirectDisplayRenderAdapterByHandle = -1073741811;
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 1373;
        goto LABEL_14;
      }
      DestinationString = 0LL;
      *(_WORD *)(v6 + 518) = 0;
      RtlInitUnicodeString(&DestinationString, (PCWSTR)v6);
      p_DestinationString = &DestinationString;
    }
    else
    {
      if ( v14 )
      {
        v22 = v14 - 1;
        if ( v22 )
        {
          v23 = v22 - 1;
          if ( v23 )
          {
            v24 = v23 - 1;
            if ( v24 )
            {
              v25 = v24 - 1;
              if ( v25 )
              {
                if ( v25 != 1 )
                {
                  IndirectDisplayRenderAdapterByHandle = -1073741637;
                  WdLogSingleEntry1(2LL);
                  WdLogGlobalForLineNumber = 1665;
                  goto LABEL_69;
                }
                if ( *(_DWORD *)(a2 + 24) < 0x10u )
                {
                  IndirectDisplayRenderAdapterByHandle = -1073741811;
                  WdLogSingleEntry1(2LL);
                  WdLogGlobalForLineNumber = 1637;
                  goto LABEL_14;
                }
LABEL_49:
                IndirectDisplayRenderAdapterByHandle = DxgkGetIndirectDisplayRenderAdapterByHandle(
                                                         *(_DWORD *)a2,
                                                         Pool2,
                                                         Pool2 + 1);
                if ( IndirectDisplayRenderAdapterByHandle >= 0 )
                  *v5 = 16;
                goto LABEL_69;
              }
              goto LABEL_51;
            }
            if ( *(_DWORD *)(a2 + 12) < 8u )
            {
              IndirectDisplayRenderAdapterByHandle = -1073741811;
              WdLogSingleEntry1(2LL);
              WdLogGlobalForLineNumber = 1623;
              goto LABEL_14;
            }
LABEL_54:
            AdapterSessionDiagnostics = DxgkSetIndirectDisplayRenderAdapterByHandle(*(_DWORD *)a2, (struct _LUID *)v6);
            goto LABEL_55;
          }
LABEL_56:
          DxgkIddHandleSetDisplayConfig(
            *(_DWORD *)a2,
            *(_DWORD *)(a2 + 12),
            (unsigned int *)v6,
            *(_DWORD *)(a2 + 24),
            Pool2,
            (_DWORD *)(a2 + 40),
            &IndirectDisplayRenderAdapterByHandle);
          v3 = 1;
          goto LABEL_69;
        }
LABEL_57:
        *(_QWORD *)&DestinationString.Length = 0LL;
        IndirectDisplayRenderAdapterByHandle = DxgkGetDeviceObjectFromAdapter(*(_DWORD *)a2);
        if ( IndirectDisplayRenderAdapterByHandle >= 0 )
        {
          v27 = *(void **)&DestinationString.Length;
          v28 = *(_QWORD *)(*(_QWORD *)&DestinationString.Length + 64LL);
          if ( *(_BYTE *)(v28 + 1158) )
          {
            *(_QWORD *)&DestinationString.Length = *(_QWORD *)(*(_QWORD *)&DestinationString.Length + 64LL);
            LOBYTE(DestinationString.Buffer) = 0;
            IndirectDisplayRenderAdapterByHandle = AUTO_REMOVE_LOCK::Acquire((struct _IO_REMOVE_LOCK **)&DestinationString);
            if ( IndirectDisplayRenderAdapterByHandle >= 0 )
            {
              AUTO_PNPPOWER_LOCK::AUTO_PNPPOWER_LOCK((AUTO_PNPPOWER_LOCK *)&v30, (struct _COMMON_PNP_CONTEXT *)v28);
              IndirectDisplayRenderAdapterByHandle = DpiIndirectDdiIoControl(
                                                       v28,
                                                       *(_DWORD *)(a2 + 12),
                                                       v6,
                                                       *(_DWORD *)(a2 + 24),
                                                       (__int64)Pool2,
                                                       a2 + 40);
              AUTO_PNPPOWER_LOCK::Release((AUTO_PNPPOWER_LOCK *)&v30);
            }
            AUTO_REMOVE_LOCK::Release((PVOID *)&DestinationString);
          }
          else
          {
            IndirectDisplayRenderAdapterByHandle = -1073741275;
          }
          ObfDereferenceObject(v27);
        }
        goto LABEL_69;
      }
      if ( *(_DWORD *)(a2 + 12) < 0x258u )
      {
        IndirectDisplayRenderAdapterByHandle = -1073741811;
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 1542;
        goto LABEL_14;
      }
      v30 = 0LL;
      *(_WORD *)(v6 + 518) = 0;
      RtlInitUnicodeString(&v30, (PCWSTR)v6);
      p_DestinationString = &v30;
    }
    IndirectDisplayRenderAdapterByHandle = DpiIndirectStartAdapter(
                                             p_DestinationString,
                                             (const void *)v6,
                                             *(_DWORD *)(a2 + 12));
    if ( IndirectDisplayRenderAdapterByHandle >= 0 )
      DxgkSetIndirectDisplayHostProcess();
    goto LABEL_69;
  }
  v6 = ExAllocatePool2(257LL, v8, 1953656900LL);
  AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free((void **)&v33);
  v33 = v6;
  *(_QWORD *)&DestinationString.Length = 0LL;
  AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free((void **)&DestinationString);
  if ( v6 )
  {
    v9 = (void *)v6;
    goto LABEL_11;
  }
  IndirectDisplayRenderAdapterByHandle = -1073741801;
  WdLogSingleEntry1(6LL);
  WdLogGlobalForLineNumber = 1319;
LABEL_14:
  v11 = IndirectDisplayRenderAdapterByHandle;
  AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v32);
  AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free((void **)&v33);
  return v11;
}
