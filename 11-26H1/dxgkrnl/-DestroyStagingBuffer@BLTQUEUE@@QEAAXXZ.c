/*
 * XREFs of ?DestroyStagingBuffer@BLTQUEUE@@QEAAXXZ @ 0x140282CC8
 * Callers:
 *     ?Reset@BLTQUEUE@@QEAAXE@Z @ 0x140283948 (-Reset@BLTQUEUE@@QEAAXE@Z.c)
 *     ?PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z @ 0x140423030 (-PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140009220 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x14003CC28 (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1401BA2BC (-DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1402E9A60 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 */

void __fastcall BLTQUEUE::DestroyStagingBuffer(BLTQUEUE *this)
{
  __int64 v1; // rsi
  __int64 v3; // rsi
  unsigned int v4; // eax
  int v5; // edx
  __int64 v6; // rcx
  struct DXGALLOCATION **v7; // rdi
  unsigned int v8; // r8d
  __int64 v9; // rax
  __int64 v10; // r9
  int v11; // edx
  DXGDEVICE *v12; // rcx
  DXGDEVICESYNCOBJECT *v13; // rcx
  _BYTE v14[24]; // [rsp+50h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+68h] [rbp-40h] BYREF

  v1 = *((_QWORD *)this + 47);
  if ( !v1 )
    goto LABEL_26;
  v3 = *(_QWORD *)(v1 + 40);
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(*(PRKPROCESS *)(v3 + 56), &ApcState);
  *(_BYTE *)(*((_QWORD *)this + 47) + 1953LL) = 1;
  if ( *((_DWORD *)this + 728) )
  {
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
      (DXGHANDLETABLELOCKEXCLUSIVE *)v14,
      (struct DXGPROCESS *)v3);
    v4 = (*((_DWORD *)this + 728) >> 6) & 0xFFFFFF;
    if ( v4 < *(_DWORD *)(v3 + 296) )
    {
      v5 = *(_DWORD *)(*(_QWORD *)(v3 + 280) + 16LL * v4 + 8);
      if ( ((*((_DWORD *)this + 728) >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)(v3 + 280) + 16LL * v4 + 8) & 0x60)
        && (v5 & 0x2000) == 0
        && (v5 & 0x1F) != 0 )
      {
        v6 = *(_QWORD *)(v3 + 280);
        if ( (*(_BYTE *)(v6 + 16LL * v4 + 8) & 0x1F) == 4 )
        {
          v7 = *(struct DXGALLOCATION ***)(v6 + 16LL * v4);
          if ( v7 )
          {
LABEL_11:
            v8 = *((_DWORD *)this + 728);
            v9 = (v8 >> 6) & 0xFFFFFF;
            if ( (unsigned int)v9 < *(_DWORD *)(v3 + 296) )
            {
              v10 = *(_QWORD *)(v3 + 280);
              v11 = *(_DWORD *)(v10 + 16 * v9 + 8);
              if ( ((v8 >> 25) & 0x60) == (*(_BYTE *)(v10 + 16 * v9 + 8) & 0x60)
                && (v11 & 0x2000) == 0
                && (v11 & 0x1F) != 0 )
              {
                *(_DWORD *)(16LL * ((v8 >> 6) & 0xFFFFFF) + v10 + 8) |= 0x2000u;
              }
            }
            DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v14);
            v12 = (DXGDEVICE *)*((_QWORD *)this + 47);
            if ( *((_DWORD *)v12 + 152) == 4 )
              DXGDEVICE::DestroyClientResource(v12, v7);
            else
              DXGDEVICE::DestroyAllocationInternal(
                v12,
                0,
                0LL,
                (struct DXGRESOURCE *)v7,
                0LL,
                DXGDEVICE::DestroyFlagsDefault);
            goto LABEL_21;
          }
LABEL_10:
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 5278;
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pResource != NULL", 5278LL, 0LL, 0LL, 0LL, 0LL);
          goto LABEL_11;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v7 = 0LL;
    goto LABEL_10;
  }
LABEL_21:
  if ( *((_DWORD *)this + 734) )
  {
    v13 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 368);
    if ( v13 )
      DXGDEVICESYNCOBJECT::`scalar deleting destructor'(v13);
    *((_DWORD *)this + 734) = 0;
    *((_QWORD *)this + 368) = 0LL;
  }
  *(_BYTE *)(*((_QWORD *)this + 47) + 1953LL) = 0;
  KeUnstackDetachProcess(&ApcState);
LABEL_26:
  *((_QWORD *)this + 364) = 0LL;
  *((_QWORD *)this + 363) = 0LL;
  *((_QWORD *)this + 365) = 0LL;
  *((_QWORD *)this + 366) = 0LL;
}
