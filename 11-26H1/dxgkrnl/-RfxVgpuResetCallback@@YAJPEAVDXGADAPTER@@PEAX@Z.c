/*
 * XREFs of ?RfxVgpuResetCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x140078E40
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x140018480 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?VidSchEscape@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAU_D3DKMT_VIDSCH_ESCAPE@@@Z @ 0x14006D464 (-VidSchEscape@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAU_D3DKMT_VIDSCH_ESCAPE@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     DpiIsRfxVgpuDevice @ 0x14023A3E0 (DpiIsRfxVgpuDevice.c)
 */

__int64 __fastcall RfxVgpuResetCallback(struct DXGADAPTER *a1, unsigned int *a2)
{
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // rcx
  struct _VIDSCH_GLOBAL *v7; // rdx
  int v8; // eax
  _OWORD v10[3]; // [rsp+20h] [rbp-89h] BYREF
  _BYTE v11[144]; // [rsp+50h] [rbp-59h] BYREF

  v4 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v10, a1, 1);
  if ( *((_DWORD *)a1 + 50) == 1 && (unsigned __int8)DpiIsRfxVgpuDevice(*((_QWORD *)a1 + 27)) )
  {
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v10);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v11, a1, 0LL);
    v5 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v11, 0LL);
    v4 = v5;
    if ( v5 >= 0 )
    {
      v6 = *((_QWORD *)a1 + 396);
      v7 = *(struct _VIDSCH_GLOBAL **)(v6 + 744);
      memset(v10, 0, sizeof(v10));
      LODWORD(v10[0]) = 6;
      v8 = VIDSCH_EXPORT::VidSchEscape(*(VIDSCH_EXPORT **)(v6 + 736), v7, (struct _D3DKMT_VIDSCH_ESCAPE *)v10);
      v4 = v8;
      if ( v8 < 0 )
      {
        WdLogSingleEntry2(3LL, a1, v8);
        WdLogGlobalForLineNumber = 742;
      }
    }
    else
    {
      WdLogSingleEntry2(3LL, a1, v5);
      WdLogGlobalForLineNumber = 726;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v11);
    if ( a2 )
      *a2 = v4;
  }
  else
  {
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v10);
  }
  return v4;
}
