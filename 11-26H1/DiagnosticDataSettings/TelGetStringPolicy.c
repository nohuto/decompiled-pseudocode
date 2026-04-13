/*
 * XREFs of TelGetStringPolicy @ 0x1800042C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800033BC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800039EC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180006010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TelGetStringPolicy(__int64 a1, _WORD *a2, __int64 a3)
{
  __int64 v3; // r15
  _WORD *pvData; // rdi
  FARPROC ProcAddress; // r14
  __int64 (*v7)(void); // r12
  HMODULE Library; // rax
  HMODULE v9; // rsi
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // r9
  __int16 v15; // ax
  _WORD *v16; // rax
  LSTATUS ValueW; // eax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v21; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  DWORD pcbData; // [rsp+90h] [rbp+40h] BYREF
  __int64 v24; // [rsp+A8h] [rbp+58h] BYREF

  v3 = (unsigned int)a3;
  pvData = a2;
  if ( !a1 || !a2 )
  {
    v12 = -2147024809;
    v19 = 655LL;
    goto LABEL_34;
  }
  ProcAddress = 0LL;
  v7 = 0LL;
  Library = LoadLibraryExW(L"policymanager.dll", 0LL, 0x800u);
  v9 = Library;
  if ( Library )
  {
    ProcAddress = GetProcAddress(Library, "PolicyManager_GetPolicy");
    v7 = GetProcAddress(v9, "PolicyManager_FreeGetPolicyData");
  }
  v24 = 0LL;
  v21 = 0LL;
  if ( ProcAddress && v7 )
  {
    v21 = 0x200000001LL;
    v10 = ((__int64 (__fastcall *)(const wchar_t *, __int64, __int64 *, __int64 *))ProcAddress)(
            L"System",
            a1,
            &v21,
            &v24);
    v11 = v24;
    v12 = v10;
    if ( v10 >= 0 )
    {
      if ( v24 && *(_DWORD *)(v24 + 8) == 2 )
      {
        a3 = 2147483646LL;
        v13 = v3;
        if ( (unsigned int)(v3 - 1) > 0x7FFFFFFE )
        {
          v12 = -2147024809;
          if ( (_DWORD)v3 )
            *pvData = 0;
        }
        else
        {
          v14 = *(_QWORD *)(v24 + 16) - (_QWORD)pvData;
          do
          {
            if ( !a3 )
              break;
            v15 = *(_WORD *)((char *)pvData + v14);
            if ( !v15 )
              break;
            *pvData = v15;
            --a3;
            ++pvData;
            --v13;
          }
          while ( v13 );
          v16 = pvData - 1;
          if ( v13 )
            v16 = pvData;
          v12 = v13 == 0 ? 0x8007007A : 0;
          *v16 = 0;
        }
      }
      else
      {
        v12 = -2147024883;
      }
    }
  }
  else
  {
    if ( (unsigned int)_o__wcsicmp(a1, L"ConfigureMicrosoft365UploadEndpoint") )
    {
      v12 = -2147024809;
    }
    else
    {
      pcbData = 2 * v3;
      ValueW = RegGetValueW(
                 HKEY_LOCAL_MACHINE,
                 L"Software\\Policies\\Microsoft\\Windows\\DataCollection",
                 L"ConfigureMicrosoft365UploadEndpoint",
                 2u,
                 0LL,
                 pvData,
                 &pcbData);
      v12 = ValueW;
      if ( ValueW > 0 )
        v12 = (unsigned __int16)ValueW | 0x80070000;
    }
    v11 = v24;
  }
  if ( v11 )
  {
    v18 = v7();
    if ( v18 < 0 )
      wil::details::in1diag3::_Log_Hr(retaddr, (void *)0x2DA, a3, (const char *)(unsigned int)v18);
  }
  if ( v9 )
    FreeLibrary(v9);
  if ( (v12 & 0x80000000) != 0 )
  {
    v19 = 739LL;
LABEL_34:
    wil::details::in1diag3::Return_Hr(retaddr, (void *)v19, a3, (const char *)v12);
  }
  return v12;
}
