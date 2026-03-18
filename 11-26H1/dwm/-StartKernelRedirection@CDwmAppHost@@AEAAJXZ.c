/*
 * XREFs of ?StartKernelRedirection@CDwmAppHost@@AEAAJXZ @ 0x14000223C
 * Callers:
 *     ?StartComposition@CDwmAppHost@@AEAAJXZ @ 0x1400044E0 (-StartComposition@CDwmAppHost@@AEAAJXZ.c)
 * Callees:
 *     ?SendSimpleAsyncRequest@CPortClient@@QEAAJK@Z @ 0x140002398 (-SendSimpleAsyncRequest@CPortClient@@QEAAJK@Z.c)
 *     ??1CPortClient@@UEAA@XZ @ 0x140002E14 (--1CPortClient@@UEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x140002E2C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1400049A0 (__security_check_cookie.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x14000CD0C (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ??0CPortClient@@QEAA@I@Z @ 0x14000D348 (--0CPortClient@@QEAA@I@Z.c)
 */

__int64 __fastcall CDwmAppHost::StartKernelRedirection(CDwmAppHost *this, unsigned int a2)
{
  unsigned int v2; // ebx
  int v3; // ecx
  int v4; // r8d
  int v5; // eax
  int v7; // r9d
  signed int LastError; // eax
  unsigned int v9; // [rsp+20h] [rbp-58h]
  _BYTE v10[16]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v11; // [rsp+40h] [rbp-38h]
  _BYTE v12[16]; // [rsp+58h] [rbp-20h] BYREF

  v2 = 0;
  if ( *(&hInstance + 1) )
  {
    CPortClient::CPortClient((CPortClient *)v10, a2);
    if ( (Microsoft_Windows_Dwm_DwmEnableBits & 1) != 0 )
      McGenEventWrite_EtwEventWriteTransfer(v3, (unsigned int)&EstablishKernelRedirection, v4, 1, (__int64)v12);
    v11 = (__int64)*(&hInstance + 1);
    v5 = CPortClient::SendSimpleAsyncRequest((CPortClient *)v10, 0x40000025u);
    v2 = v5;
    if ( v5 < 0 )
    {
      v9 = 356;
    }
    else
    {
      SetLastError(0);
      if ( !(unsigned int)DwmKernelStartup() )
      {
        LastError = GetLastError();
        v2 = LastError;
        if ( LastError > 0 )
          v2 = (unsigned __int16)LastError | 0x80070000;
        v9 = 358;
        if ( (v2 & 0x80000000) == 0 )
          v2 = -2003304445;
        v7 = v2;
        goto LABEL_11;
      }
      v5 = CPortClient::SendSimpleAsyncRequest((CPortClient *)v10, 0x40000026u);
      v2 = v5;
      if ( v5 >= 0 )
      {
LABEL_7:
        CPortClient::~CPortClient((CPortClient *)v10);
        return v2;
      }
      v9 = 360;
    }
    v7 = v5;
LABEL_11:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_140012150, 2u, v7, v9, 0LL);
    goto LABEL_7;
  }
  return v2;
}
