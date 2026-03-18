/*
 * XREFs of ?_IncrementOrDecrementUniqueness@GdiHandleManager@Cxx@@AEAAXPEAVOBJECT@@_N@Z @ 0x140057EA8
 * Callers:
 *     ?DecrementUniqueness@GdiHandleManager@Cxx@@UEAAXPEAVOBJECT@@@Z @ 0x140057A70 (-DecrementUniqueness@GdiHandleManager@Cxx@@UEAAXPEAVOBJECT@@@Z.c)
 * Callees:
 *     ?GetEtwGdiHandleType@@YA?AW4EtwGdiHandleType@@E@Z @ 0x1400580D0 (-GetEtwGdiHandleType@@YA-AW4EtwGdiHandleType@@E@Z.c)
 *     McTemplateK0ppqqq_EtwWriteTransfer @ 0x14005826C (McTemplateK0ppqqq_EtwWriteTransfer.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall Cxx::GdiHandleManager::_IncrementOrDecrementUniqueness(
        Cxx::GdiHandleManager *this,
        struct OBJECT *a2,
        char a3)
{
  __int64 v3; // rsi
  unsigned int v4; // ebx
  unsigned int v6; // r9d
  unsigned int v9; // ebx
  __int64 v10; // rdx
  unsigned int v11; // ecx
  unsigned int v12; // r8d
  __int64 v13; // r11
  __int64 v14; // rdi
  __int64 v15; // r11
  unsigned int v16; // edi
  __int64 v17; // rax
  __int64 v18; // rcx
  char v19; // cl
  unsigned __int8 v20; // dl
  unsigned __int8 v21; // cl
  int v22; // edx
  unsigned __int64 v23; // rdi
  unsigned int v24; // ecx
  unsigned int v25; // ebx
  __int64 v26; // rcx
  __int64 v27; // rcx
  char v28; // bp
  __int64 CurrentProcess; // rax
  int v30; // edx
  int v31; // ecx
  int v32; // r8d
  unsigned int v33; // ebx
  char EtwGdiHandleType; // di
  int v35; // edx
  int v36; // ecx
  int v37; // r8d
  char ProcessSessionId; // [rsp+30h] [rbp-28h]
  char CurrentWin32kSessionId; // [rsp+30h] [rbp-28h]

  v3 = *(_QWORD *)a2;
  v4 = *(_QWORD *)a2;
  v6 = (unsigned __int16)v4;
  v9 = (unsigned __int16)v4 | (v4 >> 8) & 0xFF0000;
  if ( v9 >= 0x10000 )
  {
    if ( *((_DWORD *)this + 4) <= 0x10000u )
    {
      v9 = v6;
    }
    else
    {
      v10 = *((_QWORD *)this + 1);
      v11 = *(_DWORD *)(v10 + 8);
      if ( v6 >= v11 + ((*(unsigned __int16 *)(v10 + 12) + 0xFFFF) << 16) )
      {
        v14 = 0LL;
      }
      else
      {
        if ( v6 >= v11 )
        {
          v13 = ((v6 - v11) >> 16) + 1;
          v12 = v6 + -65536 * ((v6 - v11) >> 16) - v11;
        }
        else
        {
          v12 = v6;
          v13 = 0LL;
        }
        v14 = 0LL;
        v15 = *(_QWORD *)(*(_QWORD *)v10 + 8 * v13);
        if ( v12 < *(_DWORD *)(v15 + 16) )
          v14 = *(_QWORD *)(v15 + 8) + 24LL * v12;
      }
      if ( *(unsigned __int8 *)(v14 + 13) == HIWORD(v9) )
        v9 = v6;
    }
  }
  v16 = *((_DWORD *)this + 4);
  v17 = (*(__int64 (__fastcall **)(Cxx::GdiHandleManager *, struct OBJECT *))(*(_QWORD *)this + 8LL))(this, a2);
  if ( v9 >= 0x10000 || v16 > 0x10000 )
  {
    LOBYTE(v18) = *(_BYTE *)(v17 + 14);
    v33 = *(_DWORD *)(v17 + 8) & 0xFFFFFFFE;
    EtwGdiHandleType = GetEtwGdiHandleType(v18);
    if ( (Microsoft_Windows_Win32kEnableBits & 0x20000000000LL) != 0 )
    {
      CurrentWin32kSessionId = W32GetCurrentWin32kSessionId();
      McTemplateK0ppqqq_EtwWriteTransfer(v36, v35, v37, v3, v3, EtwGdiHandleType, CurrentWin32kSessionId, v33);
    }
  }
  else
  {
    v19 = *(_BYTE *)(v17 + 13);
    v20 = v19 - 1;
    v21 = v19 + 1;
    if ( !a3 )
      v21 = v20;
    *(_BYTE *)(v17 + 13) = v21;
    v22 = (*(unsigned __int8 *)(v17 + 12) | (v21 << 8)) << 16;
    v23 = (unsigned __int16)v9 | (unsigned __int64)v22;
    *(_QWORD *)a2 = v23;
    v24 = (unsigned __int16)v9 | v22;
    v25 = *(_DWORD *)(v17 + 8) & 0xFFFFFFFE;
    v26 = (unsigned __int16)v23 | (v24 >> 8) & 0xFF0000;
    *(_DWORD *)v17 = v26;
    LOBYTE(v26) = *(_BYTE *)(v17 + 14);
    v28 = GetEtwGdiHandleType(v26);
    if ( (Microsoft_Windows_Win32kEnableBits & 0x20000000000LL) != 0 )
    {
      CurrentProcess = PsGetCurrentProcess(v27);
      ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess);
      McTemplateK0ppqqq_EtwWriteTransfer(v31, v30, v32, v3, v23, v28, ProcessSessionId, v25);
    }
  }
}
