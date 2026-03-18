/*
 * XREFs of ?SignalGpuFence@CFlipExBuffer@@UEAAJ_K_N@Z @ 0x14003B670
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000E53C (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402C6C90 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     DxgkImmediateSignalSynchronizationObjectByReference @ 0x14036D744 (DxgkImmediateSignalSynchronizationObjectByReference.c)
 */

__int64 __fastcall CFlipExBuffer::SignalGpuFence(CFlipExBuffer *this, __int64 a2, char a3)
{
  int v3; // edi
  __int64 *v6; // r14
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r9
  __int64 v13; // rcx
  int v14; // edx
  int v15; // r8d
  __int64 v16; // rcx
  int v17; // ebx
  __int64 v18; // [rsp+88h] [rbp+10h] BYREF

  v3 = 0;
  if ( a2 )
  {
    if ( a3 )
      goto LABEL_11;
    v6 = 0LL;
    v3 = -1073741823;
    if ( !*(_QWORD *)&DXGGLOBAL::m_pGlobal )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2650;
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            2650,
            v14,
            v15,
            0LL,
            2,
            -1,
            (__int64)L"m_pGlobal != NULL",
            2650LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    SessionData = DXGGLOBAL::GetSessionData(*(DXGGLOBAL **)&DXGGLOBAL::m_pGlobal);
    if ( SessionData )
    {
      v8 = (__int64 *)*((_QWORD *)SessionData + 2344);
      if ( v8 )
      {
        (*(void (__fastcall **)(_QWORD))*v8)(*((_QWORD *)SessionData + 2344));
        v6 = v8;
        if ( !*((_DWORD *)this + 163) )
          goto LABEL_7;
        v16 = *((_QWORD *)this + 86);
        *((_BYTE *)this + 647) = 1;
        v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 24LL))(v16);
        if ( v17 == (*(unsigned int (__fastcall **)(__int64 *))(*v6 + 128))(v6) )
          v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(**((_QWORD **)this + 86) + 48LL))(
                 *((_QWORD *)this + 86),
                 *((unsigned int *)this + 167),
                 *((_QWORD *)this + 45),
                 a2);
        --*((_DWORD *)this + 163);
        if ( v3 >= 0 )
        {
          *((_BYTE *)this + 647) = 0;
        }
        else
        {
LABEL_7:
          v9 = *v6;
          v10 = *((_QWORD *)this + 47);
          v18 = 0LL;
          v3 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64 *))(v9 + 120))(v6, v10, &v18);
          if ( v3 >= 0 )
          {
            LOBYTE(v11) = *((_DWORD *)this + 167) == 0;
            v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v18 + 16LL))(
                   v18,
                   *((_QWORD *)this + 45),
                   a2,
                   v11);
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
          }
        }
      }
    }
    (*(void (__fastcall **)(__int64 *))(*v6 + 8))(v6);
    if ( v3 < 0 )
    {
LABEL_11:
      v13 = *((_QWORD *)this + 45);
      v3 = -1073741637;
      if ( v13 )
        return (unsigned int)DxgkImmediateSignalSynchronizationObjectByReference(v13, a2);
    }
  }
  return (unsigned int)v3;
}
