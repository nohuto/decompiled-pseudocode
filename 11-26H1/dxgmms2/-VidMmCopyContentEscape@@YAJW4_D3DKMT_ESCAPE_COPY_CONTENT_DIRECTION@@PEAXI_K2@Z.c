/*
 * XREFs of ?VidMmCopyContentEscape@@YAJW4_D3DKMT_ESCAPE_COPY_CONTENT_DIRECTION@@PEAXI_K2@Z @ 0x1400A2820
 * Callers:
 *     ?Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@_N@Z @ 0x14009DE94 (-Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@_N@Z.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140029058 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14002C2E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14002E900 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??1DXGAUTOMUTEX@@QEAA@XZ @ 0x140035B48 (--1DXGAUTOMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140035F90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??1DXGHANDLETABLELOCKSHARED@@QEAA@XZ @ 0x1400375B0 (--1DXGHANDLETABLELOCKSHARED@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     memmove @ 0x14005B8C0 (memmove.c)
 *     ?VidMmMapViewOfAllocation@@YAPEAXPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAPEAX@Z @ 0x14011BB3C (-VidMmMapViewOfAllocation@@YAPEAXPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAPEAX@Z.c)
 *     ?VidMmUnmapViewOfAllocation@@YAXPEAUVIDMM_GLOBAL_ALLOC@@PEAX@Z @ 0x14011EAA4 (-VidMmUnmapViewOfAllocation@@YAXPEAUVIDMM_GLOBAL_ALLOC@@PEAX@Z.c)
 */

__int64 __fastcall VidMmCopyContentEscape(int a1, char *a2, unsigned int a3, size_t a4, size_t Size)
{
  __int64 v6; // rsi
  __int64 v7; // r14
  struct DXGPROCESS *Current; // r13
  unsigned int v9; // edx
  unsigned int v11; // r8d
  __int64 v12; // r13
  __int64 v13; // rcx
  __int64 v14; // r13
  char ****v15; // r13
  char **v16; // rsi
  unsigned int v17; // ebx
  char *v18; // rax
  char *v20; // rdx
  char *v21; // rax
  void *v22[2]; // [rsp+58h] [rbp-70h] BYREF
  char *v23; // [rsp+68h] [rbp-60h]
  char **v24; // [rsp+70h] [rbp-58h]
  _BYTE v25[16]; // [rsp+78h] [rbp-50h] BYREF
  _BYTE v26[24]; // [rsp+88h] [rbp-40h] BYREF

  v6 = a3;
  v7 = a1;
  Current = DXGPROCESS::GetCurrent();
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v26, (struct _KTHREAD **)Current);
  v22[0] = 0LL;
  if ( (int)v7 <= 1 )
  {
    if ( (a4 & 0xFFF) != 0 || (Size & 0xFFF) != 0 )
    {
      WdLogSingleEntry2(3LL, a4, Size);
      WdLogGlobalForLineNumber = 29744;
      goto LABEL_44;
    }
    if ( a4 + Size < a4 )
    {
      WdLogSingleEntry2(3LL, a4, Size);
      WdLogGlobalForLineNumber = 29750;
      goto LABEL_44;
    }
    v9 = ((unsigned int)v6 >> 6) & 0xFFFFFF;
    if ( !(v9 < *((_DWORD *)Current + 74)
        && (v11 = *(_DWORD *)(*((_QWORD *)Current + 35) + 16LL * v9 + 8), (unsigned int)v6 >> 30 == ((v11 >> 5) & 3))
        && (v11 & 0x2000) == 0
        && (v11 & 0x1F) != 0) )
    {
LABEL_15:
      WdLogSingleEntry1(3LL, v6);
      WdLogGlobalForLineNumber = 29758;
      goto LABEL_44;
    }
    v12 = *((_QWORD *)Current + 35);
    if ( (*(_BYTE *)(v12 + 16LL * v9 + 8) & 0x1F) != 5 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(v13, 0x40000LL);
      goto LABEL_15;
    }
    v14 = *(_QWORD *)(v12 + 16LL * v9);
    if ( !v14 )
      goto LABEL_15;
    v15 = *(char *****)(v14 + 24);
    if ( !v15 )
    {
      WdLogSingleEntry1(3LL, v6);
      WdLogGlobalForLineNumber = 29766;
      goto LABEL_44;
    }
    v16 = **v15;
    v24 = v16;
    v23 = *v16;
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v25, (struct DXGFASTMUTEX *const)(v16 + 17), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v25);
    if ( (*((_DWORD *)v15 + 7) & 4) != 0 || ((_DWORD)v15[4] & 1) != 0 )
    {
      WdLogSingleEntry1(3LL, v15);
      WdLogGlobalForLineNumber = 29781;
      goto LABEL_24;
    }
    if ( (_DWORD)v7 == 1 && !*((_BYTE *)v16 + 42) )
    {
      WdLogSingleEntry1(3LL, v16);
      WdLogGlobalForLineNumber = 29791;
LABEL_24:
      DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)v25);
      goto LABEL_44;
    }
    if ( !v16[6] )
    {
      WdLogSingleEntry1(3LL, v16);
      WdLogGlobalForLineNumber = 29801;
      goto LABEL_24;
    }
    if ( (*((_DWORD *)v23 + 14) & 1) != 0 )
    {
      WdLogSingleEntry1(3LL, v16);
      WdLogGlobalForLineNumber = 29811;
      v17 = -1073741811;
LABEL_31:
      DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)v25);
      DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v26);
      return v17;
    }
    v18 = (char *)VidMmMapViewOfAllocation((struct VIDMM_GLOBAL_ALLOC *)v16, 0LL, 0LL, v22);
    if ( !v18 )
    {
      WdLogSingleEntry3(3LL, v16, a4, Size);
      WdLogGlobalForLineNumber = 29818;
      v17 = -1073741823;
      goto LABEL_31;
    }
    if ( (_DWORD)v7 )
    {
      if ( (_DWORD)v7 != 1 )
      {
        v17 = -1073741811;
LABEL_40:
        if ( v22[0] )
        {
          VidMmUnmapViewOfAllocation((struct VIDMM_GLOBAL_ALLOC *)v16, v22[0]);
          v22[0] = 0LL;
        }
        goto LABEL_31;
      }
      v20 = &v18[a4];
      v21 = a2;
    }
    else
    {
      v20 = a2;
      v21 = &v18[a4];
    }
    v22[1] = v21;
    v23 = v20;
    memmove(v21, v20, Size);
    if ( !(_DWORD)v7 )
    {
      *((_BYTE *)v16 + 42) = 1;
      *((_DWORD *)v16 + 6) &= ~0x10000u;
      (*(void (__fastcall **)(char *, char *))(*(_QWORD *)v16[27] + 96LL))(v16[27], v16[28]);
    }
    v17 = 0;
    goto LABEL_40;
  }
  WdLogSingleEntry1(3LL, v7);
  WdLogGlobalForLineNumber = 29737;
LABEL_44:
  DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v26);
  return 3221225485LL;
}
