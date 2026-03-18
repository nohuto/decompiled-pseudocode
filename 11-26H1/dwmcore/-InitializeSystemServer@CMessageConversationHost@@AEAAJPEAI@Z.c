/*
 * XREFs of ?InitializeSystemServer@CMessageConversationHost@@AEAAJPEAI@Z @ 0x1801DE254
 * Callers:
 *     ?Initialize@CMessageConversationHost@@IEAAJXZ @ 0x1801DE18C (-Initialize@CMessageConversationHost@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x1801D5518 (--0last_error_context@wil@@QEAA@XZ.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x1801D741C (--1last_error_context@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMessageConversationHost::InitializeSystemServer(CMessageConversationHost *this, unsigned int *a2)
{
  HLOCAL v4; // rbx
  signed int LastError; // eax
  signed int v6; // ebx
  int v7; // r9d
  int v8; // eax
  __int64 *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned int v13; // [rsp+20h] [rbp-50h]
  __int64 v14; // [rsp+60h] [rbp-10h] BYREF
  int v15; // [rsp+68h] [rbp-8h]
  __int64 v16; // [rsp+A0h] [rbp+30h] BYREF
  HLOCAL hMem; // [rsp+A8h] [rbp+38h] BYREF

  hMem = 0LL;
  v16 = 0LL;
  SetLastError(0);
  v4 = hMem;
  if ( hMem )
  {
    wil::last_error_context::last_error_context((wil::last_error_context *)&v14);
    LocalFree(v4);
    wil::last_error_context::~last_error_context((wil::last_error_context *)&v14);
  }
  if ( ConvertStringSecurityDescriptorToSecurityDescriptorW(
         L"D:(A;;0x01;;;WD)(A;;0x01;;;AC)(A;;0x01;;;S-1-15-3-1024-1502825166-1963708345-2616377461-2562897074-4192028372-3"
          "968301570-1997628692-1435953622)",
         1u,
         &hMem,
         0LL) )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, HLOCAL, __int64 *))(**((_QWORD **)this + 2) + 64LL))(
           *((_QWORD *)this + 2),
           hMem,
           &v16);
    v6 = v8;
    if ( v8 < 0 )
    {
      v13 = 131;
    }
    else
    {
      v9 = (__int64 *)*((_QWORD *)this + 2);
      v10 = *v9;
      v15 = 1;
      v14 = 0LL;
      v8 = (*(__int64 (__fastcall **)(__int64 *, const wchar_t *, __int64, __int64 *, int, int, int, CMessageConversationHost *, unsigned int *, char *))(v10 + 304))(
             v9,
             L"System\\CompositionEngine",
             v16,
             &v14,
             1,
             1,
             1,
             this,
             a2,
             (char *)this + 24);
      v6 = v8;
      if ( v8 >= 0 )
        goto LABEL_15;
      v13 = 142;
    }
    v7 = v8;
  }
  else
  {
    LastError = GetLastError();
    v6 = LastError;
    if ( LastError > 0 )
      v6 = (unsigned __int16)LastError | 0x80070000;
    v13 = 127;
    if ( v6 >= 0 )
      v6 = -2003304445;
    v7 = v6;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, v13, 0LL);
LABEL_15:
  v11 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  if ( hMem )
    LocalFree(hMem);
  return (unsigned int)v6;
}
