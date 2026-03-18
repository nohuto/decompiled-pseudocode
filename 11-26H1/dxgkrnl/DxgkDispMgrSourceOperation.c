/*
 * XREFs of DxgkDispMgrSourceOperation @ 0x1402C1FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x140017080 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x14002EAC0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEBD@Z @ 0x14002ED30 (-AcquireShared@COREACCESS@@QEAAXPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z @ 0x14003DB88 (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x140293040 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1402ACDEC (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1402C2560 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ??1?$NT_OBJECT_REFERENCE@PEAUDXGSWAPCHAIN_CONTAINER@@@@QEAA@XZ @ 0x1403BDA5C (--1-$NT_OBJECT_REFERENCE@PEAUDXGSWAPCHAIN_CONTAINER@@@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkDispMgrSourceOperation(char *Src)
{
  NTSTATUS v2; // esi
  __int64 v3; // rdx
  struct _LUID v4; // rbx
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v6; // r14
  __int64 v7; // r8
  __int64 v8; // rbx
  DXGADAPTER *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // r8d
  struct DXGADAPTER *v15; // rbx
  __int64 v16; // rax
  int v17; // eax
  unsigned int v18; // ecx
  PVOID Object; // [rsp+40h] [rbp-E8h] BYREF
  HANDLE Handle[2]; // [rsp+48h] [rbp-E0h] BYREF
  __int128 Srca; // [rsp+58h] [rbp-D0h] BYREF
  unsigned int v22[2]; // [rsp+68h] [rbp-C0h] BYREF
  struct DXGADAPTER *v23; // [rsp+70h] [rbp-B8h] BYREF
  unsigned __int64 v24; // [rsp+78h] [rbp-B0h] BYREF
  _BYTE v25[8]; // [rsp+80h] [rbp-A8h] BYREF
  _BYTE v26[16]; // [rsp+88h] [rbp-A0h] BYREF
  DXGADAPTER *v27; // [rsp+98h] [rbp-90h]
  _BYTE v28[16]; // [rsp+C8h] [rbp-60h] BYREF
  DXGADAPTER *v29; // [rsp+D8h] [rbp-50h]
  char v30; // [rsp+E0h] [rbp-48h]
  __int64 v31; // [rsp+E8h] [rbp-40h]

  *(_OWORD *)Handle = 0LL;
  Srca = 0LL;
  RtlCopyFromUser(Handle, Src, 0x20uLL);
  Object = 0LL;
  v2 = ObReferenceObjectByHandleWithTag(
         Handle[1],
         0x20000u,
         g_pDxgkDisplayManagerObjectType,
         1,
         0x4B677844u,
         &Object,
         0LL);
  if ( v2 < 0 )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 1132;
  }
  else
  {
    v3 = *((_QWORD *)Object + 1);
    if ( !v3 )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 1138;
      NT_OBJECT_REFERENCE<DXGSWAPCHAIN_CONTAINER *>::~NT_OBJECT_REFERENCE<DXGSWAPCHAIN_CONTAINER *>(&Object);
      return 3221225485LL;
    }
    switch ( LODWORD(Handle[0]) )
    {
      case 1:
        *(_QWORD *)&Srca = *(_QWORD *)(v3 + 32);
        DWORD2(Srca) = *(_DWORD *)(*((_QWORD *)Object + 1) + 40LL);
        HIDWORD(Srca) = -1;
        v23 = 0LL;
        DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)&v23, (const struct _LUID *)&Srca);
        v15 = v23;
        if ( v23 )
        {
          COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v25, v23, 0LL);
          if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v25, 0LL) >= 0 )
          {
            v16 = *((_QWORD *)v15 + 395);
            if ( v16 )
            {
              if ( DWORD2(Srca) < *(_DWORD *)(v16 + 96) )
              {
                v22[0] = -1;
                v17 = DmmEnumClientVidPnPathTargetsFromSource(v15, DWORD2(Srca), 0LL, v22);
                v18 = HIDWORD(Srca);
                if ( v17 >= 0 )
                  v18 = v22[0];
                HIDWORD(Srca) = v18;
              }
            }
          }
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v25);
        }
        RtlCopyToUser(Src + 16, &Srca, 0x10uLL);
        DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v23, 0LL);
        break;
      case 2:
        LODWORD(Srca) = 4;
        *(_QWORD *)v22 = *(_QWORD *)(*((_QWORD *)Object + 1) + 32LL);
        v4 = *(struct _LUID *)v22;
        Global = DXGGLOBAL::GetGlobal();
        v6 = DXGGLOBAL::ReferenceAdapterByLuid(Global, v4, &v24);
        v23 = v6;
        if ( !v6 )
        {
          WdLogSingleEntry2(3LL, v4.LowPart, (int)v22[1]);
          WdLogGlobalForLineNumber = 5709;
          goto LABEL_20;
        }
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v25, v6, 0LL);
        v8 = *(unsigned int *)(*((_QWORD *)Object + 1) + 40LL);
        if ( v30 != (_BYTE)v7 )
        {
          WdLogSingleEntry5(0LL, 275LL, 4LL, v28, v7, v7);
          WdLogGlobalForLineNumber = 7648;
        }
        v9 = v29;
        if ( KeGetCurrentThread() != *((struct _KTHREAD **)v29 + 23) )
        {
          if ( !KeReadStateEvent((PRKEVENT)v29 + 2) )
          {
            if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
              McTemplateK0q_EtwWriteTransfer(v10, (__int64)"g");
            KeWaitForSingleObject((char *)v29 + 48, Executive, 0, 0, 0LL);
          }
          DXGADAPTER::AcquireCoreResourceShared(v29, 0LL);
          v9 = v29;
        }
        v31 = 0LL;
        v30 = 1;
        if ( *((_DWORD *)v9 + 50) == 1 )
        {
          if ( v27 == v29 || (COREACCESS::AcquireShared((COREACCESS *)v26, 0LL), *((_DWORD *)v27 + 50) == 1) )
          {
            v25[1] = 1;
            v11 = *((_QWORD *)v6 + 395);
            if ( v11 && (unsigned int)v8 < *(_DWORD *)(v11 + 96) )
            {
              v12 = *(_QWORD *)(v11 + 128);
              v13 = *(_DWORD *)(v12 + 4024 * v8 + 736);
              if ( *(_BYTE *)(v12 + 4024 * v8 + 760) )
              {
                if ( v13 == 2 )
                  LODWORD(Srca) = 8;
                else
                  LODWORD(Srca) = v13 != 0 ? 1 : 16;
              }
              else
              {
                LODWORD(Srca) = 2;
              }
            }
            goto LABEL_19;
          }
          COREACCESS::Release((COREACCESS *)v26);
        }
        COREACCESS::Release((COREACCESS *)v28);
LABEL_19:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v25);
LABEL_20:
        RtlCopyToUser(Src + 16, &Srca, 4uLL);
        if ( v6 )
          DXGADAPTER::ReleaseReference(v6);
        break;
      case 3:
        LODWORD(Srca) = *(_DWORD *)(v3 + 60);
        RtlCopyToUser(Src + 16, &Srca, 4uLL);
        break;
      default:
        v2 = -1073741811;
        break;
    }
  }
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x4B677844u);
  return (unsigned int)v2;
}
