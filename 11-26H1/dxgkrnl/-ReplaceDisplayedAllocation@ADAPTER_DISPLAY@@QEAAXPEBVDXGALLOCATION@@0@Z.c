/*
 * XREFs of ?ReplaceDisplayedAllocation@ADAPTER_DISPLAY@@QEAAXPEBVDXGALLOCATION@@0@Z @ 0x1403A0880
 * Callers:
 *     ?TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z @ 0x140007D70 (-TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0ppqqt_EtwWriteTransfer @ 0x1400707DC (McTemplateK0ppqqt_EtwWriteTransfer.c)
 *     ?GetPreviousConfigIndex@@YAHH@Z @ 0x1403A0BA4 (-GetPreviousConfigIndex@@YAHH@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::ReplaceDisplayedAllocation(
        ADAPTER_DISPLAY *this,
        const struct DXGALLOCATION *a2,
        const struct DXGALLOCATION *a3)
{
  unsigned int i; // r14d
  __int64 v6; // rdx
  __int64 v7; // rbp
  __int64 v8; // rsi
  __int64 PreviousConfigIndex; // r15
  char v10; // r12
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 j; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // [rsp+28h] [rbp-60h]
  __int64 v21; // [rsp+30h] [rbp-58h]
  __int64 v22; // [rsp+38h] [rbp-50h]
  _BYTE v23[16]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v24; // [rsp+A0h] [rbp+18h]

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v23, (ADAPTER_DISPLAY *)((char *)this + 624), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v23);
  for ( i = 0; i < *((_DWORD *)this + 24); ++i )
  {
    v6 = *((_QWORD *)this + 16);
    v7 = 0LL;
    v8 = 4024LL * i;
    if ( *(_DWORD *)(v8 + v6 + 3784) )
    {
      do
      {
        LODWORD(PreviousConfigIndex) = 0;
        v10 = 1;
        v11 = v8 + 168LL * (unsigned int)v7;
        v24 = v11;
        v12 = *(int *)(v11 + v6 + 1168);
        if ( (_DWORD)v12 != -1 )
        {
          LODWORD(PreviousConfigIndex) = *(_DWORD *)(v11 + v6 + 1168);
          v13 = v8 + v6 + 80 * v12 + 168 * (v7 + 7);
          goto LABEL_5;
        }
        v13 = 0LL;
        while ( v13 )
        {
          if ( *(const struct DXGALLOCATION **)v13 == a2 )
          {
            *(_QWORD *)v13 = 0LL;
            if ( v10 )
            {
              WdLogSingleEntry3(3LL, a2, i, (unsigned int)v7);
              WdLogGlobalForLineNumber = 10531;
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
              {
                v19 = *((_QWORD *)this + 16);
                LODWORD(v22) = *(unsigned __int8 *)(v19 + v8 + 761);
                LODWORD(v21) = v7;
                LODWORD(v20) = i;
                McTemplateK0ppqqt_EtwWriteTransfer(
                  *(unsigned __int8 *)(v19 + v8 + 761),
                  v17,
                  v18,
                  *((_QWORD *)this + 2),
                  a2,
                  v20,
                  v21,
                  v22);
              }
            }
            *(_DWORD *)(v13 + 8) &= ~1u;
            break;
          }
          v10 = 0;
          v14 = v11 + *((_QWORD *)this + 16);
          if ( *(_DWORD *)(v14 + 1168) == -1 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 9617;
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"pQueue->HeadIndex != CONFIG_INDEX_INVALID",
              9617LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          if ( *(_DWORD *)(v14 + 1172) == -1 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 9618;
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"pQueue->TailIndex != CONFIG_INDEX_INVALID",
              9618LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          if ( (_DWORD)PreviousConfigIndex == *(_DWORD *)(v14 + 1172) )
          {
            v13 = 0LL;
          }
          else
          {
            PreviousConfigIndex = (int)GetPreviousConfigIndex(PreviousConfigIndex);
            v13 = 80 * PreviousConfigIndex + v14 + 1176;
          }
LABEL_5:
          v11 = v24;
        }
        v6 = *((_QWORD *)this + 16);
        v7 = (unsigned int)(v7 + 1);
      }
      while ( (unsigned int)v7 < *(_DWORD *)(v6 + v8 + 3784) );
    }
    for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v6 + v8 + 3788); j = (unsigned int)(j + 1) )
    {
      if ( *(_BYTE *)(j + v6 + v8 + 2928) )
      {
        v16 = v8 + 80 * j;
        if ( (*(_DWORD *)(v16 + v6 + 2952) & 1) != 0 && *(const struct DXGALLOCATION **)(v16 + v6 + 2944) == a2 )
        {
          *(_QWORD *)(v16 + v6 + 2944) = 0LL;
          *(_BYTE *)(*((_QWORD *)this + 16) + (unsigned int)j + v8 + 2928) = 0;
          *(_DWORD *)(*((_QWORD *)this + 16) + v16 + 2952) &= ~1u;
        }
      }
      v6 = *((_QWORD *)this + 16);
    }
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v23);
}
