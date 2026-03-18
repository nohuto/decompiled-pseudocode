/*
 * XREFs of ?IncrementUniqueness@GdiHandleManager@Cxx@@UEAAXPEAVOBJECT@@@Z @ 0x140057CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetEtwGdiHandleType@@YA?AW4EtwGdiHandleType@@E@Z @ 0x1400580D0 (-GetEtwGdiHandleType@@YA-AW4EtwGdiHandleType@@E@Z.c)
 *     McTemplateK0ppqqq_EtwWriteTransfer @ 0x14005826C (McTemplateK0ppqqq_EtwWriteTransfer.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall Cxx::GdiHandleManager::IncrementUniqueness(Cxx::GdiHandleManager *this, struct OBJECT *a2)
{
  __int64 v2; // rsi
  unsigned int v3; // ebx
  unsigned int v5; // r9d
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8
  unsigned int v10; // ecx
  unsigned int v11; // r10d
  unsigned int v12; // edi
  __int64 v13; // rdi
  unsigned int v14; // edi
  __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // edx
  unsigned __int64 v18; // rdi
  unsigned int v19; // ecx
  unsigned int v20; // ebx
  __int64 v21; // rcx
  __int64 v22; // rcx
  char v23; // bp
  __int64 CurrentProcess; // rax
  int v25; // edx
  int v26; // ecx
  int v27; // r8d
  unsigned int v28; // ebx
  char EtwGdiHandleType; // di
  int v30; // edx
  int v31; // ecx
  int v32; // r8d
  char ProcessSessionId; // [rsp+30h] [rbp-18h]
  char CurrentWin32kSessionId; // [rsp+30h] [rbp-18h]

  v2 = *(_QWORD *)a2;
  v3 = *(_QWORD *)a2;
  v5 = (unsigned __int16)v3;
  v7 = (unsigned __int16)v3 | (v3 >> 8) & 0xFF0000;
  if ( v7 >= 0x10000 )
  {
    if ( *((_DWORD *)this + 4) <= 0x10000u )
    {
      v7 = v5;
    }
    else
    {
      v8 = *((_QWORD *)this + 1);
      v9 = 0LL;
      v10 = *(_DWORD *)(v8 + 8);
      if ( v5 < v10 + ((*(unsigned __int16 *)(v8 + 12) + 0xFFFF) << 16) )
      {
        if ( v5 >= v10 )
        {
          v12 = ((v5 - v10) >> 16) + 1;
          v11 = v5 + -65536 * ((v5 - v10) >> 16) - v10;
        }
        else
        {
          v11 = v5;
          v12 = 0;
        }
        v13 = *(_QWORD *)(*(_QWORD *)v8 + 8LL * v12);
        if ( v11 < *(_DWORD *)(v13 + 16) )
          v9 = *(_QWORD *)(v13 + 8) + 24LL * v11;
      }
      if ( *(unsigned __int8 *)(v9 + 13) == HIWORD(v7) )
        v7 = v5;
    }
  }
  v14 = *((_DWORD *)this + 4);
  v15 = (*(__int64 (__fastcall **)(Cxx::GdiHandleManager *, struct OBJECT *))(*(_QWORD *)this + 8LL))(this, a2);
  if ( v7 >= 0x10000 || v14 > 0x10000 )
  {
    LOBYTE(v16) = *(_BYTE *)(v15 + 14);
    v28 = *(_DWORD *)(v15 + 8) & 0xFFFFFFFE;
    EtwGdiHandleType = GetEtwGdiHandleType(v16);
    if ( (Microsoft_Windows_Win32kEnableBits & 0x20000000000LL) != 0 )
    {
      CurrentWin32kSessionId = W32GetCurrentWin32kSessionId();
      McTemplateK0ppqqq_EtwWriteTransfer(v31, v30, v32, v2, v2, EtwGdiHandleType, CurrentWin32kSessionId, v28);
    }
  }
  else
  {
    v17 = (*(unsigned __int8 *)(v15 + 12) | ((unsigned __int8)++*(_BYTE *)(v15 + 13) << 8)) << 16;
    v18 = (unsigned __int16)v7 | (unsigned __int64)v17;
    *(_QWORD *)a2 = v18;
    v19 = (unsigned __int16)v7 | v17;
    v20 = *(_DWORD *)(v15 + 8) & 0xFFFFFFFE;
    v21 = (unsigned __int16)v18 | (v19 >> 8) & 0xFF0000;
    *(_DWORD *)v15 = v21;
    LOBYTE(v21) = *(_BYTE *)(v15 + 14);
    v23 = GetEtwGdiHandleType(v21);
    if ( (Microsoft_Windows_Win32kEnableBits & 0x20000000000LL) != 0 )
    {
      CurrentProcess = PsGetCurrentProcess(v22);
      ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess);
      McTemplateK0ppqqq_EtwWriteTransfer(v26, v25, v27, v2, v18, v23, ProcessSessionId, v20);
    }
  }
}
