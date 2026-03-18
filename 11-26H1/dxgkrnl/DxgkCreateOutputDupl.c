/*
 * XREFs of DxgkCreateOutputDupl @ 0x1401EF110
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     DxgkDestroyOutputDuplInternal @ 0x14018B870 (DxgkDestroyOutputDuplInternal.c)
 *     RtlWriteULongToUser @ 0x140196858 (RtlWriteULongToUser.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1404032E0 (-DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_F.c)
 *     ?IsInLowBox@@YAHXZ @ 0x140415EF4 (-IsInLowBox@@YAHXZ.c)
 */

__int64 __fastcall DxgkCreateOutputDupl(void *Src)
{
  struct DXGPROCESS *Current; // rax
  char *v4; // rdi
  int v5; // eax
  int v6; // ebx
  int v7; // ebx
  int v8; // eax
  char v9; // dl
  struct DXGGLOBAL *Global; // rax
  int v11; // ebx
  _BYTE v12[4]; // [rsp+50h] [rbp-68h] BYREF
  int v13; // [rsp+54h] [rbp-64h] BYREF
  _BYTE v14[16]; // [rsp+58h] [rbp-60h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-50h] BYREF
  _D3DKMT_CREATE_OUTPUTDUPL v16; // [rsp+78h] [rbp-40h] BYREF

  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 3534;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid process context.", 3534LL, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  v4 = (char *)Current + 88;
  if ( (g_OutputDuplicationTestControl & 2) != 0 )
    v5 = 1;
  else
    v5 = (*(__int64 (**)(void))(*(_QWORD *)v4 + 232LL))();
  v6 = (v5 != 0 ? 4 : 0) | (8 * (g_OutputDuplicationTestControl & 1));
  v13 = v6;
  if ( !(*(unsigned int (**)(void))(*(_QWORD *)v4 + 232LL))() && (unsigned int)IsInLowBox() )
  {
    v7 = v6 | 2;
    v13 = v7;
    v12[0] = 0;
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, L"screenDuplication");
    v8 = RtlCapabilityCheck(0LL, &DestinationString, v12);
    v9 = 0;
    if ( v8 >= 0 )
      v9 = v12[0];
    if ( !v9 )
    {
      if ( !g_OSTestSigningEnabled || (g_OutputDuplicationTestControl & 1) == 0 )
        return 3221225506LL;
      v13 = v7 | 8;
    }
  }
  memset(&v16, 0, sizeof(v16));
  RtlCopyFromUser(&v16, Src, 0x30uLL);
  Global = DXGGLOBAL::GetGlobal();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, (struct DXGGLOBAL *)((char *)Global + 305744), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
  v11 = DxgkCreateOutputDuplInternal(&v16, (struct _D3DKMT_CREATE_OUTPUTDUPL_FLAGS *)&v13);
  if ( v11 >= 0 )
  {
    if ( !(*(unsigned int (**)(void))(*(_QWORD *)v4 + 224LL))() )
    {
      v11 = -1073741790;
LABEL_19:
      *(_DWORD *)&DestinationString.Length = v16.hAdapter;
      *(_DWORD *)(&DestinationString.MaximumLength + 1) = v16.VidPnSourceId;
      LODWORD(DestinationString.Buffer) = 0;
      DxgkDestroyOutputDuplInternal(&DestinationString, 1);
      goto LABEL_20;
    }
    v13 |= 1u;
    v11 = DxgkCreateOutputDuplInternal(&v16, (struct _D3DKMT_CREATE_OUTPUTDUPL_FLAGS *)&v13);
    if ( v11 < 0 )
      goto LABEL_19;
  }
LABEL_20:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v14);
  if ( v11 >= 0 )
    RtlWriteULongToUser((_DWORD *)Src + 3, v16.RequiredKeyedMutexCount);
  return (unsigned int)v11;
}
