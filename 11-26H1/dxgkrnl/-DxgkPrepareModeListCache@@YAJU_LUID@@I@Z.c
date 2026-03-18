/*
 * XREFs of ?DxgkPrepareModeListCache@@YAJU_LUID@@I@Z @ 0x1401D2480
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x140017080 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z @ 0x14003DB88 (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x140046034 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14004A0F8 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x14004A278 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@AEAVDXGAUTOPUSHLOCK@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAPEBU_D3DKMT_DISPLAYMODE@@PEAE@Z @ 0x1401D26C0 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@AEAVDXGAUTOPUSHLOCK@@EAEAU_D.c)
 */

__int64 __fastcall DxgkPrepareModeListCache(struct _LUID a1, unsigned int a2)
{
  __int64 v2; // rsi
  struct DXGADAPTER *v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // r8
  int v6; // eax
  int v7; // eax
  ADAPTER_DISPLAY *v8; // rcx
  char v10; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int8 v11[7]; // [rsp+51h] [rbp-AFh] BYREF
  struct _LUID v12; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGADAPTER *v13[2]; // [rsp+60h] [rbp-A0h] BYREF
  struct _D3DKMT_GETDISPLAYMODELIST v14; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v15[8]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v16; // [rsp+90h] [rbp-70h]
  int v17; // [rsp+98h] [rbp-68h]
  _BYTE v18[144]; // [rsp+A0h] [rbp-60h] BYREF

  v2 = a2;
  v12 = a1;
  v13[0] = 0LL;
  DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v13, &v12);
  v3 = v13[0];
  if ( v13[0] )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v18, v13[0], 0LL);
    v16 = v5;
    v17 = v5;
    v10 = v5;
    v6 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v10, 0);
    v4 = v6;
    if ( v6 >= 0 )
    {
      v7 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v18, 0LL);
      LODWORD(v4) = v7;
      if ( v7 >= 0 )
      {
        v8 = (ADAPTER_DISPLAY *)*((_QWORD *)v3 + 395);
        if ( (unsigned int)v2 < *((_DWORD *)v8 + 24) )
        {
          if ( ADAPTER_DISPLAY::IsPartOfDesktop(v8, v2) )
          {
            v11[0] = 0;
            memset(&v14, 0, sizeof(v14));
            v14.VidPnSourceId = v2;
            LODWORD(v4) = DxgkpGetDisplayModeList(
                            v3,
                            (struct COREADAPTERACCESS *)v18,
                            (struct DXGAUTOPUSHLOCK *)v15,
                            0,
                            &v14,
                            0LL,
                            v11);
            if ( (int)v4 >= 0 && v11[0] )
              DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v14.pModeList);
          }
          else
          {
            LODWORD(v4) = -1071774972;
            WdLogSingleEntry3(7LL, -1071774972LL, v3, v2);
            WdLogGlobalForLineNumber = 6208;
          }
        }
        else
        {
          LODWORD(v4) = -1071774972;
          WdLogSingleEntry3(7LL, -1071774972LL, v3, v2);
          WdLogGlobalForLineNumber = 6199;
        }
      }
      else
      {
        WdLogSingleEntry2(7LL, v7, v3);
        WdLogGlobalForLineNumber = 6194;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 6181;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to acquire current session mode change shared lock, returning 0x%I64x.",
        v4,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v10);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v15);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v18);
  }
  else
  {
    LODWORD(v4) = -1073741811;
  }
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v13, 0LL);
  return (unsigned int)v4;
}
