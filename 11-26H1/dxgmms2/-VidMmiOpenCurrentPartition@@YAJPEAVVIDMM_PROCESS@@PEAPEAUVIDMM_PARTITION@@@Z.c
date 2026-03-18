/*
 * XREFs of ?VidMmiOpenCurrentPartition@@YAJPEAVVIDMM_PROCESS@@PEAPEAUVIDMM_PARTITION@@@Z @ 0x140118A50
 * Callers:
 *     ?Init@VIDMM_PROCESS@@QEAAJPEAVDXGPROCESS@@@Z @ 0x14012981C (-Init@VIDMM_PROCESS@@QEAAJPEAVDXGPROCESS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??1DXGAUTOEXPUSHLOCK@@QEAA@XZ @ 0x140035F30 (--1DXGAUTOEXPUSHLOCK@@QEAA@XZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140036990 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_GVIDMM_PARTITION@@QEAAPEAXI@Z @ 0x14004F36C (--_GVIDMM_PARTITION@@QEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?InitializePartitionForAllAdapters@VIDMM_GLOBAL@@SAJPEAUVIDMM_PARTITION@@@Z @ 0x14009F50C (-InitializePartitionForAllAdapters@VIDMM_GLOBAL@@SAJPEAUVIDMM_PARTITION@@@Z.c)
 *     ?Initialize@VIDMM_PARTITION@@QEAAJXZ @ 0x1400AC184 (-Initialize@VIDMM_PARTITION@@QEAAJXZ.c)
 *     ?CompareVidMmPartitionById@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x140118EE8 (-CompareVidMmPartitionById@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

__int64 __fastcall VidMmiOpenCurrentPartition(struct VIDMM_PROCESS *a1, struct VIDMM_PARTITION **a2)
{
  __int64 v3; // rdi
  __int64 v4; // r15
  int v5; // r12d
  int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rsi
  __int64 v10; // rcx
  void *v11; // r14
  struct _RTL_BALANCED_NODE *v12; // rbx
  int v13; // eax
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // r8
  PVOID v17; // rax
  __int64 v18; // rcx
  unsigned int v19; // eax
  void *v20; // r12
  struct _RTL_BALANCED_NODE *v21; // r14
  struct _RTL_BALANCED_NODE *v22; // rax
  __int64 v24; // rcx
  PVOID Object; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v27[8]; // [rsp+60h] [rbp-A0h] BYREF
  void *v28; // [rsp+68h] [rbp-98h]
  int v29; // [rsp+70h] [rbp-90h]
  struct VIDMM_PARTITION **v30; // [rsp+78h] [rbp-88h]
  struct _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v32[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v33; // [rsp+98h] [rbp-68h]
  struct _UNICODE_STRING *p_DestinationString; // [rsp+A0h] [rbp-60h]
  int v35; // [rsp+A8h] [rbp-58h]
  int v36; // [rsp+ACh] [rbp-54h]
  __int128 v37; // [rsp+B0h] [rbp-50h]
  _QWORD v38[31]; // [rsp+C0h] [rbp-40h] BYREF

  v30 = a2;
  v3 = 0LL;
  v4 = -1LL;
  memset(v38, 0, sizeof(v38));
  v5 = 0;
  if ( *(_BYTE *)(*((_QWORD *)a1 + 9) + 574LL) )
  {
    v32[1] = 0;
    v36 = 0;
    v26 = 0LL;
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, L"\\GLOBAL??\\MemoryPartitionGraphics");
    v32[0] = 48;
    p_DestinationString = &DestinationString;
    v33 = 0LL;
    v35 = 64;
    v37 = 0LL;
    v6 = ZwOpenPartition(&v26, 2031619LL, v32);
    if ( v6 < 0 )
    {
      WdLogSingleEntry1(1LL, v6);
      WdLogGlobalForLineNumber = 164;
      DxgkLogInternalTriageEvent(v7, 0x40000LL);
    }
    else
    {
      v4 = v26;
      v5 = 1;
    }
  }
  HIDWORD(v38[0]) = -1;
  LODWORD(v38[1]) = -1;
  v8 = ZwManagePartition(v4, 0LL, 0LL, v38, 248);
  LODWORD(v9) = v8;
  if ( v8 < 0 )
  {
    WdLogSingleEntry1(1LL, v8);
    WdLogGlobalForLineNumber = 190;
    DxgkLogInternalTriageEvent(v10, 0x40000LL);
    goto LABEL_34;
  }
  v11 = (void *)LODWORD(v38[29]);
  v28 = &VIDMM_PARTITION::_PartitionLock;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v28, 0LL);
  v12 = VIDMM_PARTITION::_PartitionTree;
  v29 = 2;
  while ( v12 )
  {
    v13 = CompareVidMmPartitionById(v11, v12);
    if ( v13 >= 0 )
    {
      if ( v13 <= 0 )
        break;
      v12 = v12->Children[1];
    }
    else
    {
      v12 = v12->Children[0];
    }
  }
  if ( v12 )
    goto LABEL_31;
  v14 = v38[6] << 12;
  v15 = operator new(80LL, 0x62356956u, 256LL);
  v3 = v15;
  if ( !v15 )
  {
    v3 = 0LL;
    _InterlockedIncrement(&dword_14008A850);
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 214;
    DxgkLogInternalTriageEvent(v24, 262145LL);
    LODWORD(v9) = -1073741801;
    DXGAUTOEXPUSHLOCK::~DXGAUTOEXPUSHLOCK((DXGAUTOEXPUSHLOCK *)v27);
    goto LABEL_34;
  }
  *(_DWORD *)(v15 + 32) = (_DWORD)v11;
  *(_QWORD *)(v15 + 24) = 0LL;
  *(_DWORD *)(v15 + 36) = 0;
  *(_QWORD *)(v15 + 40) = 0LL;
  *(_QWORD *)(v15 + 56) = 0LL;
  *(_QWORD *)(v15 + 64) = 0LL;
  *(_DWORD *)(v15 + 72) = 0;
  *(_QWORD *)(v15 + 48) = v14;
  LODWORD(v9) = VIDMM_PARTITION::Initialize((VIDMM_PARTITION *)v15);
  if ( (int)v9 < 0 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 222;
LABEL_22:
    DXGAUTOEXPUSHLOCK::~DXGAUTOEXPUSHLOCK((DXGAUTOEXPUSHLOCK *)v27);
    goto LABEL_33;
  }
  LODWORD(v9) = VIDMM_GLOBAL::InitializePartitionForAllAdapters((struct VIDMM_PARTITION *)v3);
  if ( (int)v9 < 0 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 229;
    goto LABEL_22;
  }
  v17 = 0LL;
  if ( v4 != -1 )
  {
    Object = 0LL;
    v9 = ObReferenceObjectByHandle((HANDLE)v4, 0, PsPartitionType, 0, &Object, 0LL);
    v17 = Object;
    if ( (int)v9 < 0 )
    {
      WdLogSingleEntry1(1LL, v9);
      WdLogGlobalForLineNumber = 239;
      DxgkLogInternalTriageEvent(v18, 0x40000LL);
      goto LABEL_22;
    }
  }
  *(_QWORD *)(v3 + 24) = v17;
  LOBYTE(v16) = 0;
  v12 = (struct _RTL_BALANCED_NODE *)v3;
  v19 = v5 | *(_DWORD *)(v3 + 72) & 0xFFFFFFFE;
  v20 = (void *)*(unsigned int *)(v3 + 32);
  *(_DWORD *)(v3 + 72) = v19;
  v21 = VIDMM_PARTITION::_PartitionTree;
  if ( !VIDMM_PARTITION::_PartitionTree )
    goto LABEL_30;
  while ( (int)CompareVidMmPartitionById(v20, v21) >= 0 )
  {
    v22 = v21->Children[1];
    if ( !v22 )
    {
      LOBYTE(v16) = 1;
      goto LABEL_30;
    }
LABEL_28:
    v21 = v22;
  }
  v22 = v21->Children[0];
  if ( v21->Children[0] )
    goto LABEL_28;
  LOBYTE(v16) = 0;
LABEL_30:
  RtlAvlInsertNodeEx(&VIDMM_PARTITION::_PartitionTree, v21, v16, v3);
LABEL_31:
  v3 = (__int64)v12;
  _InterlockedIncrement((volatile signed __int32 *)&v12[1].Right + 1);
  DXGAUTOEXPUSHLOCK::~DXGAUTOEXPUSHLOCK((DXGAUTOEXPUSHLOCK *)v27);
  *((_QWORD *)a1 + 43) = v4;
  if ( (int)v9 < 0 )
  {
    if ( v12 )
    {
LABEL_33:
      VIDMM_PARTITION::`scalar deleting destructor'((VIDMM_PARTITION *)v3);
      v3 = 0LL;
    }
LABEL_34:
    if ( v4 != -1 )
      ObCloseHandle((HANDLE)v4, 0);
  }
  *v30 = (struct VIDMM_PARTITION *)v3;
  return (unsigned int)v9;
}
